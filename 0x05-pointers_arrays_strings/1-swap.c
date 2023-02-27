#include "main.h"
/**
 * swap_int- just swipe my numbers
 * @a:parameter one
 * @b:paramter two
*/

void swap_int(int *a, int *b)
{
int temp = *b;

*b = *a;
*a = temp;

}
