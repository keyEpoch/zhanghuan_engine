#include <stdio.h>
#include "IApplication.hpp"
#include <iostream>

using namespace My;

namespace My {
  extern IApplication* g_pApp;
}

int main(int argc, char** argv) {

  int ret;

  if ((ret = g_pApp->Initialize()) != 0) {
    std::cout << "App Initialize failed, will exit now." << std::endl;
    return ret;
  }

  while (!g_pApp->IsQuit()) {
    g_pApp->Tick();   // drive 
  }

  g_pApp->Finalize();

}