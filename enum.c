#include<stdio.h>



// declare an enum type
enum myEnum{
    LOW, //0 //BY Default their value is assigned from 0, 1 and so on...
    MEDIUM = 700, //1
    HIGH //2
    /* Note that if you assign a value to one specific item, the next items will update their numbers  */
};

enum level{
EU = 1,
US,
UK,
EASY,
MEDIUM2,
HARD,
ASIAN,
BANGALI
};


int main()
{
    /* An enum is a special type that represents a group of constants (unchangeable values). */
    /* To access the enum, you must create a variable of it.
    Inside the main() method, specify the enum keyword, followed by the name of the enum
    (Level) and then the name of the enum variable (myVar in this example): */

    enum myEnum e1 = HIGH;
    printf("%d %d %d %d\n", e1, LOW, MEDIUM, HIGH);

    //
    enum level current_level = ASIAN;
    switch(current_level){
    case 1 :
        printf("very very easy");
        break;
    case 2 :
        printf("super easy");
        break;
    case 3 :
        printf("easy easy");
        break;
    case 4 :
        printf("easy");
        break;
    case 5 :
        printf("just medium");
        break;
    case 6 :
        printf("just hard");
        break;
    case 7 :
        printf("it okay! chill!");
        break;
    case 8 :
        printf("Why you came here?");
        break;
    default :
        printf("choose one!");

    }

    return 0;
}
