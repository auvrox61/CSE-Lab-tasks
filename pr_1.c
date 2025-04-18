#include<stdio.h>

typedef struct{
    int num;
    int denom;
}Fraction;

int gcd(int a, int b) {
    if (b == 0)
    return abs(a);
    return gcd(b, a % b);
}

Fraction createFraction(int num, int denom){
    Fraction f;
    if(denom==0){
        printf("ERROR!\n");
    } else if(num<0){
        num=-num;
        denom=-denom;
    }
    int g=gcd(num,denom);
    f.num=num/g;
    f.denom=denom/g;
}

Fraction addFractions(Fraction f1, Fraction f2){
    int num=f1.num * f2.denom + f2.num * f1.denom;
    int denom=f1.denom*f2.denom;
    return createFraction(num,denom);
}

Fraction multiplyFractions(Fraction f1, Fraction f2){
    int num=f1.num * f2.num;
    int denom=f1.denom * f2.denom;
    return createFraction(num,denom);
}

void displayFraction(Fraction f){
    if(f.denom==1){
        printf("%d",f.num);
    } else{
        printf("%d/%d",f.num,f.denom);
    }
}

double toDecimal(Fraction f){
    return (double)(f.num/f.denom);
}

int main(){
    Fraction f1,f2,result;
    int num1,num2,denom1,denom2;
    int choice;
    while(1){
        printf("1.Add fractions\n");
        printf("2.Multiply fractions\n");
        printf("3.Convert Fraction to Decimal\n");
        printf("4.Exit\n");
        scanf("%d",&choice);
        if(choice==4){
            printf("Terminating from the program\n");
            break;
        }
        switch(choice){
            case 1:
            scanf("%d %d",&num1,&denom1);
            f1=createFraction(num1,denom1);
            scanf("%d %d",&num2,&denom2);
            f2=createFraction(num2,denom2);
            result=addFractions(f1,f2);
            displayFraction(f1);
            printf("+");
            displayFraction(f2);
            printf("=");
            displayFraction(result);
            break;
            case 2:
            scanf("%d %d",&num1,&denom1);
            f1=createFraction(num1,denom1);
            scanf("%d %d",&num2,&denom2);
            f2=createFraction(num2,denom2);
            result=multiplyFractions(f1,f2);
            displayFraction(f1);
            printf("*");
            displayFraction(f2);
            printf("=");
            displayFraction(result);
            break;
            printf("Enter fraction:\n");
            printf("Numerator: ");
            scanf("%d", &num1);
            printf("Denominator: ");
            scanf("%d", &denom1);
            f1 = createFraction(num1, denom1);
            displayFraction(f1);
            printf(" as a decimal is %.5lf\n", toDecimal(f1));
            break;
            default:
            printf("Invalid Input\n");
        }
    }
    return 0;
}
