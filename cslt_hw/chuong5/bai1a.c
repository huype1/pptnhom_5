#include <stdio.h>
int main (void)
{
    int n = 0;
    int a[100];
    do
    {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n<0 || n > 100);
    
    // nhap du lieu cho phan tu
    for (int i = 0; i< n ; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i< n; i++)
    {
        printf("a[%d]: %d ", i, a[i]);
    }
}