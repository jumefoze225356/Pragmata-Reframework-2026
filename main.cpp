#include <iostream>
#include "framework.h"

// Pragmata Modding Framework: Core Engine v1.0.0
int main() {
    std::cout << "Initializing Pragmata Modding Framework..." << std::endl;
    
    ModFramework framework;
    framework.Initialize();
    
    std::cout << "Framework is ready to load plugins!" << std::endl;
    return 0;
}