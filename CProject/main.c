//
//  main.c
//  CProject
//
//  Created by seo on 2020/07/12.
//  Copyright © 2020 seo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "testfunc.h"

int main(void) {
    //1. 기본 구조체 선언
    struct Computer computer;
    
    strcpy(computer.modelName, "Apple Macbook");
    computer.memory = 16;
    computer.cpu = 64;
    
    printf("computer model Name: %s\n", computer.modelName);
    printf("computer memory: %d\n", computer.memory);
    printf("computer cpu: %d\n", computer.cpu);
    
    printf("\n");
    
    //2. 함축 구조체 선언
    Building building;
    
    strcpy(building.buildingName, "Lotte World Tower");
    building.history = 20161222;
    building.upfloor = 123;
    building.downfloor = 5;
    
    printInfo_Building(building);
    
    printf("\n");
    
    //3. 포인터 구조체 사용
    Person *person = malloc(sizeof(Person)); //구조체를 사용하기 위한 동적 메모리 할당//
    
    strcpy(person->name, "SeoChangWook");
    person->age = 29;
    
    printInfo_Person(person);
    
    free(person); //동적 메모리 해제(반납)//
    
    printf("\n");
    
    //4. 구조체 배열
    char searchAuthorName[20];
    Book book[3];
    
    init_BookInfo(book, 3);
    
    printf("<<<Info Book>>>\n");
    
    for(int i=0; i<3; i++){
        printf("book Name: %s\n", book[i].name);
        printf("book page: %d\n", book[i].page);
        printf("book Author: %s\n", book[i].author);
        
        printf("\n");
    }
    
    printf("==> Search Author: ");
    scanf("%s", searchAuthorName);
    
    searchBook(book, 3, searchAuthorName); //책 검색//
    
    return 0;
}
