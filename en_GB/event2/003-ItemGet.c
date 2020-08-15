          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 2), ('next', 149), ('param3', 23)])
/*<149>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
          	  case 0:
/*< 27>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 3), ('next', 28), ('param3', 23)])
/*< 28>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 4)])) {
          		  case 0:
/*< 24>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 4), ('next', 25), ('param3', 23)])
/*< 25>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 2)])) {
          			  case 0:
/*< 21>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 5), ('next', 22), ('param3', 23)])
/*< 22>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 0)])) {
          				  case 0:
/*<151>*/ 					printf(/* textboxtype: 5, unk: 1 */ "You got the last <y<\x0E\x02\x01\x02\x1C>>!\nNow you can open the temple door.\n\n\nHurry back to the summit and open the\ndoor to the temple so you can continue\nyour search for Zelda, who has been\ntaken into the depths of the temple!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 5, unk: 1 */ "You got the fourth <y<\x0E\x02\x01\x02\x1C>>!\nCollect all five pieces to complete the key\nthat opens the temple door. Find that\n<r<last piece>>!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1 */ "You got the third <y<\x0E\x02\x01\x02\x1C>>!\nCollect all five pieces to complete the key\nthat opens the temple door. Now go find\nthe other <r<two pieces>>!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the second <y<\x0E\x02\x01\x02\x1C>>!\nCollect all five pieces to complete the key\nthat opens the temple door. Now you\nhave to find the other <r<three pieces>>!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the first <y<\x0E\x02\x01\x02\x1C>>! \nFind all five pieces to complete the key\nthat opens the door leading into the\ntemple. Find the other <r<four pieces>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02\n>>! Students\nat the Knight Academy practice with these.\nIt looks like it has a fairly sharp blade!\n\nPress (1) at any time to look at the items\nyou're carrying.\x0E\x01\x11\x02\x4CD")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 95), ('param2', 1), ('next', 222), ('param3', 23)])
/*<222>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
          	  case 0:
/*<224>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 225), ('param3', 23)])
/*<225>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 26)])) {
          		  case 0:
/*<582>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02a>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02a>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<537>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Just <r<one>> more piece to go!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 550), ('param3', 23)])
/*<550>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 68)])) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02a>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<536>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Just <r<two>> more pieces to go!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02h>>! With\nthis, Rupees and treasure will appear more\noften...but it also carries a curse that\nprevents your pouch from opening! Eeek!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02y>>!\nSuperstrong metal makes this the toughest\n\x0E\x02\x01\x02w around.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02­>>! \nThis solid chunk of pure, crystallized\nmonster malice is extremely rare!")
/*<640>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 449), ('param3', 23)])
/*<449>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 52)])) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You collected every last <y<\x0E\x02\x01\x02->>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02->>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x1D>>!\nThis strangely shaped gold sculpture is\ncovered in mysterious patterns.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x0B>>!\nThis mysterious sword is bathed in\ndivine light.\n\nThe memories of violent battles surge\nwithin this sword when you raise it to\nthe sky. <pling>Your <r<Skyward Strike is now\nat maximum strength>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x0B>>!\nThis mysterious sword is bathed in\ndivine light.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02b>>!\nThis old map details the area as it was\nlong ago, before the sea succumbed to the\ndesert sand.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You upgraded to the mighty <y<\x0E\x02\x01\x02i>>!\nYour shots will now pepper a wide range. \nHold (A) to increase your shot power.")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02z>>! The mystical\npower within this shield allows it to repair\nitself over time. It protects against fire,\nelectric and curse attacks!")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02z>>! The mystical\npower within this shield allows it to <r<repair\nitself>> over time. \n\nThis shield's low durability means it breaks\neasily, but it deflects fire, electric and\ncurse attacks!")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02®>>!\nVery few small birds possess this sky-blue\nplumage, making these feathers\nextremely rare!")
/*<641>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 444), ('param3', 23)])
/*<444>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 50)])) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You collected every last <y<\x0E\x02\x01\x02.>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your personal growth.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02.>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02/>>!\nThis mysterious fruit enables you to\nsee beacons over the positions of\nSacred Tears for <r<30 seconds>>!")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02Q>>! This powerful\nelixir not only <r<restores all of your hearts\n>>but also contains <r<two >>servings in every\nbottle!")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x02c >>back!\nUse them to plan an escape that even\na Mogma would be proud of.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02c>>! Even the\nMogma don't see \x0E\x02\x01\x028 this fancy\nvery often!\n\nThey don't just dig holes; <g<they also let you\nburrow your way under the ground>>. Try to\nfind holes that you can dig down into!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02{>>!\nThis mystical shield can repair itself over\ntime. It's also more durable.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You upgraded to the <y<\x0E\x02\x01\x02>>!\nIt's now double its original size, making it\neasier to catch even the most nimble bugs!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02¯>>!\nA real rarity among skull ornaments,\nit shines with an eerie, golden color.")
/*<642>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You received <y<\x0E\x02\x01\x02>>!\nCan you believe this letter might actually\ncontain heartfelt words from Cawlin?\n\nTake extra care that you don't end\nup using it as scrap paper!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02A>>! This\nmysterious potion halves any damage\nyou receive! The effect lasts for <r<three\nminutes>>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <r<one>> <y<\x0E\x02\x01\x020>>! These\nform when a person is so completely\noverwhelmed with feelings of thankfulness\nthat crystallized gratitude is created.\nCollect these and show them to<b< Batreaux>>!")
/*<645>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x1E>>!\nIt is a carving of a coiled dragon made\nout of dazzling gold.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x0E>> back!\nNow you can cut right through your\ntroubles like before! You can also talk to\n<pling><b<Fi>> again.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02|>>!\nThis shield repairs itself with sacred\npower, and it's even more durable than\nother versions of the shield.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x3CD>>!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
          		flw_616:
/*<616>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x3CD>>!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02°>>!\nRumors say this item was dropped by\nthe goddess in a long-forgotten era. It's a\nlegendary treasure few will ever behold!")
/*<643>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <y<\x0E\x02\x01\x02>>!\nIt contains Beedle's beloved insect pal.\nHurry back to Beedle with it!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02B>>!\nThis mighty potion prevents you from\nsustaining any damage for <r<three minutes>>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x021>> back!\nThe power to blast a powerful gust of\nair at anything you choose is yours\nonce again!")
/*<427>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', 428), ('param3', 38)])
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x021>>!\nIt is an ancient and mystical device capable\nof blowing an endless gust of wind.\n\nIf you feel the controls are <r<out of\nalignment >>when you are using this item,\npress (v) to center them again.\x0E\x01\x11\x02\x9CD")
/*<407>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', -1), ('param3', 38)])
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x1F>>!\nIt is made of shining gold. It also looks like\nit may be a part from...something.\nThe surface is inlaid with circuitry.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02l>>! The hefty\ncapacity of this wallet allows you to store\nup to <r<500 Rupees >>in it!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02}>>!\nThis legendary shield is imbued with\nheroic power, making it completely\nindestructible!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x4CD>>!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
          		flw_617:
/*<617>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x4CD>>!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02Â>>! This\npotion will <r<automatically >>restore your\nshield when it breaks and replenishes\n<r<eight>> hearts. Plus, you can use it twice!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a \x0E\x00\x03\x02\n\x0E\x02\x01\x02 >>! It's worth a\nwhopping <r<100 Rupees>>! You must feel\nlike a celebrity.")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02T>>!\nDrink it to make your stamina gauge\ndeplete at a slower rate! One bottle is\neffective for <r<three minutes>>.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02m>>! You can carry up to\n<r<1,000 Rupees>> in this massive wallet.")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x02~>>! \nThis potion <r<fully replenishes>> your shield \ngauge and also restores <r<four>> hearts! ")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x5CD>>! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
          		flw_618:
/*<618>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x5CD>>! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02 >>!\nIt's a baby's toy. Perhaps somebody\ndropped it?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x02Ã>>!\nThis homemade soup is Pumm's specialty,\nbut watch out! It'll get cold in<r< five minutes>>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02D>>! \nThis sacred gift left by the goddess grants\nyou the power to explore underwater and\neven execute a spin maneuver!")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x022>>!\nIt shows the layout of the area and reveals\nunexplored rooms.")
/*<509>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 508), ('param3', 30)])
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 34)])
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1 */ "It also reveals the locations of treasure\nchests, so be sure to take a look!")
/*<512>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 511), ('param3', 34)])
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a \x0E\x00\x03\x02\x0B\x0E\x02\x01\x02!>>! It's worth a\nstaggering <r<300 Rupees>>! Shhh...\nDon't tell anyone!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02U>>!\nThis miraculous brew prevents your \nstamina gauge from depleting at all\nfor <r<three minutes>>!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x02>>!\nThis powerful elixir <r<automatically>>\nrestores your shield when it breaks\nand also replenishes <r<eight>> hearts!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x6CD>>!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
          		flw_619:
/*<619>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x6CD>>!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <y<\x0E\x02\x01\x02¡>>! They're a precious\nsource of protein that comes from a Deku\nHornet's hive. This material might be good\nfor making something.")
/*<628>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You picked up a \x0E\x00\x03\x02\x0C\x0E\x02\x01\x02\">>!\nThat means you've lost <r<10 Rupees>>.\nAnd that's a little bit sad.")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x11>>!\nThis mysterious plant represents your\nspirit, Link.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02V>>! Drink\nthis to make your oxygen gauge deplete at\na slower rate. One bottle is effective for\n<r<three minutes>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02n>>!\nThe voluminous capacity of this wallet\nallows you to store a whopping\n<r<5,000 Rupees >>in it!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02>>!\nWith this, you can carry 10 extra\n\x0E\x02\x01\x029. Keep it with you\nwhen you use your \x0E\x02\x01\x024!")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x7CD>>! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
          		flw_620:
/*<620>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x7CD>>! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xFCD>>! These highly\nprized feathers come from birds foreign to\nSkyloft and can serve as a useful material.")
/*<629>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You took back the <y<\x0E\x02\x01\x02Å>>!\nIt would take too long to grow if\nyou planted it here. Maybe you\nshould find another place for it...")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02Å>>!\nIt is a very young form of a legendary tree\nwhose fruit is said to cure any illness.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 105), ('param2', 1), ('next', 598), ('param3', 23)])
/*<598>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 96)])) {
          		  case 0:
/*<599>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x02i>><y< >>back!\nUse it to stun enemies on patrol.")
          			flw_433:
/*<433>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 417), ('param3', 38)])
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x024 >>back!\nUse it to stun enemies on patrol.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x024>>! Use this projectile-\nshooting weapon to fling \x0E\x02\x01\x029 at\nyour foes! The hard seeds will stun your\nenemies.\nYou can press (v) anytime you want to\n<r<center the cursor>>.\x0E\x01\x11\x02\x9CD")
/*<153>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 493), ('param2', 20), ('next', 521), ('param3', 25)])
/*<521>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 520), ('param3', 38)])
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <r<five>> <y<\x0E\x02\x01\x020>><y<s>>!\nThese crystals are feelings of gratitude\nin crystallized form.\n\nIt must have taken a lot of gratitude to\nproduce this bunch of <r<five crystals>>!\nHelping people feels good!")
/*<646>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1 */ "There's nothing useful in here!")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You really shouldn't open other people's\ncupboards without permission...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02W>>!\nThis wonder potion keeps the oxygen gauge\nfrom depleting at all for three<r< minutes>>!")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02o>>!\nNo wallet can match the cavernous\ncapacity and luxurious quality of this one!\nIt can store a jaw-dropping <r<9,000 Rupees>>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02>>!\nNow it carries up to <r<20>> additional\n\x0E\x02\x01\x029! Keep it with you\nwhen you use your \x0E\x02\x01\x024!")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x8CD>>! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
          		flw_621:
