//Setting Up Byte Array
const int MAX_MESSAGE_LENGTH = 53;

//SR Pin Numbers
int SER_Pin = 2;      //Blue
int OE_N_Pin = 3;     //Orange
int RCLK_Pin = 4;     //Green
int SRCLK_Pin = 5;    //White
int SRCLR_N_Pin = 6;  //Yellow


void setup() {
  //SR Pin Definitions
  pinMode(SER_Pin, OUTPUT);
  pinMode(OE_N_Pin, OUTPUT);
  pinMode(RCLK_Pin, OUTPUT);
  pinMode(SRCLK_Pin, OUTPUT);
  pinMode(SRCLR_N_Pin, OUTPUT);

  //Serial Init
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  Serial.flush();

  //SR Init
  digitalWrite(SRCLK_Pin, LOW);
  digitalWrite(SER_Pin, LOW);
  digitalWrite(RCLK_Pin, LOW);
  digitalWrite(SRCLR_N_Pin, HIGH);
  digitalWrite(OE_N_Pin, LOW);
}

void loop() {
  //Check to see if anything is available in the serial receive buffer
  while(Serial.available() > 0)  {

    //Create a place to hold the incoming message
    static char message[MAX_MESSAGE_LENGTH];
    static unsigned int message_pos = 0;

    //Read the next available byte in the serial receive buffer
    char inByte = Serial.read();

    //Message coming in (check not terminating character)
    if(inByte != '\n' && (message_pos < MAX_MESSAGE_LENGTH - 1))  {

      //Add the coming byte to our message
      message[message_pos] = inByte;
      message_pos++;
    }
    //Full message received...
    else
    {

      //Add null character to string
      message[message_pos] = '\0';

      //Reset for the next message
      message_pos = 0;

      updateSR(message);
    }
  }
}

void updateSR(char* data) {
  //turn SR off, then clear it
  OutputOff();
  Clear();
  
  // Interpret the received data as a pattern for blinking the LED
  for (int i = 0; i < 52; i++) {
    if(data[i] == '1')  {
      Clk1();
    }
    else  {
      Clk0();
    }
  }
  Latch();
  OutputOn();
}

void OutputOn()  {
  //Serial.print("O On");
  digitalWrite(OE_N_Pin, LOW);
  return;
}

void OutputOff()  {
  //Serial.print("O Off");
  digitalWrite(OE_N_Pin, HIGH);
  return;
}

void Clk1()  {
  //Serial.print("Clk1");
  digitalWrite(SER_Pin, HIGH);
  digitalWrite(SRCLK_Pin, HIGH);
  digitalWrite(SRCLK_Pin, LOW);
  return;
}

void Clk0()  {
  //Serial.print("Clk0");
  digitalWrite(SER_Pin, LOW);
  digitalWrite(SRCLK_Pin, HIGH);
  digitalWrite(SRCLK_Pin, LOW);
  return;
}

void Clear()  {
  //Serial.print("Clr");
  digitalWrite(SRCLR_N_Pin, LOW);
  digitalWrite(SRCLR_N_Pin, HIGH);
  return;
}
void Latch()  {
  //Serial.print("latch");
  digitalWrite(RCLK_Pin, HIGH);
  digitalWrite(RCLK_Pin, LOW);
  return;
}