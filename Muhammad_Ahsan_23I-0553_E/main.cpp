/*

Name: Muhammmad Ahsan
Section: E,
Roll number: 23I-0553,
Instructor: Ma'
am Marium Hida
TA full name: Muhammad Ali Naveed

*/

#include "Header.h"

#include <iostream>
#include <string>

using namespace std;




void displayAssemblySpecifications(ComputerAssembly assembly,int x) {
    
    
    
    
    cout << "CPU Specifications:" << endl;
    // Assuming there are getter functions in CPU class to retrieve specifications
    cout << "  ALU No. of Adders: " << assembly.getCPU().getALU().getNoOfAdders() << endl;
    cout << "  ALU No. of Subtractors: " << assembly.getCPU().getALU().getNoOfSubtractors() << endl;
    cout << "  ALU No. of Registers: " << assembly.getCPU().getALU().getNoOfRegisters() << endl;
    cout << "  ALU Size of Registers: " << assembly.getCPU().getALU().getSizeOfRegisters() << endl;








    // Display Main Memory specifications
    cout << "Main Memory Specifications:" << endl;
    // Assuming there are getter functions in MainMemory class to retrieve specifications
    cout << "  Capacity: " << assembly.getMainMemory().getCapacity() << endl;
    cout << "  Technology Type: " << assembly.getMainMemory().getTechnologyType() << endl;

    
    
    
    
    
    
    
    // Display Motherboard specifications
    cout << "Motherboard Specifications:" << endl;
    // Assuming there are getter functions in MotherBoard class to retrieve specifications
    // For ports, you might need to iterate through the array of ports
    Port* ports = assembly.getMotherBoard().getPorts();
    for (int i = 0; i < x; ++i) {
        cout << "  Port " << (i + 1) << " Type: " << ports[i].getType() << endl;
        cout << "  Port " << (i + 1) << " Baud Rate: " << ports[i].getBaudRate() << endl;
    }
    cout << "  Main Memory Capacity: " << assembly.getMotherBoard().getMainMemory().getCapacity() << endl;










    // Display Graphics Card specifications
    cout << "Graphics Card Specifications:" << endl;
    // Assuming there are getter functions in GraphicsCard class to retrieve specifications
    cout << "  Brand: " << assembly.getGraphicsCard().getBrand() << endl;
    cout << "  Memory Size: " << assembly.getGraphicsCard().getMemorySize() << endl;
    cout << "  Price: " << assembly.getGraphicsCard().getPrice() << endl;

    // Display Storage Device specifications
    cout << "Storage Device Specifications:" << endl;
    
    
    
    
    
    // Assuming there are getter functions in StorageDevice class to retrieve specifications
    cout << "  Type: " << assembly.getStorageDevice().getType() << endl;
    cout << "  Capacity: " << assembly.getStorageDevice().getCapacity() << endl;
    cout << "  Price: " << assembly.getStorageDevice().getPrice() << endl;





    // Display Network Card specifications
    cout << "Network Card Specifications:" << endl;
    // Assuming there are getter functions in NetworkCard class to retrieve specifications
    cout << "  Type: " << assembly.getNetworkCard().getType() << endl;
    cout << "  Speed: " << assembly.getNetworkCard().getSpeed() << endl;
    cout << "  Price: " << assembly.getNetworkCard().getPrice() << endl;

    
    
    
    
    
    
    
    
    
    
    // Display Power Supply specifications
    cout << "Power Supply Specifications:" << endl;
    // Assuming there are getter functions in PowerSupply class to retrieve specifications
    cout << "  Wattage: " << assembly.getPowerSupply().getWattage() << endl;
    cout << "  Efficiency Rating: " << assembly.getPowerSupply().getEfficiencyRating() << endl;
    cout << "  Price: " << assembly.getPowerSupply().getPrice() << endl;

    
    
    
    
    
    
    
    // Display Battery specifications
    cout << "Battery Specifications:" << endl;
    
    
    
    
    // Assuming there are getter functions in Battery class to retrieve specifications
   
    cout << "  Capacity: " << assembly.getBattery().getCapacity() << endl;

    
    
    
    // Display Case specifications
    cout << "Case Specifications:" << endl;
   


    cout << "  Form Factor: " << assembly.getCase().getFormFactor() << endl;
    cout << "  Color: " << assembly.getCase().getColor() << endl;

    
    
    
    
    
    // Display total price
    assembly.setTotalPrice(assembly.getGraphicsCard().getPrice()+ assembly.getNetworkCard().getPrice() + assembly.getPowerSupply().getPrice() + 50);
    
    
    cout << "Total Price: $" << assembly.getTotalPrice() << endl;
}

