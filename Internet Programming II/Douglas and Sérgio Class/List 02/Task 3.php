Exercício 03
<!-- Crie um algoritmo que faça o cálculo fatorial do valor de uma variável, exiba o
resultado na tela -->
<br>
<?php
    $x = 5;
    $calc = 1;

    for ($x; $x >= 1; $x--) {
        $calc *= $x;
    }
    echo '5!='.$calc;
?>