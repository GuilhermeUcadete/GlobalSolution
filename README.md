# GlobalSolution

Projeto de Monitoramento de Qualidade da Água
Este projeto tem como objetivo monitorar a qualidade da água, detectando anomalias como contaminação, pH anômalo, alta concentração de lixo e vazamento de petróleo. Utilizamos um Arduino Uno para ler dados de vários sensores e acionar alertas locais (LED e buzzer) quando uma condição anormal é detectada. Informações também podem ser exibidas em um LCD.

Descrição do Projeto
O projeto foi desenvolvido para monitorar a qualidade da água em um determinado local. Utilizamos sensores simulados para medir pH, turbidez, temperatura e detectar vazamentos de petróleo. Caso alguma anomalia seja detectada, um LED acende e um buzzer soa para alertar sobre a condição anormal.

Componentes Necessários
Para a realização deste projeto, utilizamos um Arduino Uno, três potenciômetros (para simular sensores de pH, turbidez e temperatura),  um LED, um buzzer. Além disso, são necessários jumpers e resistores para realizar as conexões.

Esquema de Conexão
Os potenciômetros foram conectados aos pinos A0, A1 e A2 do Arduino para simular os sensores de pH, turbidez e temperatura. Um botão foi conectado ao pino 6 para simular o sensor de vazamento de petróleo, configurando-o com pull-up interno. O LED foi conectado ao pino 7 e o buzzer ao pino 8 do Arduino. O LCD foi conectado aos pinos 12, 11, 5, 4, 3 e 2 do Arduino.

Funcionamento
O Arduino lê os valores dos sensores simulados (potenciômetros e botão), convertendo-os e mapeando-os para representar as leituras de pH, turbidez, temperatura. O código verifica se os valores lidos estão fora dos limites normais: pH fora da faixa de 5.0 a 9.0, turbidez maior que 50.0, temperatura maior que 30.0. Se uma anomalia for detectada, o LED de alerta acende e o buzzer emite um som.
