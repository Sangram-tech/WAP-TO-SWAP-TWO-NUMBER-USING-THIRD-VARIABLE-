//WAP TO SWAP TWO NUMBER USING THIRD VARIABLE::
# include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter two numbers::");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}