          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 2, unk: 0 */ "I cannot offer my usual analysis\nbecause you are currently engaged in\na challenge created by the Thunder\nDragon Lanayru.")
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0 */ "You are located in the <b<Sealed Grounds>>.\nI detect the auras of a small number\nof relatively weak enemies.")
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Master, your current selection of\npouch items is \x0E\x02\x02\x04\x00\x00.")
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Suitability to current location is \x0E\x02\x03\x06\x00\x00Í%.")
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0 */ "My projections indicate that equipping\na sword is sufficient for combat at\nthis location.\n\nYou could also consider stocking your\npouch with helpful items.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 2, unk: 0 */ "To make matters worse, your Wooden\nShield is not well suited to defend you\nfrom fire-based attacks.~~~ I do not\nrecommend that you equip it.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "I do not have any relevant information\nto report at this time.")
          }

