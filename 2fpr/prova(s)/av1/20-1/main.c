#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct aluno {
	int codigo;
	float N_mat;
	float N_lin;
	float N_hum;
	float N_nat;
	float N_red;
	float Media_P;
} Taluno;

//Prototipo das funcoes de entrada
void ler_peso_nota(int peso_area_conhecimento[]);
void escrever_titulo_arquivo(FILE *fp,int n);
void escrever_conteudo_arquivo(FILE *fp, int codigo_aluno, float notas[]);
//Prototipo das funcoes que respondem as questoes da prova
void letra_A(int peso_area_conhecimento[]);
void letra_B(Taluno alunos[], int quantidade_de_matricula, int peso[]);
void letra_C(Taluno alunos[], int quantidade_de_matricula,int peso[]);
void letra_D(Taluno alunos[],int quantidade_de_matricula,char titulo[],char nota0ri[],char notaPe[],char statu[],int peso[]);
void linha();

int main()
{
	 int peso_de_notas[TAM];
	 printf("Entre com os pesos das notas:\n");
	 ler_peso_nota(peso_de_notas);

	 int n,codigo_aluno;
	 float notas[TAM];
	  
	 printf("Entre com a quantidade de aluno(s) na turma: ");
	 scanf("%d",&n);
	  
	 int i;
	 FILE *fp;
	 fp = fopen("alunos.dat","w");
	 if(fp==NULL){
	 	printf("ERRO\nNao foi possivel criar o arquivo!!!");
	 }
	 else {
	 	escrever_titulo_arquivo(fp,n);
	 	for(i=1; i<=n; i++) {
			printf("codigo do aluno: ");
			scanf("%d",&codigo_aluno);
		//[loop]receber para cada aluno uma nota de: Mat, Ling, Hum, Natu, Red 
			int j=0;
			while(j<TAM) {
				printf("nota: ");
				scanf("%f",&notas[j]);
				j++;
			}
			escrever_conteudo_arquivo(fp, codigo_aluno, notas);
		}
	 }
	//A partir da chamada da função A, todas as questoes da prova são resolvidas
	 letra_A(peso_de_notas);
	return 0;
}

void ler_peso_nota(int peso_area_conhecimento[]) {
	int i;
	for(i=0; i<TAM; i++) {
		scanf("%d",&peso_area_conhecimento[i]);
	}
}

void escrever_titulo_arquivo(FILE *fp,int n) {	
	fp = fopen("alunos.dat","r+");
	if(fp!=NULL) {
		fprintf(fp, "%d\n",n);
	}
	else {
		printf("ERRO\nTeve algum problema com o arquivo");
		exit(0);
	}
	fclose(fp);
}

void escrever_conteudo_arquivo(FILE *fp, int codigo_aluno, float notas[]) {
	fp = fopen("alunos.dat","a");
	if(fp!=NULL) {
		fprintf(fp, "%d ",codigo_aluno);
		int i;
		for(i=0;i<TAM;i++) {
			fprintf(fp,"%.1f ",notas[i]);
		}
		fprintf(fp,"\n");
	}
	else {
	 	printf("ERRO\nTeve algum problema com o arquivo");
	 	exit(0);
	}
	fclose(fp);
}
	/*	Enunciado letra A:
		Leia os dados dos alunos do arquivo alunos.dat
		armazene em estruturas
		que possuam os seguintes campos: codigo, Nmat, Nlin, Nhum, Nnat, Nred e Media_P
	*/
void letra_A(int peso_area_conhecimento[]) {
	FILE *fp;
	fp = fopen("alunos.dat","r");
	if(fp!=NULL) {		
		int i,quantidade_de_matricula;
		fscanf(fp,"%d",&quantidade_de_matricula);
		Taluno alunos[quantidade_de_matricula];
	//lendo o arquivo e armazenando na estrutura	
		for(i=0; i<quantidade_de_matricula; i++)
		{
			fscanf(fp,"%d",&alunos[i].codigo);
			fscanf(fp,"%f",&alunos[i].N_mat);
			fscanf(fp,"%f",&alunos[i].N_lin);
			fscanf(fp,"%f",&alunos[i].N_hum);
			fscanf(fp,"%f",&alunos[i].N_nat);
			fscanf(fp,"%f",&alunos[i].N_red);
		}
		
	//Chamada da função que responde a letra B:
		letra_B(alunos,quantidade_de_matricula,peso_area_conhecimento);
		
		fclose(fp);
	}
	else {
		printf("ERRO\nNao foi possivel ler o arquivo!!!\n");
	}
}

	/*	Enunciado letra B:
		Calcule a média ponderada para cada um dos alunos utilizando os pesos
		{Pmat, Plin, Phum, Pnat, Pred} e armazene no campo Media_P.
	*/
 
