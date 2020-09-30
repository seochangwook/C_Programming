//
//  testfunc.c
//  CProject
//
//  Created by seo on 2020/07/24.
//  Copyright © 2020 seo. All rights reserved.
//

#include "testfunc.h"

void printInfo_Building(Building building){
    printf("building Name: %s\n", building.buildingName);
    printf("building History: %d\n", building.history);
    printf("building UpFloor: %d\n", building.upfloor);
    printf("building DownFloor: %d\n", building.downfloor);
}

void printInfo_Person(Person *person){
    printf("name: %s\n", person->name);
    printf("age: %d\n", person->age);
}

void init_BookInfo(Book *book, int size){
    //구조체 배열의 배열명(구조체 배열의 이름)은 구조체의 첫번째 요소의 주소(포인터)와 같다//
    char bookName[50];
    int page;
    char bookAuthor[20];
    
    printf("<<< Input Book Info>>>\n");
    
    for(int i=0; i<size; i++){
        printf("Input Book[%d] Name: ", (i+1));
        scanf("%s", bookName);
        
        strcpy(book[i].name, bookName);
        
        printf("Input Book[%d] page: ", (i+1));
        scanf("%d", &page);
        
        book[i].page = page;
        
        printf("Input book[%d] author: ", (i+1));
        scanf("%s", bookAuthor);
        
        strcpy(book[i].author, bookAuthor);
        
        printf("\n");
    }
}

void searchBook(Book *book, int size, char *searchAuthorName){
    for(int i=0; i<size; i++){
        if(strcmp(book[i].author, searchAuthorName) == 0){
            printf("book Name: %s\n", book[i].name);
            printf("book page: %d\n", book[i].page);
            printf("book author: %s\n", book[i].author);
            
            break;
        }
    }
    
    printf("\n");
}
