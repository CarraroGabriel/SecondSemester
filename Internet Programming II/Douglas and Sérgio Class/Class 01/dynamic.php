<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista de Colegas Estática</title>
</head>
<body>
    <table>
            <tr>
                <th colspan="2">
                    <?php
                    $colegas = 5; 
                    echo "Lista de colegas dinâmica";
                    echo "- $colegas colegas";
                    ?>
                </th>
            </tr>
            <tr>
                <th>Nomes:</th>
                <th>Emails:</th>
            </tr>


            <tr>
                <td>Gabriel Carraro</td>
                <td>gabrielcarraro.gr011@academico.ifsul.edu.br</td>
            </tr>
            <tr>
                <td>Rafael Steffen</td>
                <td>rafaelsteffen.gr014@academico.ifsul.edu.br</td>
            </tr>
            <tr>
                <td>Ruan Bueno</td>
                <td>ruanbueno.gr001@academico.ifsul.edu.br</td>
            </tr>
            <tr>
                <td>Willian Sanini</td>
                <td>williansanini.gr003@academico.ifsul.edu.br</td>
            </tr>
            <tr>
                <td>Douglas Kellermann &nbsp; &nbsp;</td> 
                <td>douglaskellermann@ifsul.edu.br</td>
            </tr>
    </table>
</body>
</html>