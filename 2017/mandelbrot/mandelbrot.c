 #include <stdio.h>
 #include <math.h>
 int main()
 {
    int iX,iY;
    const int iXmax = 800; 
    const int iYmax = 800;

    double Cx,Cy;
    const double CxMin=-2.5;
    const double CxMax=1.5;
    const double CyMin=-2.0;
    const double CyMax=2.0;
    
    double PixelWidth=(CxMax-CxMin)/iXmax;
    double PixelHeight=(CyMax-CyMin)/iYmax;
    
    const int MaxColorComponentValue=255; 
    FILE * fp;
    char *filename="mandelbrot.ppm";
    char *comment="# ";
    static unsigned char color[3];
    double Zx, Zy;
    double Zx2, Zy2;

    int Iteration;
    const int IterationMax=200;
    const double EscapeRadius=2;
    double ER2=EscapeRadius*EscapeRadius;
    fp= fopen(filename,"wb"); 
    fprintf(fp,"P6\n %s\n %d\n %d\n %d\n",comment,iXmax,iYmax,MaxColorComponentValue);
    for(iY=0;iY<iYmax;iY++) {
        Cy=CyMin + iY*PixelHeight;
        if (fabs(Cy)< PixelHeight/2) Cy=0.0;
        for(iX=0;iX<iXmax;iX++) {         
			Cx=CxMin + iX*PixelWidth;
            Zx=0.0;
            Zy=0.0;
            Zx2=Zx*Zx;
            Zy2=Zy*Zy;

            for (Iteration=0;Iteration<IterationMax && ((Zx2+Zy2)<ER2);Iteration++) {
                Zy=2*Zx*Zy + Cy;
                Zx=Zx2-Zy2 +Cx;
                Zx2=Zx*Zx;
                Zy2=Zy*Zy;
            }
                
            if (Iteration==IterationMax) { 
               color[0]=0;
               color[1]=0;
               color[2]=0;                           
            } else { 
				color[0]=255;
                color[1]=255;  
                color[2]=255;
            }

            fwrite(color,1,3,fp);
	    }
    }
    fclose(fp);
    return 0;
}
