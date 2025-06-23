#include <ctype.h>
#include "main.h"
int _isdigit(int c){
    
    for ( c = 0; c < 10; c++)
    {
        if (isdigit(c))
        {
            return (1);
        }
        else
        return (0);
        
    }
    
}