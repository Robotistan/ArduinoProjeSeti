## NTC ile Sıcaklık Ölçümü

Bu uygulamada sıcaklığı okurken analog sinyali okuyup yorumlayarak istediğimizin yapılmasını sağlayacağız. NTC (Negatif Sıcaklık Katsayısı), sıcaklık artışına karşı iç direncini azaltan bir elementtir. NTC yerine yaygın olarak kullanılan unsurlardan biri de PTC'dir. PTC, sıcaklık artışına karşı iç direncini artırarak tepki verir. NTC'den okunan verilerin sıcaklık birimine dönüştürülebilmesi için işlenmesi gerekmektedir. Aynı zamanda NTC sensörünün sıcaklık artışına göre değişken direnç değeri sabit olmadığı için logaritmik fonksiyonlardan geçmek gerekmektedir. Şimdilik bu fonksiyonları detaylı bir şekilde incelemenize gerek yok, sadece süreçleri bilmeniz yeterli. NTC sensörü kullanmanın mantığını öğrendikten sonra bu kısım detayını inceleyebilirsiniz. Öncelikle devremizi kurarak başlayalım. Bu uygulamada farklı bir fonksiyon oluşturacak ve fonksiyona giderek bazı işlemleri yapacağız.


![9](https://user-images.githubusercontent.com/111511331/190996612-c9b0154c-50ab-4f7e-94fa-27c8fb9f8c7e.png)
