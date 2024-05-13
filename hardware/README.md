# opinionated_60

The [opinionated_60](/) is a fixed-layout ANSI-based 60% mechanical keyboard PCB for *Cherry MX*-style switches with split `BACKSPACE`, split `RIGHT_SHIFT`, and 7u `SPACE` bar; there’s **no** option for a stepped `CAPS_LOCK` key.

![image/opinionated_60 pcb bottom view](/public/opinionated_60-pcb-bottom.png)

The opinionated_60 is a rather modified, stripped-down, cleaned-up, and re-wired revision of the [Plain60 MKD Edition](https://github.com/manzel/plain60-mkd-edition) (ANSI version) by [manzel](https://github.com/manzel), which itself is a modified version of the [Plain60 Flex Edition](https://github.com/evyd13/plain60-flex-edition) (rev2.2) by [evyd13](https://github.com/evyd13).

The PCB design and schematics were created in [KiCad 8.0.2](https://www.kicad.org/blog/2024/04/KiCad-8.0.2-Release/).

## Features

  - Fits the SINGAKBD × TGR Unikorn and the HAYTCO CAKE60! <3
  - QMK and Vial support via the respective [firmware](/firmware)
  - No LEDs, no RGB, and no underglow!
  - *n*-key rollover (NKRO)

Also fits most universal 60% cases (Mekanisk Klippe & Fjell, KBDfans Tofu, etc.), where *fits* means *Unikorn*-style *gummy o-ring friction fit*, not traditional *tray mount* as there’s **no** holes for screws! Consider universal 60% case support experimental, and please do your research regarding your specific (use) case.

## Specifications

  - ATmega32U4-AU microcontroller
  - USB 2.0 Type-C connector *(default)*, and/or
  - JST connector for unified daughterboard *(optional)*
  - ESD protection chip and fuse to protect the PCB
  - ISP pin holes for flashing [QMK](https://github.com/qmk/qmk_firmware) and [Vial](https://github.com/vial-kb/vial-qmk) firmware
  - AST1109MLTRQ audio indicator (piezo buzzer/speaker) *(optional)*

## Layout

The 7u bottom row can be configured as *blockerless*, *WKL (winkeyless)*, or *HHKB*-style.

![image/opinionated_60 key layout blank](/public/opinionated_60-layout-blank.png)

## Plate

The plate drawings were created in KiCad’s PCB design tool and could be manufactured as “PCB” from e.g. aluminum base material or regular FR-4 in any color. CNC-machining the plate has not been attempted, yet.

![image/opinionated_60 plate with flex cuts](/public/opinionated_60-plate-with-flex-cuts.png)

![image/opinionated_60 plate without flex cuts](/public/opinionated_60-plate-without-flex-cuts.png)

## Production

PCB and plate production files for can be found in the [Gerber](/hardware/Gerber) directory.

The production files were generated via [JLCKicadTools](https://github.com/matthewlai/JLCKicadTools).

## DISCLAIMER

Absolutely no guarantee for anything.

Use at your own risk!

## LICENSE

Creative Commons Attribution Share Alike 4.0 International (CC-BY-SA-4.0)
