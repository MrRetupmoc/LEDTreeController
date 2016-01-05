/*
5 Sec to turn on
3 flashes to turn off
*/

int pinLEDTree = 2;
int pinRetroReflectiveSensor = 3;

// Time Data
int sleep = 25;
int timedelay = 1000;

//Sensor Count Data
int count = 0;
int count_on = timedelay/sleep;
int count_off_last = 0;
int count_off_touch = 3;

bool TreeOffCylce = false;


void setup() {
  pinMode(pinLEDTree, OUTPUT);
  pinMode(pinRetroReflectiveSensor, INPUT);

  digitalWrite(pinLEDTree, LOW);
  Serial.begin(9600);
  Serial.println("Started Gay Fag Tree Sensor Detector System");
  Serial.println("By : Evan Richinson aka MrRetupmoc42");
  
  delay(1000);
}

void loop() {
  if (digitalRead(pinRetroReflectiveSensor) == LOW) {
    if (!TreeOffCylce && count <= count_on) {
      count += 1;
      Serial.println("Count = " + String(count) + ". ON Cycle, Detecting Something");
    }
    else if (TreeOffCylce && count < count_off_touch && count_off_last == count) {
      count += 1;
      Serial.println("Count = " + String(count) + ". OFF Cycle, Detecting Something");
    }
  }
  else {
    if (TreeOffCylce && count < count_off_touch) {
      count_off_last = count;
      //Serial.println("Count = " + String(count) + ". Nothing Detected");
    }
  }
  
  //Tree On / Off Statements
  if (!TreeOffCylce && count >= count_on) {
    count = 0;
    TreeOffCylce = true;
    digitalWrite(pinLEDTree, HIGH);
    //Serial.println("Tree ON");
  }
  else if (TreeOffCylce && count >= count_off_touch) {
    count = 0;
    TreeOffCylce = false;
    digitalWrite(pinLEDTree, LOW);
    //Serial.println("Tree OFF");
  }
  
  //Sleep the Cycle
  delay(sleep);
}
/*
5 Sec to turn on
3 flashes to turn off
*/

int pinLEDTree = 2;
int pinRetroReflectiveSensor = 3;

// Time Data
int sleep = 25;
int timedelay = 1000;

//Sensor Count Data
int count = 0;
int count_on = timedelay/sleep;
int count_off_last = 0;
int count_off_touch = 3;

bool TreeOffCylce = false;


void setup() {
  pinMode(pinLEDTree, OUTPUT);
  pinMode(pinRetroReflectiveSensor, INPUT);

  digitalWrite(pinLEDTree, LOW);
  Serial.begin(9600);
  Serial.println("Started Gay Fag Tree Sensor Detector System");
  Serial.println("By : Evan Richinson aka MrRetupmoc42");
  
  delay(1000);
}

void loop() {
  if (digitalRead(pinRetroReflectiveSensor) == LOW) {
    if (!TreeOffCylce && count <= count_on) {
      count += 1;
      Serial.println("Count = " + String(count) + ". ON Cycle, Detecting Something");
    }
    else if (TreeOffCylce && count < count_off_touch && count_off_last == count) {
      count += 1;
      Serial.println("Count = " + String(count) + ". OFF Cycle, Detecting Something");
    }
  }
  else {
    if (TreeOffCylce && count < count_off_touch) {
      count_off_last = count;
      //Serial.println("Count = " + String(count) + ". Nothing Detected");
    }
  }
  
  //Tree On / Off Statements
  if (!TreeOffCylce && count >= count_on) {
    count = 0;
    TreeOffCylce = true;
    digitalWrite(pinLEDTree, HIGH);
    //Serial.println("Tree ON");
  }
  else if (TreeOffCylce && count >= count_off_touch) {
    count = 0;
    TreeOffCylce = false;
    digitalWrite(pinLEDTree, LOW);
    //Serial.println("Tree OFF");
  }
  
  //Sleep the Cycle
  delay(sleep);
}
