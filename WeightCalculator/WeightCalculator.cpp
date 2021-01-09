// WeightCalculator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    // Variables.
    double earthweight, mars = 0.38, mercury = 0.38, venus = 0.91, jupiter = 2.34, saturn = 1.06, uranus = 0.92, neptune = 1.19, planetw, selectedplanet;
    char pname1[15] = "Mercury", pname2[15] = "Venus", pname3[15] = "Mars", pname4[15] = "Jupiter", pname5[15] = "Saturn", pname6[15] = "Uranus", pname7[15] = "Neptune";

    std::cout << "[1] Mercury\n[2] Venus\n[3] Mars\n[4] Jupiter\n[5] Saturn\n[6] Uranus\n[7] Neptune\n";
    while (true) {

        // Earth weight.
        std::cout << "\nWhat is your weight in Earth: ";
        std::cin >> earthweight;

        // Select planet menu.
        std::cout << "\n\nEnter a planet: ";
        std::cin >> selectedplanet;

        // If else program.
        if (selectedplanet == 1) {
            planetw = earthweight * mercury;
            std::cout << "Your " << pname1 << " weight is " << planetw << " kg.\n";
        }
        else if (selectedplanet == 2) {
            planetw = earthweight * venus;
            std::cout << "Your " << pname2 << " weight is " << planetw << " kg.\n";
        }
        else if (selectedplanet == 3) {
            planetw = earthweight * mars;
            std::cout << "Your " << pname3 << " weight is " << planetw << " kg.\n";
        }
        else if (selectedplanet == 4) {
            planetw = earthweight * jupiter;
            std::cout << "Your " << pname4 << " weight is " << planetw << " kg.\n";
        }
        else if (selectedplanet == 5) {
            planetw = earthweight * saturn;
            std::cout << "Your " << pname5 << " weight is " << planetw << " kg.\n";
        }
        else if (selectedplanet == 6) {
            planetw = earthweight * uranus;
            std::cout << "Your " << pname6 << " weight is " << planetw << " kg.\n";
        }
        else if (selectedplanet == 7) {
            planetw = earthweight * neptune;
            std::cout << "Your " << pname7 << " weight is " << planetw << " kg.\n";
        }
    }

    
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
