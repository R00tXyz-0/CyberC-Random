#include <stdio.h>

typedef struct{
	char marque[20];
	int prix;
} Voiture;

int main(){
	Voiture v[5] ={ {"M", 1000}, {"B", 1022}, {"A", 2000}, {"D", 950}, {"Ac", 2800} };
	int  temp;

	for(int i = 0; i < 4; i++){
		int min  = i;
		for (int j = 1+i; j < 4; j++){
			if (v[i].prix < v[j].prix){
				temp = v[j].prix;
				v[j].prix = v[i].prix;
				v[i].prix = temp;
			}
		}	
	}
}
