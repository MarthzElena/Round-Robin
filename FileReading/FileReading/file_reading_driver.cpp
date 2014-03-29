//Author: Martha Elena Loera

//a class for reading input .txt files


#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include "Equipo.cpp"

using namespace std;


//method for initialize the teams values
void read_file(string file_name){
	//Equipo *equipo;
	//Torneo torneo;
	//Jugador jugador;
	
	string nombre_jugador;
	int peso;
	string line;
	string round_tipe;
	string total_teams;
	string nombre_equipo;
	
	int line_count = 0;
	int jugador_count = 0;
	bool peso = false;

	ifstream myfile(file_name);
	if (myfile.is_open())
	{
		
		while (getline(myfile, line))
		{
			int inicio;
			if (line.find_first_of('R', 0) == 0){
				
			}
			switch (line_count)
			{
			case 0 : //Round Type
				round_tipe = line;
				line_count++;
				break;

			case 1 : //Total equipos
				total_teams = line;
				line_count++;
				break;

			case 2: //Nombre equipo
				Equipo equipo = Equipo(line);
				if (jugador_count == 0){
					jugador_count++;
				}
				while (1 < jugador_count < 25){
					if (peso){
						peso = false;
						nombre_jugador = line;
					}
					else{
						peso = true;
						peso = std::stoi(line);
					}
					equipo.addJugador(nombre_jugador, peso);
					jugador_count++;
				}
				line_count++;
				break;

			}
		}
		myfile.close();
	}
	else {
		cout << "couldn't find the madafaca" << '\n';
	}

}



void main(){
	
	string file = "C:/Users/martha/workspace/Round Robin/FileReading/prueba.txt";
	read_file(file);

	system("pause");

}