#include "main.h"                                                                                                                                                       
#include <unistd.h>

/**                                                                                                                                                                     
 * _putchar - write the character c to stdout                                                                                                                           
 * @c: the character to print                                                                                                                                     
 *                                                                                                                                                                      
 * Return: on Sucess 1                                                                                                                                                  
 * on error,-1 is returned,and errno is set appropriately
Sani Abuh:08 PM
*/                                                                                                                                                                     
int _putchar(char c)                                                                                                                                                    
{                                                                                                                                                                  
        return(write(1, &c, 1));                                                                                                                                        
}
