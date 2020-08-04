#include <stdio.h>

struct {
    char *movie_name;
    char *character;
    int money_earned;
    float imb_ratings;
} movie1, movie2;

int main()
{
    // ###### Declaring Structure Variable ####### //
    
    movie1.movie_name = "IronMan";
    movie1.imb_ratings = 9.4;
    
    movie2.movie_name = "Captain America";
    movie2.imb_ratings = 9.2;
    
    printf("%s %f \n",movie1.movie_name, movie1.imb_ratings);
    printf("%s %f \n",movie2.movie_name, movie2.imb_ratings);

    return 0;
}
