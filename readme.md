## 📝 Descrição do Projeto

Este projeto é uma implementação do clássico jogo "Super Trunfo" em linguagem C, desenvolvido como parte das atividades da disciplina de Introdução à Programação na Estácio. O programa permite cadastrar duas cartas de cidades com diversos atributos e compará-las com base em diferentes características.

## 🎯 Objetivos de Aprendizado

- Praticar conceitos básicos de programação em C
- Trabalhar com diferentes tipos de variáveis (int, float, char, string)
- Implementar estruturas de controle (if-else, switch-case)
- Desenvolver menus interativos
- Realizar operações matemáticas e comparações
- Organizar e estruturar código

## ⚙️ Funcionalidades Implementadas

✅ Cadastro de duas cartas de cidades com:  
- Estado (A-H)  
- Número da carta (1-4)  
- Nome da cidade  
- População  
- Área em km²  
- PIB em bilhões  
- Pontos turísticos  

✅ Cálculos automáticos:  
- Densidade demográfica (população/área)  
- PIB per capita (PIB/população)  

✅ Sistema de comparação com menu interativo para escolher o atributo:  
1. População  
2. Área  
3. PIB  
4. Pontos turísticos  
5. Densidade demográfica (menor valor vence)  

✅ Resultados claros mostrando qual carta venceu ou se houve empate

## 🛠️ Como Compilar e Executar

1. Certifique-se de ter um compilador C instalado (gcc recomendado)
2. Salve o código em um arquivo com extensão `.c` (ex: `super_trunfo.c`)
3. Abra o terminal na pasta do arquivo e execute:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```

## 📚 Estrutura do Código

1. **Declaração de variáveis**: Todas as variáveis necessárias para armazenar os dados das cartas
2. **Cadastro das cartas**: Entrada de dados para duas cartas
3. **Cálculos**: Densidade e PIB per capita
4. **Menu interativo**: Switch-case para seleção do atributo de comparação
5. **Lógica de comparação**: If-else para determinar o vencedor
6. **Exibição de resultados**: Mostra os valores comparados e o resultado

## 📌 Observações

Este projeto foi desenvolvido como parte do aprendizado inicial de programação em C, focando em:
- Manipulação de diferentes tipos de dados
- Estruturas de controle básicas
- Entrada e saída de dados
- Lógica de programação

É possível expandir este projeto com:
- Validação de entradas
- Sistema de pontuação
- Mais cartas
- Persistência de dados (arquivos)

## 🤝 Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para:
- Reportar issues
- Sugerir melhorias
- Enviar pull requests