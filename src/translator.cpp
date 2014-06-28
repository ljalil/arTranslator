#include "translator.h"
#include <QtCore>
#include <QtSql>

translator::translator()
{
    trDB.setDatabaseName("/usr/share/dict/Qamusi.sqlite");
    trDB.open();
}


void translator::setQuery(translateGuide guide, QString word)
{
    if(guide == 0)
    {
        query = "select Meaning from arWord where Word='" + word +"';";
    }
    else if(guide == 1)
    {
        query = "select Meaning from engWord where Word='" + word +"';";
    }
}

QString translator::translateWord()
{
    QSqlQuery dbQuery(trDB);
    dbQuery.exec(query);
    if(dbQuery.next())
        return dbQuery.value(0).toString();
    else
        return "<font color='red'>الكلمة غير موجودة</font>";

}

translator::~translator()
{
    trDB.close();
}
