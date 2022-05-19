//
//  class_member_array.c
//  
//
//  Created by Syvanonh Boualaphanh on 19/5/22.
//

#include <stdio.h>

int show();
int main(){
    int i, m;
    char namelist[][20]={"Dalavang", "Syvanonh", "Souksomphone", "Juje", "Sokxay"};
    
    printf("\nEnter 1 to show the array again or 2 to edit the array:  ");
    scanf("%d", &m);
    if(m==1){
        for(i=0; i<5; i++){
            printf("\nPerson %d is %s\n", i, namelist[i]);
        }
    }else if(m==2){
        int n;
        int *p;
        char newname[20];
        printf("Enter the person number you wish to edit:  ");
        scanf("%d", &n);
        if(n<5){
            printf("Enter the new name:  ");
            scanf("%s", &newname[20]);
            p=&newname;
            namelist[n-1] = *p;
            printf("Name successfully changed.");
            main();
        }else{
            printf("Invalid person number.");
        }
    }else{
        printf("Invalid code. Please try again");
        main();
    }
    
    return 0;
}
