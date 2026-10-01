//NAME:Derick Murimi
//REG:CT100/G/30737/26
//DATE29/9/2026
#include<stdio.h>
float calculatebill(float units_consumed);
int main(){
float units_consumed, total_bill;
	printf("Enter number of unitsconsumed: \t");
	scanf("%f" ,&units_consumed);
	//function call
total_bill = calculatebill(units_consumed);
	printf("\n");
	printf("Electric bill \n");
	printf("============== \n");
	printf("units_consumed %f\n", units_consumed);
	printf("total_bill %f\n", total_bill);
	printf("=============\n");
	return 0;
	
}
//function declaration
float calculatebill(float units_consumed){
float bill;
   if(units_consumed<=100){
	bill = units_consumed*10;
    }
    else if(units_consumed<=200){
	bill = (100*10) +(units_consumed-100)*15;
	}
	else if(units_consumed>200){
	bill = (100*10)+100*15+(units_consumed-200)*20;	
	}
   return bill;
}


