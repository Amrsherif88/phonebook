#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <strings.h>
int main (void)
{
    string names [] = {"Ahmed", "Amr", "Mariam", "Mohamed", "Salma", "Omar", "Youssef", "Nour", "Mahmoud", "Menna", "Mostafa", "Aya", "Karim", "Farida", "Hassan", "Malak", "Hossam", "Jana", "Khaled", "Habiba", "Tamer", "Nourhan", "Sherif", "Hana", "Ayman", "Nada", "Mina", "Dina", "Osama", "Sara"};
    int numbers [] = {2014837, 2062914, 2037582, 2091645, 2058371, 2029468, 2083156, 2047293, 2075619, 2019256, 2064738, 2031847, 2097351, 2052649, 2028173, 2086492, 2041537, 2079284, 2016375, 2068152, 2034926, 2092817, 2057193, 2025638, 2081745, 2049361, 2073825, 2018649, 2065273, 2039158};
    string n = get_string("Enter a name to search for: ");
    for(int i = 0; i < 30; i++)
    {
        if ( strcasecmp(names[i], n) == 0)
        {
            printf("Found %s / %i\n", n, numbers[i]);
            return 0;
        }
    }
    printf("%s is not in the phonebook\n" , n);
}
