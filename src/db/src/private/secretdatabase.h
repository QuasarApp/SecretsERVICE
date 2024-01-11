//#
//# Copyright (C) 2023-2024 QuasarApp.
//# Distributed under the GPLv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include <SecretDB/idatabase.h>

#include <database.h>

#ifndef BOTDATABASE_H
#define BOTDATABASE_H

namespace  QASecret {

class SecretDataBase: public IDataBase, public QH::DataBase
{
public:
    SecretDataBase();

    // IDataBase interface
public:
    QSharedPointer<iRecord> getRecordByAlias(const QString &alias, bool ifNotExistsCreate) override;
    QSharedPointer<iRecord> getRecordByHash(const QByteArray &hash, bool ifNotExistsCreate) override;
    bool saveRecord(const QSharedPointer<iRecord> &record) override;

};
}
#endif // BOTDATABASE_H