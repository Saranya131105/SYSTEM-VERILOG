# SystemVerilog Experiments

This repository contains the complete set of **SystemVerilog design and verification experiments** performed as part of the Electronics and Communication Engineering laboratory coursework at **Rajalakshmi Institute of Technology, Chennai**.

The experiments cover RTL design, testbench creation, transaction-level modeling, and advanced verification concepts using **Verilator** and **GTKWave** on Ubuntu/Linux.

---

## 📂 Repository Structure
SystemVerilog-Lab/
├── exp01_and_gate/
├── exp02_half_adder/
├── exp03_process_communication/
├── exp04_transaction_randomization/
├── exp05_generator_driver_environment/
├── exp06_monitor_scoreboard_coverage/
├── exp07_half_full_adder_tb/
├── exp08_nbit_adder_tb/
├── exp09_dff_tb/
├── exp10_counters_tb/
├── lfsr_crc_project
└── README.md
---

## 🧪 Experiments Included
1. **Introduction to EDA Tools** – Setup and usage of Verilator & GTKWave with a 2-input AND gate.  
2. **Half Adder Design** – Gate-level, dataflow, and behavioral modeling with a unified testbench.  
3. **Process & Communication** – Demonstrating concurrent execution and mailbox-based producer-consumer synchronization.  
4. **Transaction Class Randomization** – Generating randomized stimulus for verification.  
5. **Generator, Driver & Environment** – Building a layered testbench architecture for Half Adder DUT.  
6. **Monitor, Scoreboard & Coverage** – Functional verification of Full Adder with coverage metrics.  
7. **Top Module Testbench (Half & Full Adder)** – Verification of combinational circuits.  
8. **N-Bit Adder Verification** – Scalable design verification using SystemVerilog.  
9. **Sequential Circuit (D Flip-Flop)** – Testbench for sequential logic.  
10. **Sequential Circuit (Counters)** – Verification of up/down counters.  
11. **LFSR & CRC Generator** – Pseudo-random sequence generation and checksum validation.

---

## ⚙️ Tools & Requirements
- **Verilator** – Open-source SystemVerilog simulator  
- **GCC / G++** – Compiler toolchain for building Verilator simulations  
- **MSYS2 UCRT64** – Windows environment for Linux-like development  
- **C++** – Required for Verilator-generated simulation models  
- **GTKWave** – Waveform viewer for VCD/FST files   

---

## 🎯 Outcomes
- Hands-on experience with **RTL design and verification**.  
- Exposure to **transaction-level modeling** and **class-based testbenches**.  
- Understanding of **functional coverage, scoreboarding, and constrained random verification**.  
- Verification of both **combinational and sequential circuits** using SystemVerilog.

---

## 🚀 How to Run
1. Clone the repository:
   
   git clone https://github.com/Saranya131105/SYSTEM-VERILOG
   
2.Navigate to any experiment folder:

   cd exp01_and_gate

3.Compile and run using Verilator:

   verilator --cc and_gate.sv tb_and_gate.sv --exe sim_main.cpp
   make -C obj_dir -f Vtb_and_gate.mk Vtb_and_gate
   ./obj_dir/Vtb_and_gate
   
4.Or using Icarus Verilog (alternative):

iverilog -g2012 -o sim_and_gate and_gate.sv tb_and_gate.sv
vvp sim_and_gate
View waveforms:

5. View waveforms:

gtkwave and_gate.vcd



🎯 Outcomes
Hands-on experience with RTL design and verification.

Exposure to transaction-level modeling and class-based testbenches.

Understanding of functional coverage, scoreboarding, and constrained random verification.

Verification of both combinational and sequential circuits using SystemVerilog.


📖 License
This repository is for academic and learning purposes.
Feel free to fork, modify, and use for educational projects.


👩‍💻 Author
Saranya Manoharan – Electronics & Communication Engineering
Rajalakshmi Institute of Technology, Chennai




