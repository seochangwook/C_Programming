//
//  main.c
//  CProject
//
//  Created by seo on 2020/07/12.
//  Copyright © 2020 seo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a;
    int b;
    char *name = "seochangwook";
    
    a = 10;
    b = 20;
    
    printf("value is a : %d, b : %d\n", a, b);
    printf("name is : %s\n", name);
    
    int input_data;
    
    printf("Input Number: ");
    scanf("%d", &input_data);
    
    printf("Input Number is : %d\n", input_data);
    
    char input_name[50]; //문자열로 인식
    
    printf("Input Name: ");
    scanf("%s", input_name);
    
    int size = strlen(input_name);
    
    printf("Input Name is : %s\n", input_name);
    printf("Size: %d\n", size);
    
    return 0;
}
