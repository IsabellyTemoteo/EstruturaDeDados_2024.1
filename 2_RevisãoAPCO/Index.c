/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
Função 1: Soma de intervalos (Adaptado de: BeeCrowd)
Escreva um programa que leia dois números inteiros X e Y e
calcule a soma de todos os números que não são divisíveis por
13 que estão entre X e Y, incluindo eles mesmos.
Entrada: Dois números inteiros X e Y, tal que Y deve ser
maior que X.
Saída: Printar a soma de todos os números entre X e Y que
não são divisíveis por 13, os incluindo se for o caso.
Exemplo de entrada: X = 100, Y = 200
Exemplo de saída: 13954
*/

void soma_de_intervalos(){
    int x, y, soma = 0;
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    for(int i = x; i <= y; i++){
        if(i % 13 != 0)
            soma += i;
    }

    printf("A soma eh: %d\n\n", soma);
}

/* 
Função 2: Escreva um programa que leia um número inteiro N e calcule
o valor de S utilizando os n primeiros termos, sendo S = 1 +
1/2 +
1/3 +
1/4 + . . .
O resultado da soma deverá ser apresentado.
Entrada: Um número inteiro N.
Saída: Printar a soma de todos os termos de 1 a N levando
em conta a sequência apresentada.
Exemplo de entrada: N = 5
Exemplo de sa´ıda: 2.28333...
*/

void soma_de_fracoes(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float soma = 0.0;
    for(int i = 1; i <= n; i++){
        soma += 1/(float)i;
    }

    printf("A soma eh: %f\n\n", soma);
}

/*
Função 3: (Jogo de tabuleiro campo minado)(Adaptado de: Neps)

Mesmo estando no núcleo de pesquisa o senhor Astolfo é fascinado por jogos de tabuleiro desde sua juventude e gosta de jogar às vezes. Nas férias de julho, ele aprendeu um jogo chamado Campo minado, que é jogado em um tabuleiro com N células dispostas na horizontal e N células dispostas na vertical. O objetivo desse jogo é determinar, para cada célula do tabuleiro, o número de minas explosivas nos arredores da mesma (que são a própria célula e as células imediatamente vizinhas à direita, à esquerda, acima, abaixo e nas diagonais caso essas existam).
Por exemplo, a tabela abaixo ilustra uma possível configuração de um tabuleiro com 5 células:

A primeira célula não possui nenhuma mina explosiva, mas é vizinha de uma célula que possui uma mina explosiva. Nos arredores da segunda célula temos duas minas, e o raciocínio segue o mesmo para as demais células. A próxima tabela ilustra a resposta para esse caso.
1 2 2 2 1
2 3 2 2 1
1 2 2 3 2
2 2 2 1 1
1 1 2 1 1
Table 2: Matriz de quantidades

Agora que você sabe como o jogo funciona, você pode ajudar o senhor Astolfo escrevendo um programa de computador que, dado um tabuleiro, imprima o número de minas na vizinhança de cada posição. Assim, ele poderá conferir as centenas de tabuleiros que resolveu durante as férias.

Entrada:
A primeira linha da entrada contém um inteiro N indicando o número de células no tabuleiro. O tabuleiro é dado nas próximas N linhas. A i-ésima linha seguinte contém 0 se não existe mina na i-ésima célula do tabuleiro e 1 se existe uma mina na i-ésima célula do tabuleiro.

Saída:
A saída é composta por N linhas. A i-ésima linha da saída contém o número de minas explosivas nos arredores da i-ésima célula do tabuleiro.
*/

