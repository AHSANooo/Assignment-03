#pragma once
#include<string>

using namespace std;












// ALU Class
class ALU {
private:
    int NoOfAdders;
    int NoOfSubtractors;
    int NoOfRegisters;
    int sizeOfRegisters;

public:
    // ALU class implementation
    ALU() {
        // default constructor
        NoOfAdders = 0;
        NoOfSubtractors = 0;
        NoOfRegisters = 0;
        sizeOfRegisters = 0;
    }

    // setter and getters
    int getNoOfAdders() {
        return NoOfAdders;
    }

    void setNoOfAdders(int adders) {
        NoOfAdders = adders;
    }

    int getNoOfSubtractors() {
        return NoOfSubtractors;
    }

    void setNoOfSubtractors(int subtractors) {
        NoOfSubtractors = subtractors;
    }

    int getNoOfRegisters() {
        return NoOfRegisters;
    }

    void setNoOfRegisters(int registers) {
        NoOfRegisters = registers;
    }

    int getSizeOfRegisters() {
        return sizeOfRegisters;
    }

    void setSizeOfRegisters(int size) {
        sizeOfRegisters = size;
    }
};













//ControlUnit Class
class ControlUnit {
private:
    float clock;

public:
    // ControlUnit class implementation
    ControlUnit() {
        clock = 0.0;
    }

    // setter and getters
    float getClock() {
        return clock;
    }

    void setClock(float clk) {
        clock = clk;
    }

};













// CPU Class
class CPU {
private:
    ALU alu;
    ControlUnit cu;

public:

    CPU() {


    }

    CPU(ALU alu, ControlUnit cu) {
        this->alu = alu;
        this->cu = cu;
    }


    // setter and getters
    ALU getALU() {
        return alu;
    }

    void setALU(ALU alu) {
        this->alu = alu;
    }

    ControlUnit getControlUnit() {
        return cu;
    }

    void setControlUnit(ControlUnit cu) {
        this->cu = cu;
    }
};












class MainMemory {
private:
    int capacity;
    string technologyType;

public:
    MainMemory() {
        capacity = 0;
        technologyType = "";
    }

    MainMemory(int cap, string techType) {
        capacity = cap;
        technologyType = techType;
    }

    int getCapacity() {
        return capacity;
    }

    void setCapacity(int cap) {
        capacity = cap;
    }

    string getTechnologyType() {
        return technologyType;
    }

    void setTechnologyType(string techType) {
        technologyType = techType;
    }
};













class Port {
private:
    string type;
    int baud_rate;

public:
    Port() {
        type = "";
        baud_rate = 0;
    }

    Port(string t, int rate) {
        type = t;
        baud_rate = rate;
    }

    string getType() {
        return type;
    }

    void setType(string t) {
        type = t;
    }

    int getBaudRate() {
        return baud_rate;
    }

    void setBaudRate(int rate) {
        baud_rate = rate;
    }
};
















class MotherBoard {
private:
    Port* ports;
    MainMemory mm;

public:
    MotherBoard() {
        ports = nullptr;
    }

    MotherBoard(Port* p, MainMemory m) {
        ports = p;
        mm = m;
    }

    Port* getPorts() {
        return ports;
    }

    void setPorts(Port* p) {
        ports = p;
    }

    MainMemory getMainMemory() {
        return mm;
    }

    void setMainMemory(MainMemory m) {
        mm = m;
    }
};












class PhysicalMemory {
private:
    int capacity;

public:
    PhysicalMemory() {
        capacity = 0;
    }

    PhysicalMemory(int cap) {
        capacity = cap;
    }

    int getCapacity() {
        return capacity;
    }

    void setCapacity(int cap) {
        capacity = cap;
    }
};










class GraphicsCard {
private:
    string brand;
    int memorySize;
    double price;

public:
    GraphicsCard() {
        brand = "";
        memorySize = 0;
        price = 0.0;
    }

    GraphicsCard(string b, int size, double p) {
        brand = b;
        memorySize = size;
        price = p;
    }

    string getBrand() {
        return brand;
    }

    void setBrand(string b) {
        brand = b;
    }

    int getMemorySize() {
        return memorySize;
    }

    void setMemorySize(int size) {
        memorySize = size;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double p) {
        price = p;
    }
};










class StorageDevice {
private:
    string type;
    int capacity;
    double price;

public:
    StorageDevice() {
        type = "";
        capacity = 0;
        price = 0.0;
    }

    StorageDevice(string t, int cap, double p) {
        type = t;
        capacity = cap;
        price = p;
    }

    string getType() {
        return type;
    }

    void setType(string t) {
        type = t;
    }

    int getCapacity() {
        return capacity;
    }

    void setCapacity(int cap) {
        capacity = cap;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double p) {
        price = p;
    }
};












