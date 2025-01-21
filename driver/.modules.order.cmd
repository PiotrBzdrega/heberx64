cmd_/usr/src/xlinedevkit_x64/driver/modules.order := {   echo /usr/src/xlinedevkit_x64/driver/xline.ko; :; } | awk '!x[$$0]++' - > /usr/src/xlinedevkit_x64/driver/modules.order
