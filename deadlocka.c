#include<stdio.h>
#include<conio.h>
void main(){
	int cl[10][10],al[10][10],av[10],i,j,k,m,n,ne[10][10],flag=0;
	printf("\nenter a matrix:");
	scanf("%d%d",&m,&n);
	printf("\n enter claim matrix:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			scanf("%d",&cl[i][j]);
		}
	}
	printf("\nenter allocated matrix");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&al[i][j]);
		}
	}
	printf("\n needed matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			ne[i][j]=cl[i][j]-al[i][j];
			printf("\t%d",ne[i][j]);
		}
		printf("\n");
	}
     printf("\n enter available matrix:");
     for(i=0;i<n;i++)
     scanf("%d",&av[i]);
     printf("claim matrix:\n");
     for(i=0;i<n;i++){
     	for(j=0;j<m;j++){
     		printf("\t%d",cl[i][j]);
		 }
		 printf("\n");
	 }
	 printf("\n allocated matrix:\n");
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++)
	 	{
	 		printf("\t%d",al[i][j]);
		 }
		 printf("\n");
	 }
	 printf("available matrix:\n");
	 for(i=0;i<n;i++){
	 	printf("%d\t",av[i]);
	 }
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		if(av[j]>=ne[i][j])
	 		flag=1;
	 		else
	 		flag=0;
		 }
	 }
	 if(flag==0)                 
	 printf("unsafe state");
	 else
	 printf("safe state");
	 getch();
}
