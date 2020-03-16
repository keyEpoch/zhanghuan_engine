#include "BaseApplication.hpp"

// parse command line, read configrations, init all sub modules
int My::BaseApplication::Initialize() {
  
  m_bQuit = false;

  return 0;
}


// finalize all sub modules and clean up all runtime temporary files
void My::BaseApplication::Finalize() {

}

// one cycle of the main loop
void My::BaseApplication::Tick() {

}

bool My::BaseApplication::IsQuit() {
  
  return m_bQuit;
}
