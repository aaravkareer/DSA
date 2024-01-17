#include <stdio.h>
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}

void insertElement(int arr[],int n)
{
    
    int i = 0;

    printf("Enter the elements!\n");
    for (; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void deletion(int arr[],int n){
    int choice;
    int num;
    do{
    printf("enter the number you want to delete:");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            arr[i]=0;
        }
        

    }
    
     printf("do you want to delete any other number(1/0)");
     scanf("%d",&choice);
    }while(choice);
}

void searchElement(int arr[],int n)
{
    int search;
    int choice;

  do
  {
     int flag=0;
    printf("Enter the element to search!\n");
    scanf("%d", &search);

    for(int new_i = 0; new_i < n; new_i++)
    {
        if(search == arr[new_i])
        {
            printf("Entered number is %dth element!\n", new_i + 1);
            flag = 1;
        }
    }

    if(flag != 1)
    {
        printf("Not in the array!\n");
    }

    printf("Do you want to continue searching? (1/0)\n");
    scanf("%d", &choice);



  }while(choice);
}

int main()
{
    int flago=0;
    int m;
    repeat:
    printf("what do you want to do?\npress\n 1: insertion\n2: display\n3: searching\n4: deletion\n5: exit\n ");
    scanf("%d", &m);
    int n;
    

    int choice;
    int arr[n];
    switch(m){
        case 1: flago=1;
        printf("Input the size of the array: ");
    scanf("%d", &n);
        insertElement(&arr[n], n);
        break;
     
        case 2:if(flago){
            printArray(&arr[n],n);
        }
        else{
            printf("you need to enter the element first\n");
        }
        
        break;
        case 3:
        if(flago){
        searchElement(&arr[n], n);
        }
        else{
            printf("you need to insert first\n");
        }
        break;
        case 4:
     if(flago){
        deletion(&arr[n],n);}
        else{
            printf("you need to insert first\n");
        }
        break;
        case 5:
        break;
        default :
        printf("you have entered a wrong number\n");
    }
     printf("Do you want to continue searching? (1/0)\n");
    scanf("%d", &choice);
    if(choice){
        goto repeat;
    }

    
    



    return 0;
}