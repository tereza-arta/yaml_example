#include <iostream>
#include <time.h>
#include <unistd.h>

int main() {
  std::cout << "Message from cpp_file:" << std::endl;

  time_t system_time = time(0);
  std::string date_time = ctime(&system_time);

  std::cout << "Current day and time:\t" << date_time << "\n";
  std::cout << "Wait for 15 seconds...\n";
  sleep(15);
  std::cout << "Exit from cpp_file" << std::endl;

  return 0;
}