// function to validate GPU type based on computer type
bool validateGPUType(string computerType, string gpuType) {



    if (computerType == "mac" && gpuType != "AppleGPU") {
    
        
        cout << "Error: Mac computers can only have Apple GPUs." << endl;
        
        return false;
    
    }
    else if ((computerType == "pc" || computerType == "laptop") && gpuType != "NvidiaGPU" && gpuType != "AMDGPU") {
    
        cout << "Error: PCs and laptops can only have Nvidia or AMD GPUs." << endl;
        
        return false;
    
    }
    
    return true;

}


void createPCWindowsAssembly() {
    // PC with Windows assembly
    cout << "Creating PC assembly with Windows..." << endl;
    // declaring variables to store user inputs
    string computerType;
    int cpuAdders, cpuSubtractors, cpuRegisters, cpuRegSize;
    float controlUnitClock;
    int mainMemoryCapacity;
    string mainMemoryTechType;
    int motherboardPortsCount;
    string portType;
    int portBaudRate;
    string gpuBrand;
    int gpuMemorySize;
    double gpuPrice;
    string storageType;
    int storageCapacity;
    double storagePrice;
    string networkType;
    int networkSpeed;
    double networkPrice;
    int psuWattage;
    string psuEfficiency;
    double psuPrice;
    int batteryCapacity;
    string caseFormFactor;
    string caseColor;




    // getting input data for CPU
    cout << "Enter number of adders for CPU: ";
    cin >> cpuAdders;
    cout << "Enter number of subtractors for CPU: ";
    cin >> cpuSubtractors;
    cout << "Enter number of registers for CPU: ";
    cin >> cpuRegisters;
    cout << "Enter size of registers for CPU: ";
    cin >> cpuRegSize;



    // getting input data for Control Unit
    cout << "Enter clock speed for Control Unit: ";
    cin >> controlUnitClock;






    // getting input data for Main Memory
    cout << "Enter capacity for Main Memory: ";
    cin >> mainMemoryCapacity;
    cout << "Enter technology type for Main Memory: ";
    cin >> mainMemoryTechType;



    // getting input data for Motherboard


    cout << "Enter number of ports for Motherboard: ";
    cin >> motherboardPortsCount;








    // creating an array to hold the Port objects
    Port* ports = new Port[motherboardPortsCount];

    // input data for each port from the user
    for (int i = 0; i < motherboardPortsCount; ++i) {
        cout << "Enter type for Port " << i + 1 << ": ";
        cin >> portType;
        cout << "Enter baud rate for Port " << i + 1 << ": ";
        cin >> portBaudRate;

        // creating a Port object with the input data and store it in the array
        ports[i] = Port(portType, portBaudRate);
    }




    // getting input data for Graphics Card
    cout << "Enter brand for Graphics Card: ";
    cin >> gpuBrand;
    cout << "Enter memory size for Graphics Card: ";
    cin >> gpuMemorySize;
    cout << "Enter price for Graphics Card: ";
    cin >> gpuPrice;




    // validation GPU type based on computer type
    while (!validateGPUType(computerType, gpuBrand)) {
        cout << "Please enter valid GPU type: ";
        cin >> gpuBrand;
    }







    // getting input data for Storage Device
    cout << "Enter type for Storage Device: ";
    cin >> storageType;
    cout << "Enter capacity for Storage Device: ";
    cin >> storageCapacity;
    cout << "Enter price for Storage Device: ";
    cin >> storagePrice;







    // getting input data for Network Card
    cout << "Enter type for Network Card: ";
    cin >> networkType;
    cout << "Enter speed for Network Card: ";
    cin >> networkSpeed;
    cout << "Enter price for Network Card: ";
    cin >> networkPrice;





    // getting input data for Power Supply
    cout << "Enter wattage for Power Supply: ";
    cin >> psuWattage;
    cout << "Enter efficiency rating for Power Supply: ";
    cin >> psuEfficiency;
    cout << "Enter price for Power Supply: ";
    cin >> psuPrice;




    // input data for Battery
    cout << "Enter capacity for Battery: ";
    cin >> batteryCapacity;




    //  input data for Case
    cout << "Enter form factor for Case: ";
    cin >> caseFormFactor;
    cout << "Enter color for Case: ";
    cin >> caseColor;






    // creating objects based on user inputs
    ALU alu;
    alu.setNoOfAdders(cpuAdders);
    alu.setNoOfSubtractors(cpuSubtractors);
    alu.setNoOfRegisters(cpuRegisters);
    alu.setSizeOfRegisters(cpuRegSize);


    ControlUnit cu;
    cu.setClock(controlUnitClock);




    CPU cpu(alu, cu);

    MainMemory mm(mainMemoryCapacity, mainMemoryTechType);

    MotherBoard mb(ports, mm);

    GraphicsCard gpu(gpuBrand, gpuMemorySize, gpuPrice);

    StorageDevice storage(storageType, storageCapacity, storagePrice);

    NetworkCard network(networkType, networkSpeed, networkPrice);

    PowerSupply psu(psuWattage, psuEfficiency, psuPrice);

    Battery bat(batteryCapacity);

    Case cc(caseFormFactor, caseColor);

    ComputerAssembly assembly(cpu, mm, mb, gpu, storage, network, psu, bat, cc);




    // display success message
    cout << "Computer assembly created successfully!" << endl;


    displayAssemblySpecifications(assembly, motherboardPortsCount);

    // deleting dynamically allocated memory
    delete[] ports;
    
}

