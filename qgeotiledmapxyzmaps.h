#ifndef QGEOMAPXYZMAPS_H
#define QGEOMAPXYZMAPS_H

#include "QtLocation/private/qgeotiledmap_p.h"
#include <QtGui/QImage>
#include <QtCore/QPointer>

QT_BEGIN_NAMESPACE

class QGeoTiledMappingManagerEngineXYZmaps;

class QGeoTiledMapXYZmaps: public QGeoTiledMap
{
Q_OBJECT
public:
    QGeoTiledMapXYZmaps(QGeoTiledMappingManagerEngineXYZmaps *engine, QObject *parent = 0);
    ~QGeoTiledMapXYZmaps();

    QString getViewCopyright();
    void evaluateCopyrights(const QSet<QGeoTileSpec> &visibleTiles);

private:
    //QImage m_logo;
    QImage m_copyrightsSlab;
    QString m_lastCopyrightsString;
    QPointer<QGeoTiledMappingManagerEngineXYZmaps> m_engine;

    Q_DISABLE_COPY(QGeoTiledMapXYZmaps)
};

QT_END_NAMESPACE

#endif // QGEOMAPXYZmaps_H
