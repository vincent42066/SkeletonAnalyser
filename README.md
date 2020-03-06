# Arborescence
  
./  
── NuitrackSDK  
│   ├── Examples  
│   │   ├── nuitrack_console_sample  --> nuitrack with cconsole sample   
│   │   │   ├── CMakeLists.txt  
│   │   │   ├── README.txt  
│   │   │   └── src  
│   │   │       └── main.cpp  
│   │   ├── nuitrack_csharp_sample   --> nuitrack with csharp  
│   │   │   ├── cmake  
│   │   │   │   ├── FindCSharp.cmake  
│   │   │   │   ├── FindDotNetFrameworkSDK.cmake  
│   │   │   │   ├── FindMono.cmake  
│   │   │   │   ├── UseCSharp.cmake  
│   │   │   │   ├── UseDotNetFrameworkSdk.cmake  
│   │   │   │   └── UseMono.cmake  
│   │   │   ├── CMakeLists.txt  
│   │   │   ├── nuitrack.net.dll  
│   │   │   ├── Program.cs  
│   │   │   └── README.txt  
│   │   ├── nuitrack_gl_sample --> main floder projet with realSense camera  
│   │   │   ├── android  
│   │   │   │   ├── AndroidManifest.xml  
│   │   │   │   ├── jni  
│   │   │   │   │   ├── android_main.cpp  
│   │   │   │   │   ├── Android.mk  
│   │   │   │   │   └── Application.mk  
│   │   │   │   ├── libs  
│   │   │   │   │   └── nuitrackhelper.jar  
│   │   │   │   ├── README.txt  
│   │   │   │   ├── res  
│   │   │   │   │   └── values  
│   │   │   │   │       └── strings.xml  
│   │   │   │   └── src  
│   │   │   │       └── com  
│   │   │   │           └── tdv  
│   │   │   │               └── nuitrack  
│   │   │   │                   └── sdk  
│   │   │   │                       └── samples  
│   │   │   │                           └── NuitrackGLSampleActivity.java  
│   │   │   ├── build  
│   │   │   │   ├── CMakeCache.txt  
│   │   │   │   ├── CMakeFiles  
│   │   │   │   ├── cmake_install.cmake  
│   │   │   │   ├── Makefile  
│   │   │   │   └── nuitrack_gl_sample.exe --> exec location after build  
│   │   │   ├── CMakeLists.txt  
│   │   │   ├── README.txt  
│   │   │   └── src  
│   │   │       ├── glut.h  
│   │   │       ├── main.cpp                --> Main of the application  
│   │   │       ├── NuitrackGLSample.cpp    --> lib to draw skeleton and get data from SDK  
│   │   │       └── NuitrackGLSample.h  
│   │   └── nuitrack_ni_gl_sample  --> nuitrack with NI gl          
│   │       ├── android  
│   │       │   ├── AndroidManifest.xml  
│   │       │   ├── jni  
│   │       │   │   ├── android_main.cpp  
│   │       │   │   ├── Android.mk  
│   │       │   │   └── Application.mk  
│   │       │   ├── libs  
│   │       │   │   └── nuitrackhelper.jar  
│   │       │   ├── README.txt  
│   │       │   ├── res  
│   │       │   │   └── values  
│   │       │   │       └── strings.xml  
│   │       │   └── src  
│   │       │       └── com  
│   │       │           └── tdv  
│   │       │               └── nuitrack  
│   │       │                   └── sdk  
│   │       │                       └── samples  
│   │       │                           └── NuitrackGLSampleNIActivity.java  
│   │       ├── CMakeLists.txt  
│   │       ├── OpenNI  
│   │       │   └── Include  
│   │       │       ├── Android-Arm  
│   │       │       ├── ARC  
│   │       │       ├── Linux-Arm  
│   │       │       ├── Linux-x86  
│   │       │       ├── MacOSX  
│   │       │       ├── Win32  
  
│   │       ├── README.txt  
│   │       └── src  
│   │           ├── main.cpp              
│   │           ├── NiGLSample.cpp        
│   │           └── NiGLSample.h  
│   └── VERSION  
├── probe_scanner                       --> STM32 project for probe scanning (not finished)  
│   ├── Core  
│   ├── Debug  
│   │   ├── Core  
│   │   ├── Drivers  
│   │   │   └── STM32L4xx_HAL_Driver  
│   │   ├── makefile  
│   │   ├── objects.list  
│   │   ├── objects.mk  
│   │   ├── probe_scanner.elf  
│   │   ├── probe_scanner.list  
│   │   ├── probe_scanner.map  
│   │   └── sources.mk  
│   ├── Drivers  
│   │   ├── CMSIS  
│   │   │   ├── Device  
│   │   │   └── Include  
│   │   └── STM32L4xx_HAL_Driver  
│   │       ├── Inc  
│   │       └── Src  
│   ├── probe_scanner.ioc  
│   ├── probe_scanner Release.launch  
│   ├── Release  
│   │   ├── Core  
│   │   │   └── Startup  
│   │   ├── Drivers  
│   │   │   └── STM32L4xx_HAL_Driver  
│   │   ├── makefile  
│   │   ├── objects.list  
│   │   ├── objects.mk  
│   │   ├── probe_scanner.elf  
│   │   ├── probe_scanner.list  
│   │   ├── probe_scanner.map  
│   │   └── sources.mk  
│   ├── RemoteSystemsTempFiles  
│   └── STM32L432KCUX_FLASH.ld  
├── README.md  
├── Skeleton                         --> get skeleton from image  
│   ├── CMakeLists.txt  
│   ├── FindNuiTrack.cmake  
│   ├── main.cpp  
│   ├── nuitrack.cpp  
│   └── nuitrack.h  
└── testCV                           --> folder to test openCV is workign  
    ├── exemple  
    ├── ex_opencv.cpp  
    └── Makefile  
  


## Comment l'utiliser ?
Voir documentation dévelopeur


## Liens utiles
SDK Nuitrack:
http://download.3divi.com/Nuitrack/platforms/nuitrack-windows-x64.exe
Install page
http://download.3divi.com/Nuitrack/doc/Installation_page.html


## Compiler (sortie dans bin/):
```bash
cd /NuitrackSDK/Examples/nuitrack_gl_sample/
mkdir bin/ && cd bin/
cmake ..
mingw32-make
```

## Exemple d'utilisation :
```bash
cd /NuitrackSDK/Examples/nuitrack_gl_sample/bin/
./nuitrack_gl_sample.exe
```