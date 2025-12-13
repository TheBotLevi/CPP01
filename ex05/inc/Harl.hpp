/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:22:32 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/12 16:59:40 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
        public:
                void complain(std::string level);
                static void (Harl::*functions[4])();
        private:
                void debug( void );
                void info( void );
                void warning( void );
                void error( void );
};