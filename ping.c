#include <stdio.h>

int lr1 = 9;  //левая ракетка 1 клетка
int lr2 = 10;   //левая ракетка 2 клетка
int lr3 = 11;   //левая ракетка 3 клетка
int rr1 = 10;   //правая ракетка 1 клетка
int rr2 = 11;   //левая ракетка 2 клетка
int rr3 = 12;   ////левая ракетка 3 клетка
int ballX = 35; //координата мяча по Х
int ballY = 3;  //координата мяча по Y
int course = 2; //направление мяча
int sbX;        //предыдущая координата мяча по Х
int sbY;        //предыдущая координата мяча по Y

int main() {  
    for(int y = 0; y < 26; y++){
        for (int x = 0; x < 86; x++)
        {   
            if(x == 40 && y == 2){
                printf("|");
            }
            if(x == 40 && y == 3){
                printf("|");
            }
            if(x == 40 && y == 4){
                printf("|");
            }
            if(x == 40 && y == 5){
                printf("|");
            }
            if(x == 40 && y == 6){
                printf("|");
            }
            if(x == 40 && y == 7){
                printf("|");
            }
            if(x == 40 && y == 8){
                printf("|");
            }
            if(x == 40 && y == 9){
                printf("|");
            }
            if(x == 40 && y == 10){
                printf("|");
            }
            if(x == 40 && y == 11){
                printf("|");
            }
            if(x == 40 && y == 12){
                printf("|");
            }
            if(x == 40 && y == 13){
                printf("|");
            }
            if(x == 40 && y == 14){
                printf("|");
            }
            if(x == 40 && y == 15){
                printf("|");
            }
            if(x == 40 && y == 16){
                printf("|");
            }
            if(x == 40 && y == 17){
                printf("|");
            }
            if(x == 40 && y == 18){
                printf("|");
            }
            if(x == 40 && y == 19){
                printf("|");
            }
            if(x == 40 && y == 20){
                printf("|");
            }
            if(x == 40 && y == 21){
                printf("|");
            }
            if(x == 40 && y == 22){
                printf("|");
            }
            if(x == 40 && y == 23){
                printf("|");
            }
            if(x == 40 && y == 24){
                printf("|");
            }
            


            if(ballX == x && ballY == y){
                printf("*");
            }
            if(lr1 == y && x == 5){
                printf("|");
            }
            if(lr2 == y && x == 5){
                printf("|");
            }
            if(lr3 == y && x == 5){
                printf("|");
            }

            if(rr1 == y && x == 74){
                printf("|");
            }
            if(rr2 == y && x == 74){
                printf("|");
            }
            if(rr3 == y && x == 74){
                printf("|");
            }




            else {
                printf(" ");
            }
        }
        printf("\n");
        
        // printf("%s\n", arr[i]);
    }

    // int a = 1;

    // while (a<15) //временный цикл
    // {
    //     // printf("%d", getchar());
    //     coincidence(getchar());
    //     for(int i = 0; i < 26; i++){
    //     printf("%s\n", arr[i]);
    //     }
    //     printf("X=%d Y=%d; sX = %d sY = %d", ballX, ballY, sbX, sbY);

    // } 

    return 0;
}