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

//구조체 선언
struct Computer {
    char modelName[50];
    int memory;
    int cpu;
};

//함축 구조체 선언
typedef struct Building{
    char buildingName[50];
    int history;
    int upfloor;
    int downfloor;
}Building;

//포인터 구조체 선언
typedef struct Person{
    char *name[20];
    int age;
}Person;

//구조체 배열
typedef struct Book{
    char *name[50];
    int page;
    char *author[20];
}Book;

void printInfo_Building(Building building);
void printInfo_Person(Person *person);
void init_BookInfo(Book *book, int size);
void searchBook(Book *book, int size, char *searchAuthorName);

#endif /* testfunc_h */
