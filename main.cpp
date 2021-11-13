#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace  std;
#include "stack.h"
int main(int argc, char **argv){
  printf("Checking the parentheses in argv arguments\n");
  int i,j;
  
  NodePtr s=NULL;
  char t;

  for(i=1;i<argc;i++){
    int wrong = 0;
    for(j=0;j<strlen(argv[i]);j++){
      switch(argv[i][j]){
        case '[': push(s,argv[i][j]); cout<<'['; break;
        case '{': push(s,argv[i][j]); cout<<'{';break;
        case ']': if(pop(s) != '['){ wrong = 1;} cout<<']'; break;
        case '}': if(pop(s) != '{'){ wrong = 1;} cout<<'}'; break;
        default: cout<<argv[i][j];
      }
    }
    if(wrong == 1){
      printf(" is wrong\n");
    }else if(wrong == 0){
      printf(" is correct\n");
    }
  }




   return 0;
}
