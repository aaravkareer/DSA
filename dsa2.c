#include<stdio.h>
int main(){
    int a,b,c,e,f,g,h,m,n,v;
    printf("enter the size of the array:");
    scanf("%d",&m);
    int arr[m];
    printf("enter the elements in array:\n");
    for(int j=0;j<m;j++){
        scanf("%d",&arr[j]);
    }
    for(int k=0;k<m;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
    repeat:
    printf("Enter the position where you want to insert your element:\n1.beginning\n2.end\n3.any position\n4.exit\n");
    scanf("%d",&h);
    switch(h){
        case 1:
          printf("Enter the element you want to insert:");
          scanf("%d",&a);
          arr[0]=a;
           printf("Do you want to display the array :(1/0)");
           scanf("%d",&e);
           if(e){
           for(int i=0;i<5;i++){
            printf("%d ",arr[i]);
           }
           printf("\n");
           }
          break;
        case 2:
          printf("Enter the element you want to insert");
          scanf("%d",&b);
          arr[4]=b;
           printf("Do you want to display the array :(1/0)");
           scanf("%d",&e);
           if(e){
           for(int i=0;i<5;i++){
            printf("%d ",arr[i]);
           }
           printf("\n");
           }
          break;
        case 3:
          printf("This array consists of 5 elements, enter the position you want to insert your element:");
          scanf("%d",&g);
          printf("Enter the element you want to insert");
          scanf("%d",&c);
          arr[g-1]=c;
           printf("Do you want to display the array :(1/0)");
           scanf("%d",&e);
           if(e){
           for(int i=0;i<5;i++){
            printf("%d ",arr[i]);
           }
           printf("\n");
           }
          break;
        case 4:
          break;
        default:
          printf("INVALID INPUT");
          goto repeat;
          break;
    }
    goto repeat;
    return 0;

}