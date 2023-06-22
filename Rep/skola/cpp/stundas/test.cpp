#include <iostream>

void countDown(int n) {
  if (n == 0) {
    std::cout << "Blast off!\n";
  } else {
    countDown(n - 1); // recursive call
  }
}

int main() {
  void* funny = malloc(1000000000);
  countDown(510000); // start countdown from 5
  system("pause");
  return 0;
  
}
int skaitli[5]; // statiska masīva definēšana

int n = 5; // definē mainīgo priekš array izmēra
int Array = [n]; // masīva definēšana