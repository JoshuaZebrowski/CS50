#include<stdio.h>
#include<string.h>
#include <cs50.h>
#include <time.h>
#include <stdbool.h>


#define GREEN   "\e[38;2;255;255;255;1m\e[48;2;106;170;100;1m"
#define RESET   "\e[0;39m"

int main(void)
{
    
    printf("\n\n");
    string answer = get_string("Hello. Are you Adam? If so, type 'yes'. \n\n ");

    if(strcmp(answer, "yes") == 0 || strcmp(answer, "YES") == 0)
    {

        //PART ONE


        printf("\n\n\n\n\n");

        printf(GREEN"                                                                                                                                                   ");
        printf(RESET"");
        printf("\n HH   HH   AAAAAAA   PPPPPPP     PPPPPPP    YY     YY      BBBBBBBB    IIIIII   RRRRRRR   TTTTTTTT  HH   HH   DDDDDD      AAAAAAA   YY     YY   !!");
        printf("\n HH   HH   AA   AA   PP     PP   PP     PP   YY   YY       BB      BB    II     RR     RR    TT     HH   HH   DD     DD   AA   AA    YY   YY    !!");
        printf("\n HH   HH   AA   AA   PP     PP   PP     PP    YY YY        BBBBBBBB      II     RRRRRRR      TT     HH   HH   DD     DD   AA   AA     YY YY     !!");
        printf("\n HHHHHHH   AAAAAAA   PPPPPPPPP   PPPPPPPPP      Y          BB      BB    II     RR RR        TT     HHHHHHH   DD     DD   AAAAAAA       Y       !!");
        printf("\n HH   HH   AA   AA   PP          PP             Y          BB      BB    II     RR   RR      TT     HH   HH   DD     DD   AA   AA       Y         ");
        printf("\n HH   HH   AA   AA   PP          PP             Y          BBBBBBBB    IIIIII   RR     RR    TT     HH   HH   DDDDDDD     AA   AA       Y       !!");
        printf(GREEN"\n                                                                                                                                                   ");
        printf(RESET"\n");
        printf("\n                                               2222     0000     2222     3333                                                                     ");
        printf("\n                                              22  22   00  00   22  22   33  33                                                                    ");
        printf("\n-------------------------------------------      22    00  00      22       333    ----------------------------------------------------------------");
        printf("\n                                                22     00  00     22     33  33                                                                    ");
        printf("\n                                              222222    0000    222222    3333                                                                     ");
        printf("\n\n");



        printf("\n                                                                                                        *     *                                                   ");
        printf("\n                                                                                            *         '       *       .  *   '     .           * *                ");
        printf("\n                                                                                                                                                         '        ");
        printf("\n                                                                                                *                *'          *          *        '                ");
        printf("\n                                                                                            .           *               |               /                         ");
        printf("\n                                                                                                '          )     '* |    |  *        |*                *  *       ");
        printf("\n                                                                                                     *      `.       )   |     *     /    *      '                ");
        printf("\n                 (||)                                                     )                .                  )      |   )          /               *             ");
        printf("\n                 |  @___oo                          '.                     ).                     -._            `                  /         *                   ");
        printf("\n       ()  ()   / (__,,,,|                           '.                     ')              ' '      ``._   *                           '          .      '       ");
        printf("\n      ) (^) ^)( _)                                   ::                      ))              *           *)*          * .   .      *                              ");
        printf("\n      )   /^)(   _)                                   '' .                 ''.)          *  '        *    `-._                       .         _..:='        *    ");
        printf("\n      )   _ /  / _)                                    ''''    ;.   ,       '' .                      .  '      *       *    *   .       _.:--'                   ");
        printf("\n  ()  )/)( ||  | )_)                                   ''.~   .''-  .^  .     ) )                  *           .     .     *         .-'         *                ");
        printf("\n  <  >      |(,,) )__)                               -.._'' )   ) )  ))  )    '' )          .               '             . '   *           *         .           ");
        printf("\n   ||      /    )___))                                ''.'') )._ ) ) ) ).))-)..)  :        *       ___.-=--..-._     *                '               '           ");
        printf("\n  | (___(      )___) )___                                '') ',)'_.);-.).) )) ''~~).                                       *       *                              ");
        printf("\n   (_____(_______;;; __;;;)                     ~'~~.._    '  -''         '''~.)    '~,                  *        _.'  .'       `.        '  *             *      ");
        printf("\n                                                 '''~.  '''~~)'. '-,           ',.'''' '~.                   *_.-'   .'            `.               *             ");
        printf("\n                                                      ' ..~',' '-''~~...___.~'''  '~.     ~.                .'                       `._             *  '         ");
        printf("\n                                                       .'  .'      _.~~''''.,       '~.   '~~~.~.  _..._                     .       .  `.     .                  ");
        printf("\n                                                     .'    |       '. (  () )';>       '''~.      '(.___.)..            *                  `                      ");
        printf("\n                                                    /      '       ..'''~~~~'''_.~  ....._.  '~.            ''~.               '                                 ");
        printf("\n                                                   '     ___)~-      ''''''''    '       ''~~.'''':==>..        '~.                                               ");
        printf("\n                                                 .'          )_~               .              '~((####)) ..       '.                                              ");
        printf("\n                                                .|       _.-'', /          ..~'                  ''~~~'    ''~~~~~  :>                                            ");
        printf("\n                                                              /'.                       .~'~~..___............~;>~''                                              ");
        printf("\n                                                           .~'  '~.         '-~~....--''__________,,....~~~~'''                                                   ");
        printf("\n                                                                   '--''~~..._____,..~~'                                                                          ");
        printf("\n                                                                  .'                                                                                              ");
        printf("\n                                                                  |                                                                                               ");


        printf("\n");



        //PART TWO -----------------------------------------------------------------------------------------------------------------------



        //TO FIND YEARS
            long seconds = time(NULL);
            seconds -= 210902400; //seconds since birth (seconds from epoch minus the difference between epoch and birth day)
            int year = 1976; //birth year
            long daysTemp = seconds / 86400;
            int leapCount = 0;
            int nonLeapCount = 0;

            while ( ((daysTemp >= 365) && (year % 4 !=0)) || ((daysTemp >= 366) && (year % 4 == 0)) )
            {
                if (year % 4 == 0){
                    year++;
                    daysTemp = daysTemp - 366;
                    leapCount++;
                }
                else {
                    if (year % 4 != 0){
                        year++;
                        daysTemp = daysTemp - 365;
                        nonLeapCount++;
                    }
                }
            }

            int yearsAlive = year - 1976;

            if (year % 4 == 0) // if leap year this year
            {
                if (daysTemp >= 250)
                {
                    yearsAlive++;  //if birthday has happened already this year
                }
            }
            else           //if not leap year this year
            {
                if (daysTemp >= 249)  //if birthday has happened already this year
                {
                    yearsAlive++;
                }
            }






            //TO FIND MONTHS
            bool isFound = false;
            int monthsThisYear = 0;

            int leapMonths[12] = {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
            //{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            int notLeapMonths[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
            //{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            if (year % 4 == 0)
            {
                while (!isFound)
                {
                    for (int i=0; i<=11; i++)
                    {
                        monthsThisYear++;
                        if (daysTemp <= leapMonths[i])
                        {
                            isFound = true;
                            break;
                        }
                    }
                }
            }
            else {
                while (!isFound)
                {
                    for (int i=0; i<=11; i++)
                    {
                        monthsThisYear++;
                        if (daysTemp <= notLeapMonths[i])
                        {
                            isFound = true;
                            break;
                        }
                    }
                }
            }

            int monthsAlive = ((year - 1976) * 12) + monthsThisYear;







            //TO FIND DAYS
            int days = 0;

            int secondsThisYear = seconds - (leapCount * 31622400) - (nonLeapCount * 31536000);
            int daysThisYear = secondsThisYear / 86400;
            days = (366 * leapCount) + (365 * nonLeapCount) + (daysThisYear);






        printf("ADAM'S CURRENT STATS: \n\n");
        int temp = 0;

        printf("Years alive: %i\n", yearsAlive);
        printf("Months alive: %i\n", monthsAlive);
        printf("Days alive: %i\n", days);
        printf("Hours alive: %i\n", days * 24);
        printf("Minutes alive: %i\n", days * 1440);
        printf("Seconds alive: %i\n", days * 86400);





        printf("\n\n");


    }


    else
    {
        printf("\n\n\n\n\n\n\n\n");
        printf("Sorry I don't have anything special for you. This is only for Adam.\n");

        printf("\n\n\n\n\n\n\n\n");

    }

}


