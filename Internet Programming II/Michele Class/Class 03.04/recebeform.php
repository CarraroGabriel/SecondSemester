<?php
// Primeira forma: // 

    foreach ($_POST as $chave => $valor) {
        echo "<p>".$chave.":"."$valor"."</p>";
    }


// Segunda forma: //

    $nome = $_POST["nome"];
    $sobrenome = $_POST["sobrenome"];
    $dataNasc = $_POST["dia"]."/".$_POST["mes"]."/".$_POST["ano"];
    $rg = $_POST["rg"];
    $cpf = $_POST["cpf"]."-".$_POST["cpf2"];
    $rua = $_POST["rua"];
    $numero = $_POST["numero"];
    $bairro = $_POST["bairro"];
    $estado = $_POST["estado"];
    $cidade = $_POST["cidade"];
    $cep = $_POST["cep"]."-".$_POST["cep2"];
    $email = $_POST["email"];
    $login = $_POST["login"];
    if ($_POST["pass"] == $_POST["passconfirm"]) {
        global $senha = $_POST["pass"];
    }
?>