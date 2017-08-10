# swift_c_module

git clone https://github.com/scofieldhsu/swift_c_module.git

cd swift_c_module/

add c_header_files/bluetooth.h, module.modulemap, Package.swift

+ module.modulemap:

module CSwiftBTLinux [system] {

    header "c_header_files/bluetooth.h"

    export *

}


