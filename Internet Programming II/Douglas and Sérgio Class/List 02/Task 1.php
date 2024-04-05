 Exercício 01:
 <!-- Crie um algoritmo que verifica se o valor de uma variável é positivo, negativo
ou igual a zero. A saída deve ser: "Valor Positivo", "Valor Negativo" ou "Igual a
Zero".  -->
<br>

<?php

$x = rand (-100, 100);

if ($x > 0) {
    echo "Valor Positivo <br>";
} elseif ($x < 0) {
    echo "Valor Negativo <br>";
} else {
    echo "Igual a Zero <br>";
}

echo $x;
?>