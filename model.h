#pragma once

#include <string>

using namespace std;

class Model {
    public:
        static Model& getInstance();
        void mSatus();
        void mGo();
        void mCreate();
        Model(const Model&) = delete;
        Model& operator=(const Model&) = delete;

    private:
        static Model* instance;

        Model(){};
        ~Model();
};

class Space {

};

class ImperialAgent {

};

class Midshipman : public ImperialAgent {

};

class Commander : public ImperialAgent {

};

class Admiral : public ImperialAgent {

};


class SpaceStation {
    string State;
    void stop();
    void setFlightDestination();
    void setFlightDirection();
    void displayStatus();
};

class FortressStar {

};

class SpaceCraft {

    public:
        SpaceCraft();
        void course();
        void position();
        void destination();
        void attack();
        void shoot();
        void stop();

};

class Shuttle : public SpaceCraft {
    
    string status;
    
    Shuttle();
    
    void startSupply();

};

class TieBomber : public SpaceCraft  {
    
    TieBomber();
    void destination();
    void course();
    void position();
};

class StarDestroyer : public SpaceCraft  {
    string status;
    StarDestroyer();
    void destination();
    void course();
    void position();
    void shoot();
};

class MillenniumFalcon : public SpaceCraft  {
    string status;
    MillenniumFalcon();
     void course();
    void position();
    void attack();   

};
