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
    //정수형 배열
    int a[5] = {1, 2, 3, 4, 5};
    
    printArray(a, sizeof(a) / sizeof(int));
    
    printf("\n");
    
    //배열값 변환
    int index;
    int changeNum;
    
    printf("변환할 배열의 위치(인덱스)를 입력하세요: ");
    scanf("%d", &index);
    
    printf("변환할 배열의 값을 입력하세요: ");
    scanf("%d", &changeNum);
    
    changeNumArray(a, sizeof(a) / sizeof(int), index, changeNum);
    
    printf("\n");
    
    //배열복사
    int dest[5];
    
    arrayCopy(dest, a, (sizeof(a) / sizeof(int))*sizeof(int), sizeof(a) / sizeof(int));
    
    printf("\n");
    
    //문자형 배열
    char name[] = "Seo";
    
    printf("문자열 출력 : %s\n", name);
    printf("문자열 길이 : %d\n", strlen(name));
    
    printf("\n");
    
    //이차원 배열
    int b[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    
    printArrayTwo(b, 2, 5);
    
    return 0;
}
