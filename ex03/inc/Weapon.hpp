/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:59:48 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/26 11:42:51 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
        public:
                Weapon(const std::string &type);
                const std::string &getType() const; //returns a constant reference to type
                void setType(const std::string &type); //sets type using new value passed as a parameter
        private:
                std::string _type;
};

#endif