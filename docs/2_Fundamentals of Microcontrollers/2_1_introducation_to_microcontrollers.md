# Introduction to microcontrollers

In order to design an embedded system, you need to learn about the heart of every embedded device i.e. Microcontroller.

A Microcontroller is an Integrated Circuit (IC) that contains electronic computing unit and logic unit (together known as CPU), Memory (Program Memory and Data Memory), I/O Ports (Input / Output Ports) and few other components integrated on a single chip.

Basically, a Microcontroller consists of the following components.

* Central Processing Unit (CPU)
* Program Memory (ROM – Read Only Memory/Flash)
* Data Memory (RAM – Random Access Memory)
* Timers and Counters
* I/O Ports (I/O – Input/Output)
* Serial Communication Interface
* Clock Circuit (Oscillator Circuit)
* Interrupt Mechanism
* Peripherals like SPI (Serial Peripheral Interface), I2C (Inter Integrated Circuit), ADC (Analog to Digital Converter), DAC (Digital to Analog Converter), CAN (Controlled Area Network), USB (Universal Serial Bus), and many more.

Here is a block diagram of STM32F40x microcontroller series:

![Alt text](../pictures/stm32_architecture.png)

Key components in the block diagram:

1. ARM Cortex-M4 Processor: The core of the STM32F40x microcontroller is an ARM Cortex-M4 processor, which provides the processing power for executing the program instructions.

2. Memory & Flash: This section includes various types of memory, such as RAM (Random-Access Memory) and Flash memory. RAM is used for temporary data storage during program execution, while Flash memory stores the program code and configuration settings.

3. System Bus: The system bus connects the processor to the memory and flash components, allowing data and instructions to flow between them.

4. Peripheral Bus: The peripheral bus connects the processor to the various peripherals available on the microcontroller, such as timers, communication interfaces (UART, SPI, I2C), ADCs (Analog-to-Digital Converters), and more.

5. I/O Peripherals: This section comprises input/output peripherals like GPIO (General Purpose Input/Output) pins, which allow the microcontroller to interface with external devices and sensors.

If you are a beginner, information in the above block diagram would look overwhelming. But stay with me till the end of this course you will understand most of stuff present here and learn to use this information in developing embedded software.

Next you will learn some of the fundamental concepts in microcontrollers and you will develop better understanding of microcontrollers and embedded systems in general.
