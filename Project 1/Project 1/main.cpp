/*
 Simon Aguayo
 Assignment 1
 CSCI 6334
 */


#include <iostream>
#include <string>
#include <vector>
using namespace std;

// PCB class

class PCB {
public:
    int Process_id;
    int Arrival_time;
    int state;
    int pc_line;
};

// proccess image Class
class Process {
public:
    PCB pcb_data;
    string code;
    
    // is this a constructor?????
    Process(string process){
        // set PCB data, code and others
        // set state as "NEW"
    }
    
    
};

// CPU class
class CPU {
public:
    bool busy;
    int PC;
    int timeslice;
    
    CPU(int settimeslice){
        timeslice = settimeslice;
        busy = false;
    }
    
    pair<int, string> execute(Process P){
        busy = true;
        
        // need to change this
        return make_pair(0, "0");
    }
    
    void Bubble_Sort(){
        // write bubble sort algorythm
    }
    
    bool CPUisBusy(){
        return busy;
    }
};

// IOdevice Class
class IOdevice{
public:
    bool busy;
    
    IOdevice(vector<Process> wait_Queue){
        
    }
    
    string Execute(int IO_burst){
        busy = true;
        
        //call bubble_sort() for IO_burst times and then return "ready"
        
        // change this
        return 0;
    }
    
    void Bubble_Sort(){
        // sort bubble sort algorthm
    }
};


// OS Class
class OS{
public:
    CPU cpu;
    IOdevice io;
    bool isCPUAvailable;
    // Process Table
    vector<Process> new_queue;
    vector<Process> ready_queue;
    vector<Process> wait_queue;
    vector<Process> term_queue;
    
    //Read the txt input file, for each line, create a process and record its arrival time
    
    //Put each process in New_Q queue initially then put them in Ready_Q
    
    //Always check whether the CPU is idle or not; if yes, use your scheduler algorithm to
    //select a process from the Ready_Queue for CPU execution\
    
    //According to the return value of CPU execute(), put the process into the corresponding queue.
    
    //Record the time of every operation for computing your latency and response
};

int main() {
    
    cout << "Hello, World!" << endl;
    
    return 0;
}
