/*
 *  OpenBangla Keyboard
 *  Copyright (C) 2017 Muhammad Mominul Huque <mominul2082@gmail.com>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef PHONETIC_SUGGESTION_H
#define PHONETIC_SUGGESTION_H

#include <QMap>
#include <QString>
#include <QJsonObject>
#include <QRegularExpression>
#include "phoneticparser.h"
#include "Database.h"
#include "AutoCorrect.h"

struct Cache {
    QString base;
    QString eng;
};

class PhoneticSuggestion {
private:
    PhoneticParser parser;
    AutoCorrect autodict;
    Database db;

    QRegularExpression rgxPadding;
    QRegularExpression rgxKar;
    QRegularExpression rgxVowel;

    QString padBegin, padMiddle, padEnd;
    QMap<QString, QStringList> phoneticCache;
    QMap<QString, Cache> tempCache;

    void separatePadding(QString word);
    bool isKar(QString word);
    bool isVowel(QString word);
    QStringList joinSuggestion(QString writtenWord, QString autoCorrect, QStringList dictSuggestion, QString phonetic);
    void appendIfNotContains(QStringList &array, QString item);
    QStringList getDictionarySuggestion();
    QString getAutocorrect(QString word);
    QStringList addSuffix();
    void addToTempCache(QString full, QString base, QString eng);

public:
    PhoneticSuggestion();
    void loadLayout();
    void setLayout(QJsonObject lay);
    QStringList Suggest(QString word);
};

#endif // PHONETIC_SUGGESTION_H
