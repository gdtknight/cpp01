/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:45:39 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/27 14:30:14 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stdexcept>

std::string replaceAll(const std::string &str, const std::string &old_sub,
                       const std::string &new_sub);

static void replaceContent(std::string const &filename, std::string const &s1,
                           std::string const &s2) {
  std::ifstream ifs(filename.c_str());
  if (!ifs.is_open())
    throw std::runtime_error("Fail to open input file: \"" + filename + "\"");

  std::ofstream ofs((filename + ".replace").c_str());
  if (!ofs.is_open())
    throw std::runtime_error("Fail to create output file: \"" + filename +
                             ".replace\"");

  std::string content((std::istreambuf_iterator<char>(ifs)),
                      std::istreambuf_iterator<char>());

  ofs << replaceAll(content, s1, s2);
}

int main(int argc, char *argv[]) {
  if (argc != 4) {
    std::cout << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
    return (EXIT_SUCCESS);
  }
  try {
    replaceContent(argv[1], argv[2], argv[3]);
  } catch (std::runtime_error &e) {
    std::cout << e.what() << std::endl;
    return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}
