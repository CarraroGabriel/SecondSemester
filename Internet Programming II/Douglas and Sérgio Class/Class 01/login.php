<?php
    $usuario = $_POST["usuario"]; 
    $senha = $_POST["senha"];
    
    if ($senha == "123"){
        echo "Olá ".$usuario;
    } else {
        echo "Acesso Negado";
    }
?>