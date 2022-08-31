#include <iostream>
#include "Movie.h"
#include "Movies.h"

int main() {

    Movies my_movies{};
    my_movies.add_movie("Saving Private Ryan", "R", 10);
    my_movies.add_movie("Lost Highway", "R", 2);
    my_movies.add_movie("The Hidden Fortress", "PG-13", 5);

    my_movies.display_movies();
    my_movies.add_movie("Saving Private Ryan", "R", 10);
    my_movies.display_movies();
    Movie movie("adas", "r", 0);
    my_movies.add_watched("Saving Private Ryan");
    my_movies.add_watched("asdfa");
    std::cout << "___________________________" << std::endl;
    my_movies.display_movies();


    return 0;
}
