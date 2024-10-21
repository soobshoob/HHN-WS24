#include <stdio.h>

//separation lines
void separator(){
    printf("\n");
    for(int i=0; i<60; i++){
        printf("=");
    }
    printf("\n\n");
}

//displaying players field
void field(int M, int N, int G[][5])
{
    for (int i = 0; i < M; i++) {
        // Display the matrix (playing field)
        printf("[");
        for (int j = 0; j < N; j++) {
            printf(" %d", G[i][j]);
        }
        printf(" ] \n");
    }
}

//first player move
void move1pl(int *mr, int *nc)
{
    printf("\n1 player turn:\n");
    printf("Enter row to move on (from 1 to 4): "); 
    while (scanf("%d", mr) != 1 || *mr < 1 || *mr > 4) { // Validating input for row
        printf("Invalid input. Please enter a valid row number (1-4): ");
        while (getchar() != '\n'); // Clearing the input buffer
    }
    printf("Enter column to move on (from 1 to 5): "); 
    while (scanf("%d", nc) != 1 || *nc < 1 || *nc > 5) { // Validating input for column
        printf("Invalid input. Please enter a valid column number (1-5): ");
        while (getchar() != '\n'); // Clearing the input buffer
    }
}

//second player move
void move2pl(int *mr, int *nc)
{
    printf("\n2 player turn:\n");
    printf("Enter row to move on (from 1 to 4): "); 
    while (scanf("%d", mr) != 1 || *mr < 1 || *mr > 4) { // Validating input for row
        printf("Invalid input. Please enter a valid row number (1-4): ");
        while (getchar() != '\n'); // Clearing the input buffer
    }
    printf("Enter column to move on (from 1 to 5): "); 
    while (scanf("%d", nc) != 1 || *nc < 1 || *nc > 5) { // Validating input for column
        printf("Invalid input. Please enter a valid column number (1-5): ");
        while (getchar() != '\n'); // Clearing the input buffer
    }
}

//function for win checking
void win_check(int M, int N, int G[][5], int *win, int *winner)
{
    int sum1, sum2;

    // Check for row win
    for(int i = 0; i < M; i++) {
        sum1 = 0;
        sum2 = 0;
        for (int j = 0; j < N; j++) {
            if (G[i][j] == 1){
                sum1 ++;
            }
            else if (G[i][j] == 2){
                sum2++;
            }
            
        }
        if(sum1 == N) { // Player 1 win condition
            *win = 1;
            *winner = 1;
            return;
        }
        else if(sum2 == N) { // Player 2 win condition
            *win = 1;
            *winner = 2;
            return;
        }
    }

    // Check for column win
    for(int i = 0; i < N; i++) {
        sum1 = 0;
        sum2 = 0;
        for (int j = 0; j < M; j++) {
            if (G[j][i] == 1){
                sum1 ++;
            }
            else if (G[j][i] == 2){
                sum2++;
            }
        }
        if(sum1 == M) { // Player 1 win condition
            *win = 1;
            *winner = 1;
            return;
        }
        else if(sum2 == M) { // Player 2 win condition
            *win = 1;
            *winner = 2;
            return;
        }
    }

    // Check for diagonal win (top-left to bottom-right)
    sum1 = 0;
    sum2 = 0;
    for (int i = 0; i < M && i < N; i++) {
        if(G[i][i] == 1) {
            sum1 ++;
        }
        else if(G[i][i] == 2) {
            sum2 ++;
        }
    }
    if(sum1 == M || sum1 == N) { // Player 1 win condition
        *win = 1;
        *winner = 1;
        return;
    }
    else if(sum2 == M || sum2 == N) { // Player 2 win condition
        *win = 1;
        *winner = 2;
        return;
    }

    // Check for diagonal win (top-right to bottom-left)
    sum1 = 0;
    sum2 = 0;
    for (int i = 0; i < M && i < N; i++) {
        if(G[i][N-1-i] == 1) {
            sum1 ++;
        }
        else if(G[i][N-1-i] == 2) {
            sum2 ++;
        }
    }
    if(sum1 == M || sum1 == N) { // Player 1 win condition
        *win = 1;
        *winner = 1;
        return;
    }
    else if(sum2 == M || sum2 == N) { // Player 2 win condition
        *win = 1;
        *winner = 2;
        return;
    }
}

//main function
int main(void)
{
    //initialization for array size constants
    #define M 4 
    #define N 5

    //initializing variables
    int G[M][N]={0};
    int mr=0, nc=0, win=0, mv=1, chk=0, winner=0;
    //Welcome section
    separator();
    printf("Welcome to Tik Tac Toe game\n");
    printf("2 players are required. \nYou will be asked one by one to enter row and column of sqare where you want to move.\n");
    printf("Please enter only 2 integer numbers one by one.\n");
    separator();
    printf("Good luck :)\n\nPress any key to continue:");
    getchar(); //Wait for pressing button
    separator();
    //Game start
    field(M,N,G);
    while (win==0){
        move1pl(&mr,&nc); //first player move
        while(chk==0){ //Check for empty square
            if(G[mr-1][nc-1]==0){
                G[mr-1][nc-1]=1;
                break;
            }
            printf("Error: This square is already taken.\n"); 
            move1pl(&mr, &nc);
        }
        separator();
        field(M,N,G); 
        if(mv>=4){ //Check for possible win after 4 moves
            win_check(M, N, G, &win, &winner);
            if(win){
                break;
            }
        }
        move2pl(&mr,&nc); //second player move
        while(chk==0){ //Check for empty square
            if(G[mr-1][nc-1]==0){
                G[mr-1][nc-1]=2;
                break;
            }
            printf("Error: This square is already taken.\n");
            move2pl(&mr, &nc);
        }
        separator();
        field(M,N,G);
        mv++;
        if(mv>=4){ //Check for possible win after 4 moves
            win_check(M, N, G, &win, &winner);
            if(win){
                break;
            }
        }
    }
    if (winner==1){ //Displaying winner
        printf("\n1st player win, congrats!\n");

    }
    else if (winner==2){
        printf("\n2nd player win, congrats!\n");
    }
    else{
        printf("\nError: undefined problem.\n");
    }
    separator();
    printf("Made by soobshoob(^_^)\n");
    while (getchar() != '\n'); //Crearing buffer
    getchar(); //waiting for pressing button
    return 0;
}