# swift_c_module

git tag -a 1.0.0 -m 'my verison 1.0.0'

git push origin 1.0.0


git push origin :1.0.0

git tag --delete 1.0.0




git clone https://github.com/scofieldhsu/swift_c_module.git

cd swift_c_module/

add c_header_files/bluetooth.h, module.modulemap, Package.swift

+ module.modulemap:

module CSwiftBTLinux [system] {

    header "c_header_files/bluetooth.h"

    export *

}


