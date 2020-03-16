#include "BaseApplication.hpp"

namespace My {

// BaseApplication : IApplication
BaseApplication g_App;
IApplication* g_pApp = &g_App;  // base class pointer

}