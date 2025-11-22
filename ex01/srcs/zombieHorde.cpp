/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:09:14 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/22 15:14:52 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
        if (N <= 0)
                return NULL;
        Zombie* horde = new Zombie[N];

        for (int i = 0; i < N; i++) {
                horde[i].setName(name);
        }

        return horde;
}