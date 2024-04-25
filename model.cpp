#include <string>

#include "model.h"

using namespace std;

Model& Model::getInstance() {
    if (!instance) {
        instance = new Model();
    }
    return *instance;
}
 
    
    
