#include<stdio.h>
int main()
{
    unsigned int c;
    int i,j;
    //check a bit
    printf("Enter the number which you want to check =\n");
    scanf("%d",&c);
    printf("Enter the bit position \n");
    scanf("%d",&i);
    //1.
    if(c& (1<<i))
        printf("Bit is set\n");
    else
        printf("Bit is not set\n");
    
    //set a bit
    printf("Enter the bit position which you want to set \n");
    scanf("%d",&i);
    printf("set : %u\n", c & (1 << i));
    c= c|(1 <<i);
    printf("The number after set is %u\n",c);
    printf("\nEnter th bit position,which you want to clear \n");
    scanf("%d",&i);
    //clear a bit set to 0
    c = c & ~(1 <<(i));
    printf("set : %u\n", c&(1<<i));
    printf("The number after clear is %u\n",c);
    
    return 0 ;
}