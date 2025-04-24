#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    
    int dice_rolls[100];                     // Array for 100 rolls


    // Randomize 100 dicerolls and stores in array dice_sum
    for (int i = 0; i < 100; i++){        
        dice_rolls[i] = (rand() % 6) + 1;  // Gives random number 1-6
        printf("roll %d\n", dice_rolls[i]);
        }
    

    // Print number of sides (1-6)
    
                  // Print number of 1s, 2s, 3s etc..
    
    
    // Print sum of all roll
    
    // Calculate average value of all rolls and print with 1 decimal
              // Divide sum with 100 to get average value
                // Print average value

    return 0;
}
