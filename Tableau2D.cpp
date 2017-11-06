#include <iostream>
#include <array>

using namespace std;

int main () {
  const int nMaxRangees = 100;
  const int nMaxSieges = 30;
  using rangee = std::array<char, nMaxSieges>;
  using salle = std::array<rangee, nMaxRangees>;
  salle places;
  
  int rangees, sieges, cRangees, cSieges;
  cout << "Nombre de rangées souhaitées : \n";
  cin >> rangees;
  cout << "Nombre de sièges par rangées souhaitées : \n";
  cin >> sieges;
  
  for (int i=0; i<rangees; i++) {
    for (int j=0; j<sieges; j++) {
      places [i][j] = 'L';
    }
  }
  
  cout << "\nChoisisez vos places à reserver, \"0 0 \" pour terminer :\n";
  do {
    std::cin >> cRangees >> cSieges;
    if (cRangees>0 && cSieges>0){
      places[cRangees-1][cSieges-1] = 'R';
    }
  } while(cRangees!=0 || cSieges!=0);
  
  std::cout << "\nPlan des reservations de la salle:\n";
  for (int i=0;i<rangees;i++) {
    for (int j=0;j<sieges;j++) {
      std::cout << places[i][j] << ' ';			
    }
    std::cout << std::endl;
  }
  for (int i=0;i<rangees;i++) {
    for (int j=0;j<sieges;j++) {
      if (places[i][j] == 'L') {
        std::cout << "\nPremiere place Libre: " << i+1 << " " << j+1 << std::endl;
        i=rangees; j=sieges;
      }				
    }
  }
  
  return 0;
}