/*<621>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x8CD>>! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02£>>!\nThis dried mass of plant material could\ncome in handy. Might as well take it\nwith you.")
/*<630>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02´>>!\nThis engraved object was created to lead\nthe chosen hero to the hidden location\nof the Triforce!")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02Æ>>! Eating this\nsucculent fruit of legend cures any illness.\nTake it to the Thunder Dragon!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02K>>!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press (Z) while carrying an\nobject to look down and drop your cargo.\nBombs away!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x025>>! The unexplained power\ncontained within this insect-shaped item\nallows you to control it as it flies through\nthe air!\nPoint the Wii Remote <r<at the screen >>and\npress (A) to launch it into the air!\n\n\nIf the controls feel <r<out of alignment>>,\npress (v) while pointing the Wii Remote\nat the center of the screen.\x0E\x01\x11\x02\x9CD")
/*<422>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 38)])
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x02$>>!\nThis is a powder that is released by\nglowing mushrooms.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x13>>! Now you can hit targets\nat a very long range. Arrows also do a lot\nmore damage than Deku Seeds.\n\nPress (v) to center your aim anytime you\nfeel the aiming controls are <r<out of\nalignment>>.\x0E\x01\x11\x02\x9CD")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 498), ('param2', 20), ('next', 421), ('param3', 25)])
/*<421>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 7), ('next', -1), ('param3', 38)])
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02\x01>>! \nThis key will open a locked door. You can\nonly use it in this area.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02F>>!\nAreas with insects will now be marked with\n\x0E\x02\x04\x02\x1ACD on your map! You can open your map \nto see where the bugs like to hang out.")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You caught a <y<\x0E\x02\x01\x02H>>! This playful sprite\nreplenishes <r<six>> of your hearts!\n\n\nIf you put it in a bottle and keep it with\nyou, it will come to your aid <r<automatically\n>>if you <r<run out of hearts>>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x02p >>back!\nAnd look! The rest of your items are\nhere too!")
/*<435>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 8), ('next', 420), ('param3', 38)])
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02p>>!\nYou can store all kinds of useful items in\nthis handy piece of gear.")
/*<603>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 57)])
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x9CD>>! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
          		flw_622:
/*<622>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\x9CD>>! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02¤>>! It's the tail of a\nlarge lizard with a spiked ball on the end.\nSure, it's a little gross, but you never know\nwhen you might need one.")
/*<631>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02Ç>>! Your wallet can\nnow hold an additional 300 Rupees!")
/*<644>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02G>>!\nUse it to catch bugs and other small things.\nWhen you're hunting bugs, remember to\napproach quietly and strike quickly!")
/*<423>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 612), ('param3', 38)])
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x026>>! It's just normal\nwater, but it might come in handy\nsometime.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a \x0E\x00\x03\x02\x07\x0E\x02\x01\x02\x02>>! It's worth just\n<r<1 Rupee>>, so collect lots of them!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You made your <y<\x0E\x02\x01\x02p\n>>bigger! You can now fit an additional\nitem inside.")
/*<604>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 57)])
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02>>!\nNow it carries up to <r<30>> additional\n\x0E\x02\x01\x029! Keep it with you\nwhen you use your \x0E\x02\x01\x024!")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xACD>>! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
          		flw_623:
/*<623>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xACD>>! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x02¥>>!\nThis hard concretion sparkles brightly. \nIt also has lots of different uses.")
/*<632>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You found a <y<\x0E\x02\x01\x02H>>!\nThis playful sprite replenishes\n<r<six>> of your hearts!\n\nYou don't have an <y<\x0E\x02\x01\x02>>,\nhowever, so you'll have to let this one\nfly off.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You found a <y<\x0E\x02\x01\x02H>>!\nThis playful sprite replenishes\n<r<six>> of your hearts!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x027>>! These\nspores from a giant mushroom are said to\nwork wonders on injured birds.")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x027>>!\nThese spores are from a giant mushroom.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x02\x14>> back!\nNow you can reach faraway spots again.")
/*<429>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 430), ('param3', 38)])
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x14>>! With this sacred\ngift, you will be able to explore areas\nthat were previously unreachable!\n\nAim for special <r<targets>> and <r<vines>>, then fire\na claw on a chain that pulls you to the\nplace you have targeted!\n\nPress (v) to center your aim anytime you\nfeel the aiming controls are <r<out of\nalignment>>.\x0E\x01\x11\x02\x9CD")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', -1), ('param3', 38)])
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a \x0E\x00\x03\x02\x08\x0E\x02\x01\x02\x03>>! It's worth <r<5 Rupees>>.\nBetter drop it in your wallet for now.")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a \x0E\x00\x03\x02\x08\x0E\x02\x01\x02\x03>>! It's worth <r<5 >><r<Rupees>>.\nLucky find!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02r>>!\nYour maximum number of hearts is\nincreased by <r<one >>as long as you carry\nthis with you.\nYou can always keep it with you at times\nwhen you think you'll need it most.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02>>!\nNow you can carry <r<5>> extra arrows. Carry it\nwith you when you're using the bow.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xBCD>>!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
          		flw_624:
/*<624>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xBCD>>!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02¦>>!\nLegends say this beautiful flower\nflourished in the ancient past.\nSupposedly it glows in the dark...")
/*<633>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x028>>! Use these sharp\nclaws to dig through patches of soft earth.\n\n\nBe sure to try digging with (A) anywhere\nyou see signs that something has been\nburied in soft ground.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x15>>!\nIt proves your victory today.\nWait till Zelda sees this!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <r+<\x0E\x02\x01\x02\x04>>! It's worth <r<20 Rupees>>.\nDon't spend it all in one place!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You upgraded to the <y<\x0E\x02\x01\x02Z>>!\nCrafted for the expert bowman, this bow\nhas enhanced attack power and can launch\narrows even farther!")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You upgraded to the <y<\x0E\x02\x01\x02>>!\nWith this, you can carry <r<10>> extra arrows.\nCarry it with you when you're using\nthe bow.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02§>>! These amber-\ncolored chunks of precious stone are\nfound everywhere. No one knows where\ntheir strange shape comes from.")
/*<634>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 397), ('param3', 23)])
/*<397>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 28)])) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got <y<5 >><y<\x0E\x02\x01\x029>>! These small seeds\nserve as ammunition for your \x0E\x02\x01\x024.\nMake sure you've always got a few handy!")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
/*<503>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 493), ('param2', -5), ('next', -1), ('param3', 25)])
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 5, unk: 1 */ "The <y+<\x0E\x02\x01\x02\x05 >>is complete! With its power,\nyou have the ability to make Zelda's wish of\n<r<vanquishing >><b<Demise>> a reality.")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got <y<\x0E\x02\x01\x02J>>! It may\nlook like ordinary water, but this pure\nwater contains a powerful energy.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got some <y<\x0E\x02\x01\x02J>>!\nThis pure water can heal the wounds of the\nWater Dragon. It has mystical properties\nthat cannot be found in ordinary water.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You have upgraded to the <y<\x0E\x02\x01\x02[>>!\nIt uses a sacred power of the goddess to\nrain a terrible force upon your enemies.")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02t>>!\nThis light wooden shield breaks easily and\ncan burn, so be careful how you use it.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You've upgraded to the <y<\x0E\x02\x01\x02>>!\nIt holds <r<15>> extra arrows. Carry it with \nyou when you're using the bow.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xCCD>>! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
          		flw_625:
/*<625>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xCCD>>! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02¨>>! This item is similar\nin appearance to an \x0E\x02\x01\x02§, yet very\ndifferent. It can only be found in certain\nplaces.")
/*<635>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <y<\x0E\x02\x01\x02(>>!\nThrow them or roll them to blow up even\nhard objects. Try to pick up and store\nthem whenever you come across any.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02\x06>>! This item's life-giving\nenergy restores one heart of life.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x02\ >>back!\nTime to make something explode.")
/*<426>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 434), ('param3', 38)])
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 5, unk: 0 */ "You got a <y<\x0E\x02\x01\x02\>>! <b<Ledd>> was kind enough\nto give it to you, so make sure you take\ngood care of it.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You found a <y<\x0E\x02\x01\x02\>>!\nYou can store bombs in this bag and carry\nthem with you to use later.\n\nNow that you can carry bombs with you,\nthere's a good chance you can get to\nplaces you haven't explored yet.\nSee if <b<Ledd >>will lend it to you!")
/*<414>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', -1), ('param3', 38)])
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02K>>!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press (Z) while carrying an\nobject to look down and drop your cargo.\nBombs away!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02u>>!\nThis shield is much more durable than\nthe standard \x0E\x02\x01\x02t.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02>>! It can hold\n<r<5>> extra bombs, so carry it with you when\nyou need extra firepower.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xDCD>>!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
          		flw_626:
/*<626>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xDCD>>!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02©>>!\nIt may look like a boring wad of gunk,\nbut it's used to make all sorts of things!")
/*<636>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 491), ('param2', 199), ('next', 455), ('param3', 23)])
/*<455>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 54)])) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You learned the <y<\x0E\x02\x01\x02º>>!\nIt's a mysterious melody that has been\npassed down from ancient times.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <y<\x0E\x02\x01\x02)>>! Throw them or roll\nthem to blow things up. Into your Bomb\nBag they go!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 158), ('param3', 23)])
/*<158>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02\x07>>! You can reuse it\nwith your own bow, so there's no reason to\nlet it go to waste.")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02]>>!\nYour life has increased by <r<one >>and\nis also now fully replenished!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You've upgraded to the <y<\x0E\x02\x01\x02L>>!\nIt flies faster than the \x0E\x02\x01\x025.\nWatch where you're flying, speedy!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02d>>! While you are\ncarrying this medal, hearts will appear\neven when playing in <r<Hero Mode>>.\n\nIt will also cause heart flowers to bloom. \nIf you're someone who worries about\nhearts during an adventure, keep this\nwith you!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02d>>!\nHearts will appear more often as long as\nyou're carrying this.\n\nIf you're worried about running out of\nhearts while you're out adventuring,\nkeep this with you!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02v>>!\nThis very sturdy shield is much tougher\nthan the standard \x0E\x02\x01\x02t.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You've upgraded to the <y<\x0E\x02\x01\x02>>!\nIt can hold <r<10>> extra bombs. Carry it with\nyou when you need extra firepower.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xECD>>! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
          		flw_627:
/*<627>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You caught \x0E\x02\x03\x06\x00\x00Í <y<\x0E\x03\x04\x02\xECD>>! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 492), ('param2', 19999), ('next', 460), ('param3', 23)])
/*<460>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 56)])) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 5, unk: 1 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02*>>!\nThis peculiar fruit replenishes your\nstamina gauge!")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x19>>!\nThis carved wooden statue looks like it's\nsupposed to inspire gratitude. It also looks\nlike the stone statue on the upper floor.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <y<\x0E\x02\x01\x02\x08>>! You can shoot these\nwith your bow. You have a limited supply,\nso shoot carefully.")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You've upgraded to the <y<\x0E\x02\x01\x02M>>!\nYour \x0E\x02\x01\x025 can now fly farther than ever\nbefore!")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 1), ('next', 206), ('param3', 23)])
/*<206>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 14)])) {
          	  case 0:
/*<201>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 2), ('next', 202), ('param3', 23)])
/*<202>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 12)])) {
          		  case 0:
/*<198>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 3), ('next', 199), ('param3', 23)])
/*<199>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
          			  case 0:
/*<208>*/ 				printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02^>>!\nCollect four to increase your heart\ncapacity by one. Just <r<one >>more!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02^>>!\nCollect four to increase your heart\ncapacity by one. <r<Two >>to go!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02^>>!\nCollect four to increase your heart\ncapacity by one. <r<Three >>to go!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02^>>!\nThis completes the \x0E\x02\x01\x02].\nYour heart capacity will increase by one!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02e>>!\nWhile you're carrying this, Rupees will\nmysteriously appear more often. Keep it\nwith you when your wallet feels empty!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02w>>!\nThis sturdy metal shield is unaffected by\nfire, but watch out for electrical attacks!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You've upgraded to the <y<\x0E\x02\x01\x02>>!\nIt can hold <r<15 >>extra bombs. Carry it with\nyou when you need extra firepower.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02>>! You can fill it\nwith all sorts of useful things.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02ª>>! \nThis extremely sharp claw looks painful to\neven touch!")
/*<637>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got <y<10 >><y<\x0E\x02\x01\x029>>! These small seeds\nserve as ammunition for your \x0E\x02\x01\x024.\nMake sure you've always got a few handy!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 399), ('param3', 23)])
/*<399>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 30)])) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You collected every last <y<\x0E\x02\x01\x02+>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02+>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x1A>>!\nThis mass is made up of faintly glowing\nsquare crystals. Several are missing.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02N>>!\nWhen placed in your pouch, you can use\nthis item to restore <r<eight hearts>>.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 210), ('param3', 23)])
/*<210>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
          	  case 0:
/*<212>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 213), ('param3', 23)])
/*<213>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
          		  case 0:
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02_>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02_>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<532>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Just <r<one>> more piece to go!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 546), ('param3', 23)])
/*<546>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 64)])) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02_>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<531>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Just <r<two>> more pieces to go!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02f>>!\nIf you carry this with you, treasure will\nappear more often. It's the perfect thing\nto take along on a treasure hunt!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got your <y<\x0E\x02\x01\x02>> back!\nLook around to see if there's something\nin the area you can grab with it.")
/*<431>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', 413), ('param3', 38)])
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02>>! Attached to the end of\nthe whip is a strange, glowing sphere of\nlight that can latch on to various things.\n\nIf you see something you can't reach,\ntarget it with (Z) and wave the Wii Remote\nto snag it with your whip! SNAP!\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', -1), ('param3', 38)])
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02«>>!\nThis well-crafted horn is made of sturdy\nanimal bone. You might find a use for this\nas a material.")
/*<638>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02\x1B>>!\nIt's a squid-shaped statue studded with\nintriguing suction cups.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02O>>!\nThe \x0E\x02\x01\x02N has been powered up\nand now <r<restores all of your hearts>>.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 95), ('param2', 1), ('next', 216), ('param3', 23)])
/*<216>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 20)])) {
          	  case 0:
/*<218>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 219), ('param3', 23)])
/*<219>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 22)])) {
          		  case 0:
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02`>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02`>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<535>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Just <r<one>> more piece to go!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 548), ('param3', 23)])
/*<548>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 66)])) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1 */ "You got the <y+<\x0E\x02\x01\x02`>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<534>*/ 			printf(/* textboxtype: 5, unk: 1 */ "Just <r<two>> more pieces to go!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02g>>!\nCarry this with you to prolong the effects\nof a potion. If you've got this, remember\nto pack lots of potions!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 5, unk: 1 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You upgraded to a <y<\x0E\x02\x01\x02x>>!\nThis heavy shield is even tougher than the\nstandard \x0E\x02\x01\x02w.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got the <y<\x0E\x02\x01\x02>>!\nWith these, you can stand any heat without\na sweat. This is one of the three sacred\ngifts left by the goddess.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1 */ "You got an <y<\x0E\x02\x01\x02¬>>!\nThis simple, slightly macabre fashion\nstatement bears the Bokoblin symbol.")
/*<639>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 5, unk: 1 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 439), ('param3', 23)])
/*<439>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 48)])) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You collected every last <y<\x0E\x02\x01\x02,>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 5, unk: 1 */ "You got a <y<\x0E\x02\x01\x02,>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

