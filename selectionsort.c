#include<stdio.h>
void main(){
	int i,j,k,a[20],n,temp;
	//Read the Limit of Array
	printf("Enter the Limit of Array:");
	scanf("%d",&n);
	//Read the Numbers From User
	printf("Enter the Numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//Sorting Logic
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				//Swap the Numbers
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	//Each Iteration
	printf("Sorting After Iteration %d:\t",i+1);
	for(k=0;k<n;k++)
		printf("%d\t",a[k]);
	printf("\n");
	}
	//Print Sorted Array
	printf("Sorted Array:\t");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
