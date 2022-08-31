//
// Created by Douglas Herman on 8/31/22.
//
#include "movie.h"
#include <vector>

#ifndef MOVIES_PROJ_MOVIES_H
#define MOVIES_PROJ_MOVIES_H


class Movies {

private:
    std::vector<Movie> movie_vec;
public:
    explicit Movies();
    bool add_movie(std::string name, std::string rating, int watched);
    bool add_watched(const std::string &name);
    void display_movies();
};




#endif //MOVIES_PROJ_MOVIES_H
