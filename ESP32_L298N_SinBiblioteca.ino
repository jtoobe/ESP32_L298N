// Motor A
int ENA =33;
int IN1 = 32;
int IN2 = 25;


void setup ()
{
  // Declaramos todos los pines como salidas
  pinMode (ENA, OUTPUT);
  
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  
}

void loop ()
{
  Adelante ();
  delay (1000);
  Atras ();
  delay (1000);
  
  Parar ();
  delay (1000);
}

void Adelante ()
{
  //Direccion motor A
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  analogWrite (ENA, 255); //Velocidad motor A

}

void Atras ()
{
  //Direccion motor A
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  analogWrite (ENA, 255);  //Velocidad motor A
  
}


void Parar ()
{
  //Direccion motor A
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  analogWrite (ENA, 0); //Velocidad motor A
  
}

