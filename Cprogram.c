#include <stdio.h>

//This will find the max value of the 12 months
float max(float a , float b , float c ,float d,float e , float f , float g,float h, float i, float j,float k, float l){
    float small;
    //Sets the first month to the value
    small = a;
    //Then it will ocntinue to check agianst the next one only changing the variable if its bigger
    if (b > small){
        small = b;
    }
    if (c > small){
        small = c;
    }
    if (d > small){
        small = d;
    }
    if (e > small){
        small = e;
    }
    if (f > small){
        small = f;
    }
    if (g > small){
        small = g;
    }
    if (h > small){
        small = h;
    }
    if (i > small){
        small = i;
    }
    if (j > small){
        small = j;
    }
    if (k > small){
        small = k;
    }
    if (l > small){
        small = l;
    }
    return small;
}
//This works exactly like the max function above
float min(float a , float b , float c ,float d,float e , float f , float g,float h, float i, float j,float k, float l){
    float small;
    //It will set the first month to the variable and check the rest of the months agianst this variable
    //If the next month is smaller its put into the variable
    small = a;
    if (b < small){
        small = b;
    }
    if (c < small){
        small = c;
    }
    if (d < small){
        small = d;
    }
    if (e < small){
        small = e;
    }
    if (f < small){
        small = f;
    }
    if (g < small){
        small = g;
    }
    if (h < small){
        small = h;
    }
    if (i < small){
        small = i;
    }
    if (j < small){
        small = j;
    }
    if (k < small){
        small = k;
    }
    if (l < small){
        small = l;
    }
    return small;
}
//This returns the average of 6 numbers 
float average(float a, float b, float c, float d, float e, float f){
    //Adds them all up and divide by total number
    return (( a + b + c + d + e + f) / 6);
}
// This does the same thing but averages 12 numbers instead of 6
float average_2(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l){
    return (( a + b + c + d + e + f + g + h + i + j + k + l ) / 12);
}
int main(){
    //Setting the temp and normal variables needed for the lab
    float first ,second ,third ,fourth ,fifth, six, seven, eight, nine, ten;
    float January = 23458.01, Feburary = 40112.00, March = 56011.85, April = 37820.88,May = 37904.67,June = 60200.22,July = 72400.31,August = 56210.89,September = 67230.84,October = 68233.12, November = 80950.34, December = 95225.22;
    printf("Monthly sales report for 2022 \n");
    //This will print each value and its month in order 
    printf("January %f \n", January);
    printf("Feburary %f \n", Feburary);
    printf("March %f \n", March);
    printf("April %f \n", April);
    printf("May %f \n", May);
    printf("June %f \n", June);
    printf("July %f \n", July);
    printf("August %f \n", August);
    printf("September %f \n", September);
    printf("October %f \n",October);
    printf("November %f \n", November);
    printf("December %f \n", December);

    printf("Sales Summary: \n");
    // This will go to the min function and put all the variables in
    nine = min(January, Feburary, March, April, May, June, July , August, September, October, November, December);
    printf(" Minimum Sales: %f \n ", nine);
    //This will go to the max function and put all the variables in 
    ten = max(January, Feburary, March, April, May, June, July , August, September, October, November, December);
    printf("Maximum sales %f \n", ten);
    //This will average all the 12 months until we print them
    eight = average_2(January, Feburary, March, April, May, June, July , August, September, October, November, December);
    printf("Average Sales: %f \n", eight);

    //This uses the first average function and prints all of the statments to the user
    //It also finds all of the averages and prints them on the same line
    printf("Six month Moving average report: \n");
    first = average(January, Feburary, March, April, May, June);
    printf("January - July %f \n", first);
    second = average(Feburary, March, April, May, June, July); 
    printf("Feburary - July %f \n", second);
    third= average(March, April, May, June, July, August);
    printf("March - August %f \n", third);
    fourth = average(April, May, June, July , August, September);
    printf("April - September %f \n", fourth);
    fifth = average(May, June, July , August, September, October);
    printf("May - October %f \n", fifth);
    six = average(June, July , August, September, October, November);
    printf("June - November %f \n", six);
    seven = average(July , August, September, October, November, December);
    printf("July - December %f \n", seven);

    //This will find all of the months and sales in order from highest to lowest 
    printf("Sales report(Highest to lowest) \n");
    printf(" Month  Sales \n");


}

