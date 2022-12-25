# LocationOfflineXYZ

Load {z}/{x}/{y}.png from storage 

* Auto detect extension of images

Installation from source
------------------------

Qt 5 with the following components:

- Core
- Location
- Location-private
- Positioning-private

For command line builds:
<pre>
$ git clone https://github.com/mola/LocationOfflineXYZ.git
$ cd LocationOfflineXYZ
$ mkdir build
$ cd build
$ qmake ..
$ make
$ sudo make install
</pre>

## Sample code

```
Map {
      activeMapType: map.supportedMapTypes[1]
      zoomLevel: 5
      plugin: Plugin {
         name: 'xyzmaps';
         PluginParameter {
            name: 'source'
            value: '/path/to/map/tiles/'
            
           }
       }
}
```

