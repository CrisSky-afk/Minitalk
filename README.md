📡 Minitalk

Implementação do projeto Minitalk da Escola 42, desenvolvida em C, utilizando exclusivamente sinais UNIX para estabelecer comunicação entre processos.

O objetivo do projeto é criar um sistema simples de troca de mensagens entre um cliente e um servidor, transmitindo informações bit a bit através dos sinais SIGUSR1 e SIGUSR2.

📖 Sobre o projeto

O Minitalk é uma introdução ao conceito de IPC (Inter-Process Communication) utilizando sinais.

O programa é dividido em duas aplicações:

📥 Server: recebe os sinais enviados pelo cliente e reconstrói a mensagem original;
📤 Client: converte cada caractere da mensagem em bits e os envia ao servidor.

O desafio consiste em transmitir mensagens completas utilizando apenas sinais do sistema operacional.

🎯 Objetivos
Compreender o funcionamento dos sinais UNIX;
Implementar comunicação entre processos;
Trabalhar com manipulação de bits;
Desenvolver programas robustos utilizando funções assíncronas;
Implementar confirmação de recebimento (bônus).
⚙️ Funcionamento
Server

Ao iniciar, o servidor:

Obtém seu próprio PID;
Exibe esse PID no terminal;
Fica aguardando sinais enviados pelos clientes;
Reconstrói os caracteres recebidos bit a bit;
Exibe a mensagem recebida.

Exemplo:

./server

Saída:

Server PID: 5382
Waiting for messages...
Client

O cliente recebe como argumentos:

./client <PID> "<mensagem>"

onde:

Argumento	Descrição
PID	PID do servidor
mensagem	Texto que será enviado

Exemplo:

./client 5382 "Fazendo testes no minitalk"
🧠 Como a comunicação funciona

Cada caractere é composto por 8 bits.

Por exemplo:

A = 65

Em binário:

01000001

O cliente percorre os bits do caractere e envia:

SIGUSR1 → representa o bit 0;
SIGUSR2 → representa o bit 1.

Exemplo:

A

0 1 0 0 0 0 0 1
↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓
1 2 1 1 1 1 1 2

O servidor recebe os sinais, monta o byte novamente e imprime o caractere correspondente.

🔄 Fluxo da comunicação
Cliente
   │
   ▼
Converte caractere em bits
   │
   ▼
Envia SIGUSR1 ou SIGUSR2
   │
   ▼
Servidor recebe sinal
   │
   ▼
Reconstrói o byte
   │
   ▼
Imprime o caractere
   │
   ▼
Repete até o fim da mensagem
🏗️ Estrutura do projeto
.
├── Makefile
├── server
├── client
│
├── mandatory/
│   ├── includes/
│   └── src/
│
├── bonus/
│   ├── includes_bonus/
│   └── src_bonus/
│
├── libft/
└── ft_printf/
📂 Parte obrigatória
Server

Responsável por:

Exibir o PID;
Configurar os manipuladores de sinais;
Receber bits;
Reconstruir caracteres;
Exibir mensagens.
Client

Responsável por:

Validar os argumentos;
Converter caracteres em bits;
Enviar sinais ao servidor;
Finalizar a transmissão com '\0'.
⭐ Bônus

A versão bônus adiciona mecanismos extras de confiabilidade.

Confirmação de recebimento

Após receber corretamente um caractere (ou a mensagem inteira), o servidor envia um sinal de confirmação ao cliente.

Isso permite que o cliente saiba que a transmissão foi concluída com sucesso.

Suporte a múltiplos clientes

O servidor consegue identificar qual processo enviou o sinal através do PID presente em:

siginfo_t

permitindo responder adequadamente ao cliente correspondente.

⚙️ Compilação
Parte obrigatória
make

Executáveis gerados:

server
client
Parte bônus
make bonus

Executáveis gerados:

server_bonus
client_bonus
🧹 Regras do Makefile
Compilar
make
Compilar bônus
make bonus
Remover objetos
make clean
Remover executáveis e objetos
make fclean
Recompilar tudo
make re
▶️ Exemplos de uso
Mandatory

Terminal 1:

./server

Saída:

Server PID: 5382
Waiting for messages...

Terminal 2:

./client 5382 "Fazendo testes no minitalk"

Servidor:

Fazendo testes no minitalk
Bonus

Terminal 1:

./server_bonus

Saída:

Server PID: 5781
Waiting for messages...

Terminal 2:

./client_bonus 5781 "fazendo o teste do bonus"

Servidor:

fazendo o teste do bonus
🧪 Testes realizados
✅ Envio de mensagens curtas;
✅ Envio de mensagens longas;
✅ Espaços e caracteres especiais;
✅ Strings vazias;
✅ Validação de PID inválido;
✅ Comunicação entre diferentes terminais;
✅ Testes da versão bônus com confirmação de recebimento.
🔐 Tratamento de erros

O projeto realiza verificações para evitar comportamentos inesperados:

Número incorreto de argumentos;
PID inválido;
Falha no envio de sinais;
Encerramento seguro em caso de erro.

Exemplo:

./client

Saída:

Usage: ./client <PID> <message>
📚 Conceitos estudados

Durante o desenvolvimento deste projeto foram explorados conceitos como:

Sinais UNIX;
IPC (Inter-Process Communication);
signal() e sigaction();
Manipulação de bits;
PID (Process Identifier);
Comunicação assíncrona;
Programação orientada a eventos;
Sincronização entre processos.
🛠️ Tecnologias utilizadas
Linguagem C;
GNU Make;
Sinais UNIX (SIGUSR1 e SIGUSR2);
Libft;
ft_printf.
👩‍💻 Autoria

Projeto desenvolvido como parte do currículo da 42.

Autora:

Cristiane Suominsky (csuomins / CrisSky-afk)

"Pequenos sinais, grandes mensagens." 📡
