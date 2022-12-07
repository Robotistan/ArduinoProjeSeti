## Arduino ile RFD Sensörü Kullanma

Bu uygulamada, RFID kart okuyucu, kartın 1D numarasını okuyacak ve SPI (Serial Periferal Arayüz) protokolü aracılığıyla Arduino'ya göndereceğiz. 1D numarası sisteme kayıtlı ise servoyu aktif hale getirir ve kapıyı açar. Kayıtlı değilse kapı kapalı kalır.
SPI, Master-Slave mantığına dayalı bir seri iletişim protokolüdür. Yani birbirleri ile senkron çalışabilmeleri için bir saat sinyaline ihtiyaç duyarlar. bu sayede iletişim, UART gibi asenkron protokollere göre daha güvenilir bir şekilde sağlanır. Uzak SPI, en az 4 pine ihtiyacınız olacak. SCK, saat sinyali için kullanılır. MOSI (Master Out Slave in), ana cihazdan bağımlı cihaza veri göndermek için kullanılır. MISO (Master in Slave Out), bağımlı cihazdan ana cihaza veri göndermek için kullanılır. SS (Slave Select) pimi, ana cihazın hangi cihazla iletişim kurduğunu belirler. Bu uygulamada kullanılan RC522 RFID modülü de SPI protokolü üzerinden haberleşir.



![image](https://user-images.githubusercontent.com/111511331/191033255-5903ede8-88e4-4722-a2a9-bca0ce01aecd.png)


