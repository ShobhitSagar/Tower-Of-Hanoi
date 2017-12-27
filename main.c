#include <stdio.h>

void towerFun(int, char, char, char);

int main()
{
    int number;
    printf("Enter the number of disks \n");
    scanf("%d",&number);
    printf("The sequence on moves involved in %d number of disks in Tower of Hanoi are : \n",number);
    towerFun(number, 'A', 'C', 'B');
    return(0);
}

void towerFun(int num, char fr, char tr, char ar)
{
    if(num==1)
    {
        printf("Move disk 1 from %c to %c \n",fr,tr);
        return;
    }
    towerFun(num-1, fr, ar, tr);
    printf("Move disk %d from %c to %c \n",num,fr,tr);
    towerFun(num-1, ar, tr, fr);
}
