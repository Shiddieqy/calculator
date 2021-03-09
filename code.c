#include <stdio.h>
float add (float a, float b);
float sub (float a, float b);
float mult (float a, float b);
float div (float a, float b);
float pow (float a, float b);
void integ ();

int main(){
    int inp;
    printf("wellcome to calculator. Please select an operation : \n1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Power\n6.Integrate (polynomial)\n");
    scanf("%d" , &inp);
        float num1=1;
        float num2=2;
        float result=0;
    if (inp<6){
        printf("input 2 values (write 'a b' to operate a to b):   ");
  	    scanf("%f%f", &num1, &num2);
            if (inp==1){
        result=add(num1,num2);
    }   
    if (inp==2){
        result=sub(num1,num2);
    }
    if (inp==3){
        result=mult(num1,num2);
    }
    if (inp==4){
        result=div(num1,num2);
    }
    if (inp==5){
        result=pow(num1,num2);
    }
        printf("The result is %.2f", result);
    }

    if (inp==6){

        integ();
    }

}

float add(float a,float b){
    return a + b;
}
float sub(float a,float b){
    return a - b;
}
float mult(float a,float b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}
float pow(float a,float b){
    float x=1;
    int i;
    for( i=0; i<b ; i = i + 1){
        x=x*a;
    }
    return x;
}
void integ(){
        int n;
        int i;
        int lower;
        int upper;
        float reslt=0;
        float j;
        printf("Input the order level of polynomial function :   ");
        scanf("%d",&n);
        int m=10*n;
        float a[n];
        for( i=0; i<=n ; i = i + 1){
            printf("input a%d   ",i);
            scanf ("%f",&a[i]);
        }   
        printf("Input the boundaries (lower upper) :   ");
        scanf("%d%d",&lower, &upper);
        for( j=lower; j<=upper ; j = j + 0.0001){
            for( i=0; i<=n ; i = i + 1){
                reslt=reslt+(a[i]*pow(j,i)*0.0001);
           }   
        }
        printf("The result of integral is %.2f",reslt);
    
}