#include "qgeomapreplyxyz.h"
#include <QFile>
#include <QDateTime>
#include <QFileInfo>
#include <iostream>

QT_BEGIN_NAMESPACE

QGeoMapReplyXYZmaps::QGeoMapReplyXYZmaps(QString path, const QGeoTileSpec &spec, QObject *parent):
    QGeoTiledMapReply(spec, parent)
{
    QFile  fp(path);


    if (fp.exists())
    {
        if (fp.open(QIODevice::ReadOnly))
        {
            QFileInfo  i(path);

            setMapImageData(fp.readAll());
            setMapImageFormat(i.suffix());
            setFinished(true);
        }
        else
        {
            setError(QGeoTiledMapReply::CommunicationError, "Can't open file at " + path + ".");
            setFinished(true);
        }
    }
    else
    {
        setError(QGeoTiledMapReply::CommunicationError, "File not found in path (" + path + ").");
        setFinished(true);
    }
}

QGeoMapReplyXYZmaps::~QGeoMapReplyXYZmaps()
{
}

QT_END_NAMESPACE
