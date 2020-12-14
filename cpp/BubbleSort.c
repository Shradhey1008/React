#include<stdio.h>
#define SIZE 20
int main()
{
    int i,j,a[SIZE];
    printf("enter size of array");
    scanf("%d",&i);
    printf("enter element of array");
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
        printf("\n");
    BubbleSort(a,SIZE);

}
int BubbleSort(int *p,int n)
{
    int temp;
    for(int c=0;c<n;c++)
     {
        for(int d=c+1;d<n;d++)
        {
            if(*(p+d)<*(p+c))
            {
                temp=*(p+c);
                *(p+c)=*(p+d);
                *(p+d)=temp;
            }
        }
     }
     for (int i = 0; i < n; i++)
        printf("%d ", *(p + i));
}
