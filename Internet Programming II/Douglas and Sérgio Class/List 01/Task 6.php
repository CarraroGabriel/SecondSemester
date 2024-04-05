Exercício 06
<!-- Efetue um algoritmo PHP que receba quatro notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de aprovado para média superior ou igual OU superior
a 7.0. -->
<br>
<?php 
    $n1 = 8.2;
    $n2 = 4.3;
    $n3 = 7.0;
    $n4 = 9.8;

    $media = ($n1 + $n2 + $n3 + $n4) / 4;

    if ($media >= 7.0) {
        echo "Aprovado!";
    } else {
        echo "Reprovado!";
    }
?>