//
// Created by Douglas Herman on 8/31/22.
//

#include "Movies.h"
#include <iostream>
#include <utility>
#include <vector>
#include <utility>
#include <algorithm>

Movies::Movies()
    : movie_vec{} {}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    Movie movie(name, rating, watched);
    for(Movie mov: movie_vec) {
        if(mov.get_name() == name) {
            std::cout << "Movie was already added." << std::endl;
            return false;
        }
    }
    movie_vec.push_back(movie);
    return true;
}

void Movies::display_movies() {
    for(Movie movie: movie_vec) {
        std::cout << "=====================================" << std::endl;
        std::cout << "Name: " << movie.get_name() << std::endl;
        std::cout << "Rating: " << movie.get_rating() << std::endl;
        std::cout << "Times watched: " << movie.get_watched() << std::endl;
        std::cout << "=====================================" << std::endl;
    }
}

bool Movies::add_watched(const std::string &name) {
    for(Movie &movie: movie_vec) {
        if(name == movie.get_name()) {
            movie.increase_watched();
            return true;
        }
    }
    std::cout << "Movie does not exist in movies list." << std::endl;
    return false;
}
