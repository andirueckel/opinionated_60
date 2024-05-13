# opinionated_60

The [opinionated_60](/) is a fixed-layout ANSI-based 60% mechanical keyboard PCB for *Cherry MX*-style switches with split `BACKSPACE`, split `RIGHT_SHIFT`, and 7u `SPACE` bar; there’s **no** option for a stepped `CAPS_LOCK` key.

![image/opinionated_60 pcb bottom view](/public/opinionated_60-pcb-bottom.png)

## QMK

> [!NOTE]
> The following commands needs to be executed in [`qmk_firmware`](https://github.com/qmk/qmk_firmware) context.

Navigate to your local `qmk_firmware` directory/repository:

    cd ~/path/to/qmk_firmware/

Let `qmk_firmware` know about the opinionated_60 keyboard:

    ln -s ~/path/to/opinionated_60/firmware ./keyboards/opinionated_60

Make example for this keyboard (after setting up your build environment):

    make opinionated_60:default

Flashing example for this keyboard:

    make opinionated_60:default:flash

See the QMK [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Vial

> [!NOTE]
> The following commands needs to be executed in [`vial-qmk`](https://github.com/vial-kb/vial-qmk) context.

Navigate to your local `vial-qmk` directory/repository:

    cd ~/path/to/vial-qmk/

Let `vial-qmk` know about the opinionated_60 keyboard:

    ln -s ~/path/to/opinionated_60/firmware ./keyboards/opinionated_60

Make example for this keyboard (after setting up your build environment):

    make opinionated_60:vial

Flashing example for this keyboard:

    make opinionated_60:vial:flash

See the Vial [build environment setup](https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment) and the [make instructions](https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment) for more information.

Brand new to Vial/QMK? Start with the QMK [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

> [!NOTE]
> The Vial [secure unlock combination](https://get.vial.today/docs/porting-to-vial.html#6-set-up-a-secure-unlock-combination) is defined in [`/firmware/keymaps/vial/config.h`](/firmware/keymaps/vial/config.h).

## Bootloader

There’s two ways to enter the bootloader:

- **Physical reset button**: Press/Hold the button on the back of the PCB when connecting the USB.
- **Bootmagic reset key**: Press/Hold the `ENTER` key/switch on the keyboard when connecting the USB.

> [!NOTE]
> The [Bootmagic reset key](https://docs.qmk.fm/#/reference_info_json?id=bootmagic) is defined in [`/firmware/info.json`](/firmware/info.json).
