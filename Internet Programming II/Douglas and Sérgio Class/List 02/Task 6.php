Exercício 06

<!-- Crie um vetor com n posições e calcule o número de valores pares e ímpares -->

<br>

<?php
$par = 0;
    $impar = 0;

    for ($i=0; $i <= 100; $i++) { 
        $array[$i] = rand(1,100);
    }

    for ($i=0; $i < 100; $i++) { 
        if($array[$i] % 2 == 0){
            $par++;
        }else{
            $impar++;
        }
    }

    echo $par.' valores pares <br>'.$impar.' Valores ímpares'; 
?>