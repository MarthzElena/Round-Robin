//Definición de clase Equipo
//Proyecto 2do Parcial
#include "stdafx.h"
#include <random>
#include <string>
using namespace std;

//Definición de clase Jugador
class Jugador{
private:
	string Nombre;
	int peso;
	int goles;
	int pj;
public:
	Jugador(){
		this->Nombre=" ";
		this->peso=0;
		this->goles=0;
		this->pj=0;
	}
	Jugador(string n,int p){
		this->Nombre=n;
		this->peso=p;
		this->goles=0;
		this->pj=0;
	}
	//Funciones para setear valores de variables
	void setName(string n){
		this->Nombre=n;
	}
	void setPeso(int p){
		this->peso=p;
	}
	void setGoles(int g){
		this->goles=g;
	}
	void setPartidosJugados(int p){
		this->pj=p;
	}
	//Funciones para obtener valores de elementos
	string getName(){
		return this->Nombre;
	}
	int getPeso(){
		return this->peso;
	}
	int getGoles(){
		return this->goles;
	}
	int getPartidosJugados(){
		return this->pj;
	}
};
//Definición de clase Equipo
class Equipo{
private:
	string Nombre;
	Jugador jugadores[11];
	int peso;
	int puntos;
	int posicion;
	int pj;
	int pg;
	int pe;
	int pp;
	int gf;
	int gc;
	int diferencia;
public:
	Equipo(){
		this->Nombre=" ";
		this->peso=0;
		this->puntos=0;
		this->posicion=0;
	}
	Equipo(string Name){
		this->Nombre=Name;
		this->peso=0;
		this->puntos=0;
		this->posicion=0;
		for(int i=0;i<11;i++){
			jugadores[i]=Jugador();
		}
	}
//Funcion para agregar jugador
	void addJugador(string n,int p){
		int i=0;
		while(jugadores[i].getPeso() != 0)
			i++;
		jugadores[i].setName(n);
		jugadores[i].setPeso(p);
		if(i==10)
			this->calcularPeso();
	}
	void calcularPeso(){
		int tot=0;
		for(int i=0;i<11;i++){
			tot+=jugadores[i].getPeso();
		}
		int peso=tot/11;
		this->setPeso(peso);
	}
//Funciones para setear valores de variables
	void setPeso(int p){
		this->peso=p;
	}
	void setPuntos(int pts){
		this->puntos=pts;
	}
	void setPosicion(int pos){
		this->posicion=pos;
	}
	void setPartidosJugados(int p){
		this->pj=p;
	}
	void setPartidosGanados(int g){
		this->pg=g;
	}
	void setPartidosEmpatados(int e){
		this->pe=e;
	}
	void setPartidosPerdidos(int p){
		this->pp=p;
	}
	void setGolesFavor(int f){
		this->gf=f;
	}
	void setGolesContra(int c){
		this->gc=c;
	}
//Funciones para obtener valores de variables
	int getPeso(){
		return this->peso;
	}
	int getPuntos(){
		return this->puntos;
	}
	int getPosicion(){
		return this->posicion;
	}
	int getPartidosJugados(){
		return this->pj;
	}
	int getPartidosGanados(){
		return this->pg;
	}
	int getPartidosEmpatados(){
		return this->pe;
	}
	int getGolesAnotados(){
		return this->gf;
	}
	int getGolesEnContra(){
		return this->gc;
	}
};