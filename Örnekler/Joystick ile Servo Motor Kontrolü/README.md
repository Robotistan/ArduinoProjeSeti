## Joystick ile Servo Motor Kontrolü

Joystick, kolun ileri-geri veya sağa-sola hareket ettirilmesine bağlı olarak konumu analog bir sinyal olarak verir. Servo, veri pininden aldığı sinyale göre kendisini belli bir açıda konumlandıran motordur.

Joystick üzerindeki levye ileri geri hareket ettirildiğinde VRX pini üzerindeki gerilim değerleri, sağa veya sola hareket ettirildiğinde VRY pini üzerindeki gerilim değerleri değişir. Joystick'e tıkladığınızda SW pini SV çıkışı verir. Bu örnekte sadece bir servo kullanacağımız için VRX pini kullanılacaktır. VRX pininden gelen veri O ve SV arasındaki analog veri olduğundan Arduino üzerindeki AO pinine bağlayınız. Servo motorun veri pinini analog çıkış verebilen pin 3'e bağlayın. Örnek kod, servo motorun joystick'ten gelen verilerle O ve 180 derece arasında dönmesini sağlar.

Devreyi kurduktan sonra kodlamaya devam edelim.


![11](https://user-images.githubusercontent.com/111511331/191002111-f385b562-31b7-4b01-98b1-1884961be0ae.png)
