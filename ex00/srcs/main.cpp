/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:27:00 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/21 15:03:30 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int     main( void ) {
        Zombie *heapZombie = newZombie("Arttu");

        randomChump("Levi");
        heapZombie->announce();
        delete(heapZombie);
}