void campo_minado(){
    int n;
    printf("Digite valor de n:");
    scanf("%d", &n);

    int tabuleiro[n][n];
    int bombas[n][n];

    memset(bombas, 0, sizeof(bombas));

    printf("Preencha o tabuleiro: \n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < n; j++){
            if(i-1 >= 0){
                if(tabuleiro[i-1][j] > 0)
                    soma++;
                if(j-1 >= 0 && tabuleiro[i-1][j-1] > 0)
                    soma++;
                if(j+1 < n && tabuleiro[i-1][j+1] > 0)
                    soma++;
            }
            if(j-1 >= 0){
                if(tabuleiro[i][j-1] > 0)
                    soma++;
                if(i+1 < n && tabuleiro[i+1][j-1] > 0)
                    soma++;
            }
            if(i+1 < n){
                if(tabuleiro[i+1][j] > 0)
                    soma++;
                if(j+1 < n && tabuleiro[i+1][j+1] > 0)
                    soma++;
            }
            if(j+1 < n){
                if(tabuleiro[i][j+1] > 0)
                    soma++;
            }
            if(tabuleiro[i][j] > 0) soma++;

            bombas[i][j] = soma;
            soma = 0;
        }
    }

    printf("\nResultado: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", bombas[i][j]);
        }
        printf("\n");
    }

}

/*
Função 4 - Além dos jogos, o senhor Astolfo também é um grande fã de música e colecionou todo tipo de discos dos seus artistas favoritos e precisava da sua ajuda para guardar os dados desses discos além de gerar algumas informações sobre eles.

Os discos do senhor Astolfo têm as seguintes características:
• Tipo do disco
(a) CD
(b) DVD
(c) Vinil
• Nome da banda ou artista
• Preço de compra do disco
• Ano em que o disco foi lançado
• Nome do disco
• Quantidade de canções no disco
• Avaliação do disco (Nota de 0 a 10 que o senhor Astolfo deu para o disco)

O senhor Astolfo ainda está juntando esses discos com seus amigos e familiares, mas ele estima que há no máximo 100 discos espalhados, mas como ele não tem certeza disso deve ser criada uma variável utilizando o define para que se for necessário de mudar no futuro seja fácil de alterar.

Para armazenar essas informações sugere-se criar um vetor de struct (sugestão de nome "Disco") de forma que ele possa acrescentar os discos à medida que o senhor Astolfo recupere-os, já que ele não saberá as informações de todos os discos assim que ele for executar seu programa além de que novos discos podem ser comprados.

Para resolvermos o problema dos discos do senhor Astolfo precisaremos implementar as seguintes funcionalidades:
• Cadastrar um novo disco
Deve ser criada uma função que irá ler as informações e retornar uma variável do tipo "Disco" e armazenar essa variável no vetor.
• Mostrar todos os dados dos discos de um determinado artista ou banda
Deve ser criada uma função que irá receber o vetor de "Discos" por parâmetro e ler um nome de um artista ou banda a ser procurado. Após isso deve ser verificado todos os discos que já foram cadastrados, caso o nome do artista ou banda coincida com o nome que foi fornecido deve-se mostrar todos os dados do disco.
Se nenhum disco for encontrado deve ser mostrado na tela SOMENTE UMA VEZ a seguinte mensagem: "Não foi encontrado nenhum disco na galeria com o nome desse artista ou banda!". (Dica: Usem flags)
• Mostrar quanto foi gasto com cada tipo de Disco
Deve ser criada uma função que receberá o vetor de "Discos" por parâmetro. Depois ela fará a soma do quanto o senhor Astolfo já gastou com cada tipo de disco sendo eles "Vinil", "DVD" e "CD" e mostrar essas informações na tela.
• Mostrar discos lançados antes do ano 2006
O senhor Astolfo tem uma neta (Ana Maria) que está começando a gostar de música e quer mostrar a ela todos os discos que foram lançados antes do dia que ela nasceu que "coincidentemente" foi o dia 01/01/2006.
Para isso faremos uma função que irá mostrar na tela o nome do disco e autor de todos os discos que foram lançados antes do ano 2006.
• Recomendação de discos
Como participante do núcleo de pesquisa o senhor Astolfo costuma viajar bastante com seus alunos e sempre em suas viagens está ouvindo algum disco. Dito isto ele precisa de um sistema de recomendação de discos para ajudá-lo a escolher o disco que melhor se adéque a viagem.
Nosso sistema de recomendação vai ser simples, o senhor Astolfo dirá quantas canções exatamente o disco deve ter (para coincidir com o tempo aproximado de viagem) e qual a nota mínima que o disco deve possuir (para adequar ao gosto de outros passageiros).
Logo basta criar uma função que receberá o vetor de "Discos", a quantidade de canções e a nota mínima por parâmetro, percorrerá o vetor de discos, e assim que achar o primeiro disco que se adéque as condições que o senhor Astolfo determinou deve-se retornar esse "Disco" e mostrar na tela suas informações.
Caso nenhum disco atenda as exigências do senhor Astolfo deve se retornar uma mensagem UMA UNICA VEZ dizendo que ele está muito exigente e precisa abaixar seus parâmetros ou algo do tipo.
• Sair do controle de discos
Ao selecionar essa opção deve-se sair da função de controle de discos, agradecer por ter usado o controle de discos e retornar para a função principal.

Como ainda não foi mostrado funções passando structs por parâmetro deixarei um exemplo para servir como semente para o exercício aqui para que vocês tenham condições de realizá-lo.
*/