void letra_B(Taluno alunos[], int quantidade_de_matricula, int peso[]) {
	 int i;
	 int somatorio_peso=0;
	 	 
	 for(i=0; i<TAM; i++) {
	 	somatorio_peso+= peso[i];
	 }

	 for(i=0; i<quantidade_de_matricula; i++) {
	 	alunos[i].Media_P = (alunos[i].N_mat*peso[0]+alunos[i].N_lin*peso[1]+alunos[i].N_hum*peso[2]+alunos[i].N_nat*peso[3]+alunos[i].N_red*peso[4])/somatorio_peso;
	 }
	 //Chamada da função que responde a letra C:
	 letra_C(alunos,quantidade_de_matricula,peso);
}

	/*	Enunciado letra C:
		Apresente no monitor um relatório no seguinte modelo [no pdf]
	*/
void letra_C(Taluno alunos[], int quantidade_de_matricula,int peso[]) {
	char titulo_tabela[50]= {"\t\t\tNotas Originais\t\t|\t\tNotas com Pesos\t\t\t|\n"};
	char notas_originais[50] = {"codigo\tMAT\tLIN\tHUM\tNAT\tRED\t|"};
	char notas_com_peso[50] = {" \tMAT\tLIN\tHUM\tNAT\tRED\t|"};
	char status[20] = {"\tMedia_P\t Situcao"};
	
	puts(titulo_tabela);
	linha();
	printf("%s%s%s\n",notas_originais,notas_com_peso,status);
	linha();
	int i;
	//exibindo a tabela
	for(i=0;i<quantidade_de_matricula;i++) {
		printf("%.4d\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t\t",alunos[i].codigo,alunos[i].N_mat,alunos[i].N_lin,alunos[i].N_hum,alunos[i].N_nat,alunos[i].N_red);
		printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t\t",alunos[i].N_mat*peso[0],alunos[i].N_lin*peso[1],alunos[i].N_hum*peso[2],alunos[i].N_nat*peso[3],alunos[i].N_red*peso[4]);
		printf(" %.1f\t",alunos[i].Media_P);
		if(alunos[i].Media_P>=6.0){
			printf("AP\n");
		}
		else{
			printf("RP\n");
		}
	}
	//Chamada da função que responde a letra D - questao bonus
	letra_D(alunos,quantidade_de_matricula,titulo_tabela,notas_originais,notas_com_peso,status,peso);
}

	/*	Enunciado letra d:
		Armazene o relatório do item anterior em um arquivo report.dat.
		A primeira linha deve conter apenas a quantidade de alunos armazenadas no arquivo
		e cada linha a seguir deve conter os dados apresentados no relatório
	*/
void letra_D(Taluno alunos[],int quantidade_de_matricula,char titulo[],char nota0ri[],char notaPe[],char statu[],int peso[]){
	FILE *arq;
	arq = fopen("report.dat","w");
	if(arq==NULL){
		printf("ERRO\nNao foi possivel abrir o arquivo\n");
	}
	else{
		fprintf(arq,"%d\n",quantidade_de_matricula);
		fprintf(arq,"%s\n",titulo);
		int i,j;
		for(i=0; i<65;i++){
			fprintf(arq,"==");
		}
		fprintf(arq,"\n");
		fprintf(arq,"%s",nota0ri);
		fprintf(arq,"%s",notaPe);
		fprintf(arq,"%s\n",statu);
		for(i=0; i<65;i++){
			fprintf(arq,"==");
		}
		fprintf(arq,"\n");
		for(i=0;i<quantidade_de_matricula;i++) {
			fprintf(arq,"%.4d\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t\t",alunos[i].codigo,alunos[i].N_mat,alunos[i].N_lin,alunos[i].N_hum,alunos[i].N_nat,alunos[i].N_red);
			fprintf(arq,"%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t\t",alunos[i].N_mat*peso[0],alunos[i].N_lin*peso[1],alunos[i].N_hum*peso[2],alunos[i].N_nat*peso[3],alunos[i].N_red*peso[4]);
			fprintf(arq," %.1f\t",alunos[i].Media_P);
			if(alunos[i].Media_P>=6.0){
				fprintf(arq,"AP\n");
			}
			else{
				fprintf(arq,"RP\n");
			}
	}

	}
}

void linha(){
	int i;
	for(i=0; i<65;i++){
		printf("==");
	}
	printf("\n");
}
