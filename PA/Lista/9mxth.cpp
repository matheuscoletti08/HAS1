#include <stdio.h>
#include <math.h>

//#define ALTURA_BLOCO 0.20 // Altura do bloco em metros
//#define LARGURA_BLOCO 0.40 // Largura do bloco em metros
//#define PRECO_BLOCO 5.00 // Pre�o do bloco em reais
//#define PRECO_AFINS 100.00 // Pre�o dos AFINS por metro quadrado em reais 

int main() {
    float altura_muro, largura_muro, area_muro, preco_mao_de_obra, preco_blocos, preco_afins, preco_total;
    float qtd_blocos;
    float valor_mao_de_obra;
    float ALTURA_BLOCO = 0.20;
    float LARGURA_BLOCO = 0.40;
    float PRECO_BLOCO = 5.00;
    float PRECO_AFINS = 100.00;

    // Leitura da altura e largura do muro
    printf("Digite a altura do muro em metros: ");
    scanf("%f", &altura_muro);

    printf("Digite a largura do muro em metros: ");
    scanf("%f", &largura_muro);

    // C�lculo da �rea do muro
    area_muro = altura_muro * largura_muro;

    // C�lculo do valor da m�o de obra
    printf("Digite o valor cobrado pelo pedreiro por metro quadrado: ");
    scanf("%f", &valor_mao_de_obra);

    preco_mao_de_obra = valor_mao_de_obra * area_muro;

    // C�lculo da quantidade de blocos necess�rios
    qtd_blocos = ceil(area_muro / (ALTURA_BLOCO * LARGURA_BLOCO * 0.9));

    // C�lculo do valor gasto com blocos
    preco_blocos = qtd_blocos * PRECO_BLOCO;

    // C�lculo do valor gasto com AFINS
    preco_afins = area_muro * PRECO_AFINS;

    // C�lculo do valor total da obra
    preco_total = preco_mao_de_obra + preco_blocos + preco_afins;

    // Exibi��o dos resultados
    printf("Valor da mao de obra: R$ %.2f\n", preco_mao_de_obra);
    printf("Quantidade de blocos necessarios: %.0f\n", qtd_blocos);
    printf("Valor gasto com blocos: R$ %.2f\n", preco_blocos);
    printf("Valor gasto com AFINS: R$ %.2f\n", preco_afins);
    printf("Valor total da obra: R$ %.2f\n", preco_total);

    return 0;
}
