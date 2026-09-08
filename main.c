#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
	int soma, resto,numVerif1,numVerif2;
	printf("Digite seu CPF apenas com numeros: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
	soma=n1*10+n2*9+n3*8+n4*7+n5*6+n6*5+n7*4+n8*3+n9*2;
	resto=soma%11;
	if(resto<2){
		numVerif1=0;
	}else{
		numVerif1=11-resto;	
	}
	soma=n1*11+n2*10+n3*9+n4*8+n5*7+n6*6+n7*5+n8*4+n9*3+numVerif1*2;
	resto=soma%11;
	if(resto<2){
		numVerif2=0;
	}else{
		numVerif2=11-resto;	
	}
	
//--Devolve se o CPF é valido--------------------------------------------------------------------------------------	
	if(numVerif1==n10 && numVerif2==n11){
		printf("CPF valido");
	}else{
 	    printf("CPF invalido");	
	}
	
	return 0;
}*/

int main(int argc, char *argv[]){

int num1,num2,num3,num4,num5,num6,num7,num8,num9,dgv1,dgv2;
scanf("%d %d %d.%d %d %d.%d %d %d-%d %d"
,&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&dgv1,&dgv2);
printf("O CPF que vc inseriu: %d%d%d.%d%d%d.%d%d%d-%d%d"
,num1,num2,num3,num4,num5,num6,num7,num8,num9,dgv1,dgv2);
int mnum1,mnum2,mnum3,mnum4,mnum5,mnum6,mnum7,mnum8,mnum9,mdv,resto1,resto2,soma;
mnum1=num1*10;
mnum2=num2*9;
mnum3=num3*8;
mnum4=num4*7;
mnum5=num5*6;
mnum6=num6*5;
mnum7=num7*4;
mnum8=num8*3;
mnum9=num9*2;
soma=(mnum1+mnum2+mnum3+mnum4+mnum5+mnum6+mnum7+mnum8+mnum9)*10;
resto1=soma%11;
if (resto1 == 10) resto1 = 0;
//-----------------------------------------------------------

mnum1=num1*11;
mnum2=num2*10;
mnum3=num3*9;
mnum4=num4*8;
mnum5=num5*7;
mnum6=num6*6;
mnum7=num7*5;
mnum8=num8*4;
mnum9=num9*3;
mdv=dgv1*2;
soma=(mnum1+mnum2+mnum3+mnum4+mnum5+mnum6+mnum7+mnum8+mnum9+mdv)*10;
resto2=soma%11;


if(dgv1==resto1&&dgv2==resto2){
	printf("CPF valido");
}else{
	printf("CPF invalido");
}

return 0;
};

