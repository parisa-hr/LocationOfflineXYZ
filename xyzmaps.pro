TARGET = qtgeoservices_xyzmaps
QT += location-private positioning-private

PLUGIN_TYPE = geoservices
PLUGIN_CLASS_NAME = QGeoServiceProviderFactoryXYZmaps
load(qt_plugin)

HEADERS += \
    qgeomapreplyxyz.h \
    qgeoserviceproviderpluginxyzmaps.h \
    qgeotiledmappingmanagerenginexyzmaps.h \
    QGeoTiledMapXYZmaps.h \
    qgeotilefetcherxyzmaps.h

SOURCES += \
    qgeomapreplyxyz.cpp \
    qgeoserviceproviderpluginxyzmaps.cpp \
    qgeotiledmappingmanagerenginexyzmaps.cpp \
    QGeoTiledMapXYZmaps.cpp \
    qgeotilefetcherxyzmaps.cpp


OTHER_FILES += \
    xyzmaps_plugin.json

