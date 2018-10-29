#include <stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void insertion_sort(int a[], int n) {
	int i,j; //counter
	for (i=0; i<n; ++i) {
		j=i;
		while ((j>0)&&(a[j]<a[j-1])) {
			swap(&a[j], &a[j-1]);
			--j;
		}
		
	}
}
int main() {
	int a[] = {1, 3, 2, 2, 1};
	insertion_sort(a, 5);
	int i;
	for (i=0; i<5; ++i) printf("%d ", a[i]);
}
