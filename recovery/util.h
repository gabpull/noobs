#ifndef UTIL_H
#define UTIL_H

#include <QString>
#include <QByteArray>

/*
 * Convenience functions
 *
 * Initial author: Floris Bos
 * Maintained by Raspberry Pi
 *
 * See LICENSE.txt for license details
 */

QByteArray getFileContents(const QString &filename);
void putFileContents(const QString &filename, const QByteArray &data);
void getOverscan(int &top, int &bottom, int &left, int &right);

#endif // UTIL_H
