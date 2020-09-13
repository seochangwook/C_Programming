//
//  main.c
//  CProject
//
//  Created by seo on 2020/07/12.
//  Copyright © 2020 seo. All rights reserved.
//

#include <stdio.h>
#include "testfunc.h"

int main(void) {
    //포인터 변수 출력 (참조값, 주소값)
    int value = 5;
    int *value_pointer = &value;
    
    printf("value : %d\n", value);
    printf("pointer value : %d\n", *value_pointer); //역참조
    printf("value address : %p\n", &value);
    printf("pointer value address : %p\n", value_pointer);
    
    printf("----------------\n");
    
    //포인터 값 변경
    int value_origin = 10;
    int *value_origin_pointer = &value_origin;
    
    printf("value origin : %d\n", value_origin);
    
    *value_origin_pointer = 20;
    
    printf("value origin : %d\n", value_origin);
    
    printf("----------------\n");
    
    //Call by Value, Call By Reference (Swap)
    int value_one = 10;
    int value_two = 20;
    
    printf("* Call by Value\n");
    
    printf("<Swap before>\n");
    
    printf("value one : %d | %p\n", value_one, &value_one);
    printf("value two : %d | %p\n", value_two, &value_two);
    
    swap_value(value_one, value_two);
    
    printf("<Swap after>\n");
    
    printf("value one : %d\n", value_one);
    printf("value two : %d\n", value_two);
    
    printf("\n");
    
    printf("* Call by Reference\n");
    
    printf("<Swap before>\n");
    
    printf("value one : %d | %p\n", value_one, &value_one);
    printf("value two : %d | %p\n", value_two, &value_two);
    
    swap_reference(&value_one, &value_two);
    
    printf("<Swap after>\n");
    
    printf("value one : %d\n", value_one);
    printf("value two : %d\n", value_two);
    
    printf("----------------\n");
    
    //이중포인터
    int origin_value = 10;
    printf("origin_value : %d | %p\n", origin_value, &origin_value);
    
    int *one_pointer = &origin_value;
    printf("one_pointer : %d | %p\n", *one_pointer, one_pointer);
    
    int **two_pointer = &one_pointer;
    printf("two_pointer : %d | %p\n", **two_pointer, *two_pointer);
    
    **two_pointer = 20;
    
    printf("origin_value: %d\n", origin_value);
    
    return 0;
}
