//
//  testfunc.c
//  CProject
//
//  Created by seo on 2020/07/24.
//  Copyright © 2020 seo. All rights reserved.
//

#include "testfunc.h"

void swap_value(int swap_value_one, int swap_value_two){
    int temp; //교환을 위한 임시저장변수
    
    temp = swap_value_one;
    swap_value_one = swap_value_two;
    swap_value_two = temp;
    
    printf("(Swap 안)\n");
    
    printf("swap_value_one : %d | %p\n", swap_value_one, &swap_value_one);
    printf("swap_value_two : %d | %p\n", swap_value_two, &swap_value_two);
}

void swap_reference(int *swap_value_one, int *swap_value_two){
    int temp; //교환을 위한 임시저장변수
       
    temp = *swap_value_one;
    *swap_value_one = *swap_value_two;
    *swap_value_two = temp;
       
    printf("(Swap 안)\n");
       
    printf("swap_value_one : %d | %p\n", *swap_value_one, swap_value_one);
    printf("swap_value_two : %d | %p\n", *swap_value_two, swap_value_two);
}
