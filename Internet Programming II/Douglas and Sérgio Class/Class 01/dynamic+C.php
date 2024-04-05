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
                <th colspan="2">Lista de colegas php+C</th>
            </tr>
            <tr>
                <th>Nomes:</th>
                <th>Emails:</th>
            </tr>
        <?php 
        $nomes = ["Gabriel Carraro", "Rafael Steffen", "Ruan Bueno", "Willian Sanini", "Douglas Kellermann"];
        $emails = ["gabrielcarraro.gr011@academico.ifsul.edu.br", "rafaelsteffen.gr014@academico.ifsul.edu.br", "ruanbueno.gr001@academico.ifsul.edu.br", "williansanini.gr003@academico.ifsul.edu.br", "douglaskellermann@ifsul.edu.br"];
        for ($i = 0; $i < 5 ; $i++) {
            printf("<tr><td>%s</td>\t", $nomes[$i]);
            printf("<td> &nbsp; &nbsp; %s</td></tr>",  $emails[$i]);
        }
        ?>
</body>
</html>