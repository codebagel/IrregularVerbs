#include "main.h"

void show_hint()
{
    puts("It seems you have passed an invalid set of arguments.\nUsage:\n\
    irregv - will show you all the irregular verbs\n\
    irregv a - shows all the irregular verbs starting with 'a'\n\
    irregv verb_in_bare_inf - checks if the verb is irregular\n\
    and if it is so, shows all the forms of the given verb");
}

int main(int argc, char* argv[])
{

    // If we have no arguments, just print all the list of verbs
    
    if (argc == 1)
    {
        int i;
        for (i = 0; i < VERBS_QUANTITY; ++i)
        {
            printf("%s %s %s\n", verbs[i][0], verbs[i][1], verbs[i][2]);
        }
        return 0;
    }

    else if (argc != 2)
    {
        show_hint();
        return 0;
    }
      
    // Convert the given verb to lowercase
    
    char* verb = argv[1];
    
    while (*verb)
    {
        *verb = tolower(*verb);
        ++verb;
    }
    
    // If we got a letter, print all the verbs starting with this letter

    if (strlen(argv[1]) == 1)
    {
        // Calculate the index of the given letter in array of indexes
        int letter_index = (int)argv[1][0] - LOWERCASE_A_ASCII_CODE;
        
        if (letter_index < 0 || letter_index > 25)
        {
            show_hint();
            return 0;
        }
        
        // Calculate the quantity of the verbs starting with given letter
        int verbs_quantity = letters[letter_index+1] - letters[letter_index];
        
        if (verbs_quantity == 0)
        {
            printf("There are no any irregular verbs starting with '%c'\n", argv[1][0]);
        }
        else
        {
            int i;
            for (i = 0; i < verbs_quantity; ++i)
            {
                int n = letters[letter_index]+i;
                printf("%s %s %s\n", verbs[n][0], verbs[n][1], verbs[n][2]);
            }
            printf("\nTotally %i verbs starting with '%c'\n", verbs_quantity, argv[1][0]);
        }
    }
    
    // Otherwise, we search in array of verbs for given word
    
    else
    {
        char* verb = argv[1];
        
        int i, found = 0;
        for (i = 0; i < VERBS_QUANTITY; ++i)
        {
            if (!strcmp(verbs[i][0], verb) || !strcmp(verbs[i][1], verb) || !strcmp(verbs[i][2], verb))
            {
                printf("%s %s %s\n", verbs[i][0], verbs[i][1], verbs[i][2]);
                found = 1;
            }
        }
        
        if (!found)
        {
            printf("The word '%s' does not belong to irregular verbs list\n", verb);
        }
    }
    
    return 0;
}
