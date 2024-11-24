#include<stdio.h>
void main()
{ int arr[]={12,43,556,34,23,56,78,67,64,343,2323,234,432};
  int n;
    printf("Enter any positive integer number(1-13) whose element you want to find: ");
    scanf("%d",&n);
       if(n>=1&&n<=13){
            printf("%d",arr[n-1]);
            
        }
        else{
            printf("you entered something invalid");
            
        }
        printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
