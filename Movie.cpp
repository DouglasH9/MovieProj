//
// Created by Douglas Herman on 8/31/22.
//

#include "Movie.h"

#include <utility>

Movie::Movie(std::string nm, std::string rtng, int wtchd)
    : name{nm}, rating{rtng}, watched{wtchd} {}

std::string Movie::get_name() { return name; }
std::string Movie::get_rating() { return rating; }
int Movie::get_watched() { return watched; }

void Movie::increase_watched() {
    watched += 1;
}
