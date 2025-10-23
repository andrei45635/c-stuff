#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

#define MAX_INT 99999

bool is_prime(int n);

int main() {
    
    int no1 = 0;
    int no2 = 0;

    char choice;

    srand(time(NULL));
    int r = rand();

    int wager = 0;

    int player_gold = 1000;
    int house_gold = MAX_INT;

    printf("(You) have %d while the house has %d\n", player_gold, house_gold);

    printf("Your first number, good sire: ");
    scanf("%d", &no1); 
    printf("Your second number, your lordship? ");
    scanf("%d", &no2);
    printf("Ah... good choices my lord! Your numbers are %d and %d!\n", no1, no2);

    printf("Care to plassse a wagerrr?... We shall see if your wits are about you! [y/n]");
    scanf(" %c", &choice);
    if(choice == 'y') {
        printf("Heheh yesss... let's sssee... what is your wager?");
        scanf("%d", &wager);
        printf("Alright... I'll match your wager...\n");
        
        player_gold -= wager;
        house_gold -= (house_gold / r);
        
        printf("Thisss isss a sssimple game, my laird... If both of your numbers arrre \"magical\" then you win back your wager doubled!\n");
        printf("If not... (You) forfeit your SOUL nyeheheheh!\n");
        
        printf("The two numbers %d and %d you first uttered... let's use them...\n", no1, no2);

        if(is_prime(no1) && is_prime(no2)) {
            printf("WHAAAAT?!?!? NOOOOOOOOOO!!!!!\n");
            player_gold += wager * 2;
            player_gold += house_gold;
        }
    } else {
        printf("Pfah, spoilsport! Begone!\n");
        exit(EXIT_SUCCESS);
    }

    printf("Congrats! (You) won or something: your money = %d\n", player_gold);

    exit(EXIT_SUCCESS);
}

bool is_prime(int n) {

    bool prime = true;

    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
        }
    }
    
    if(prime) return true;
    else return false;

}
