#define pin 6
void setup()
{
    Serial.begin(9600);   //Initialise serial to communicate with GSM Modem
}
void loop()
{
    delay(10000); //Give enough time for GSM to register on Network
    if(pin==true)
    SendSMS();    //Send one SMS
    while(1);     //Wait forever
}
void SendSMS()
{
    Serial.println("AT+CMGF=1");    //To send SMS in Text Mode
    delay(1000);
    Serial.println("AT+CMGS=\"+917395971053\"\r"); //Change to destination phone number 
    delay(1000);
    Serial.println("Hello from GSM Modem! There is a problem in the transmission line 001.      please do fix the problem quickly");//the content of the message
    delay(200);
    Serial.println((char)26); //the stopping character Ctrl+Z
    delay(1000);  
}
