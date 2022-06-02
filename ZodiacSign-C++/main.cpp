//  Zodiac Sign(++)
//  Created by Semanur Bilada on 23.05.2022.

// There is a problem that i cannot solve. Even if name identified as a string, you can enter an integer in the output section for name variable.
// I couldn't fixed this problem...

#include <iostream>
#include <cstring>
using namespace std;

// Function Part:
void zodiacs( int day, int month, string name )
{
    // zodiac definitions as arrays:
    const char *zodiacs[12] = {"Aries (Koç)", "Taurus (Boğa)", "Gemini (İkizler)", "Cancer (Yengeç)", "Leo (Aslan)", "Virgo (Başak)", "Libra (Terazi)","Scorpio (Akrep)", "Sagittarius (Yay)", "Capricorn (Oğlak)", "Aquarius (Kova)", "Pisces (Balık)"};
    
    
    
    // Zodiac Groups:
    string fire = "They tend to be passionate, dynamic, and temperamental.";
    string earth = "They keep it real. They are the “grounded” people on the planet.";
    string air = "They are all about action, ideas, and motion. They are the “winds of change.” ";
    string water = "Intuitive, emotional and ultra-sensitive; they can be as mysterious as the ocean itself. ";
    
    
    
    // Zodiac Features:
    string aries = "They are adventurous, brave and assertive. They like to be pioneers.\nAlthough they make a lot of mistakes due to their ambitious and impatient nature, their warrior personalities allow them to get rid of almost any problem.\n";
    
    string taurus = "Art and love occupy a large space in their lives, they are touchy and sensitive.\nTheir stance is firm in the face of what they want in life. They have sustainable determination in line with their goals.\nThey attach great importance to the concept of friends and family.\n\n";
    
    string gemini = "Gemini zodiac signs, which are lively and positive, are at the forefront with their sharp intelligence.\nThey like attention, so they attract a lot of attention with their energetic and talkativeness in the environment they are in.\n\n";
    
    string cancer = "They are compassionate, emotional and well-intentioned people. Family life is their first priority.\nThey tend to be manipulative with their patient and protective side.\n\n";
    
    string leo = "It is a strong and perfectionist zodiac sign.\nAiming to be the best at what he does pushes him to be detail-oriented, creative and idealistic.\nBecause of these features, he often creates the perception that he likes himself too much.\n\n";
    
    string virgo = "They are disciplined signs that attach great importance to success and intelligence.\nOrder is everything to them, so they can tend to be obsessive most of the time.\nHe does not like to stand still and always aims to rise.\n\n";
    
    string libra = "Libras, who attach great importance to luxury, like to be balanced in their relationships and private lives.\nThey know with their flirtatiousness, they need love.\nThey also have respectful and elegant personalities.\n\n";
    
    string scorpio = "It is a ruthless, stubborn, vengeful zodiac sign.\nPassion, lust and war flow in his veins, so it is one of the scariest signs of the Zodiac.\n\n";
    
    string sagittarius = "It is a ruthless, stubborn, vengeful zodiac sign.\nPassion, lust and war flow in his veins, so it is one of the scariest signs of the Zodiac.\n\n";
    
    string capricorn = "Their determined nature is often perceived by people as stubbornness.\nIt is a self-indulgent sign, so it tends to be self-assured and cautious.\nHe aims for the top with his composure.\n\n";
    
    string aquarius = "The sense of responsibility is less than other zodiac signs.\nTrying to avoid the quarrelsome noise as much as possible, Aquarius are known for being relaxed, peaceful, and discreet.\n\n";
    
    string picses = "Peace of mind is their first priority.\nThey are dreamy, naive and highly emotional.\nGood intentions are prone to abuse.\n\n";
    
    
    
    // Calculating part:
    if((day>0 && day<=31) && (month>0 && month<=12 ))
    {
        if( (day>= 21 && month==3) || (day<20 && month==4) ) {  // Koç : 21 Mart - 20 Nisan
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[0] << endl;
            cout << "Your zodiac group is Fire: " << fire << "\n" << endl;
            cout << "Your features : " << aries << endl;
        }
        else if( (day>= 21 && month==4) || (day<20 && month==5) ) {  // Boğa : 21 Nisan - 20 Mayıs
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[1] << endl;
            cout << "Your zodiac group is Earth: " << earth << "\n" << endl;
            cout << "Your features : " << taurus << endl;
        }
        else if( (day>= 21 && month==5) || (day<21 && month==6) ) {  // İkizler : 21 Mayıs - 21 Haziran
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[2] << endl;
            cout << "Your zodiac group is Air: " << air << "\n" << endl;
            cout << "Your features : " << gemini << endl;
        }
        else if( (day>= 21 && month==6) || (day<=22 && month==7) ) {  // Yengeç : 21 Haziran - 22 Temmuz
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[3] << endl;
            cout << "Your zodiac group is Air: " << water << "\n" << endl;
            cout << "Your features : " << cancer << endl;
        }
        else if( (day>= 23 && month==7) || (day<23 && month==8) ) {  // Aslan : 23 Temmuz - 23 Ağustos
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[4] << endl;
            cout << "Your zodiac group is Air: " << fire << "\n" << endl;
            cout << "Your features : " << leo << endl;
        }
        else if( (day>=23 && month==8) || (day<23 && month==9) ) {  // Başak : 23 Ağustos - 23 Eylül
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[5] << endl;
            cout << "Your zodiac group is Air: " << earth << "\n" << endl;
            cout << "Your features : " << virgo << endl;
        }
        else if( (day>=24 && month==9) || (day<23 && month==10) ) {  // Terazi : 24 Eylül - 23 Ekim
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[6] << endl;
            cout << "Your zodiac group is Air: " << air << "\n" << endl;
            cout << "Your features : " << libra << endl;
        }
        else if( (day>= 21 && month==3) || (day<20 && month==4) ) {  // Akrep : 24 Ekim - 23 Kasım
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[7] << endl;
            cout << "Your zodiac group is Air: " << water << "\n" << endl;
            cout << "Your features : " << scorpio << endl;
        }
        else if( (day>=24 && month==10) || (day<23 && month==11) ) {  // Yay : 24 Ekim - 23 Kasım
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[8] << endl;
            cout << "Your zodiac group is Air: " << fire << "\n" << endl;
            cout << "Your features : " << sagittarius << endl;
        }
        else if( (day>=22 && month==12) || (day<20 && month==1) ) {  // Oğlak : 22 Aralık - 20 Ocak
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[9] << endl;
            cout << "Your zodiac group is Air: " << earth << "\n" << endl;
            cout << "Your features : " << capricorn << endl;
        }
        else if( (day>=21 && month==1) || (day<19 && month==2) ) {  // Kova : 21 Ocak - 19 Şubat
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[10] << endl;
            cout << "Your zodiac group is Air: " << air << "\n" << endl;
            cout << "Your features : " << aquarius << endl;
        }
        else if( (day>=20 && month==2) || (day<20 && month==3) ) {  // Balık : 20 Şubat - 20 Mart
            cout << "\nHello, " << name << " " << "\nYour birthday is : " << day << " / " << month << "\n" << endl;
            cout << "Your zodiac sign is " << zodiacs[11] << endl;
            cout << "Your zodiac group is Air: " << water << "\n" << endl;
            cout << "Your features : " << picses << endl;
        }
    }
    // for the verification of invalid inputs:
    else { printf("You entered invalid date!\nTry again...\n\n"); }
    
} //function
    
    
    
    
// Main Part:
int main( )
{
    // definitons:
    int day, month; string name;
    
    
    // Starting part:
    cout << "---- Welcome to the Zodiac Sign Calculator ----\n" << endl;
    cout << "Here is the 4 elements of Astrology: Zodiac Groups" << endl;
    cout << "1.Fire : Aries, Leo, Sagittarius." << endl;
    cout << "2.Earth : Taurus, Virgo, Capricorn." << endl;
    cout << "3.Air : Gemini, Libra, Aquarius." << endl;
    cout << "4.Water : Cancer, Scorpio, Pisces.\n" << endl;
    
    
    // for inputs:
    cout << "Enter your name:" << endl;
    cin >> name;
    
    cout << "Enter your birth day: ( '__' / __ / ____ )" << endl;
    cin >> day;
    
    cout << "Enter your birth month: ( __ / '__' / ____ )" << endl;
    cin >> month;
    
    
    // calling functions:
    zodiacs(day, month, name);
    
    
} //main
