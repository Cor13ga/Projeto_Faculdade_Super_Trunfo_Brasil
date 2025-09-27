Super Trunfo de Países - Projeto de Programação
Introdução

Oi, esse é o meu projeto de faculdade para a disciplina de Programação! Eu desenvolvi um jogo de Super Trunfo de Países em C, usando a arquitetura MVC (Model-View-Controller). O jogo tem 100 países, com o Brasil como a carta Super Trunfo que sempre ganha (e mostra um alerta especial: "ALERTA: Carta Trunfo (melhor país do mundo)!"). Usei dados reais de população e força militar de 2025, com base em fontes como ONU e Global Firepower.

Objetivo
O objetivo foi criar um jogo simples, mas organizado, que simula o Super Trunfo com cartas de países. Cada carta tem dois atributos:
População (em milhões, projeções de 2025 da ONU).
Força Militar (score de 0 a 100, baseado no ranking Global Firepower 2025), pedi uma ia para gerara a lista.
O Brasil é a carta especial que vence qualquer comparação, e os 9 países mais poderosos militarmente (EUA, Rússia, China, Índia, Coreia do Sul, Reino Unido, França, Japão, Turquia) têm scores altos.

Regras do Jogo:
O baralho tem 100 cartas (os 100 países mais populosos).
O jogo é jogador vs. CPU. Cada um começa com 50 cartas (embaralhadas).
A cada rodada, o jogador escolhe um atributo (População ou Força Militar).
A carta com maior valor no atributo vence e ganha a carta do oponente.
Brasil - Super Trunfo: Sempre vence, não importa o atributo, e exibe o alerta.
O jogo acaba quando um jogador fica sem cartas.
Quem tiver cartas no final vence!

Estrutura MVC
Organizei o código em Model, View e Controller para manter tudo bem separado (estrutura que ja uso onde trabalho).
Dificuldades diferente de python tive me bati para puxar os dados das pastas sempre apresentava error de pasta naoe encontrada, tive que ir em formum e achei que a forma correta erra ../ restante e nao / restante como em python

Model (model.h, model.c):
Cuida dos dados (cartas, atributos, mãos dos jogadores).
Funções: inicializar o baralho, comparar atributos, transferir cartas.
Inclui a lógica do Super Trunfo (Brasil sempre vence).

View (view.h, view.c):
Mostra as cartas, mensagens e o estado do jogo no console.
Pega a escolha do atributo do jogador.
Exibe o alerta especial quando a carta do Brasil aparece.

Controller (controller.h, controller.c):
Controla o fluxo do jogo: rodadas, entradas, chamadas ao Model e View.
Gerencia as rodadas e decide o vencedor.

Main (main.c):
Inicia o jogo e conecta tudo.

como jogar:
Siga as instruções no console: escolha o atributo (0 para População, 1 para Força Militar).
Dados das cartas:
População: Baseada em projeções da ONU para 2025 (via Worldometers). Exemplo:
Índia: 1463.9 milhões
China: 1416.1 milhões
Brasil: 212.8 milhões
Força Militar: Score de 0 a 100, calculado como 101 - ranking do Global Firepower 2025. Exemplo:
EUA: 100 (1º)
Rússia: 99 (2º)
Brasil: 90 (11º)
Países fora do top 100 GFP têm score 0.
Brasil - Super Trunfo: Usa dados reais, mas sempre vence e mostra o alert

Desafios Enfrentados
Foi meio difícil organizar 100 países com dados reais, mas usei fontes confiáveis e simplifiquei os scores.
Ajustar o MVC em C (que não é orientado a objetos) exigiu planejar bem as funções.
Garantir que o Brasil sempre vence como Super Trunfo sem "mentir" nos dados foi um toque legal!
Conclusão
Esse projeto foi bem legal de fazer! Aprendi a usar o MVC, organizar código em C e trabalhar com dados reais. O Brasil como Super Trunfo ficou show, com o alerta dando um toque especial. Espero que o professor goste!
