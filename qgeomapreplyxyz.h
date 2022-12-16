#ifndef QGEOMAPREPLYXYZ_H
#define QGEOMAPREPLYXYZ_H

#include <QtNetwork/QNetworkReply>
#include <QtLocation/private/qgeotilespec_p.h>
#include <QtLocation/private/qgeotiledmapreply_p.h>
#include <QtCore/QPointer>

QT_BEGIN_NAMESPACE

class QGeoMapReplyXYZmaps: public QGeoTiledMapReply
{
    Q_OBJECT

public:
    QGeoMapReplyXYZmaps(QString path, const QGeoTileSpec &spec, QObject *parent = 0);

    ~QGeoMapReplyXYZmaps();

// void           abort();

// QNetworkReply* networkReply() const;

// private Q_SLOTS:
// void           networkFinished();

// void           networkError(QNetworkReply::NetworkError error);

// private:
// QPointer<QNetworkReply>  m_reply;
};

QT_END_NAMESPACE

#endif
