#include<stdio.h>

int main()
{

        (  "24.Rice----------------------------------half/full--------10/15-\n"
           "25.Dal-----------------------------------half/full--------7/14-\n"
           "26.Egg Curry-----------------------------half/full--------20/35-\n"
           "27.Chicken Curry--------------------------half/full--------80/130-\n"
           "28.Chicken Roast-------------------------1pice/2pice-------90/150-\n"
           "29.Chicken Bhuna--------------------------half/full--------85/160-\n"
           "30.Mutton Curry---------------------------half/full--------110/170-\n"
           "31.Mutton Bhuna---------------------------half/full--------140/220-\n"
           "32.Chicken Biriyani---------------------quater/full--------60/120-\n"
           "33.Mutton Biriyani----------------------quater/full-------85/150-\n"
           "34.Kachhi Biriyani----------------------quater/full------90/160-\n");


    printf("\n4.Others\n"
           "35.Naan---------------------------------half/full-----------15/25-\n"
           "36.Special Naan-------------------------half/full-----------20/40-\n"
           "37.Chicken Grill--------------------------Full--------------225/-\n"
           "38.Chicken Chap---------------------------Full--------------210/-\n"
           "39.Chicken BBQ----------------------------Full--------------240/-\n"
           "40.Chicken Tikka-------------------------half/full----------100/180-\n"
           "41.Chicken Korai---------------------------Full-------------110/-\n"
           "42.Vegetable Fried Rice-----------------quater/full---------60/130-\n"
           "43.Chicken Fried Rice-------------------quater/full---------120/-\n");


    printf("\n5.Tea & Drinks\n"
           "44.Tea-------------------------------milk/non milk----------15/10-\n"
           "45.Coffee-----------------------------hot/cold--------------30/45-\n"
           "46.Cold Drinks-----------------------250mg/500mg------------20/35-\n");



}




case 24 :
        {
            printf ("Enter the size of Rice: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food +=qu;

            if (i==1)
                p[order_count].cost += (10*qu);

            else
                p[order_count].cost += (15*qu);
            break;
        }

case 25 :
        {
            printf ("Enter the size of Dal: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (7*qu);

            else
                p[order_count].cost += (14*qu);
            break;
        }
case 26 :
        {
            printf ("Enter the size of Egg curry: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (20*qu);

            else
                p[order_count].cost += (35*qu);
            break;
        }

case 27 :
        {
            printf ("Enter the size of Chicken curry: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food +=qu;

            if (i==1)
                p[order_count].cost += (80 * qu);

            else
                p[order_count].cost += (135 * qu);
            break;
        }

case 28 :
        {
            printf ("Enter the size of Chicken Roast: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (90 * qu);

            else
                p[order_count].cost += (150 * qu);
            break;
        }
case 29 :
        {
            printf ("Enter the size of Chicken Buna: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (85 * qu);

            else
                p[order_count].cost += (160 * qu);
            break;
        }
case 30 :
        {
            printf ("Enter the size of Mutton curry: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (110 * qu);

            else
                p[order_count].cost += (170 * qu);
            break;
        }
case 31 :
        {
            printf ("Enter the size of Mutton Buna: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (140 * qu);

            else
                p[order_count].cost += (220 * qu);
            break;
        }

case 32 :
        {
            printf ("Enter the size of Chicken Biriyani: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (60 * qu);

            else
                p[order_count].cost += (120 * qu);
            break;
        }
case 33 :
        {
            printf ("Enter the size of Mutton Biriyani: 1. half  2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();

            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();

            p[order_count].number_of_food += qu;

            if (i==1)
                p[order_count].cost += (85 * qu);

            else
                p[order_count].cost += (150 * qu);
            break;
        }
