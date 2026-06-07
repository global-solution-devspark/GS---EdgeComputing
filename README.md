# GS---EdgeComputing

Nome dos integrantes: 
- Fernando Raimundo Chelotti Ferreira Júnior / RM - 571610
- Gabriel de Melo Lopes / RM - 569404
- Guilherme Alvim Miranda Ferreira / RM - 573040
- João Pedro Jales Queiroz / RM - 568678
- Nicolas Vasconcelos Bettini Sadala / RM - 571011

Descrição do projeto:

O nosso projeto se chama GeoVision e é uma plataforma de desenvolvimento urbano que utiliza dados provenientes de satélites,
sensoriamento orbital e sensores urbanos para auxiliar gestores públicos na tomada de decisões estratégicas para suas cidades.
A plataforma é capaz de integrar diferentes fontes de informação para monitorar indicadores urbanos, analisar padrões de crescimento das cidades, 
identificar problemas ambientais e gerar previsões que contribuam para um desenvolvimento urbano mais sustentável e eficiente.

Como parte da solução proposta, foi desenvolvido um protótipo utilizando Arduino Uno e um sensor DHT22, simulando uma rede de sensores ambientais 
que poderiam ser instalados em satélites para coletar dados de temperatura e umidade do ar para auxiliar na identificação de possíveis ilhas de calor urbanas, 
um dos fenômenos monitorados pelo GeoVision. 


Objetivo da Solução:

O objetivo do projeto é demonstrar como dispositivos de Edge Computing podem realizar a coleta e o processamento de dados ambientais para auxiliar no monitoramento urbano.
A solução busca:

- Monitorar temperatura e umidade do ar em tempo real;
- Detectar condições favoráveis à formação de ilhas de calor;
- Gerar alertas visuais instantâneos;
- Apoiar o planejamento urbano baseado em dados ambientais.


Componentes Utilizados:
- Arduino Uno
- Sensor DHT22
- LEDs(vermelho, amarelo e verde
- Protoboard
- Jumpers


Explicação do funcionamento:

O sistema realiza leituras periódicas da temperatura e da umidade do ar através do sensor DHT22.
Após a coleta dos dados, o Arduino analisa os valores e determina o nível de risco para a formação de uma ilha de calor urbana.

Estado Normal
Quando a temperatura e a umidade estão em condições adequadas:
- LED Verde aceso;
- Mensagem exibida: "Nenhuma ilha de calor detectada"

Estado de Atenção
Quando:
- Temperatura entre 26°C e 30°C;
- Umidade entre 25% e 30%;

O sistema considera que existe possibilidade de formação de uma ilha de calor.

- LED Amarelo aceso;
- Mensagem exibida: "Possível surgimento de uma ilha de calor"

Estado de Alerta
Quando:
- Temperatura acima de 30°C;
- Umidade abaixo de 30%;

O sistema identifica condições críticas.

- LED Vermelho aceso;
- Mensagem exibida: "ALERTA: Ilha de calor detectada. Aumentar arborização na área!"


Estrutura do Circuito:

| Pino DHT22 | Arduino |
| ---------- | ------- |
| VCC        | 5V      |
| DATA       | A0      |
| GND        | GND     |

| LED      | Pino Arduino |
| -------- | ------------ |
| Verde    | D3           |
| Amarelo  | D2           |
| Vermelho | D4           |


Instruções de Execução:

- Entrar no link do wokwi
- Instalar o "DHT sensor library" (caso não esteja instalado)
- Iniciar a simulação
- Modificar a temperatura e a umidade para testar
os diferentes estados do sistema
- Abrir o monitor serial para visualizar 
as mensagens de alerta

Link Simulação Wokwi:
https://wokwi.com/projects/465824930229694465

Link Vídeo do projeto:
https://youtu.be/raK3OyoT49M
