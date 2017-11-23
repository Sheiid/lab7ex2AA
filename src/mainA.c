/*
 * main.c
 *
 *  Created on: Nov 22, 2017
 *      Author: sheida
 */

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int mult(int ,int );
int main(){
    int a,b,res;
    printf("Enter the numbers:\n");
    scanf("%d %d",&a,&b);

    res=mult(a,b);
    printf("multiplication = %d",res);
    return 0;
}
int mult(int a,int b){
    int res;
    //termination
    if(a==1){
        return b;
    }
    if(b==1){
        return a;
    }
    else{
        res=a+mult(a,b-1);
    }
return res;
}
