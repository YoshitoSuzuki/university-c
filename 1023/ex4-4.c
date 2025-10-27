#include <stdio.h>
#define N 12
#define M 20
#define S 2

int main(void) {
    char input;
    char maze[][N][M] = {
        {
            "####################",
            "#S          ##     #",
            "# #####   ####   ###",
            "# ##      ##       #",
            "# ##  ######  ##   #",
            "####  ##       #   #",
            "#     ##  ###  #   #",
            "#  #####  ###  #   #",
            "#         ###  #  G#",
            "####################",
            "######stage 1#######",
            "####################"
        },
        {
            "####################",
            "#S          ##     #",
            "# #####   ####   ###",
            "# ##      ##       #",
            "# ##  ######  ##   #",
            "####  ##       #   #",
            "#     ##  ###  #   #",
            "#  #####  ###  #   #",
            "#         ###  #  G#",
            "####################",
            "######stage 2#######",
            "####################"
        }
    };

    int start[2] = {1, 1};
    int goal[2] = {8, 18};
    int player[2] = {start[0], start[1]};

    int stage[S];
    for (int i=0; i<S; i++) {
        stage[i] = 1;
    }

    for (int s=0; s<S; s++) {
        while (stage[s]) {
            for (int i=0; i<N; i++) {
                for (int j=0; j<M; j++) {
                    printf("%c", maze[s][i][j]);
                }
                printf("\n");
            }
        
            if (player[0] == goal[0] && player[1] == goal[1]) {
                printf("goal!\n");
                stage[s] = 0;
                break;
            }
        
            printf("W/A/S/D: ");
            scanf(" %c", &input);
        
            int nextLocation[2] = {player[0], player[1]};
        
            if (input == 'W' || input == 'w') {
                nextLocation[0]--;
            }else if (input == 'S' || input == 's') {
                nextLocation[0]++;
            }else if (input == 'A' || input == 'a') {
                nextLocation[1]--;;
            }else if (input == 'D' || input == 'd') {
                nextLocation[1]++;;
            }else {
                printf("Enter W/A/S/D\n");
            }
        
            if (maze[s][nextLocation[0]][nextLocation[1]] != '#') {
                maze[s][player[0]][player[1]] = ' ';
                maze[s][start[0]][start[1]] = 'S';
                maze[s][goal[0]][goal[1]] = 'G';
                player[0] = nextLocation[0];
                player[1] = nextLocation[1];
                maze[s][player[0]][player[1]] = '@';
            }
        }
    }
    
    

    return 0;
}