#include <stdio.h>
int main(){
 
  int c;
  scanf("%d",&c);
  char name[1024];
  while(c--){
	scanf("%s",&name);
	printf("Hello, %s!\n",name);
  }
  
  return 0;
}

//The terminal process terminated with exit code: 1 
//이거 경로에 한글들어가니까 이럼... 한글없는 경로!!(구글링/https://github.com/Microsoft/vscode/issues/10353)