#include <stdio.h>
int main(){
int i,j,n,t,k;
printf("type the order of the matrix n=\n");
scanf("%d",&n);
int a[n][n],b[n][n],c[n][n];
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("press 1 to calculate the sum of the given matrix.\npress 2 to calculate the product of the two.");
scanf("%d",&t);
if (t==1){
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
           
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
             if (j==0){printf("\n");}
            printf("%d ",c[i][j]);
        }
    }}
    else if (t==2){
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                c[i][j]=0;
                for (k=0;k<n;k++){
                    c[i][j]=c[i][j]*a[i][k]+b[k][j];
                }
            }
        }
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                if (j==0){printf("\n");}
                printf("%d ",c[i][j]);
            }
        }
    }



    return 0;
}