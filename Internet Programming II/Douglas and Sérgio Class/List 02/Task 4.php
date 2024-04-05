Exercício 04
<!-- Crie um algoritmo para calcular a média final de um aluno, para isso, insira os
valores de três notas em um array, por fim, calcule a média geral. Caso a
média seja maior ou igual a seis, exiba aprovado, caso contrário, exiba
reprovado. Exiba também a média final calculada. -->
<br>
<?php

    $notas= array('7.4', '5.7', '9.8');
    $mediatotal = ($notas[0] + $notas[1] + $notas[2]) / 3;
    
    echo "A média das notas é:". $mediatotal."<br>";

    if ($mediatotal >= 6) {
            echo "Aprovado!";
        } else {
            echo "Reprovado!";
        }

?>