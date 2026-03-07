// PROGRAM RobotPemadamApi
/* Spesifikasi: Robot membaca input dari sensor Ultrasonic dan jika ada rintangan robot harus bertindak*/

#include <iostream>
using namespace std;
#include <string>

// KAMUS 
class RobotPemadam {
    private:
        int jarak; 
        string status; 

    public:
        int inputSensor (){
            cin >> jarak;
            return jarak;
        }
        void prosesLogika (){
            if (jarak > 20) {
                status = "Maju Mencari Api";
            }
            else if (jarak <= 20 && jarak >5){
                status = "UDAH DEKET NIH BRAY";
            }
            else if (jarak <= 5){
                status = "Posisi Tepat! Gas semprot kali ya!";
            }
        
        }
        void cetakStatus (){
            cout <<"[Sensor: " << jarak << "cm] -> Action: [" << status <<"]"<< endl;
        }
    };
  
int main (){
    // ALGORTIMA
    RobotPemadam robot;
    while (robot.inputSensor() != 67){
        robot.prosesLogika();
        robot.cetakStatus();
    }
    return 0;
}