class NetworkCard {
private:
    string type;
    int speed;
    double price;

public:
    NetworkCard() {
        type = "";
        speed = 0;
        price = 0.0;
    }

    NetworkCard(string t, int spd, double p) {
        type = t;
        speed = spd;
        price = p;
    }

    string getType() {
        return type;
    }

    void setType(string t) {
        type = t;
    }

    int getSpeed() {
        return speed;
    }

    void setSpeed(int spd) {
        speed = spd;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double p) {
        price = p;
    }
};












class PowerSupply {
private:
    int wattage;
    string efficiencyRating;
    double price;

public:
    PowerSupply() {
        wattage = 0;
        efficiencyRating = "";
        price = 0.0;
    }

    PowerSupply(int w, string rating, double p) {
        wattage = w;
        efficiencyRating = rating;
        price = p;
    }

    int getWattage() {
        return wattage;
    }

    void setWattage(int w) {
        wattage = w;
    }

    string getEfficiencyRating() {
        return efficiencyRating;
    }

    void setEfficiencyRating(string rating) {
        efficiencyRating = rating;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double p) {
        price = p;
    }
};







class Battery {
private:
    int capacity;

public:
    Battery() {
        capacity = 0;
    }

    Battery(int cap) {
        capacity = cap;
    }

    int getCapacity() {
        return capacity;
    }

    void setCapacity(int cap) {
        capacity = cap;
    }
};














class Case {
private:
    string formFactor;
    string color;

public:
    Case() {
        formFactor = "";
        color = "";
    }

    Case(string factor, string col) {
        formFactor = factor;
        color = col;
    }

    string getFormFactor() {
        return formFactor;
    }

    void setFormFactor(string factor) {
        formFactor = factor;
    }

    string getColor() {
        return color;
    }

    void setColor(string col) {
        color = col;
    }
};














class ComputerAssembly {
private:
    CPU cpu;
    MainMemory mainMemory;
    MotherBoard motherBoard;
    GraphicsCard graphicsCard;
    StorageDevice storageDevice;
    NetworkCard networkCard;
    PowerSupply powerSupply;
    Battery battery;
    Case c;
    double totalPrice;

public:


    ComputerAssembly() {
        /*cpu = nullptr;
        mainMemory = nullptr;
        motherBoard = nullptr;
        graphicsCard = nullptr;
        storageDevice = nullptr;
        networkCard = nullptr;
        powerSupply = nullptr;
        battery = nullptr;
        c = nullptr;
        */totalPrice = 0.0;
    }



    ComputerAssembly(CPU cpu, MainMemory mm, MotherBoard mb, GraphicsCard gpu,
        StorageDevice storage, NetworkCard network, PowerSupply psu, Battery battery, Case cc) {
        cpu = cpu;
        mainMemory = mm;
        motherBoard = mb;
        graphicsCard = gpu;
        storageDevice = storage;
        networkCard = network;
        powerSupply = psu;
        this->battery = battery;
        c = cc;
        totalPrice = 0.0; // Initialize totalPrice to zero
    }


    CPU getCPU() {
        return cpu;
    }

    void setCPU(CPU  cpu) {
        this->cpu = cpu;
    }

    MainMemory getMainMemory() {
        return mainMemory;
    }

    void setMainMemory(MainMemory mm) {
        mainMemory = mm;
    }

    MotherBoard getMotherBoard() {
        return motherBoard;
    }

    void setMotherBoard(MotherBoard mb) {
        motherBoard = mb;
    }

    GraphicsCard getGraphicsCard() {
        return graphicsCard;
    }

    void setGraphicsCard(GraphicsCard card) {
        graphicsCard = card;
    }

    StorageDevice getStorageDevice() {
        return storageDevice;
    }

    void setStorageDevice(StorageDevice device) {
        storageDevice = device;
    }

    NetworkCard getNetworkCard() {
        return networkCard;
    }

    void setNetworkCard(NetworkCard card) {
        networkCard = card;
    }

    PowerSupply getPowerSupply() {
        return powerSupply;
    }

    void setPowerSupply(PowerSupply supply) {
        powerSupply = supply;
    }

    Battery getBattery() {
        return battery;
    }

    void setBattery(Battery bat) {
        battery = bat;
    }

    Case getCase() {
        return c;
    }

    void setcasee(Case cc) {
        this->c = cc;
    }

    double getTotalPrice() {
        return totalPrice;
    }

    void setTotalPrice(double price) {
        totalPrice = price;
    }
};








class Computer {
protected:
    ComputerAssembly assembly;

public:
    Computer() {
       // assembly = nullptr;
    }

    Computer(ComputerAssembly a) {
        assembly = a;
    }

    ComputerAssembly getComputerAssembly() {
        return assembly;
    }

    void setComputerAssembly(ComputerAssembly a) {
        assembly = a;
    }
};





