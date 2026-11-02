#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_intro_screen(void);
void show_exit_screen(int runs, int sum);
void process_dice_roll(int DICE_SIZE, int *p_rolls_count, int * p_total_score);
int generate_dice_value(int dice_size);

int main(void)
{       
        const int DICE_SIZE = 6;   // количество граней у кубика      
        int total_runs = 0,     // количество бросков
            sum_results = 0,    // сумма очков за всю игру
            cmd,                // текущая команда 
            value;              // текущее значение на кубике

        srand(time(NULL));
        show_intro_screen();

        do {
                printf("Enter command: ");
                scanf("%d", &cmd);
                
                switch (cmd) {
                        case 0: 
                                show_exit_screen(total_runs, sum_results);
                                break;
                        
                        case 1:         
                                process_dice_roll(DICE_SIZE, &rolls_count, &total_score); 
                                break;
                        
                        default:
                                printf("Error! Try again...\n");
                                break;
                }

        } while (cmd != 0); 

        return 0;
}


int generate_dice_value(int dice_size)
{
        return 1 + rand() % dice_size;
}


void show_intro_screen(void)
{
        printf("#########  Devil\'s bones   #########\n"
               "#                                   #\n"
               "#   Commands:                       #\n"
               "#                                   #\n"
               "#   1 - new game                    #\n"
               "#   0 - exit                        #\n"
               "#                                   #\n"
               "#####################################\n\n");
}


void show_exit_screen(int runs, int sum)
{
        printf("\nGood bye!\n");
    
        printf("Total number of die rolls: %d\n", runs);
        printf("Sum of all die rolls: %d\n", sum);
}

void process_dice_roll(int DICE_SIZE, int * p_rolls_count, int *p_total_score)
{
    int value = generate_dice_value(dece_size);
    printf("Result: %d\n", value);

    *p_rolls_count += 1;

    *p_total_score += value;
}