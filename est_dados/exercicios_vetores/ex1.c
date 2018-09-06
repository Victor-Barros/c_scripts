#include <stdio.h> 

#define Ncursos 3

void ler_vagas();
void ler_candidatos(int);
void candidatos_vaga(int);
float retorna_c_v(int);
int retorna_maior_concorrencia();

int vagas[Ncursos], candidatos[Ncursos]; 
float candidatos_por_vaga[Ncursos];
char buffer[256];

int main() {
	int maior_concorrencia_index;
	ler_vagas();
	printf("C/V do indice 0: %f\n", retorna_c_v(0));
	maior_concorrencia_index = retorna_maior_concorrencia();
	printf("Curso com maior C/V: %f[%d]\n",retorna_c_v(maior_concorrencia_index), maior_concorrencia_index);

	return 0;
}

void ler_vagas() {
	for (int i=0;i<Ncursos;i++) {
		printf("Digite a quantidade de vagas do curso [%d]:\n", i);
		if (fgets(buffer, 255, stdin)) sscanf(buffer, "%d", vagas+i);
		ler_candidatos(i);
		candidatos_vaga(i);
	}
}

void ler_candidatos(int i) {
	printf("Digite o numero de candidatos para este curso [%d]:\n", i);
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%d", candidatos+i);
}

void candidatos_vaga(int i) {
	candidatos_por_vaga[i] = (float)candidatos[i]/(float)vagas[i];
}

float retorna_c_v(int i) {
	return candidatos_por_vaga[i];
}

int retorna_maior_concorrencia() {
	int maxVal=candidatos_por_vaga[0], maxIndex=0;
	for (int i=0;i<Ncursos;i++) {
		if(candidatos_por_vaga[i] > maxVal) {
			maxIndex = i;
		}
	}

	return maxIndex;
	return -1;
}




