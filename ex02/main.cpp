/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:24:02 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/24 20:24:02 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "The memory address of the string variable : " << &str
            << std::endl;
  std::cout << "The memory address held by stringPTR      : " << stringPTR
            << std::endl;
  std::cout << "The memory address held by stringREF      : " << &stringREF
            << std::endl;

  std::cout << std::endl;

  std::cout << "The value of string variable              : " << str
            << std::endl;
  std::cout << "The value pointed to by stringPTR         : " << *stringPTR
            << std::endl;
  std::cout << "The value pointed to by stringREF         : " << stringREF
            << std::endl;

  return (EXIT_SUCCESS);
}
