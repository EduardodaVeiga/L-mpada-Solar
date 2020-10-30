#  Lâmpada Solar 
#  Documentação do Projeto

## 1. Introdução

A implementação do projeto pode ser feita por você clique na imagem abaixo e divirta-se:

[![enter image description here](https://csg.tinkercad.com/things/eq19tyXHyPy/t725.png?rev=1603827373866000000&s=&v=1&type=circuits)](https://www.tinkercad.com/embed/eq19tyXHyPy?editbtn=1)




## 2. Objetivos

- Criar uma lâmpada autônoma que não necessite de interação humana para operar.
- Obter energia para o funcionamento da lâmpada de maneira sustentável.
- Facilitar o cotidiano do usuário com tal automação.

## 3. Materiais utilizados

### Lista de Materiais
| | | | |
|-----|-----|-----|-----|
|Regulador de Tensão LM7805 de 5V|![Regulador de Tensão LM7805 de 5V](https://beta-editor.tinkercad.com/components/thumbnails/regulator5V.png)|Arduíno UNO R3|![Arduíno UNO R3](https://beta-editor.tinkercad.com/components/thumbnails/arduinoUnoR3.png)
|2 Interruptores Deslisante|![Interruptor Deslisante](https://beta-editor.tinkercad.com/components/thumbnails/slideSwitch.png)|3 Resistores: 2 de 10k Ohms e 1 de 220 Ohms|![Resistor](https://beta-editor.tinkercad.com/components/thumbnails/resistor.png)|
|1 Fotorresistor|![Fotoresistor](https://beta-editor.tinkercad.com/components/thumbnails/photoResistor.png)|1 Bateria de 9V|![Bateria](https://beta-editor.tinkercad.com/components/thumbnails/battery9V.png)|
|1 Minicélula fotovoltaica 5V (Representada pela fonte de tensão variavel)|![fonte de tensão variavel](https://beta-editor.tinkercad.com/components/thumbnails/powerSupply.png)|1 Lâmpada| ![Lâmpada](https://beta-editor.tinkercad.com/components/thumbnails/lightBulb.png)|


## 4. Esquema Elétrico


O esquema elétrico pode ser visto por:

![](esquema.png)

##### ATENÇÃO!
Esquema não implemtado na vida real somente no simulador, faça os teste nescessarios antes de implemtar.

## 5. Código

```Cpp
#define lamp 4
#define ldr A0
int valor = 0;
int interruptor = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(lamp, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(6,INPUT);
}

void loop()
{
  valor = analogRead(ldr);
  interruptor=digitalRead(6);
  if(valor > 350 && interruptor == LOW)
  {
  	digitalWrite(lamp,HIGH);
  }
  if(valor <= 350)
  {
  	digitalWrite(lamp,LOW);
  }
  Serial.println(valor);
}
```

## 6. Resultados

O vídeo de demonstração pode ser visto em:
{{< youtube gwLBk86kesU >}}


## 7. Desafios encontrados

- Realizar a conexão dos componentes de forma funcional e organizada.
- Falta de pecas nescessarias no simulador para implementação do projeto.
- Buscar solucões para problesmas nas adaptacões do projeto.
- O projeto não pode ser implemtado fora do simulador devido a distancia dos membros 
- Falta de conhecimentos tecnicos em programação em arduino.
- Falta de de conhecimento em eletronica basica.
