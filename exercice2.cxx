/*
 * filename
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

// Écrire un programme qui demande à l’utilisateur de saisir deux entiers A et B, puis qui
// échange les contenus des variables A et B, et enfin qui affiche A et B.

#include <iostream>

int main()
{
    int A, B, temp;
    std::cout << "Entrez la valeur de A : " << std::endl;
    std::cin >> A;
    std::cout << "Entrez la valeur de B : " << std::endl;
    std::cin >> B;
    temp = A;
    A = B;
    B = temp;
    std::cout << "La valeur de A est : " << A << std::endl;
    std::cout << "La valeur de B est : " << B << std::endl;
    return 0;
}