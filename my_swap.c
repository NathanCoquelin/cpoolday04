/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** This will swap the two parameters
*/
void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
