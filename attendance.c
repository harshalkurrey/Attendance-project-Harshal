// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // tep 1: Declare a 1D integer array where each index represents a student.
        int n;
    printf("Enter no. of Students : ");
    scanf("%d",&n);
    
    int arr[n];
    
    // Step 2: 1 = Present , 0 = Absent
    printf("\nRemeber that ----> 1 = Present , 0 = Absent\n\n");
    
//Step 3: + Step 4 , marking attendance by taking input the user
    for(int i=0; i<n; i++){
        printf("Marks Attendence for Student no - %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    // Step 5 - printing attendence of all students 
    
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            printf("\nThe Attendence of %d is = present\n",i+1);
        }
        else if(arr[i]==0){
            printf("\nThe Attendence of %d is = Absent\n",i+1);
        }
        else{
            printf("\nThe User enter a wrong input for the %d\n",i+1);
        }
    }
    
    // Step 5 6 Initializing Counter for Present & Absent
    int present = 0;
    int absent = 0 ;
    
    // Step 7 , 8 , 9 , 10 couting total no. of present & Absent using loop & displaying them ok sir ?
    
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            present++;
        }
        else if(arr[i]==0){
            absent++;
        }
        else continue;
    }
    
    printf("\nTotal no of Present Student's = %d \nTotal no of Absent Student's = %d",present,absent);
    
        return 0;
}