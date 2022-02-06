#include <stdio.h>

int lr1 = 9;    /*левая ракетка 1 клетка*/
int lr2 = 10;   /*левая ракетка 2 клетка*/
int lr3 = 11;   /*левая ракетка 3 клетка*/
int rr1 = 10;   /*правая ракетка 1 клетка*/
int rr2 = 11;   /*левая ракетка 2 клетка*/
int rr3 = 12;   /*левая ракетка 3 клетка*/
int ballX = 35; /*координата мяча по Х*/
int ballY = 2;  /*координата мяча по Y*/
int course = 2; /*направление мяча*/
int leftPl = 0; /*счетчик левого игрока*/
int rightPl = 0; /*счетчик правого игорока*/

int print();
int coincidence();
int rlup();
int rldown();
int rrup();
int rrdown();
int ldball();
int ruball();
int rdball();
int mvBall();

int main() {
    print();

    while (leftPl < 21 && rightPl < 21) { /*главный цикл*/
        coincidence(getchar());
        print();
    }
    leftPl == 21 ? printf("Left Player Win!") : printf("Right Player Win!");
    return 0;
}


int coincidence(int n) {
    switch (n) {
    case 97:
        rlup();
        mvBall();
        break;
    case 122:
        rldown();
        mvBall();
        break;
    case 107:
        rrup();
        mvBall();
        break;
    case 109:
        rrdown();
        mvBall();
        break;
    case 32:
        mvBall();
        break;
    }
    return 0;
}

int rlup() {
    if (lr1 == 0) {
        return 0;
    }
    lr1 -= 1;
    lr2 -= 1;
    lr3 -= 1;
    return 0;
}

int rldown() {
    if (lr3 == 24) {
        return 0;
    }
    lr1 += 1;
    lr2 += 1;
    lr3 += 1;
    return 0;
}

int rrup() {
    if (rr1 == 0) {
        return 0;
    }
    rr1 -= 1;
    rr2 -= 1;
    rr3 -= 1;
    return 0;
}

int rrdown() {
    if (rr3 == 24) {
        return 0;
    }
    rr1 += 1;
    rr2 += 1;
    rr3 += 1;
    return 0;
}

int ldball() {
    ballY += 1;
    ballX -= 2;
    return 0;
}

int luball() {
    ballY -= 1;
    ballX -= 2;
    return 0;
}

int ruball() {
    ballY -= 1;
    ballX += 2;
    return 0;
}

int rdball() {
    ballY += 1;
    ballX += 2;
    return 0;
}

int mvBall() {
    if ((ballX == 73 || ballX == 74) && (ballY == rr2 || ballY == rr1 || ballY == rr3)) {/*правая ракетка*/
        if (course == 1) {
            course = 2;
        } else {
            course = 3;
        }
    }

    if ((ballX == 5 || ballX == 6) && (ballY == lr2 || ballY == lr1 || ballY == lr3)) {/*правая ракетка*/
        if (course == 3) {
            course = 4;
        } else {
            course = 1;
        }
    }

    if (ballY == 24) { /*нижняя стена*/
        if (course == 2) {
            course = 3;
        } else {
            course = 4;
        }
    }

    if (ballY == 0) { /*верхняя стена*/
        if (course == 3) {
            course = 2;
        } else {
            course = 1;
        }
    }

    if (ballX > 77) {
        leftPl+=1;
        ballY = 12;
        ballX = 72;
        course = 3;
    }

    if (ballX < 2) {
        rightPl+=1;
        ballY = 12;
        ballX = 6;
        course = 1;
    }

    switch (course) {
    case 1:
        rdball();
        break;
    case 2:
        ldball();
        break;
    case 3:
        luball();
        break;
    case 4:
        ruball();
        break;
    }

    return 0;
}

int print() {
    for (int y = 0; y < 25; y++) {
        for (int x = 0; x < 80; x++) {
            if (ballX == x && ballY == y) {
                printf("*");
                continue;
            }

            if (x == 40 &&  ((y > 0) && (y < 24))) {
                printf("|");
                continue;
            }
            if (x == 5 && (lr1 == y || lr2 == y || lr3 == y)) {
                printf("|");
                continue;
            }
            if (x == 74 && (rr1 == y || rr2 == y || rr3 == y)) {
                printf("|");
                continue;
            }
            if (x == 35 && y == 5) {
                if (leftPl > 9) {
                    x++;
                }
                printf("%d", leftPl);
                continue;
            }

            if (x == 45 && y == 5) {
                if (rightPl > 9) {
                    x++;
                }
                printf("%d", rightPl);
                continue;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}