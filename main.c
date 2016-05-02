#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define SIZE 50

void splitNumOnDigits(int input[],int output[][5]);
void joinDigitsOnNum(int input[][5],int output[]);
void drawNum(int output[]);
void main()
{
    int arr1[SIZE],arr2[SIZE][5],s1,i,j;
    drawNum(arr1);
    for(i=0;i<SIZE;i++)
        printf("%d\n",arr1[i]);
    splitNumOnDigits(arr1,arr2);
    printf("\n");
    for(i=0;i<SIZE;i++){
        for(j=0;j<5;j++)
            printf("%d ",arr2[i][j]);
        printf("\n");
    }
    printf("\n");
    joinDigitsOnNum(arr2,arr1);
    for(i=0;i<SIZE;i++)
        printf("%d\n",arr1[i]);
}
void joinDigitsOnNum(int input[][5],int output[])
{
    int i,j;
    float aux;
    for(i=0;i<SIZE;i++){
        output[i]=0;
        for(j=0;j<5;j++){
            aux = input[i][j]*pow(10,j);
            output[i]+=aux;
        }
        j=0;
    }
}
void splitNumOnDigits(int input[],int output[][5])
{
    int i,j,aux;
    for(i=0;i<SIZE;i++){
        for(j=0;j<5;j++){
            aux=input[i]%10;
            input[i]-=aux;
            output[i][j]=aux;
            input[i]=input[i]/10;
        }
        j=0;
    }
}
void drawNum(int output[])
{
    int i;
    srand(time(NULL));
    for(i=0;i<SIZE;i++)
        output[i]=rand()%50000;
}
