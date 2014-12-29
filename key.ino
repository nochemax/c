//seguridad sstl 

int digito1;
int digito2;
int digito3;
int digito4;
int digito5;
int digito6;
int digito7;
int digito8;
long int val1=0;
long int val2=0;
long int  Solved=0;
long int key;
String resultado1= "";
String resultado2= "";


void setup(){  
  Serial.begin(9600);
}

void loop(){
 digito1=random(0, 9);
 digito2=random(0, 9);
 digito3=random(0, 9);
 digito4=random(0, 9);
 digito5=random(0, 9);
 digito6=random(0, 9);
 digito7=random(0, 9);
 digito8=random(0, 9);
 resultado1+=String(digito1)+String(digito2)+String(digito3)+String(digito4);
 resultado2+=String(digito5)+String(digito6)+String(digito7)+String(digito8);
 
 val1=(resultado1.toInt());
 val2=(resultado2.toInt());

Solved=(val1*val2/3); /// creacion key sttl

// se envia la Solved siendo key el valor entrate de codigficacion 

 Serial.println("nuevas variables :");
 Serial.println(val1);
 Serial.println(val2);
 Serial.println("resultao de la creacion key sttl:");
 Serial.println(Solved);
 delay(500);


if(val2==(key/val1*3)){ /// comprobacion de la key  
  
}
}
