//
//  testfunc.c
//  CProject
//
//  Created by seo on 2020/07/24.
//  Copyright © 2020 seo. All rights reserved.
//

#include "testfunc.h"

void printArray(int a[], int size){
    printf("배열 크기: %d\n", size);
    printf("배열 출력: ");
    
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    
    printf("\n");
}

void changeNumArray(int a[], int size, int index, int changeNum){
    a[index-1] = changeNum;
    
    printf("배열 출력: ");
    
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    
    printf("\n");
}

void arrayCopy(int dest[], int source[], int copySize, int arraySize){
    printf("배열 복사...\n");
    
    memcpy(dest, source, copySize);
    
    printf("배열출력 : ");
    
    for(int i=0; i<arraySize; i++){
        printf("%d ", dest[i]);
    }
    
    printf("\n");
}

void printArrayTwo(int b[][5], int row, int col){
    printf("이차원 배열 출력: \n");
    
    for(int i=-0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", b[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n");
}
