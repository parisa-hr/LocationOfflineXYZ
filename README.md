# LocationOfflineXYZ

Load {z}/{x}/{y}.png from storage 

* Auto detect extension of images

## Sample code

```
Map {
      activeMapType: map.supportedMapTypes[1]
      zoomLevel: 5
      plugin: Plugin {
         name: 'xyzmaps';
         PluginParameter {
            name: 'source'
            value: '/path/to/map/tiles'
           }
       }
}
```

