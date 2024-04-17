/*
 * exercice1cxx
 * 
 * Copyright 2024 Boubacar <irelia@irelia>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

// Écrire un programme qui demande à l’utilisateur de saisir la largeur et la longueur d’un
// rectangle et qui en affiche le périmètre et la surface. La largeur et la longueur seront entiers.

#include <iostream>


int main()
{
	int largeur, longueur;
	std::cout << "Entrez la largeur du rectangle : "<< std::endl;
	std::cin >> largeur;
	std::cout << "Entrez la longueur du rectangle : "<< std::endl;
	std::cin >> longueur;
	std::cout << "Le périmètre du rectangle est : " << 2 * (largeur + longueur) << std::endl;
	std::cout << "La surface du rectangle est : " << largeur * longueur << std::endl;

	return 0;
}