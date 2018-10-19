/*
 Simon Aguayo
 Assignment 1
 CSCI 6334
 */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// PCB class

class PCB {
public:
    string Process_id;
    string Arrival_time;
    string State;
    string PC_line;
    string Priority;
};

// proccess image Class
class Process {
public:
    PCB pcb_data;
    string code;
    
    // Constructor
    Process(string process){
        // set PCB data, code and others
        string delimiter = ", ";
        string token;
        
        int pos = 0;
        
        // Store process ID
        pos = process.find(delimiter);
        token = process.substr(0, pos);
        pcb_data.Process_id = token;
        process.erase(0, pos + delimiter.length());
        
        // Store arrival time
        pos = process.find(delimiter);
        token = process.substr(0, pos);
        pcb_data.Arrival_time = token;
        process.erase(0, pos + delimiter.length());
        
        // store priority
        pos = process.find(delimiter);
        token = process.substr(0, pos);
        pcb_data.Priority = token;
        process.erase(0, pos + delimiter.length());
        
        // Store burts sequence
        token = process.substr(0, process.length()-2);
        pcb_data.PC_line = token;
        
        // set state as "NEW"
        pcb_data.State = "NEW";
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
        
        // read CPU burst number, #, from the position
        // "PositionOfNextInstructionToExecute
        
        // repeat calling Bubble Sort() for # fo times and then continue
        
        // If code runs out, return (PositionOfNextInstructionToExecute, "terminated"), then OS put it back in to ready queue
        
        // Otherwise, return (PositionOfNextInstructionToExecute+1, “wait”)
        
        // (namely, P has an I/O request and then OS remove it from the ready queue and sent it to I/O queue)
        
        
        // need to change this
        return make_pair(0, "0");
    }
    
    void Bubble_Sort(vector<double>& list){
        // write bubble sort algorythm
        
        for (int i = 0; i < list.size() - 1; i++){
            for (int j = 0; j < list.size() - i - 1; j++){
                if (list[j] > list[j + 1]) {
                    int temp = list[j];
                    list[j] = list[j+1];
                    list[j + 1] = temp;
                }
            }
        }
        
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
    
    // Open File
    ifstream input;
    input.open("input_file.txt");
    if (input.is_open())
    {
        cout << "File opened" << endl;
    }
    
    
    // Get line from "input_file.txt" and create a process
    string input_line;
    while(!input.eof()){
        getline(input, input_line);
        Process p = Process(input_line);
    }
    
    
    
    // Close File
    input.close();
    
    return 0;
}
