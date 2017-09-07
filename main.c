//
//  main.c
//  TowerOfHanoi
//
//  Created by Shobhit Sagar on 26/08/17.
//  Copyright © 2017 Shobhit Sagar. All rights reserved.
//

#include <stdio.h>

void towerFun(int, char, char, char);
int main()
{
    int n;
    printf("Enter the number of disks \n");
    scanf("%d",&n);
    printf("The sequence on moves involved in %d number of disks in Tower of Hanoi are : \n",n);
    towerFun(n, 'A', 'C', 'B');
    return(0);
}

void towerFun(int n, char fr, char tr, char ar)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c \n",fr,tr);
        return;
    }
    towerFun(n-1, fr, ar, tr);
    printf("Move disk %d from %c to %c \n",n,fr,tr);
    towerFun(n-1, ar, tr, fr);
}
