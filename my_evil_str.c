/*
** EPITECH PROJECT, 2022
** my_evil_str
** File description:
** This will reverse the order of a string
*/

int my_strlen(char const *str);

void my_swap_char(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

char* my_evil_str(char *str)
{
    unsigned int sizeofstring = my_strlen(str) - 1;
    unsigned int count = 0;

    while ( count <= (int)( ( sizeofstring - 1 ) / 2 ) ) {
        my_swap_char(&str[count], &str[sizeofstring - count]);
        count++;
    }
    return str;
}
