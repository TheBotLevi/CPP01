/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:27:00 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/24 13:41:30 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main( void ) {
        std::string string = "HI THIS IS BRAIN";
        std::string *stringPTR = &string;
        std::string &stringREF = string;
        
        std::cout << "The memory address of the string variable: " << string << std::endl;
        std::cout << "The memory address held by stringPTR: " << *stringPTR << std::endl;
        std::cout << "The memory address held by stringREF: " << stringREF << std::endl;
        std::cout << std::endl;
        std::cout << "The value of the string variable: " << &string << std::endl;
        std::cout << "The value pointed to by stringPTR: " << &stringPTR << std::endl;
        std::cout << "The value pointed to by stringREF: " << &stringREF << std::endl;
        return 0;
}