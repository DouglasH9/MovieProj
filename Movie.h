//
// Created by Douglas Herman on 8/31/22.
//
#include <string>

#ifndef MOVIES_PROJ_MOVIE_H
#define MOVIES_PROJ_MOVIE_H


class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    std::string get_name();
    std::string get_rating();
    int get_watched();
    void increase_watched();
    Movie(std::string nm, std::string rtng, int wtchd);
};


#endif //MOVIES_PROJ_MOVIE_H