#define MAX_DISCOS 100

typedef struct disco{
    char tipo; // a - CD, b - DVD, c - Vinil
    char nome_banda[60];
    float preco;
    int ano;
    char nome[60];
    int qtd_cancoes;
    float avaliacao;
} disco;

void cadastrar_disco(disco *d, int *quantidade_cadastrada){
    printf("\nTipo do disco ['a' - CD, 'b' - DVD, 'c' - Vinil]: ");
    scanf(" %c", &d[*quantidade_cadastrada].tipo);
    getchar();

    printf("\nNome da banda: ");
    scanf("%s", d[*quantidade_cadastrada].nome_banda);
    getchar();

    printf("Preco de compra: R$");
    scanf("%f", &d[*quantidade_cadastrada].preco);

    printf("Ano de lancamento: ");
    scanf("%d", &d[*quantidade_cadastrada].ano);

    printf("Nome do disco: ");
    scanf("%s", d[*quantidade_cadastrada].nome);
    getchar();

    printf("Quantidade de cancoes: ");
    scanf("%d", &d[*quantidade_cadastrada].qtd_cancoes);

    printf("Avaliacao: ");
    scanf("%f", &d[*quantidade_cadastrada].avaliacao);

    (*quantidade_cadastrada)++;

    printf("Novo disco:\n");
    exibir_disco(d, (*quantidade_cadastrada)-1);
    printf("\n");
}


void exibir_disco(disco *d, int i) {
    printf("\nTipo do disco: %c\n", d[i].tipo);
    printf("Nome da banda: %s\n", d[i].nome_banda);
    printf("Preço de compra: R$%f\n", d[i].preco);
    printf("Ano de lancamento: %d\n", d[i].ano);
    printf("Nome do disco: %s\n", d[i].nome);
    printf("Quantidade de canções: %d\n", d[i].qtd_cancoes);
    printf("Avaliacao: %f\n", d[i].avaliacao);
}


void disco_determinada_banda(disco *d, int quantidade){
    char artista[60];
    printf("\nDigite o nome do artista/banda que deseja procurar: ");
    scanf("%s", &artista);
    getchar();

    int ok = 0;
    for(int i = 0; i < quantidade; i++){
       if(strcmp(d[i].nome_banda, artista) == 0){
            ok++;
            printf("Disco %d encontrado: ", ok);
            exibir_disco(d, i);
            printf("\n");
            
       }
    }

    if(ok == 0)
        printf("Nenhum artista/banda encontrado! Sinto muito. ˆ-ˆ");
}

void gastos_discos(disco *d, int quantidade){
    float dvd = 0.0, cd = 0.0, vinil = 0.0;
    for(int i = 0; i < quantidade; i++){
        if(d[i].tipo == 'a')
            cd += d[i].preco;
        else if(d[i].tipo == 'b')
            dvd += d[i].preco;
        else    
            vinil += d[i].preco;
    }

    printf("Ao total foram gastos:\nCD: R$%f\nDVD: R$%f\nVinil: R$%f\n\n", cd, dvd, vinil);

}

