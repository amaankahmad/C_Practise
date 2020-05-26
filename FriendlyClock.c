/* The Friendly Clock */
/* Neal Bangerter - February 2020 */

#include <stdio.h>

int main()
{
    int hours, mins;    /* variables to hold the use-entered hour and minutes */
    int valid = 0;      /* we will use this as a simple check to see if entries are valid */
    int time_of_day;    /* 0 = in the early morning, 1 = in the morning,
                           2 = in the afternoon, 3 = in the evening, 4 = at night */

    printf("----------------------------------\n");
    printf("Welcome to the Friendly Clock! :-)\n");
    printf("----------------------------------\n\n");

    while (!valid) {

        /* Have the user enter the value for hours */
        printf("Please enter the hour (a number from 0 to 23): ");
        scanf("%d", &hours);

        /* Check if the answer is valid */
        if (hours >= 0 && hours <= 23) {  /* Check if the entered hours is between 0 and 23 */
            valid = 1;  /* If it is, set valid to 1 so we don't go through this while loop again */
        }
        else {
            printf("The number for the hour must be between 0 and 23.\n\n");
        }

    }

    valid = 0;

    while (!valid)
    {
        /* Have the user enter the value for mins */
        printf("Please enter the minutes (a number from 0 to 59): ");
        scanf("%d", &mins);

        /* Check if the answer is valid */
        if (mins >= 0 && mins <= 59) { /* Check if the entered minutes entered is between 0 and 59 */
            valid = 1;  /* If it is, set valid to 1 so we don't go through this while loop again */
        }
        else {
            printf("The number for the minutes must be between 0 and 59.\n\n");
        }

    }

    printf("\n");

    if (hours == 12) {
        time_of_day = 2;      /* Special case -- don't subtract 12 but still afternoon (2) */
    }
    else if (hours < 5) {
        time_of_day = 0;      /* Before 5am is early morning (0) */
    }
    else if (hours >=5 && hours < 12) {
        time_of_day = 1;      /* Between 5am and noon is morning (1) */
    }
    else if (hours > 12 && hours < 18) {
        hours = hours - 12;
        time_of_day = 2;      /* between noon and 18:00 we'll call afternoon (2) */
    }
    else if (hours >=18 && hours < 22) {
        hours = hours - 12;
        time_of_day = 3;      /* between 18:00 and 22:00 we'll call the evening (3) */
    }
    else {
        hours = hours - 12;
        time_of_day = 4;      /* if we've made it this far, it is after 22:00 and before midnight, and we'll call it night (4) */
    }


    /* Now we'll use a series of if statements to display in the most suitable format */
    if (mins == 1) {
        printf("The time is 1 minute past %d ", hours);
    }
    else if (hours <= 11 && mins == 59) {
        printf("The time is 1 minute to %d ", hours+1);
    }
    else if (mins <= 30) {
        printf("The time is %d minutes past %d ", mins, hours);
    }
    else if (mins > 30) {
        printf("The time is %d minutes to %d ", 60-mins, hours+1);
    }

    /* Now we'll print out the time of day */
    if (time_of_day == 0) {
        printf("in the early morning.\n\n");
    }
    else if (time_of_day == 1) {
        printf("in the morning.\n\n");
    }
    else if (time_of_day == 2) {
        printf("in the afternoon.\n\n");
    }
    else if (time_of_day == 3) {
        printf("in the evening.\n\n");
    }
    else {
        printf("at night.\n\n");
    }

    printf("Thank you for using the Friendly Clock! :-)\n");

    return 0;
}
