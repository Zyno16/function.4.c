#include <stdio.h>
#include <stdlib.h>
int  nbr_of_number (int n){
    int nbr=0;
do{n=n/10;
   nbr++;
}while(n!=0);
return nbr;
}
int main()
{int n;
   printf("enter the number ");
   scanf("%d",&n);
   printf("number of numberis %d",nbr_of_number(n));
    return 0;

}
