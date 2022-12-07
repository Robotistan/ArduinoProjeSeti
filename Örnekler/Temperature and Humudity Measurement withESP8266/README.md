## Step Motor Control with ESP8266

In this application, you will send the temperature and humidity data received via DHT11 to Thingspeak platform using ESP8266 WiFi module.
The UART protocol is used when communicating with ESP8266. in this example, we will use the 115200 Baud rate (Communication speed).
Thingspeak is an open source loT (lnternet of Things) application. Users send data to the site via HTTP and make their own applications visually better and easy to understand thanks to the graphical interfaces on the site. In this example, time-humidity and time-temperature graphs will be generated in Thingspeak with data from the DHT11 sensor.

Let's set up the circuit and then start writing our project code.


![image](https://user-images.githubusercontent.com/111511331/191267702-2cb30877-8ae8-45cd-b627-54b6807e7cf6.png)
