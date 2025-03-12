#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - Entry point
 *@width : caractere a verifier
 *@height :j
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
int j = 0, i = 0;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));


if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
