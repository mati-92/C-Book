// PlayListDemo.cpp : Defines the entry point for console application.
/*
Copy constructor for a linked list in c++
steps:
1- Create a playlist class to store list of song
2- Create a struct named SongEntry that stores artist and title
3- Add a function that allows to add songs yo playlist
4- Create a copy constructor for playlist class
5- create a operator=
*/
#include <iostream>

#include "PlayList.h"

int main(){
    PlayList *pl = new PlayList();
    pl->add(new SongEntry("John Lenon", "Immagine"));
    pl->add(new SongEntry("Elton John", "Circle of life"));
    pl->add(new SongEntry("Michael Jackson", "Heal the world"));
    pl->add(new SongEntry("Bee Gees", "Words"));
    pl->info();

    PlayList *pl2 = new PlayList(*pl); //call copy constructor
    pl2->info();

    PlayList *pl3 = new PlayList();
    *pl3 = *pl2; // operator = is called
    pl3->info();


}