// Function to create assembly for PC with Mac
void createPCMacAssembly() {
    // PC with Mac assembly
    cout << "Creating PC assembly with Mac..." << endl;

    // declaring variables to store user inputs
    string computerType;
    int cpuAdders, cpuSubtractors, cpuRegisters, cpuRegSize;
    float controlUnitClock;
    int mainMemoryCapacity;
    string mainMemoryTechType;
    int motherboardPortsCount;
    string portType;
    int portBaudRate;
    string gpuBrand;
    int gpuMemorySize;
    double gpuPrice;
    string storageType;
    int storageCapacity;
    double storagePrice;
    string networkType;
    int networkSpeed;
    double networkPrice;
    int psuWattage;
    string psuEfficiency;
    double psuPrice;
    int batteryCapacity;
    string caseFormFactor;
    string caseColor;




    // getting input data for CPU
    cout << "Enter number of adders for CPU: ";
    cin >> cpuAdders;
    cout << "Enter number of subtractors for CPU: ";
    cin >> cpuSubtractors;
    cout << "Enter number of registers for CPU: ";
    cin >> cpuRegisters;
    cout << "Enter size of registers for CPU: ";
    cin >> cpuRegSize;



    // getting input data for Control Unit
    cout << "Enter clock speed for Control Unit: ";
    cin >> controlUnitClock;






    // getting input data for Main Memory
    cout << "Enter capacity for Main Memory: ";
    cin >> mainMemoryCapacity;
    cout << "Enter technology type for Main Memory: ";
    cin >> mainMemoryTechType;



    // getting input data for Motherboard


    cout << "Enter number of ports for Motherboard: ";
    cin >> motherboardPortsCount;








    // creating an array to hold the Port objects
    Port* ports = new Port[motherboardPortsCount];

    // input data for each port from the user
    for (int i = 0; i < motherboardPortsCount; ++i) {
        cout << "Enter type for Port " << i + 1 << ": ";
        cin >> portType;
        cout << "Enter baud rate for Port " << i + 1 << ": ";
        cin >> portBaudRate;

        // creating a Port object with the input data and store it in the array
        ports[i] = Port(portType, portBaudRate);
    }




    // getting input data for Graphics Card
    cout << "Enter brand for Graphics Card: ";
    cin >> gpuBrand;
    cout << "Enter memory size for Graphics Card: ";
    cin >> gpuMemorySize;
    cout << "Enter price for Graphics Card: ";
    cin >> gpuPrice;




    // validation GPU type based on computer type
    while (!validateGPUType(computerType, gpuBrand)) {
        cout << "Please enter valid GPU type: ";
        cin >> gpuBrand;
    }







    // getting input data for Storage Device
    cout << "Enter type for Storage Device: ";
    cin >> storageType;
    cout << "Enter capacity for Storage Device: ";
    cin >> storageCapacity;
    cout << "Enter price for Storage Device: ";
    cin >> storagePrice;







    // getting input data for Network Card
    cout << "Enter type for Network Card: ";
    cin >> networkType;
    cout << "Enter speed for Network Card: ";
    cin >> networkSpeed;
    cout << "Enter price for Network Card: ";
    cin >> networkPrice;





    // getting input data for Power Supply
    cout << "Enter wattage for Power Supply: ";
    cin >> psuWattage;
    cout << "Enter efficiency rating for Power Supply: ";
    cin >> psuEfficiency;
    cout << "Enter price for Power Supply: ";
    cin >> psuPrice;




    // input data for Battery
    cout << "Enter capacity for Battery: ";
    cin >> batteryCapacity;




    //  input data for Case
    cout << "Enter form factor for Case: ";
    cin >> caseFormFactor;
    cout << "Enter color for Case: ";
    cin >> caseColor;






    // creating objects based on user inputs
    ALU alu;
    alu.setNoOfAdders(cpuAdders);
    alu.setNoOfSubtractors(cpuSubtractors);
    alu.setNoOfRegisters(cpuRegisters);
    alu.setSizeOfRegisters(cpuRegSize);


    ControlUnit cu;
    cu.setClock(controlUnitClock);




    CPU cpu(alu, cu);

    MainMemory mm(mainMemoryCapacity, mainMemoryTechType);

    MotherBoard mb(ports, mm);

    GraphicsCard gpu(gpuBrand, gpuMemorySize, gpuPrice);

    StorageDevice storage(storageType, storageCapacity, storagePrice);

    NetworkCard network(networkType, networkSpeed, networkPrice);

    PowerSupply psu(psuWattage, psuEfficiency, psuPrice);

    Battery bat(batteryCapacity);

    Case cc(caseFormFactor, caseColor);

    ComputerAssembly assembly(cpu, mm, mb, gpu, storage, network, psu, bat, cc);




    // display success message
    cout << "Computer assembly created successfully!" << endl;


    displayAssemblySpecifications(assembly, motherboardPortsCount);

    // deleting dynamically allocated memory
    delete[] ports;
}

