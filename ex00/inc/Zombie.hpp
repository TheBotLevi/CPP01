/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:58:19 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/21 14:48:59 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
        public:
                Zombie( std::string name );
                ~Zombie( void );
                void    announce( void );
        private:
                std::string _name; // private attribute
};

void    randomChump( std::string name );
Zombie *newZombie( std::string name );

#endif