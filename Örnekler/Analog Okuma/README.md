## Arduino ile Analog Okuma ve Seri İletişim Detayları
Arduino kartına baktığınızda "Analog Giriş" pinlerini göreceksiniz. Bu pinler kullanılarak dijital sinyalden analog sinyale dönüştürülerek bu pin üzerindeki voltajın okunması mümkündür. Arduino dijital olarak 0V ve 5V okuyabilir. Bu iki uç arasında ara değerler varsa bunu algılayamaz ve gelen gerilimi eşik değerine göre 0V veya 5V olarak kabul eder. Analog pinler sayesinde 0V ile 5V arası ara gerilim değerlerini tespit edip dijitale çevirebilirsiniz. Ara değerlerde sinyaller elde etmek için ayarlanabilir bir direnç (potansiyometre) kullanacaksınız. Uygulamada seri port üzerindeki analog giriş pininden gelen voltajın sayısal değerini okuyacaksınız.


Hadi devreyi kuralım ve kodlamaya başlayalım!
![6](https://user-images.githubusercontent.com/112697142/190644724-2359220f-709e-430c-b819-509a8e4ba646.PNG)
