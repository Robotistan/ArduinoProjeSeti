## Ses ile Motor Kontrolü

Bu örnekte ses sensörünün okuduğu değere göre motor hareketini sağlayacaksınız. Ses sensörü, bir mikrofon ile ortam ses seviyesini ölçerek dijital bir çıkış sağlar. Sensör devresi mikrofondan alınan ses sinyalini yükseltir ve eşik seviyesine göre analog ses sinyalini dijital sinyale dönüştürür.
Motor aşırı akım çektiği için bu tür devrelerde motor sürücü kartı kullanılır. Motor sürücüsü, Arduino'dan aldığı sinyale göre motora güç verir. Bu sayede Arduino'ya zarar vermeden motoru güvenle kontrol edebilirsiniz.
Ses sensörü üzerinde bulunan potansiyometre ile ses seviyesinin eşik değeri ayarlanabilmektedir. Bu ayar tornavida yardımı ile yapılabilir.


Devreyi kuralım ve ardından proje kodumuzu yazmaya başlayalım.

![sound](https://user-images.githubusercontent.com/111511331/191266510-b4533044-dbac-4793-a0cc-18a97d8194fe.png)
