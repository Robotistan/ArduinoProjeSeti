## Arduino ile Toprak Nem Sensörü Kullanımı

Toprak Nem sensörü iki elektrottan oluşur. elektrotlar arasındaki iletkenliği ölçer ve toprağın ne kadar nemli olduğu hakkında bilgi verir. Toprak nemliyse, elektrotlar arasındaki iletkenlik artar. İletkenlik arttıkça direnç düştüğü için sensör içindeki gerilim bölücüden daha az gerilim gelmeye başlar. Toprak kuru ise elektrotlar arası direnç artacağından daha yüksek voltaj elde edilir ve bu veri benzer şekilde işlenerek topraktaki nem miktarı öğrenilir.

Bu örnekte topraktaki nem miktarı belli bir eşiğin üzerine çıktığında sinyal gönderir ve devre üzerindeki buzzer ses vermeye başlar. bu devrede sensör üzerinde bulunan potansiyometre ile eşik değerini belirliyoruz. Bu nedenle eşik ayarlanan değeri aşarsa pin DO'dan OV çıkışı verecektir. Aynı şekilde OV-SV aralığındaki pin AO'dan da kodda belirli bir eşik değeri aşıldığında çalışacak analog veri hazırlayabilirsiniz.


![image](https://user-images.githubusercontent.com/111511331/191015224-b902acba-70c4-4f28-813b-57bd2646eb35.png)

