#ifndef QGEOTILEFETCHERXYZMAPS_H
#define QGEOTILEFETCHERXYZMAPS_H

#include "qgeoserviceproviderpluginxyzmaps.h"

#include <QtLocation/private/qgeotilefetcher_p.h>
#include <QMutex>
#include <QNetworkReply>
#include <QString>

QT_BEGIN_NAMESPACE

class QGeoTiledMapReply;
class QGeoTileSpec;
class QGeoTiledMappingManagerEngine;
class QGeoTiledMappingManagerEngineXYZmaps;
class QNetworkAccessManager;

class QGeoTileFetcherXYZmaps: public QGeoTileFetcher
{
    Q_OBJECT

public:
    QGeoTileFetcherXYZmaps(const QVariantMap &parameters,
                           QGeoTiledMappingManagerEngineXYZmaps *engine, const QSize &tileSize);

    ~QGeoTileFetcherXYZmaps();

    QGeoTiledMapReply* getTileImage(const QGeoTileSpec &spec);

private:
    QString            _getURL(int type, int x, int y, int zoom);

private:
    Q_DISABLE_COPY(QGeoTileFetcherXYZmaps)

    QString mPath;
    QPointer<QGeoTiledMappingManagerEngineXYZmaps>  m_engineXYZmaps;
    QSize                                           m_tileSize;
};

QT_END_NAMESPACE

#endif
