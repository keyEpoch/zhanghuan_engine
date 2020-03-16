#include "Interface.hpp"

namespace My {

Interface IRuntimeModule {

public:

  virtual ~IRuntimeModule() {};

  virtual int Initialize() = 0;    // init module
  virtual void Finalize() = 0;     // clean ops when module ends

  virtual void Tick() = 0;         // manipulate drive module to drive this module
};

}