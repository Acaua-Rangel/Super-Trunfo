## 🎮 Descrição do Jogo

Este projeto é uma versão avançada do clássico jogo "Super Trunfo" implementado em linguagem C, desenvolvido como trabalho final da disciplina de Introdução à Programação. O sistema permite cadastrar duas cartas de cidades com diversos atributos e compará-las usando uma combinação estratégica de dois atributos diferentes.

## 🚀 Funcionalidades Principais

### 📋 Cadastro Avançado de Cartas
- Sistema completo para cadastrar duas cartas com:
  - Estado (A-H) e número (1-4) que formam um código único
  - Nome da cidade
  - População (hab)
  - Área territorial (km²)
  - PIB (bilhões R$)
  - Pontos turísticos
- Cálculos automáticos:
  - Densidade demográfica (hab/km²)
  - Normalização de valores para comparação

### 🎯 Sistema de Comparação
- **Seleção de dois atributos** diferentes para comparação
- **Regras específicas por atributo**:
  - Maior valor vence (para maioria dos atributos)
  - Menor valor vence (densidade demográfica)
- **Sistema de pontuação**:
  - Soma ponderada dos atributos selecionados
  - Comparação final baseada no total de pontos

### 💻 Interface Intuitiva
- Menus interativos e dinâmicos
- Validação de entradas do usuário
- Exibição detalhada dos resultados:
  - Comparação individual por atributo
  - Soma total dos pontos
  - Resultado final da rodada

## 🛠️ Tecnologias e Conceitos Utilizados

- **Linguagem C** com padrão ANSI
- **Estruturas de controle**:
  - Switch-case para menus dinâmicos
  - If-else aninhados para lógica complexa
  - Loops do-while para interação contínua
- **Operadores ternários** para código conciso
- **Funções auxiliares** para organização
- **Tratamento de entradas** do usuário

## 📥 Como Executar

1. **Pré-requisitos**:
   - Compilador GCC instalado
   - Terminal/Command Prompt

2. **Compilação**:
   ```bash
   gcc super_trunfo_avancado.c -o super_trunfo
   ```

3. **Execução**:
   ```bash
   ./super_trunfo
   ```

4. **Instruções de Uso**:
   - Siga os prompts para cadastrar duas cartas
   - No menu principal, selecione a opção de comparação
   - Escolha dois atributos diferentes para comparar
   - Analise os resultados e estratégias possíveis

## 📊 Estrutura do Código

1. **Constantes e Defines**:
   - Definição dos tipos de atributos
   - Funções auxiliares para nomeação

2. **Função Principal**:
   - Fluxo geral do programa
   - Chamada das sub-rotinas

3. **Cadastro de Cartas**:
   - Entrada de dados
   - Validação básica
   - Cálculos derivados

4. **Sistema de Comparação**:
   - Seleção de atributos
   - Lógica de comparação
   - Cálculo de pontuação
   - Exibição de resultados

5. **Tratamento de Erros**:
   - Validação de entradas
   - Prevenção de divisão por zero
   - Mensagens amigáveis

## 📌 Observações do Desenvolvimento

Este projeto demonstra a evolução no aprendizado de programação C, incorporando:

✔️ **Boas práticas** de programação  
✔️ **Organização** de código complexo  
✔️ **Tratamento** de casos especiais  
✔️ **Interface** amigável  

Foi especialmente desafiador implementar:
- A seleção dinâmica de atributos
- O sistema de pontuação ponderada
- A comparação com regras diferentes por atributo

## 📈 Possíveis Melhorias

1. **Validação avançada** de entradas
2. **Sistema de persistência** para salvar cartas
3. **Mais atributos** para comparação
4. **Sistema de torneio** com múltiplas cartas
5. **Interface gráfica** simples

## 🤝 Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para:
- Reportar problemas (issues)
- Sugerir melhorias
- Enviar pull requests
