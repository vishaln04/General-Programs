#include<stdio.h>
#include<malloc.h>
void main() {
	int n, i, j;
	printf("Enter size of M matrix :\n");
	scanf("%d",&n);
	int **M = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++) {
		M[i] = (int*)malloc(n*sizeof(int));
	}
	int *a = (int*)malloc(n*sizeof(int));
	printf("Enter vector M elements : \n");
	for (i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d",&M[i][j]);
		}
	}
	printf("Enter assumed vector alpha :\n");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}
