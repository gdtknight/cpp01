#include "Zombie.hpp"
#include <string>

void randomChump(std::string name) {
  Zombie zombie;

  zombie = Zombie(name);
  zombie.announce();
}
