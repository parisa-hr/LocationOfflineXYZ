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
            setMapImageData(fp.readAll());
            setMapImageFormat("png");
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

// QNetworkReply * QGeoMapReplyXYZmaps::networkReply() const
// {
// return m_reply;
// }

// void  QGeoMapReplyXYZmaps::abort()
// {
// if (!m_reply)
// {
// return;
// }

// m_reply->abort();
// }

// void  QGeoMapReplyXYZmaps::networkFinished()
// {
// if (!m_reply)
// {
// return;
// }

// if (m_reply->error() != QNetworkReply::NoError)
// {
// return;
// }

// setMapImageData(m_reply->readAll());

// const int  _mid = tileSpec().mapId();

// if ((_mid == 0) || (_mid == 1))
// {
// setMapImageFormat("png");
// }
// else
// {
// setMapImageFormat("jpeg");
// }

// setFinished(true);

// m_reply->deleteLater();
// m_reply = 0;
// }

// void  QGeoMapReplyXYZmaps::networkError(QNetworkReply::NetworkError error)
// {
// if (!m_reply)
// {
// return;
// }

// if (error != QNetworkReply::OperationCanceledError)
// {
// setError(QGeoTiledMapReply::CommunicationError, m_reply->errorString());
// }

// setFinished(true);
// m_reply->deleteLater();
// m_reply = 0;
// }

QT_END_NAMESPACE
