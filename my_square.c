 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 int my_square(int row, int col){
     for(int i=0; i<row; i++){
         for(int j=0; j<col; j++){
             if((i==0 && j==0)|| (i==0 && j==(col-1)) || (i==(row-1) && j==0) || (i==(row-1) && j==(col-1))) { 
                 printf("o");
             }else if(j==0 || j==(col-1)){
                 printf("|");
             }else if(i==0 || i==(row-1)){
                 printf("-");
             }else{
                 printf(" ");
             }
         }
         printf("\n");
     }
 }
 
 int main(int ac, char **av){
     if(ac != 3){
         return 0;
     }
     int x = atoi(av[1]);
     int y = atoi(av[2]);
     my_square(x, y);
 }
