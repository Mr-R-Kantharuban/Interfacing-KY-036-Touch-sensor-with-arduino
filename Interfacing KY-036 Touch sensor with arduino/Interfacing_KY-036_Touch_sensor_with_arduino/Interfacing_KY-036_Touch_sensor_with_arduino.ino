
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
int led = 13;
int val;
int sensorpin = 9;
 
void setup() {
 pinMode (led,OUTPUT);
 pinMode (sensorpin,INPUT);
 
}
 
void loop() {
val= digitalRead(sensorpin);
if (val==HIGH)
{
  digitalWrite (led, HIGH);
  }
  else
  {
      digitalWrite (led, LOW);
 
    }
}
