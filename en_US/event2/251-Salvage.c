          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dMistress Fi! I hope you weren't\nwaiting long, bzzzzat! So you want me\nto carry this, zrrbt?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0 */ "I'll be waiting for you up in the sky,\nso don't take too long, vrrrt!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Master, I suggest we also return to\nthe sky and carry the Kikwi to its\ndestination quickly.")
/*< 23>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*< 13>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = true;
/*< 24>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 25>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 26>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 27>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 29>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 30>*/ 	story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */] = true;
/*< 34>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_251_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dMove it! Move it! Zrrppt! Forcing me to\ntell you this every time reduces my\noverall efficiency, brrzt!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "I can verify with only 40% accuracy\nthat this person is a plant. However,\n<b<Owlan>>'s field of study includes\ncataloging unidentified plant species.\nWe can take this creature to Skyloft\nusing the robot. Would you like to call\nthe robot?\n[1]Please![2-]No, thanks.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Yes, \x0E\x01\x12\x04\x00\x05Master. I will signal the robot\nwith a telepathic transmission.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Yes, \x0E\x01\x12\x04\x00\x05Master. Simply inspect\nthe specimen again if you change your\nmind and wish to take it to Skyloft.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x14You've got some nerve, ko-ko-ko!\nHow dare you promise to take me to\nthe skies, kee-roo, and then suddenly\nchange your mind!\n\x0E\x01\x09\x04\x09\x13I was so sad thinking I would never get\nto settle down somewhere safe,\nkee-reep!")
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x04So! Take me with you this time, ka-koo!\n\n\n\n\x0E\x01\x09\x04\x00\x01Kee-karoo! Don't let me down!")
          	  case 1:
/*< 36>*/ 		switch (loadzone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x03Take me to a peaceful place where\nI can live in comfort without having\nto hide, kee-roo!\n\n\x0E\x01\x09\x04\x00\x01I'm counting on you, keek-eep!")
          		  case 1:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, hello again, kweek! I've been\nhiding out so long my shoulders are\nstiff.\n[1]What shoulders?[2]Poor thing.")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x14How rude! I do have shoulders,\nkweek--they're just not very\npronounced!\n\n\x0E\x01\x09\x04\x07\x11All I was trying to say is that constantly\nhiding from danger is a stressful way to\nlive, koo-keek!")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x13Everyone seems happy that peace\nhas returned to the forest... But I don't\nbelieve it for a second, koo-kakoo!\n\n\x0E\x01\x09\x04\x07\x04There's no way I'm going to give up\nand come out of hiding. Not ever,\nkee-woop!")
          					flw_19:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x05But sometimes I wonder, keep-eep...\nIsn't there somewhere peaceful I can\nlive without fear, without having to\nhide?\n[1]There is![2]I can help.")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x06\x07Oh! That's fantastic news, koo-karoo!\nI want you to take me there as soon as\nyou can!")
/*< 35>*/ 						loadzone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x13I bet there are still tons of horrible\nmonsters out there waiting to scratch\nme and do mean things, koo-weep!\n\n\x0E\x01\x09\x04\x07\x04We Kikwis have to spend our entire\nlives hiding like this just to survive,\nkwee-koo!")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x11That's right, kwee! Sitting in one spot\nall the time, never knowing when\ndanger is going to come along...kook.\nYou can't know what that's like!")
          				goto flw_38
          			}
          		}
          	}
          }