void discos_antes_2006(disco *d, int quantidade){

    int ok = 0;
    for(int i = 0; i < quantidade; i++){
       if(d[i].ano < 2006){
            ok++;
            printf("Disco %d encontrado: ", ok);
            exibir_disco(d, i);
            printf("\n");
            
       }
    }

    if(ok == 0)
        printf("Nenhum disco lancado antes de 2006 encontrado! Sinto muito. ˆ-ˆ");
}

void recomendacao_de_discos(disco *d, int quantidade){
    int qt_cancoes;
    float nota_min;

    printf("Quantas cancoes deve conter o disco: ");
    scanf("%d", &qt_cancoes);

    printf("Qual a nota minima: ");
    scanf("%d", &nota_min);

    int ok = 0;
    for(int i = 0; i < quantidade; i++){
       if(d[i].qtd_cancoes == qt_cancoes && d[i].avaliacao >= nota_min){
            ok++;
            printf("Disco encontrado!\n ");
            exibir_disco(d, i);
            printf("\n");
            break;
            
       }
    }

    if(ok == 0){
        printf("Nenhum disco atende suas expectativas. Reveja seus parametros! >.<");
    }

}


int controle_de_discos(){

    int quantidade_cadastrada = 0;

    disco d[MAX_DISCOS];

    printf("\n============================================\n");
    printf("Bem vindo ao sistema de controle de discos!");
    printf("\n============================================\n");

    int op;
    while(1){
        printf("\n============================================\n");
        printf("1 - Cadastrar disco\n");
        printf("2 - Disco de determinada banda/artista\n");
        printf("3 - Valor gasto em discos\n");
        printf("4 - Discos lancados antes de 2006\n");
        printf("5 - Recomendacao de Discos\n");
        printf("6 - Sair");
        printf("\n============================================\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);
        printf("\n============================================\n");

        switch(op){
            case 1:
                cadastrar_disco(&d, &quantidade_cadastrada);
            break;
            
            case 2:
                disco_determinada_banda(&d, quantidade_cadastrada);
            break;
            case 3:
                gastos_discos(&d, quantidade_cadastrada);
            break;
            case 4:
                discos_antes_2006(&d, quantidade_cadastrada);
            break;
            case 5:
                recomendacao_de_discos(&d, quantidade_cadastrada);
            break;
            case 6:
                printf("Obrigada por utilizar o nosso sistema de controle de discos!");
                return 0;

            default:
                printf("Opcao nao adicionada ate o momento! Tente novamente ^.^\n");
                break;
        }
    }

}

/* Função 5 - 
Nos dias de folga, o senhor Astolfo costuma parar e ir para a pequena fazenda de sua família, que possui uma lanchonete que produz diversos tipos de receitas com o que a fazenda produz. Mas o controle de estoque dos ingredientes não está sendo feito de forma correta, então ele vai precisar da sua ajuda nesse quesito.
A fazenda da família do seu Astolfo produz dois tipos de ingredientes que são: Leite e ovo.
A lanchonete tem um cardápio que possui atualmente 3 receitas, mas pretende expandir para 20 possíveis receitas. Cada receita gasta uma determinada quantidade de ovos ou leite (SOMENTE UM DELES).
Para controlar o estoque dos ingredientes vamos precisar de uma struct com as seguintes características:
• Nome da receita
• Ingrediente que é usado para fazer a receita (a) Ovo (b) Leite
• Quantidade de ingredientes necessária para produzir a receita
• Preço de venda da receita
• Quantas vezes a receita foi vendida
Para armazenar as informações das receitas sugere-se criar um vetor de struct (sugestão de nome ”Receita”) de forma que ele possa acrescentar as receitas adicionais a medida que elas vão sendo criadas.
Para armazenar as informações do estoque sugere-se criar duas variáveis (sugestão de nome ”qtd-ovos, qtd-leite”) e atualizar essas variáveis quando o estoque for alterado por vendas ou por reposição. O estoque começa com duas dúzias de ovos e 10 litros de leite.
Para resolvermos o problema da lanchonete do senhor Astolfo precisaremos implementar as seguintes funcionalidades:
• Cadastrar uma nova receita
Deve ser criada uma função void que irá receber por parâmetro o vetor das receitas e a posição da última receita que foi cadastrada. Dentro da função deve ser guardada as informações da ”Receita” e ao finalizar o cadastro informar na tela a seguinte mensagem ”Receita cadastrada com sucesso”, caso o número máximo de receitas já tenha sido cadastrado deverá ser mostrada a seguinte mensagem ”Não é possível de cadastrar mais receitas”.
• Acrescentar ovos no estoque
Deve ser criada uma função que receberá por parâmetro a quantidade de ovos que há no estoque, e a quantidade que será acrescentada ao estoque. Essa função deve retornar a nova quantidade de ovos no estoque.
• Acrescentar leite no estoque
Deve ser criada uma função que receberá por parâmetro a quantidade de leite que há no estoque, e a quantidade que será acrescentada ao estoque. Essa função deve retornar a nova quantidade de leite no estoque.
• Efetuar uma venda Na função principal deverá se perguntar qual o código da receita (Índice do vetor) que deve ser feita. Deve ser criada uma função que receberá por parâmetro o vetor de receitas, o código da receita a ser preparada. Essa função deve atualizar a quantidade de vezes que a receita foi vendida e retornar a quantidade do estoque que deve ser deduzida. Ao retornar a quantidade necessária para produzir a receita, o estoque correto deve ser atualizado dependendo do ingrediente que é necessário para cozinhar a receita (ovo ou leite).
• Mostrar totais das vendas Deve ser criada uma função sem retorno que receberá por parâmetro o vetor de receitas e a posição da última receita que foi cadastrada. Dentro da função deve ser calculado e mostrado na tela qual foi o total de venda de cada receita.
• Sair do controle da fazenda/lanchonete Ao selecionar essa opção deve-se sair da função de controle da fazenda e lanchonete, agradecer por ter usado e retornar para a função principal.
6. Função menu: Na função menu, deve ser mostrado o menu com cada funcionalidade que pode ser executada. Essa função deve retornar o valor que foi escolhido pelo usuário para que possa ser feita as devidas tratativas na função principal.
Ao digitar a opção 6 o programa deve agradecer ao usuário por ter usado este programa multifuncional e encerrar a execução. */

#define MAX_RECEITAS 20

typedef struct receita {
    char nome[60];
    char ingrediente; // 'a' - ovo, 'b' - leite
    int qtd_ingredientes;
    float valor;
    int qtd_vendas;
} receita;

int cadastrar_receita(receita *r, int *i) {
    if (*i == MAX_RECEITAS) {
        printf("Não é possível cadastrar mais receitas!\n");
        return 0;
    }

    printf("\n=============================================\n");
    printf("Digite o nome da receita: ");
    scanf("%s", r[*i].nome);
    getchar();
    printf("Ingrediente utilizado ['a' - ovo, 'b' - leite]: ");
    scanf(" %c", &r[*i].ingrediente);
    printf("Quantidade de ingredientes necessaria: ");
    scanf("%d", &r[*i].qtd_ingredientes);
    printf("Valor: R$");
    scanf("%f", &r[*i].valor);
    printf("Quantidade de vendas: ");
    scanf("%d", &r[*i].qtd_vendas);

    printf("=============================================\n");

    (*i)++;
    printf("Receita cadastrada com sucesso!\n");

    printf("=============================================\n\n");

    return 1;
}

int adicionar_ovo_estoque(int qtd_ovo) {
    int o;
    printf("Deseja adicionar quantos ovos? ");
    scanf("%d", &o);

    qtd_ovo += o;
    return qtd_ovo;
}

int adicionar_leite_estoque(int qtd_leite) {
    int l;
    printf("Deseja adicionar quantos litros de leite? ");
    scanf("%d", &l);

    qtd_leite += l;
    return qtd_leite;
}

int efetuar_venda_lanchonete(receita *r, int codigo_receita, int *qtd_leite, int *qtd_ovo) {
    if (r[codigo_receita].ingrediente == 'a') {
        if (*qtd_ovo < r[codigo_receita].qtd_ingredientes) {
            printf("Ingredientes insuficientes! Sinto muito :<\n\n");
            printf("=============================================\n");
            return 0;
        } else {
            (*qtd_ovo) -= r[codigo_receita].qtd_ingredientes;
            printf("A nova quantidade no estoque de ovos é: %d\n\n", *qtd_ovo);
        }
    } else {
        if (*qtd_leite < r[codigo_receita].qtd_ingredientes) {
            printf("Ingredientes insuficientes! Sinto muito :<\n\n");
            printf("=============================================\n");
            return 0;
        } else {
            (*qtd_leite) -= r[codigo_receita].qtd_ingredientes;
            printf("A nova quantidade no estoque de leite é: %d\n\n", *qtd_leite);
        }
    }

    (r[codigo_receita].qtd_vendas)++;
    printf("A receita foi vendida %d vezes!\n", r[codigo_receita].qtd_vendas);

    return 1;
}

void total_venda_receitas(receita *r, int receitas_cadastradas) {
    printf("==========================================\n");    
    printf("Total de vendas: \n");

    for (int i = 0; i < receitas_cadastradas; i++) {
        printf("%s: %d vendas!\n", r[i].nome, r[i].qtd_vendas);
    }

}

void menu_lanchonete_fazenda() {
    printf("==========================================\n");
    printf("1 - Cadastrar nova receita\n");
    printf("2 - Acrescentar ovos no estoque\n");
    printf("3 - Acrescentar leite no estoque\n");
    printf("4 - Efetuar uma venda\n");
    printf("5 - Mostrar total de vendas\n");
    printf("6 - Sair\n");
    printf("==========================================\n");
}

int Fazenda_Lanchonete() {
    receita r[MAX_RECEITAS];

    int qtd_leite = 10, qtd_ovo = 24, receitas_cadastradas = 0;

    printf("==================================================\n");
    printf("Bem-vindo ao nosso sistema fazenda-lanchonete!\n\n");

    while (1) {
        int op;
        menu_lanchonete_fazenda();
        printf("Selecione sua opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                cadastrar_receita(r, &receitas_cadastradas);
                break;

            case 2:
                qtd_ovo = adicionar_ovo_estoque(qtd_ovo);
                printf("A nova quantidade de ovos no estoque eh: %d\n\n", qtd_ovo);
                break;

            case 3:
                qtd_leite = adicionar_leite_estoque(qtd_leite);
                printf("A nova quantidade de leite no estoque eh: %d\n\n", qtd_leite);
                break;

            case 4:
                printf("Qual codigo da receita desejada? ");
                int codigo_receita;
                scanf("%d", &codigo_receita);
                efetuar_venda_lanchonete(r, codigo_receita, &qtd_leite, &qtd_ovo);
                break;

            case 5:
                total_venda_receitas(r, receitas_cadastradas);
                break;

            case 6:
                printf("Obrigado por utilizar nosso sistema fazenda-lanchonete!\n");
                printf("==================================================\n");
                return 0;
        }
    }
}


void menu(){
    printf("1 - Soma de Intervalos\n");
    printf("2 - Soma de Fracoes\n");
    printf("3 - Campo Minado\n");
    printf("4 - Controle de Discos\n");
    printf("5 - Fazenda/Lanchonete\n");
    printf("6 - Sair\n");
}

int main()
{
    printf("Bem-vindo ao nosso programa de exercicios!\n");

    while(1){
        int n;

        printf("\n=======================================\n\n");
        menu();
        printf("\n=======================================\n\n");
        printf("Digite a sua opcao: ");
        scanf("%d", &n);
        printf("\n=======================================\n\n");

        switch(n){
            case 1:
                soma_de_intervalos();
                break;
            
            case 2:
                soma_de_fracoes();
                break;
            
            case 3:
                campo_minado();
                break;

            case 4:
                controle_de_discos();
                break;

            case 5:
                Fazenda_Lanchonete();
                break;

            default:
                printf("Opcao invalida. Tente novamente.");
                break;

            case 6:
                printf("Obrigada por usar nosso programa!");
                return 0;

        }

    }


    return 0;
}

