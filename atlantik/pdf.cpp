#include "pdf.h"
#include <QPdfWriter>
#include <QDebug>

Pdf::Pdf(QObject* parent=0, QString nomDocument="nomDocument")
    :QTextDocument(parent)
{
    qDebug()<<"Pdf::Pdf(QObject* parent=0, QString nomDocument=\"nomDocument\"):QTextDocument(parent)";
    nameDoc=nomDocument;
    codeHTML="<html> <head> <meta charset='utf-8'> </head> <body style=\"font-size:180px;\">";
}

void Pdf::ecrireTexte(QString leTexte)
{
    qDebug()<<"void Pdf::ecrireTexte(QString leTexte)";
    codeHTML+="<p class=textPDF>"+leTexte+"</p>";
}

void Pdf::chargerImage(QString chemin)
{
    qDebug()<<"void Pdf::chargerImage(QString chemin)";
    codeHTML+="<div align=\"center\"> <img src=\""+chemin+"\"></div>";
}

void Pdf::imprimer()
{
    qDebug()<<"void Pdf::fermer()";
    codeHTML+="</body> </html>";
    setHtml(codeHTML);
    monPdfWriter=new QPdfWriter(nameDoc);
    monPdfWriter->setTitle("Atlantik Flotte");
    print(monPdfWriter);
    //Sauvegarder le fichier en PDF
    delete monPdfWriter;
}
