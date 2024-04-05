Exercício 04
<!-- Efetue um algoritmo PHP que receba os valores A, B, C e D. Efetue a soma entre A e C,
a multiplicação entre B e D e verifique se o resultado da soma é maior, menor ou igual
ao da multiplicação. Imprima: "A+C é maior que B+D", "A+C é menor que B+D", "A+C
é igual a B+D". -->
<br>
<?php 
    $A = 2;
    $B = 4;
    $C = 6;
    $D = 8;

    $soma = $A + $C;
    $multi = $B * $D;

    if($soma > $multi){
        echo 'A+C é maior que B*D';
    }else if($soma < $multi){
        echo 'A+C é menor que B*D';
    }else{
        echo 'A+C é igual a B*D';
    }
?>