#include "interface.h"
//commit
void Interface::readfileTerritorios(string filename) {
	ifstream file;
	string nome, categoria;
	int id_territorio, resistencia, c_produtos, c_ouro, p_vitoria;
	Territorios* t;

	file.open(filename);
	if (file.is_open()) {
		while (!file.eof()) {
			file >> id_territorio >> nome >> categoria >> resistencia >> resistencia >> c_produtos >> c_ouro >> p_vitoria;
			c = new carros(inicialCap, maxCap, label, model);
			vec_carros.push_back(c);
		}
	}
	else {
		cout << "O ficheiro dos carros não abriu!!" << endl;
	}
	cout << "Carros:" << endl;
	for (int i = 0; i < vec_carros.size(); i++) //RETIRAR ANTES DE ENVIAR
		cout << vec_carros[i]->getCap_inicial() << " " << vec_carros[i]->getCap_max()  << " " << vec_carros[i]->getMarca() << " " << vec_carros[i]->getModelo()
		<< " Id:" << vec_carros[i]->getId()<< endl;
}
