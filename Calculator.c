#include <stdio.h>
#include <math.h>

int main() {
    
    float n1,n2,ans; char op;
    
    printf("Followig operators can be used:\n\n(+)\t\t\tAddition\n(-)\t\t\tSubtraction\n(x or *)\tMultiplication\n(/)\t\t\tDivision\n(^)\t\t\tPower \n\n");
    printf("Enter calculation: ");
    scanf("%f %c %f",&n1,&op,&n2);
    printf("The result: ");
    
    if(op=='+')
        {ans=n1+n2; printf("%.2f",ans);}
    else if(op=='-')
        {ans=n1-n2; printf("%.2f",ans);}
    else if(op=='*' || op=='x')
        {ans=n1*n2; printf("%.2f",ans);}
    else if(op=='^')
        {ans=pow(n1,n2); printf("%.2f",ans);}
    else
        {printf("Execution Error");}
        
    return 0;
        
    }
