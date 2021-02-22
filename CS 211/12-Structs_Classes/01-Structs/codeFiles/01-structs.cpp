#include <iomanip>
#include <iostream>
#include <string>

struct Album {
    std::string title;
    std::string artist;
    int         numTracks;
    int         year;
    double      rating;
};

/*
 * Function that takes album information and returns an Album object
 *
 * Parameters:
 *      title: album title
 *      artist: album artist
 *      tracks: number of tracks in the album
 *      year: year the album was released
 *      rate: a score, out of 5 generally
 *
 * Return:
 *      An Album object containing the proivided information
 */

Album buildAlbum(std::string title, std::string artist, int tracks, int year, double rate);

/*
 * Prints album information, labeled and aligned
 *
 * Parameters:
 *      album: the album to be printed
 */

void printAlbum(const Album& album);

int main()
{
    Album trouble = buildAlbum("Trouble Will Find Me", "The National", 13, 2013, 5);

    printAlbum(trouble);

    return 0;
}

Album buildAlbum(std::string title, std::string artist, int tracks, int year, double rate)
{
    // Album album;

    // album.title     = title;
    // album.artist    = artist;
    // album.year      = year;
    // album.numTracks = tracks;
    // album.rating    = rate;

    // return album;

    // It is important that the members are provided in the same order they are
    // listed in the struct declaration
    return { title, artist, tracks, year, rate };

    // This method, I've been told, isn't supposed to be a thing until C++20,
    // but it's always compiled for me on C++17. Without having looked too hard
    // at it, it's likely a mixup of what C++20 is bringing versus what this is
    // doing. This exists only to provide clarity about what struct members are
    // being populated. The order must still match the struct declaration.
    // return {.title = title, .artist = artist, .numTracks = tracks, .year = year, .rating = rate};
}

void printAlbum(const Album& album)
{
    char prev = std::cout.fill('.');
    std::cout << std::setw(10) << std::left << "Artist" << std::setw(20) << std::right
              << album.artist << '\n'
              << std::setw(10) << std::left << "Title" << std::setw(20) << std::right << album.title
              << '\n'
              << std::setw(10) << std::left << "Year" << std::setw(20) << std::right << album.year
              << '\n'
              << std::setw(10) << std::left << "Tracks" << std::setw(20) << std::right
              << album.numTracks << '\n'
              << std::setw(10) << std::left << "Rating" << std::setw(20) << std::right
              << album.rating << '\n';

    std::cout.fill(prev);
}