// Function to create assembly for Laptop with Windows
void createLaptopWindowsAssembly() {
    // Laptop with Windows assembly
    cout << "Creating laptop assembly with Windows..." << endl;

    // declaring variables to store user inputs
    string computerType;
    int cpuAdders, cpuSubtractors, cpuRegisters, cpuRegSize;
    float controlUnitClock;
    int mainMemoryCapacity;
    string mainMemoryTechType;
    int motherboardPortsCount;
    string portType;
    int portBaudRate;
    string gpuBrand;
    int gpuMemorySize;
    double gpuPrice;
    string storageType;
    int storageCapacity;
    double storagePrice;
    string networkType;
    int networkSpeed;
    double networkPrice;
    int psuWattage;
    string psuEfficiency;
    double psuPrice;
    int batteryCapacity;
    string caseFormFactor;
    string caseColor;




    // getting input data for CPU
    cout << "Enter number of adders for CPU: ";
    cin >> cpuAdders;
    cout << "Enter number of subtractors for CPU: ";
    cin >> cpuSubtractors;
    cout << "Enter number of registers for CPU: ";
    cin >> cpuRegisters;
    cout << "Enter size of registers for CPU: ";
    cin >> cpuRegSize;



    // getting input data for Control Unit
    cout << "Enter clock speed for Control Unit: ";
    cin >> controlUnitClock;






    // getting input data for Main Memory
    cout << "Enter capacity for Main Memory: ";
    cin >> mainMemoryCapacity;
    cout << "Enter technology type for Main Memory: ";
    cin >> mainMemoryTechType;



    // getting input data for Motherboard


    cout << "Enter number of ports for Motherboard: ";
    cin >> motherboardPortsCount;








    // creating an array to hold the Port objects
    Port* ports = new Port[motherboardPortsCount];

    // input data for each port from the user
    for (int i = 0; i < motherboardPortsCount; ++i) {
        cout << "Enter type for Port " << i + 1 << ": ";
        cin >> portType;
        cout << "Enter baud rate for Port " << i + 1 << ": ";
        cin >> portBaudRate;

        // creating a Port object with the input data and store it in the array
        ports[i] = Port(portType, portBaudRate);
    }




    // getting input data for Graphics Card
    cout << "Enter brand for Graphics Card: ";
    cin >> gpuBrand;
    cout << "Enter memory size for Graphics Card: ";
    cin >> gpuMemorySize;
    cout << "Enter price for Graphics Card: ";
    cin >> gpuPrice;




    // validation GPU type based on computer type
    while (!validateGPUType(computerType, gpuBrand)) {
        cout << "Please enter valid GPU type: ";
        cin >> gpuBrand;
    }







    // getting input data for Storage Device
    cout << "Enter type for Storage Device: ";
    cin >> storageType;
    cout << "Enter capacity for Storage Device: ";
    cin >> storageCapacity;
    cout << "Enter price for Storage Device: ";
    cin >> storagePrice;







    // getting input data for Network Card
    cout << "Enter type for Network Card: ";
    cin >> networkType;
    cout << "Enter speed for Network Card: ";
    cin >> networkSpeed;
    cout << "Enter price for Network Card: ";
    cin >> networkPrice;





    // getting input data for Power Supply
    cout << "Enter wattage for Power Supply: ";
    cin >> psuWattage;
    cout << "Enter efficiency rating for Power Supply: ";
    cin >> psuEfficiency;
    cout << "Enter price for Power Supply: ";
    cin >> psuPrice;




    // input data for Battery
    cout << "Enter capacity for Battery: ";
    cin >> batteryCapacity;




    //  input data for Case
    cout << "Enter form factor for Case: ";
    cin >> caseFormFactor;
    cout << "Enter color for Case: ";
    cin >> caseColor;






    // creating objects based on user inputs
    ALU alu;
    alu.setNoOfAdders(cpuAdders);
    alu.setNoOfSubtractors(cpuSubtractors);
    alu.setNoOfRegisters(cpuRegisters);
    alu.setSizeOfRegisters(cpuRegSize);


    ControlUnit cu;
    cu.setClock(controlUnitClock);




    CPU cpu(alu, cu);

    MainMemory mm(mainMemoryCapacity, mainMemoryTechType);

    MotherBoard mb(ports, mm);

    GraphicsCard gpu(gpuBrand, gpuMemorySize, gpuPrice);

    StorageDevice storage(storageType, storageCapacity, storagePrice);

    NetworkCard network(networkType, networkSpeed, networkPrice);

    PowerSupply psu(psuWattage, psuEfficiency, psuPrice);

    Battery bat(batteryCapacity);

    Case cc(caseFormFactor, caseColor);

    ComputerAssembly assembly(cpu, mm, mb, gpu, storage, network, psu, bat, cc);




    // display success message
    cout << "Computer assembly created successfully!" << endl;


    displayAssemblySpecifications(assembly, motherboardPortsCount);

    // deleting dynamically allocated memory
    delete[] ports;
}

