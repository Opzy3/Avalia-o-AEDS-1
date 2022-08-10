#include <stdio.h>
int main(void) {
  int num_opr,total_peças, total_peças_final = 0, soma_peça_homemA = 0,soma_peça_mulherA = 0, quant_homemA, quant_mulherA = 0, soma_peça_homemB = 0, soma_peça_homemC = 0, soma_peça_mulherB = 0, soma_peça_mulherC = 0, quant_homemB = 0, quant_homemC = 0,quant_mulherB = 0, quant_mulherC = 0; 

  float control_salario_M = 0, control_salario_F = 0, salario=1100, media_mulher_finalA = 0, media_mulher_finalB = 0, media_mulher_finalC = 0, folha_salarial = 0, media_homem_finalA= 0,media_homem_finalB= 0, media_homem_finalC= 0;
  
  char sexo, escolha;
  //inicio do código
  printf("Digite o número do Operário: \n");
  scanf(" %d", &num_opr);
  printf("Digite o número de peças fabricadas por mês:  \n");
  scanf(" %d",&total_peças);
  printf("Digite o sexo do operário, [M] ou [F]: \n"); 
  scanf(" %c",&sexo);
  while(num_opr !=0){
    if (total_peças >0 && total_peças <= 30 ){
      printf("O salario do operador cujo código é %d , é de R$%.2f\n", num_opr, salario);
      printf("===================================================\n");
      folha_salarial += salario; 
      total_peças_final += total_peças;}
      if(sexo == 'f' && total_peças >0 && total_peças <= 30){
        soma_peça_mulherA += total_peças;
        quant_mulherA += 1;}
      if (sexo == 'm' && total_peças >0 && total_peças <= 30) {
        soma_peça_homemA += total_peças;
        quant_homemA += 1;}
    if (total_peças >= 31 && total_peças <= 35){
      control_salario_M = total_peças - 30;
      control_salario_M = control_salario_M * 0.03;
      salario = salario + salario * control_salario_M;
      printf("O salario do operador cujo código é %d , é de %.f\n", num_opr, salario);
       printf("===================================================\n");
      folha_salarial += salario; 
      total_peças_final += total_peças;}
      if(sexo == 'f' && total_peças >= 31 && total_peças <= 35){
        soma_peça_mulherB += total_peças;
        quant_mulherB += 1;}
      if (sexo == 'm' && total_peças >= 31 && total_peças <= 35) {
        soma_peça_homemB += total_peças;
        quant_homemB += 1;}
    if (total_peças > 35){
      control_salario_M = total_peças - 30;
      control_salario_M = control_salario_M * 0.05;
      salario = salario + salario * control_salario_M;
      printf("O salario do operador cujo código é %d , é de %.f\n", num_opr, salario);
      printf("===================================================\n");
      folha_salarial += salario; 
      total_peças_final += total_peças;}
      if(sexo == 'f' && total_peças > 35){
        soma_peça_mulherC += total_peças;
        quant_mulherC += 1;}
      if (sexo == 'm' && total_peças > 35){
        soma_peça_homemC += total_peças;
        quant_homemC += 1;}
      
      printf("Digite o número do Operário: \n");
      scanf(" %d", &num_opr);
      if(num_opr !=0 ){
        printf("Digite o número de peças fabricadas por mês: \n");
        scanf(" %d", &total_peças);
        printf("Digite o sexo do operário, [M] ou [F]: \n");scanf(" %c",&sexo);}
  }
  
  //início do menu
  printf("=========================MENU=====================\n");
  printf("Selecione a opção desejada: \n");
  printf("[a] total da folha mensal de pagamento da fábrica \n");
  printf("[b] o número total de peças fabricadas por mês \n");
  printf("[c] a média de peças fabricadas pelos homens em cada classe \n");
  printf("[d] média de peças fabricadas pelas mulheres em cada classe \n");
  scanf(" %c", &escolha);
  while (escolha != 's'){
    if (escolha == 'a'){
      printf("total da folha mensal de pagamento da fábrica é R$ % .2f\n",folha_salarial);}
      
      
    if (escolha == 'b'){
      printf("o número total de peças fabricadas por mês é de: % d \n", total_peças_final);}
    
    
    if (escolha == 'c'){
      if (quant_homemA >= 1){
        media_homem_finalA = soma_peça_homemA / quant_homemA;printf("A média de peças produzidas por homens na classe A é de: % f \n",media_homem_finalA);}
      else{ 
        printf("A quantidade de homens na classe A, é 0 \n");}
      if (quant_homemB >= 1){
        media_homem_finalB = soma_peça_homemB / quant_homemB;printf("A média de peças produzidas por homens na classe B é de: % f \n", media_homem_finalB);}
      else{ 
        printf("A quantidade de homens na classe B, é 0 \n");}
      if (quant_homemC >= 1){
        media_homem_finalC = soma_peça_homemC / quant_homemC;
        printf("A média de peças produzidas por homens na classe C é de: % f \n", media_homem_finalC);} 
      else {
        printf("A quantidade de homens na classe C, é 0 \n");}
      }   
    if (escolha == 'd'){ 
      if (quant_mulherA >= 1){
        media_mulher_finalA = soma_peça_mulherA / quant_mulherA;
        printf("}A média de peças produzidas por mulheres na classe A é de: % f \n", media_mulher_finalA);}
      else {
        printf("A quantidade de mulheres na classe A, é 0 \n");} 
      if (quant_mulherB >= 1){
        media_mulher_finalB = soma_peça_mulherB / quant_mulherB;
        printf("A média de peças produzidas por mulheres na classe B é de: % f \n", media_mulher_finalB);}
      else { 
        printf("A quantidade de mulheres na classe B, é 0 \n");}
      if (quant_mulherC >= 1){
        media_mulher_finalC = soma_peça_mulherC / quant_mulherC;
        printf("A média de peças produzidas por mulheres na classe C é de: % f \n", media_mulher_finalC);}
      else{ 
        printf("A quantidade de mulheres na classe C, é 0 \n");}}
    printf("=========================MENU=====================\n");
    printf("Selecione a opção desejada: \n");
    printf("[a] total da folha mensal de pagamento da fábrica \n");
    printf("[b] o número total de peças fabricadas por mês \n");
    printf("[c] a média de peças fabricadas pelos homens em cada classe \n");
    printf("[d] média de peças fabricadas pelas mulheres em cada classe \n");
    scanf(" %c", &escolha);

  }
  printf("*************FIM DO PROGRAMA!*************");
return 0;
}   