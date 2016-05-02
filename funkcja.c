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
        printf("%d\n",arr1[i]);
}
