## Using RFD Sensor with Arduino

In this application, the RFID card reader will read the 1D number of the card and sent it to Arduino via SPI (Serial Perhiperal lnterface) protocol. lf the 1D number is registered in the system, it activates the servo and opens the door. lf it is not registered, the door remains closed
SPI is a serial communication protocol based on Master-Slave logic. That is, they need a clock signal to work synchronously with each other. in this way, communication is provided more reliably than asynchronous protocols such as UART. Far SPI, you will need at least 4 pins. SCK is used far the clock signal. MOSI (Master Out Slave in) is used to send data from the master device to the slave. MISO (Master in Slave Out) is used to send data from the slave device to the master. The SS (Slave Select) pin determines which device the master device communicates with. The RC522 RFID module used in this application alsO communicates via the SPI protocol.

Let's set up the circuit and then start writing our project code.


![image](https://user-images.githubusercontent.com/111511331/191033255-5903ede8-88e4-4722-a2a9-bca0ce01aecd.png)


