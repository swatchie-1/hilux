// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HILUX_QT_HILUXADDRESSVALIDATOR_H
#define HILUX_QT_HILUXADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class HiluxAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HiluxAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Hilux address widget validator, checks for a valid hilux address.
 */
class HiluxAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HiluxAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // HILUX_QT_HILUXADDRESSVALIDATOR_H
