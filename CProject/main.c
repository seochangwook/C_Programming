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
    printf("Main Start!!\n\n");
    
    printMessageFunc();
    
    printf("\n");
    
    int a = 10;
    int b = 20;
    
    int result = sumFunc(a, b);
    
    printf("%d + %d = %d\n", a, b, result);
    
    return 0;
}
