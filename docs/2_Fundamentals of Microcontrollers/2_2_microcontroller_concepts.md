# Microcontroller Concepts

Now that you know a bit about Microcontrollers, it's time to get introduced to some key concepts.

**Architecture:** Computer architecture defines the structure and interrelationships of the components of a system, such as input/output, storage, communication, control, and processing.
It also determines the capabilities and programming model of a computer, as well as the logical interface that is targeted by programming languages and their compilers.

**Central Processing Unit (CPU):** The CPU is like the brain of the microcontroller. It's responsible for executing instructions and making decisions. Imagine it as the person who follows the step-by-step instructions given to them to perform specific tasks.

**Instruction set:** "instruction set" is like the list of commands or instructions that a computer processor or microcontroller can understand and execute. It's the language that the central processing unit (CPU) of the computer or microcontroller speaks. some examples are - MOV (Move), ADD (Addition), CMP (Compare), B (Branch).

**Register:** a "register" is a small, fast storage area inside the central processing unit (CPU) that is used to store data temporarily during the execution of a program. Think of registers as tiny, super-fast storage units that the CPU can access quickly. They play a crucial role in the microcontroller's processing of instructions and data.

**Address BUS:** The address bus is like a communication pathway between the CPU and memory, allowing the CPU to specify the location(address) of data or instructions it wants to access.

**Data Bus:** The data bus is also a set of wires or electrical pathways, just like the address bus. However, the data bus is used for transferring binary data (1s and 0s) rather than memory addresses. The width of the data bus, measured in bits, determines how much data can be transferred in parallel between the CPU and memory.

**Word:** The STM32F40x is 32-bit microcontroller. Here 32-bit means the '**word**' size is of 32 bits. This ‘word’ is a piece of data handled by the instruction set of the microcontroller. The size of the word differs in each microcontroller between 8 bits, 16 bits, 32 bits and even 64 bits. A word can be used as an address, a variable, a register or an instruction. In an 8-bit processor, 8 bits are used in every instruction. 16-bit and 32-bit processors can operate with larger amounts of data. Larger register or bus widths, means less restrictions on resources.

**Memory:** Just like you need a place to store your books, and clothes in your house, a microcontroller needs memory to store data and instructions. There are two main types of memory in a microcontroller:

- **Program Memory (Flash):** This is where the microcontroller stores the program or set of instructions it needs to run. It's like a recipe book that tells the microcontroller what to do.
- **Data Memory (RAM):** This is like a temporary storage space used by the microcontroller while it's working. It holds data that the CPU needs to access quickly while performing tasks.

**Peripherals:** Peripherals are additional components that help the microcontroller perform specific tasks. They can be like the appliances in your house, such as a washing machine or a microwave. Examples of peripherals in a microcontroller include timers (to measure time), analog-to-digital converters (to convert real-world values into digital data), and communication modules (to connect with other devices).

**Input/Output (I/O) Ports:** These are like the doors and windows of a house. I/O ports allow the microcontroller to communicate with the outside world, just like you communicate with your friends through the door or window. Input ports let the microcontroller receive information from sensors (like a temperature sensor), while output ports allow it to control things like LEDs, motors, or displays.

**Assembly Language:** Assembly language is a low-level programming language that is closely tied to the architecture of a specific computer or microcontroller. It is considered a "human-readable" representation of machine code, which is the binary code that a computer's CPU understands and executes directly. Assembly language is often used in scenarios where high performance and direct hardware control are critical, such as in embedded systems, real-time applications, and device driver development.

**High level Language:** High-level languages provide a more abstract and human-readable way to write programs compared to low-level languages like assembly language. Some popular high-level languages used in embedded systems are C/C++, Rust, Python.
