          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\x0E\x01\x0C\x04\x06\x192")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\n\nTo ensure that you are able to find\nmore <y<hearts>> when you need them,\nthey are now available as a target\nfor your <g<dowsing >>ability.<pling>")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 11), ('next', 8), ('param3', 56)])
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Hold (C) and choose <y<hearts >>from\nthe circle of objects to set them as\nyour current target. \x0E\x01\x11\x02\x6CD This capability\nshould prove to be quite useful.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0 */ "You have elected to engage\n<r<Hero Mode>>, so hearts and heart\nflowers will not appear.\n\nHowever, if you choose to carry the\n<y<\x0E\x02\x01\x02d>>, then <pling>hearts\nand heart flowers do <r<have a chance\nof appearing>>.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\x0E\x01\x0C\x04\x06\x192")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\x0E\x01\x0C\x04\x06\x192")
          }

          void entrypoint_006_402() {
/*< 15>*/ 	start()
/*<  9>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 10>*/ 		switch (story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */]) {
          		  case 0:
/*< 14>*/ 			switch (adventure_pouch_has(8 0x0008)) {
          			  case 0:
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf(/* textboxtype: 2, unk: 0 */ "You have elected to engage\n<r<Hero Mode>>, so hearts and heart\nflowers will not appear. I recommend\nutilizing potions.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

