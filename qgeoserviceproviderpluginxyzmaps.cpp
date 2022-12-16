#include "qgeoserviceproviderpluginxyzmaps.h"
#include "qgeotiledmappingmanagerenginexyzmaps.h"


QGeoCodingManagerEngine *QGeoServiceProviderFactoryXYZmaps::createGeocodingManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    Q_UNUSED(parameters)
    Q_UNUSED(error)
    Q_UNUSED(errorString)
    return Q_NULLPTR;//new QGeoCodingManagerEngineBingmaps(parameters, error, errorString);
}

QGeoRoutingManagerEngine *QGeoServiceProviderFactoryXYZmaps::createRoutingManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    Q_UNUSED(parameters)
    Q_UNUSED(error)
    Q_UNUSED(errorString)

    return Q_NULLPTR;//new QGeoRoutingManagerEngineBingmaps(parameters, error, errorString);
}

QPlaceManagerEngine *QGeoServiceProviderFactoryXYZmaps::createPlaceManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    Q_UNUSED(parameters)
    Q_UNUSED(error)
    Q_UNUSED(errorString)

    return Q_NULLPTR;//new QPlaceManagerEngineBingmaps(parameters, error, errorString);
}

QGeoMappingManagerEngine *QGeoServiceProviderFactoryXYZmaps::createMappingManagerEngine(
        const QVariantMap &parameters,
        QGeoServiceProvider::Error *error,
        QString *errorString) const
{
    return new QGeoTiledMappingManagerEngineXYZmaps(parameters, error, errorString);
}
