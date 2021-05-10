 // usett1.cpp -- using basecalss and derived class
 #include "tabtenn1.h"
 #include <iostream>

 int main()
 {
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer player2(1140, "Mallory", "Duck", true);

     player1.Name();
    if (player1.HasTable())
        cout << "; has a table.\n";
    else
        cout << "; has not a table.\n";

    player2.Name();
    cout << ", Rating: " << player2.Rating();
 }