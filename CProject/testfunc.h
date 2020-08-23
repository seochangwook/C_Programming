//
//  testfunc.h
//  CProject
//
//  Created by seo on 2020/07/24.
//  Copyright © 2020 seo. All rights reserved.
//

#ifndef testfunc_h
#define testfunc_h

#include <stdio.h>
#include <string.h>

void printArray(int a[], int size); //배열출력
void changeNumArray(int a[], int size, int index, int changeNum); //배열 값 변경
void arrayCopy(int dest[], int source[], int copySize, int arraySize); //배열 복사
void printArrayTwo(int b[][5], int row, int col); //이차원 배열출력

#endif /* testfunc_h */
