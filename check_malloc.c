# include "push_swap.h"

void    *check_malloc_array(t_array *array)
{
    array->array = malloc(sizeof(t_array));
    if (!array->array)
    {
        printf("Erreur\nLe malloc du pointeur array a échoué !\n");
        return (0);
    }
    return (array->array);
}

void    *check_malloc_a(t_array *array)
{
    array->a = malloc(sizeof(int) * array->size_tab_max);
    if (!array->a)
    {
        printf("Erreur\nLe malloc du pointeur a a échoué !\n");
        return (0);
    }
    return (array->a);
}

void    *check_malloc_b(t_array *array)
{
    array->b = malloc(sizeof(int) * array->size_tab_max);
    if (!array->b)
    {
        printf("Erreur\nLe malloc du pointeur b a échoué !\n");
        return (0);
    }
    return (array->b);
}

void    *check_malloc_a_temp(t_array *array, t_garbages *garbages)
{
    garbages->a_temp = malloc(sizeof(int) * array->size_a);
    if (!garbages->a_temp)
    {
        printf("Erreur\nLe malloc du pointeur a_temp a échoué !\n");
        return (0);
    }
    return (garbages->a_temp);
}

void    *check_malloc_b_temp(t_array *array, t_garbages *garbages)
{
    garbages->b_temp = malloc(sizeof(int) * array->size_b);
    if (!garbages->b_temp)
    {
        printf("Erreur\nLe malloc du pointeur b_temp a échoué !\n");
        return (0);
    }
    return (garbages->b_temp);
}
