#include <iostream>

using namespace std; 


int main (){

  int metros_calidad_media, metros_calidad_alta;
  double total_calidad_media, total_calidad_alta;

  const double PRECIO_CALIDAD_MEDIA = 35.5;
  const double PRECIO_CALIDAD_ALTA = 55.3;

  const double IVA = 1.21;
  const int dias_presupuesto = 30;


  cout << "CUANTOS METROS CALIDAD MEDIA: ";
  cin >> metros_calidad_media;

  cout << "CUANTOS METROS CALIDAD ALTA: ";
  cin >> metros_calidad_alta;

  total_calidad_alta = (metros_calidad_alta * PRECIO_CALIDAD_ALTA) * IVA;
  total_calidad_media = (metros_calidad_media * PRECIO_CALIDAD_MEDIA) * IVA;


  cout << "CALIDAD MEDIA: "<<endl<<"METROS: "<< metros_calidad_media<<endl<<"TOTAL COSTE MEDIA" <<total_calidad_media<<endl<<endl;
  cout << "CALIDAD ALTA: "<<endl<<"METROS: "<< metros_calidad_alta<<endl<<"TOTAL COSTE ALTA" <<total_calidad_alta<<endl<<endl;
}
