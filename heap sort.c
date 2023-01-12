#include <stdio.h>   
void heapify(int a[], int n, int i)  
{  
    int largest = i;   
    int left = 2 * i + 1;   
    int right = 2 * i + 2;  
    if (left < n && a[left] > a[largest])  
        largest = left;    
    if (right < n && a[right] > a[largest])  
        largest = right; 
    if (largest != i) {    
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;         
        heapify(a, n, largest);  
    }  
}    
void heapSort(int a[], int n)  
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);    
    for (int i = n - 1; i >= 0; i--) {    
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;           
        heapify(a, i, 0);  
    }  
} 
void printArr(int arr[], int n)  
{  
    for (int i = 0; i < n; ++i)  
    {  
        printf("%d", arr[i]);  
        printf(" ");  
    }         
}  
int main()  
{  
    int o,a[5];
	printf("enter the number of elements to sort:");
	scanf("%d",&o);
	printf("enter the elements:");
	for(int g=0;g<o;g++)
	scanf("%d",&a[g]);  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    heapSort(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    return 0;  
}