// Function to create assembly for Laptop with Mac
void createLaptopMacAssembly() {
    // Laptop with Mac assembly
    cout << "Creating laptop assembly with Mac..." << endl;

    // declaring variables to store user inputs
    string computerType;
    int cpuAdders, cpuSubtractors, cpuRegisters, cpuRegSize;
    float controlUnitClock;
    int mainMemoryCapacity;
    string mainMemoryTechType;
    int motherboardPortsCount;
    string portType;
    int portBaudRate;
    string gpuBrand;
    int gpuMemorySize;
    double gpuPrice;
    string storageType;
    int storageCapacity;
    double storagePrice;
    string networkType;
    int networkSpeed;
    double networkPrice;
    int psuWattage;
    string psuEfficiency;
    double psuPrice;
    int batteryCapacity;
    string caseFormFactor;
    string caseColor;




    // getting input data for CPU
    cout << "Enter number of adders for CPU: ";
    cin >> cpuAdders;
    cout << "Enter number of subtractors for CPU: ";
    cin >> cpuSubtractors;
    cout << "Enter number of registers for CPU: ";
    cin >> cpuRegisters;
    cout << "Enter size of registers for CPU: ";
    cin >> cpuRegSize;



    // getting input data for Control Unit
    cout << "Enter clock speed for Control Unit: ";
    cin >> controlUnitClock;






    // getting input data for Main Memory
    cout << "Enter capacity for Main Memory: ";
    cin >> mainMemoryCapacity;
    cout << "Enter technology type for Main Memory: ";
    cin >> mainMemoryTechType;



    // getting input data for Motherboard


    cout << "Enter number of ports for Motherboard: ";
    cin >> motherboardPortsCount;








    // creating an array to hold the Port objects
    Port* ports = new Port[motherboardPortsCount];

    // input data for each port from the user
    for (int i = 0; i < motherboardPortsCount; ++i) {
        cout << "Enter type for Port " << i + 1 << ": ";
        cin >> portType;
        cout << "Enter baud rate for Port " << i + 1 << ": ";
        cin >> portBaudRate;

        // creating a Port object with the input data and store it in the array
        ports[i] = Port(portType, portBaudRate);
    }




    // getting input data for Graphics Card
    cout << "Enter brand for Graphics Card: ";
    cin >> gpuBrand;
    cout << "Enter memory size for Graphics Card: ";
    cin >> gpuMemorySize;
    cout << "Enter price for Graphics Card: ";
    cin >> gpuPrice;




    // validation GPU type based on computer type
    while (!validateGPUType(computerType, gpuBrand)) {
        cout << "Please enter valid GPU type: ";
        cin >> gpuBrand;
    }







    // getting input data for Storage Device
    cout << "Enter type for Storage Device: ";
    cin >> storageType;
    cout << "Enter capacity for Storage Device: ";
    cin >> storageCapacity;
    cout << "Enter price for Storage Device: ";
    cin >> storagePrice;







    // getting input data for Network Card
    cout << "Enter type for Network Card: ";
    cin >> networkType;
    cout << "Enter speed for Network Card: ";
    cin >> networkSpeed;
    cout << "Enter price for Network Card: ";
    cin >> networkPrice;





    // getting input data for Power Supply
    cout << "Enter wattage for Power Supply: ";
    cin >> psuWattage;
    cout << "Enter efficiency rating for Power Supply: ";
    cin >> psuEfficiency;
    cout << "Enter price for Power Supply: ";
    cin >> psuPrice;




    // input data for Battery
    cout << "Enter capacity for Battery: ";
    cin >> batteryCapacity;




    //  input data for Case
    cout << "Enter form factor for Case: ";
    cin >> caseFormFactor;
    cout << "Enter color for Case: ";
    cin >> caseColor;






    // creating objects based on user inputs
    ALU alu;
    alu.setNoOfAdders(cpuAdders);
    alu.setNoOfSubtractors(cpuSubtractors);
    alu.setNoOfRegisters(cpuRegisters);
    alu.setSizeOfRegisters(cpuRegSize);


    ControlUnit cu;
    cu.setClock(controlUnitClock);




    CPU cpu(alu, cu);

    MainMemory mm(mainMemoryCapacity, mainMemoryTechType);

    MotherBoard mb(ports, mm);

    GraphicsCard gpu(gpuBrand, gpuMemorySize, gpuPrice);

    StorageDevice storage(storageType, storageCapacity, storagePrice);

    NetworkCard network(networkType, networkSpeed, networkPrice);

    PowerSupply psu(psuWattage, psuEfficiency, psuPrice);

    Battery bat(batteryCapacity);

    Case cc(caseFormFactor, caseColor);

    ComputerAssembly assembly(cpu, mm, mb, gpu, storage, network, psu, bat, cc);




    // display success message
    cout << "Computer assembly created successfully!" << endl;


    displayAssemblySpecifications(assembly, motherboardPortsCount);

    // deleting dynamically allocated memory
    delete[] ports;
}

int main() {
    
    // variables to store user inputs
    string computerType;
    

    string osType;

    


    // input data for computer type


    cout << "Enter computer type (pc/laptop): ";

    cin >> computerType;


    // input data for OS type (Windows or Mac) if applicable

    if (computerType == "pc" || computerType == "laptop") {

        cout << "Enter operating system (windows/mac): ";

        cin >> osType;

    }

    // objects based on user inputs
    
    if (computerType == "pc" && osType == "windows") {
    
        createPCWindowsAssembly();
    }
    
    else if (computerType == "pc" && osType == "mac") {
        createPCMacAssembly();
 
    }
    
    else if (computerType == "laptop" && osType == "windows") {



        createLaptopWindowsAssembly();
    }

    else if (computerType == "laptop" && osType == "mac") {

        createLaptopMacAssembly();

    }

    else {

        cout << "Invalid computer type or operating system entered." << endl;

    }


    return 0;

}
