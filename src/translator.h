#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <QtCore>
#include <QtSql>
class translator
{
public:
    translator();
    ~translator();
    enum translateGuide{
        arabicToEnglish,englishToArabic
    };

    QSqlDatabase trDB = QSqlDatabase::addDatabase("QSQLITE");

    QString query;
    void setQuery(translateGuide guide, QString word);
    QString translateWord();
};

#endif // TRANSLATOR_H
