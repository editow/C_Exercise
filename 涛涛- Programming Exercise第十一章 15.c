/* Programming Exercise 11-15 */
#include <stdio.h>
#include <ctype.h>
/* #include <console.h> */   /* Macintosh adjustment */

int main(int argc, char *argv[])
{
    char mode = 'p';
    int ok = 1;
    int ch;
    
    /*argc = ccommand(&argv); */  /* Macintosh adjustment */  

    if (argc > 2)
    {
        printf("Usage: %s [-p | -u | -l]\n", argv[0]);
        ok = 0;                /* skip processing input */
    }
    else if (argc == 2)
    {
        if (argv[1][0] != '-')
        {
            printf("Usage: %s [-p | -u | -l]\n", argv[0]);
            ok = 0;
        }
        else 
            switch(argv[1][1])
            {
                case 'p' :
                case 'u' :
                case 'l' : mode = argv[1][1];
                           break;
                default  : printf("%s is an invalid flag; ", argv[1]);
                           printf("using default flag (-p).\n");
            }
    }
    
    if (ok)
        while ((ch = getchar() ) != EOF)
        {
            switch(mode)
            {
                case 'p'  :  putchar(ch);
                             break;
                case 'u'  :  putchar(toupper(ch));
                             break;
                case 'l'  :  putchar(tolower(ch));
            }
        }
                            
    return 0;
}
