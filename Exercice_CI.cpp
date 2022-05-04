#include <stdio.h>
#include <string>
#include <string.h>

typedef struct Ddn {
	int n_jour;
	int n_mois;
	int n_année;
}Ddn;

typedef struct adresse {
	char* str_rue;
	char* str_cp;
	char* str_ville;
}adresse;

typedef struct CID {
	int n_id;
	
	char * str_nom;
	char * str_prénom;
	Ddn* t_Ddn;
	adresse* t_adresse;
}CID;

void saisirCID(tb_cid);
void afficheCID(tb_cid);

int main(){

}

void saisirCID(tb_cid) {

}

void afficheCID(tb_cid) {

}