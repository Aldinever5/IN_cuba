#include "Sensor.h"
#include <vector>
#include "Temp_Hum.h"
#include "Incubadora"


void delay (int ms){
}
int main(){
Temp_Hum th;

std::vector<Temp_Hum> _thvec;

int contador = 1;

do{
if(contador % 21){
	int i = 0;
	Sensor temp(2);
	for(i=0;i<_thvec.size();i++){
	temp.acumularEn(0,_thvec[i].temperatura());
	temp.acumularEn(1,_thvec[i].humedad());
}_

temp.promediarEntre(0,_thvec.size());
temp.promediarEntre(1, _thvec.size());
contador = 1;
_thvec.clear();

}

delay(50);
}while (true)
return 0;
}



}
