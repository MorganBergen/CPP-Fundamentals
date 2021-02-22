/*
 Morgan Bergen
 B493R546
 Lab09
 
 Define an Album type using a struct. Data members include: artist, title, year, no. of tracks, rating (out of 5). Declare and implement a function called printAlbum. In main(), they will declare an Album, fill it out, and sent it to be printed.
 
 A printed album shall look like this:
 Artist: [ARTIST]
 Title: [TITLE]
 Year: [YEAR]
 Tracks: [NO. TRACKS]
 Rating: [RATING]

 An example:
 Artist: twenty one pilots
 Title: Trench
 Year: 2018
 Tracks: 14
 Rating: 4.8
 
 */

#include <iostream>
#include <iomanip>
#include <string>

struct Album {
    std::string     artist;
    std::string     title;
    int             year;
    int             numTracks;
    std::string     genre;
    double          ratings;
};

Album buildAlbum(std::string title, std::string artist, int tracks, int year, double rate);
void printAlbum(const Album& album);

int main(){
    
    Album fourfourfour = buildAlbum("The Story of O.J.", "JAY-Z", 10, 2017, 5.0);
    
    printAlbum(fourfourfour);
    
    return 0;
}

Album buildAlbum(std::string title, std::string artist, int tracks, int year, double rate){
    
    return { .title = title, .artist = artist, .numTracks = tracks, .year = year, .ratings = rate };

}

void printAlbum(const Album& album){
    
    char prev = std::cout.fill('.');
    std::cout   << std::setw(20) << std::left << "Artist" << std::setw(20) << std::right << album.artist << '\n'
                << std::setw(20) << std::left << "Title" << std::setw(20) << std::right << album.title << '\n'
                << std::setw(20) << std::left << "Year" << std::setw(20) << std::right << album.year << '\n'
                << std::setw(20) << std::left << "Tracks" << std::setw(20) << std::right << album.numTracks << '\n'
                << std::setw(20) << std::left << "Rating" << std::setw(20) << std::right << album.ratings << '\n';
    
    std::cout.fill(prev);
    
}
