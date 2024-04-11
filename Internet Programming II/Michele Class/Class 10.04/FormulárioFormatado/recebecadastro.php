<?php
    $nome=$_POST["camponome"];
    $data_nasc=$_POST["campodata"];
    $email=$_POST["campoemail"];
    $idade=$_POST["campoidade"];
    $telefone=$_POST["campofone"];
    $estado=$_POST["campoestado"];
    $opcao=$_POST["opcao"];

    echo "<table border>";
    echo "<tr>";
    echo "<th> Nome </th> <th> Data de Nascimento </th> <th> Email </th> <th> Idade </th> <th> Telefone </th> <th> Estado </th> <th> Opção de Recebimento de Notícias </th>";
    echo "</tr>";
    echo "<tr>";
    echo "<td>".$nome."</td> <td>".$data_nasc."</td> <td>".$email."</td> <td>".$idade."</td> <td>".$telefone."</td> <td>".$estado."</td> <td>".$opcao."</td>";
    echo "</tr>";
    echo "</table>";
?>