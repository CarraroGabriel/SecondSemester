Exercício 05
<!-- Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o
número seja fora desse intervalo, informar que não existe mês com este
número -->
<br>
<?php

    $mes = 5;

    if ($mes <= 12) {
        echo "Mês 05 = Maio"."<br>";
    } else {
        echo "Valor de mês inválido.";
    }

?>