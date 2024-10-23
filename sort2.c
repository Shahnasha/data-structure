#include<stdio.h>
 
int a[10], b[10], d[20];
int m, n;
int i, j;
 
void sort(int c[], int size) {
	int temp;
	for(i = 0; i < size - 1; i++) {
		for(j = i + 1; j < size; j++) {
			if(c[i] > c[j]) 
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
	   		}
		}
	}
}
 
void display(int c[], int size) {
	for(i = 0; i < size; i++) {
		printf("%d\t", c[i]);
	}
}

int main() {

	printf("Enter the number of elements of array 1:\n");
	scanf("%d", &m);
	printf("Enter the elements of array 1:\n");
	for(i = 0; i < m; i++) {
		scanf("%d", &a[i]);
	}


	printf("Enter the number of elements of array 2:\n");
	scanf("%d", &n);
	printf("Enter the elements of array 2:\n");
	for(i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	printf("the entered unsorted array1\t");
	display(a,m);
	printf("\nthe entered unsorted array2\t");
	display(b,n);
	sort(a, m);
	sort(b, n);
 	printf("\nSorted array 1:\n");
	display(a, m);
	printf("\nSorted array 2:\n");
	display(b, n);
	int merged_size = m + n;
	for(i = 0; i < m; i++) {
		d[i] = a[i];
	}
	for(i = 0; i < n; i++) {
		d[m + i] = b[i];
	}
	printf("\nthe merged array");
	display(d, merged_size);
	sort(d, merged_size);
	printf("\nMerged and sorted array:\n");
	display(d, merged_size);

	return 0;
	}

 



