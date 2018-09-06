    #define _GNU_C_SOURCE
    #include <stdio.h>
    #include <math.h>
    #include <complex.h>
    #define D(z1,z2) cabs((z1)-(z2))
    #define MIN(a,b) ((a<b)?(a):(b))
    int main ()
    {
        char area[512][512][3];
        /* Roots of z^3-1 = 0 */
        complex double z,
            r1 = 1 + 0*I,
            r2 = -0.5 + sin(2*M_PI/3.0)*I,
            r3 = -0.5 - sin(2*M_PI/3.0)*I;
     
        /* Go from -1 to +1 along real and imag axes */
        for ( int im=-256; im<256; im++ )
            for ( int re=-256, iter; re<256; iter=0, re++ )
            {
                /* Translate the coordinates */
                z = (re/256.0) + (im/256.0)*I;
                /* Count number of Newton iterations to solve */
                while ( MIN(D(z,r1),MIN(D(z,r2),D(z,r3)))>1e-6 &&
                        iter++<32
                ) z = z - (z*z*z-1.0) / (z*z*3.0);
                /* Color-code the point by distance to roots */
                area[im+256][re+256][0] = iter * D(z,r1);
                area[im+256][re+256][1] = iter * D(z,r2);
                area[im+256][re+256][2] = iter * D(z,r3);
            }
        /* Write the map as a PPM image file */
        FILE *out = fopen ( "newton.ppm", "w" );
        fprintf ( out, "P6 512 512 32\n" );
        fwrite ( area, 3, 512*512, out );
        fclose ( out );
    }
