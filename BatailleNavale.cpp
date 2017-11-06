#include <iostream>
#include <array>

using namespace std;

int main () {
  const int nMaxCol = 64;
  const int nMaxLign = 64;
  using rangee = std::array<char, nMaxCol>;
  using grille = std::array<rangee, nMaxLign>;
  grille places;
  
  int col=10, lign=10, nbBoat; //boatSize ;
  
  cout << "Entrer le nombre de bateaux souhaité : ";
  cin >> nbBoat;
  cout << endl;
  system ("clear");
  
  const int nMaxBoat = 16;
  std::array<int, nMaxBoat> Boat;
  cout << "Nombre de bateaux : " << nbBoat << endl;
  
  for (int i=0; i<nbBoat; i++) {
    cout << "longueur du bateau no. " << i+1 << " : ";
    cin >> Boat[i+1];
  }
  
  for (int i=0; i<col; i++) {
    for (int j=0; j<lign; j++) {
      places [i][j] = '0';
    }
  }
  
  std::cout << "\nGrille de jeux :\n";
  
  for (int i=0;i<col;i++) {
    for( int j=0;j<lign;j++) {
    std::cout << places[i][j] << ' ';			
  }
  std::cout << std::endl;
  }
  
  return 0;
}