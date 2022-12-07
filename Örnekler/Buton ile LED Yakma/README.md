## Buton ile LED Yakma
Bu uygulamada Arduino üzerindeki pinleri girdi olarak kullanmayı öğreneceksiniz. Bu sayede Arduino'da uzaktan bir butona basıldığında bildirim alınmasını sağlayabilirsiniz. LED devresi önceki uygulama ile aynı olabilir. Bu uygulamada sadece LED'in bağlı olduğu bacak #10 olacak. Devreyi kuralım ve ardından kodlamaya devam edelim.
Butondan veri okuyabilmek için 10k Ohm direnç ile birlikte kullanılması gerekmektedir. Düğmeye basılmadığında paraziti önlemek için "yukarı çekme" veya "aşağı çekme" direnci kullanmanız gerekir. Bu uygulamada "pull-down" direncini kullanacağız. Bu projede pin butona basılmadığında 0V yani LOW lojik seviye değerini okumaktadır. Aşağı çekme direnci, bu pin üzerindeki voltajın butona basılmadıkça 0V'ta sabit kalmasını ve değerin YÜKSEK olmasını sağlar. Devrenin mantığını öğrendiğinize göre artık kodlamaya geçelim.

![4](https://user-images.githubusercontent.com/112697142/190633739-54ec4c91-b376-4a4c-ad7e-d59bac5075ee.PNG)
