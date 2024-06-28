#include <iostream>
#include <vector>

using namespace std;

int main() {
  // vector<int> records {2,3,2,4,5};
  // vector <string> letras (10) ;
  // vector <double> salario_base (350, 2125.25);
  //int i =0;
  // while(i<salario_base.size()){
  //   cout << salario_base[i]<<endl;
  //   i++;
  // }
  // records.at(3) = 1548;
  //
  // cout << records.at(3);
  // records.push_back(105);
  //
  // int i= 0;
  // while (i < records.size()) {
  //   cout << records[i] << endl;
  //   i++;   
  // }
  //   cout << records[i]<<endl;
  //   records[i] = records[i] +0.1*521;
  //   cout << records[i]<<endl;
  // }
  
  // string character;
  //
  // cout << "Introduce your character: ";
  // cin >> character;
  //
  // int limit = 15;
  // int i = 0;
  // vector<string> cadenas(limit);
  // while (i < limit + 1 ) {
  //   int j = i;
  //   string cadena ="";
  //   while (j < limit + 1){
  //     cadena += character;
  //     j++;
  //   }
  //   cadenas[i] = cadena;
  //   cout << cadena << endl;
  //   i++;
  // }
  
  cout << "Cuantots elementos quieres que tenga el vector.";
            
  int elementos = 0;
  cin >> elementos;

  vector <int > records(elementos);

  for(int i = 0; i< elementos;i++){
    cout<<"Introduce valor para "<< i<<endl;
    
    cin >>  records[i];
  
  }
  cout << "sE VA A MOSTRALLL"<<endl;
  for (int j=0; j<records.size(); j++){
    cout << records[j]<<endl;
  }

  return 0;
}
