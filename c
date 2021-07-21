#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    int age;
    int height;
    char favo[13];
    int weight;
    printf("enter a persons name\n");
    scanf("%s",name);
    printf("enter her age\n");
    scanf("%d",&age);
    printf("enter her height\n");
    scanf("%d",&height);
    printf("enter her favo\n");
    scanf("%s",favo);
    printf("enter her weight\n");
    scanf("%d",&weight);
    printf("%s ia a good girl\n",name);
    printf("her age is %d\n",age);
    printf("her height is %d\n",height);
    printf("she likes %s\n",favo);
    printf("her weight is %d\n",weight);
    return 0;
}
