## ESP8266 ile Sıcaklık ve Nem Ölçümü

Bu uygulamada DHT11 üzerinden aldığınız sıcaklık ve nem verilerini ESP8266 WiFi modülünü kullanarak Thingspeak platformuna gönderilecektir.
UART protokolü, ESP8266 ile iletişim kurulurken kullanılır.Bu örnekte 115200 Baud hızını (İletişim hızı) kullanacağız.
Thingspeak, açık kaynaklı bir IoT (Nesnelerin İnterneti) uygulamasıdır. Kullanıcılar HTTP üzerinden siteye veri göndermekte ve sitedeki grafik arayüzler sayesinde kendi uygulamalarını görsel olarak daha iyi ve kolay anlaşılır hale getirmektedir. Bu örnekte, DHT11 sensöründen alınan verilerle Thingspeak'te zaman-nem ve zaman-sıcaklık grafikleri oluşturulacaktır.



![image](https://user-images.githubusercontent.com/111511331/191267702-2cb30877-8ae8-45cd-b627-54b6807e7cf6.png)
