
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
}

// continue = loop er new iteration e ferot jabe,, i=5 er jnno continue, tai new iteration e ferot gele 5 print hbena.


/*

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 2000; i++)
    {
        if (i == 100)
        {
            break;
        }
        printf("%d ", i);
    }
}

*/

// break = loop teke berie jabe