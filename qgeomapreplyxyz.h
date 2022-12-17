#ifndef QGEOMAPREPLYXYZ_H
#define QGEOMAPREPLYXYZ_H

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
};

QT_END_NAMESPACE

#endif
