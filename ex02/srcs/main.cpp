/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:27:00 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/22 15:40:50 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int     main( void ) {
        int N = 3;

        Zombie *heapZombie = newZombie("Arttu");
        Zombie* horde = zombieHorde(N, "Gabrielle");

        randomChump("Levi");
        heapZombie->announce();
        for (int i = 0; i < N; i++) {
                horde[i].announce();
        }
        delete(heapZombie);
        delete[] horde;
}