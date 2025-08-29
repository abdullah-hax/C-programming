#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    float cg;
    char name[20];
};

int main()
{
    // struct student hello;
    // printf("Enter your id\n");
    // scanf("%d", &hello.id);
    // printf("Enter your cg\n");
    // scanf("%f", &hello.cg);

    // printf("%d  ", hello.id);
    // printf("%f", hello.cg);

    struct student s1, s2, s3;

    strcpy(s1.name, "AbdurRahim");
    s1.id = 1234;

    strcpy(s2.name, "Arman");
    s2.id = 3454;

    strcpy(s3.name, "hello");
    s3.id = 3454;

    printf("%s \n%d \n\n", s1.name, s1.id);
    printf("%s \n%d \n\n", s2.name, s2.id);
    printf("%s \n%d \n", s3.name, s3.id);
}

/*


    struct student {
    --------------------
    'data type'

        int  subject;
        int  roll;
        ----  ------
       'data  'variable'
       type'

    }


    int main(){
        struct student  salman, rafi, kawser;
        --------------------  ------------------------------
        data type      3 variables

        salman.roll = 12;
        salman.subject = Science;
        rafi.roll = 3;
        rafi.subject = Arts;
        ---------------    --------
        variable      data/value


    }



*/