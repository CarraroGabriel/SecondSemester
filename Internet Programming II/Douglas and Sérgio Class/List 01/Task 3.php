Exercício 03
<!-- Efetue um algoritmo PHP que receba um valor digitado pelo usuário e verifique se esse
valor é positivo, negativo ou igual a zero. Imprima na tela: "Valor Positivo", "Valor
negativo", "Igual a Zero" -->
<br>
<?php 
    $x = -23;

    if ($x > 0) {
        echo "o valor é positivo";
    } elseif ($x < 0) {
        echo "o valor é negativo";
    } else {
        echo "o valor é igual a zero";
    }
?>