#include<iostream>
#include<math.h>
using namespace std;

float taxacao(float investimento, float juros, int meses){
	float total;
	total=investimento*pow(1+juros,meses);
	return total;
}

int main(){
float capital,juros, total;
int NROmeses;

	cout<<"qual o capital investido? ";
	cin>>capital;
	
	cout<<"qual o valor do juros por mes?(%) ";
	cin>>juros;
	
	cout<<"qual a quantidade de meses? ";
	cin>>NROmeses;
	for ( int nm=1;nm<=NROmeses; nm++){
		
	total=taxacao(capital,juros/100, nm);
	cout<<endl<<"Valor total investido no mes "<<nm<<", R$"<<capital<<", valor montante R$"<<total;
	}
}