#include<stdio.h>
void swap(int *a,int *b)
{
	int t= *a;
	*a=*b;
	*b=t;
}
int partition(int a[],int l,int h)
{
	int p=a[h];
	int i=(l-1);
	for(int j=l;j<h;j++)
	{
		if(a[j]>p)
		{
		i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return (i+1);
}
void sort(int a[],int l,int h)
{
	if(l<h)
	{
		int i=partition(a,l,h);
		sort(a,l,i-1);
		sort(a,i+1,h);
	}
}

int main() {
    int arr[] = {12, 7, 11, 6, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
