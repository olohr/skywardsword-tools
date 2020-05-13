          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("Did you see that, Mistress Fi?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf("Whoa! Sure is hot here, brrzrrt.\nNo sweat, though, because I'm a\ncutting-edge, zzort, robot!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("_____rBzzzrpt! Where are you going now?\nI'll wait here if you've got an errand\nto run, zzzt, but get going!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf("If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf("Hey! This isn't the right way, zrrt!\nDo you need to stop and ask for\ndirections?")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf("_____rZzzbt! I'm in trouble over here!\nHurry up and help me, bzzzzat!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("The flames blocking your path have\nbeen fully extinguished. I recommend\nproceeding ahead.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Are we almost there? Let's get a move\non, brzzt!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("_____rHEY! Brzzpt! I need help...NOW!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Welcome back, ______Master.\n\n\n\nI conjecture your newly acquired\n<y<Fireshield Earrings >>will allow you to\nsafely travel in extremely hot areas.\n\nI recommend continuing your search\nfor the<r< sacred flame>>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("____<______ZZRRRPT!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("____K_______I have a status update for you, Master.\nWe are now near the crater at the peak\nof <b<Eldin Volcano>>.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf("______Hey, pal. You bust up those <r<mugs with\nthe big shields >>yet?\n\n\n______Here's all you got to remember:\ncut wooden shields, repel spear \nattacks, and clamber up shields like\nthey were walls.\nIf you keep all that in your head, you'll\ndo just fine. I promise!")
/*<272>*/ 					loadzone_temp_flags[7 /* 0x9 80 */] = true;
          				  case 1:
/*<263>*/ 					printf("Hey, pal. You still haven't figured out\nthose <r<mugs with the big shields>>, right?\n\n\n______I've got one <r<last bit of secret info >>that\nwill make your life a whole lot easier.")
/*<264>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 256), ('param3', 12)])
/*<256>*/ 					printf("You know the drill by now, right?\n______It's gonna cost you some R-____\nU-____\nP-____\nE-____\nE-____\nS.____\n\nAnd the price for this is <r<50 Rupees>>.\n[1]OK![2-]No, thanks.")
          					flw_245:
/*<245>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*<247>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 50), ('next', 248), ('param3', 23)])
/*<248>*/ 						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 84)])) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf("______Yes! There's not a stingy bone in your\nbody, is there? Truth be told, it makes\nme a bit worried about ya.\n\n______Keep your wits about ya, pal.\nThere are hustlers out there who'll\nfleece ya for every Rupee you've got. ")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf("______All right, here goes my last secret.\nThose creeps' shields are huge, right?\nLike a wall?\n\n______Well then, treat 'em like a wall and\njab, jab, jab!\n\n\n______I'm not going to tell ya what happens,\nbut I highly recommend ya try it.\nI think you'll like the results!\n\n______Go get 'em, pal! And thanks again for\nthe business.")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							loadzone_temp_flags[7 /* 0x9 80 */] = true;
          						  case 1:
/*<249>*/ 							printf("______What are you trying to pull, pal? You\ndon't have enough Rupees!\n\n\n______Come back when you've managed to\nscrape together <r<50 Rupees>>, all right?")
/*<274>*/ 							loadzone_temp_flags[7 /* 0x9 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf("______What are you getting all stingy for?\nIt's a lousy <r<50 Rupees>>.\n\n\n______Pfft. Whatever. Come see me if you\nchange your mind.")
/*<273>*/ 						loadzone_temp_flags[7 /* 0x9 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf("Hey, pal. You still having problems\nwith them <r<mugs with the big shields>>?\n\n\n______I got some<r< more secret information\n>>that will make your life a whole lot\neasier.")
/*<262>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 255), ('param3', 12)])
/*<255>*/ 				printf("But there's no free lunch, ya hear me?\n______It's gonna cost you some R-____\nU-____\nP-____\nE-____\nE-____\nS.____\n\nYep, <r<30 Rupees >>to be exact.\n[1]OK![2-]No, thanks.")
          				flw_234:
/*<234>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*<236>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 237), ('param3', 23)])
/*<237>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 78)])) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf("______I knew there was a reason I liked ya!\nAll right, here goes...\n\n\n______Those thugs are always trying to skewer\nya with those monster spears, right?\nTake one of those in the gut, and it's\nlights out.\nIf ya time it right, you can<r< repel >>their\nattacks and...~~~______well, you know what\nhappens after that.~~~\n[1]Good info![2]I knew that.")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*<244>*/ 							printf("______You bet it is! I put my life on the line\nto get it too.\n\n\n______And I got more where that came from.\nThis next one's the hidden cherry\non top of the secret sundae. It's only\n_____<r<50 Rupees>>.[1]Gimme![2-]No, thanks.")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf("______You did? Nice work, pal. You're an\nobservant...uhm...whatever you are.\n\n\n______Good thing I saved the best for last!\nThis one's a real showstopper, but it\nain't cheap. It'll cost ya <r<50 Rupees>>!\n[1]I'm in![2-]No, thanks.")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf("______What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n______Find yourself <r<30 Rupees>>, then come\nand see me.")
/*<276>*/ 						loadzone_temp_flags[7 /* 0x9 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf("______What're you being so stingy for?\nIt's only <r<30 Rupees>>. \n\n\n______All right, whatever. Come see me if you\nchange your mind.")
/*<277>*/ 					loadzone_temp_flags[7 /* 0x9 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf("Hey, pal. You still having problems\nwith them <r<mugs with the big shields>>?\n\n\n______I got some<r< secret information>> here that\nwill make your life a whole lot easier.")
/*<260>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 253), ('param3', 12)])
/*<253>*/ 			printf("But nothing in life is free, ya know?\n______It's gonna cost ya some R-____\nU-____\nP-____\nE-____\nE-____\nS.____\n\nYep, <r<30 Rupees >>to be exact.\n[1]OK![2-]No, thanks.")
          			flw_225:
/*<225>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*<227>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 228), ('param3', 23)])
/*<228>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 72)])) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf("______Thank you very much, pal! Listen up!\nThis is for your ears only. Don't go\nsquawking about it with every mug\nyou meet.\n______Here's the deal... _____The shields those\nlugs are carrying around? You can cut\nthem with your sword! What did I tell\nyou? Is that not top-notch info?\nWatch out for the creeps with the tough\niron shields, though--you can't cut\nthem. \n[1]Got it, thanks! [2]What? Is that it?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*<233>*/ 						printf("______Heh heh... And I've got plenty more\ninfo where that came from. You\nknow you want to hear it.\n\n______You willing to cough up..._____another\n<r<30 Rupees>>?\n[1]You bet! [2-]No way.")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf("Yo! What's up with you giving me that\nface? You know, the _I've heard it all\nbefore\" face.\n\n______That last tidbit was just the tip of the\niceberg, pal. Not that I ever seen one...\nI got something really juicy here for\nyou. Got another <r<30 Rupees>> on you?[1]Yep![2-]Nope.")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf("______What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n______Find yourself <r<30 Rupees>>, then come\nand see me.")
/*<278>*/ 					loadzone_temp_flags[7 /* 0x9 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf("______What're you being so stingy for?\nIt's only <r<30 Rupees>>. \n\n\n______All right, whatever. Come see me if you\nchange your mind.")
/*<279>*/ 				loadzone_temp_flags[7 /* 0x9 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf("______Yo, pal. This your idea of a break\nroom? Battling all them monsters\ngot ya a little run down, huh?\n\n______If those creeps with the <r<big shields>>\nare as tough as they are ugly, they\nmust be a real pain in the neck.\n\n______See, I got some<r< secret information>> that\nI'm sure will make your life easier.")
/*<258>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 257), ('param3', 12)])
/*<257>*/ 		printf("______Of course, nothing comes for free in\nthis day and age. You're gonna have\nto part with some R-____\nU-____\nP-____\nE-____\nE-____\nS.\nThat spells Rupees, by the way.\nIt's all yours for <r<30 Rupees>>.\nWhaddya say?\n[1]Tell me! [2-]Nah.")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf("____Z_MAL-MAL-MALfunction! Zzrrt!\nToo...zzrrggt...damage...bzzzz...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("____Z_I am detecting extremely high\ntemperatures in this area. However,\nyour<y< Fireshield Earrings >>will allow for\nextended periods of exploration.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf("______Master Link, I detect\nno<r< water >>in the immediate vicinity.\n\n\nOf course, you will need a large basin\nto proceed past the impediment, but\nyou will also need <r<water>>. ______I recommend\nyou start with that task.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf("_____dHEY! I can't use that, zzrrpt! You're\ngoing to have to walk!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf("____Z_I calculate the probability of finding\nthe final<r< sacred flame >>here at 90%.\nI recommend searching for flames.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("_____rBrrzt! Wait for me!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf("I am detecting malfunctions within the\nrobot. I recommend repairing it and\ntrying again.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf("______A report, Master Link.\nThe transport robot is waiting for you\nat the base of the volcano.\n\nI recommend going up into the sky\nagain and returning to the base of\nthe volcano to guide the robot to\nthis location.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("_____rI can't see you, brrrzt! Open your <r<map\n>>with _____ and see where I am. Then\ncome get me, brzzzpt!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf("Do better this time, zzbrrrt!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf("Get moving, Master Shortpants!\nI'll be following right behind you, zrrt!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 63)])) {
          	  case 0:
/*< 71>*/ 		printf("_____rMonsters! Zrrrbt, are you going to\nhandle those or what?!")
          	  case 1:
/*<197>*/ 		printf("_____rBzzzrt! Help! DANGER!")
          	  case 2:
/*<198>*/ 		printf("_____rMonsters, zzzbrt! I can't stand\nmonsters!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf("If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf("I have got a hunch there are still \n<y<Goddess Cubes >>on this mountain. \nYou should see if you can find them.")
          	  case 1:
/*<  3>*/ 		printf("______Oh, hey! We meet again. How have you\nbeen, bud?\n\n\nI rumbled over here 'cause I heard\nsomeone had spotted <y<Goddess Cubes\n>>in the area.\n\nYou may have already found some,\nbut I got a feeling there are some\nothers hidden away around here.\n\n______You might think about searching for\nthem yourself when you get the time.")
/*<  9>*/ 		loadzone_temp_flags[0 /* 0x9 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 22)])) {
          	  case 0:
/*< 73>*/ 		printf("_____rHEY! Just how long, zzrrt, do I have to\nwait for you? Press _____ and use your\n<r<map >>to find me, brzzzt!")
          	  case 1:
/*< 75>*/ 		printf("_____rWhy are you so, zzzrrrt, SLOW?\nPress _____ to open your <r<map >>and\nconfirm my location!")
          	  case 2:
/*< 76>*/ 		printf("_____rBrrzpt! What are you doing? Get over\nhere already! If you don't know where\nI am, press _____ to open your <r<map>>, zzzrt!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 216), ('param3', 39)])
/*<216>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 49), ('next', 217), ('param3', 32)])
/*<217>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 49), ('next', 214), ('param3', 33)])
/*<214>*/ 		printf("")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 209), ('param3', 39)])
/*<209>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 49), ('next', 210), ('param3', 32)])
/*<210>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 49), ('next', 110), ('param3', 33)])
/*<110>*/ 		printf("_____dWhat's going on, brzzt? I almost blew\na rotor trying to slow myself during\nthat descent, zrbt... Anyway, this is\nwhere you wanted the water, right?\n____\nWHAT?! THE SUMMIT? ~~~Why didn't\nyou say so from the start, bzzrt?\nI don't want to carry this thing back\nto the sky. IT'S HEAVY, BRZZZT!\nBzzzrt...zrrbt...tzzptrr.~~~")
/*<114>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 111), ('param3', 39)])
/*<111>*/ 		printf("_____dThis place is, zrrrt, swarming with\nmonsters. Vrrrrrm...")
/*<115>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 112), ('param3', 39)])
/*<112>*/ 		printf("_____dI bust up enemies like a junkyard\nwrecker, zzizat! Too bad I've got\nmy mitts full with this basin, bzzz...")
/*<113>*/ 		printf("_____dHey, Master Shortpants! Since we\ncame all this way, let's play a little\ngame called _protect the robot,\" bzzrt!\n\nHere's how it works--I'll follow you up\nthe volcano, zzzrt, and you make sure\nnothing touches me. Got it? Good!")
/*<187>*/ 		printf("_____dYour job is simple, zzrrt! You make\nsure none of these monsters lays a\nclaw on me. NOT...ONE...CLAW!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("______Master, I have information for you.\nWith the enhanced capabilities of your\nsword, you are now able to use your\n<r<dowsing >>ability to find <y<Goddess Cubes>>. \nI have taken the liberty of registering\n<y<Goddess Cubes >>as <r<dowsing >>targets.\n______Please use this ability as you deem\nnecessary.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 21), ('next', -1), ('param3', 56)])
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf("Too bad you came all this way only to\nget stopped dead in your tracks.\nIt's just not your lucky day, bud.\n\n______Uh..._____I get the feeling I'm forgetting\nsomething important...\n\n\nI think it's something my buddy told\nme once, but... ___________Nope, can't remember.\n\n\n______Oh well, back to the water. If you need\nlots of the wet stuff, you should head\nover to <r<Lake Floria>>. I think you'll find\nwhat you need.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			loadzone_temp_flags[0 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf("______Well, look who we have here! You still\nlooking for your friend?\n\n\n______Of course, I'm on the hunt for \ntreasure. Heard there were some fancy\nruins out this way...so here I am!\n\n______Believe it or not, I haven't found a\nthing. Got any information for me?\n[1]Want to know?[2]I'm not telling!")
/*<119>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<120>*/ 			printf("______You know something? Spill it!\nWe're friends, right?")
          			flw_122:
/*<122>*/ 			printf("______What? There's some fire blocking your\npath? Why don'tcha just pour some\nwater on it and move on?\n\n______Ya need how much water? Whoa...\nI get it. _____So the water we got here's not\nenough, right?\n\n______You know, I hear the little water we\ngot here is fed by some far-off water\nsource called <r<Lake Floria______>>.\n\n______So a buddy of mine went huntin' for\ntreasure in <b<Faron Woods>>, and he told\nme he used the waterways there to find\nhis way back home.\n______He tells me Lake Floria was just about\nthe biggest lake you could imagine. Bet\nif you checked it out, there'd be enough\nwater there to solve your dilemma.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf("______Don't get all tight lipped on me now!\nWe're friends, right? Out with it!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Quench my thirst to\nclear your path.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("_____rIt's about time, bzrrt! Don't leave me\nhanging like that.")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf("______Master Link, I have a\nstatus report for you. ______The flames that\nimpede your progress have not yet been\nextinguished. \nShall I register the <b<Water Dragon>>'s\nvessel as a <g<dowsing >>target?\n[1]Yes![2-]Not yet.")
          		flw_139:
/*<139>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf("______Master, I have completed registering\nthe <b<Water Dragon>>'s vessel as a <g<dowsing\n>>target.______")
/*<288>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 134), ('param3', 56)])
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			loadzone_temp_flags[0 /* 0x9 01 */] = false;
          		  case 1:
/*<140>*/ 			printf("______Understood, Master. I will not proceed\nwith registration.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf("A report, ______Master Link.\nI recommend following the <b<Mogma>>'s\nadvice and returning to <r<Lake Floria>>.\n\nI also have some advice pertinent to\nthe situation. It concerns a method\nfor transporting water from the lake...~~~\nI suggest you visit the <r<Water Dragon>>.______\nI conjecture that you can transport\na large volume of water using the <r<water\nbasin>> that the previously injured\nWater Dragon recuperated in.")
/*<296>*/ 		printf("Would you like me to analyze previous\ndata and register the vessel as a\n<r<dowsing>> target?\n[1]Yes![2-]Not yet.")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("______Hey! Are you here looking for\n<y<Goddess Cubes>> too? Nice work getting \npast that hot spot back there, bud.\n\n______The heat back there did not bother\nme a bit, but these flames right\nhere are another matter.")
          		flw_17:
/*< 17>*/ 		printf("______I wish there was something we could do\nto put out these flames...")
          	  case 1:
/*< 13>*/ 		printf("______Oh, hey! We meet again. How have you\nbeen, bud?\n\n\n______I rumbled over here 'cause I heard\nsomeone had spotted some<y< Goddess\nCubes >>in the area.\n\n______I have got a hunch they may be down in\nthat direction, but...this flaming\nwall of fire is blocking the way!")
/*< 16>*/ 		loadzone_temp_flags[0 /* 0x9 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("_____rBzzzort! What do you think you're\ndoing?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
          	  case 0:
/*<151>*/ 		printf("______If I'm going to retire, I want to live in\na place up high with a glorious view.\n\n\n______I've lived most of my life underground,\nit's true, but I still gaze up at that sky.\nIt's so...big and blue and fluffy.\n\n______If I had my way, I'd like to come back\nin my next life as a bird and spend my\ntime soaring the wild blue yonder.")
          	  case 1:
/*<149>*/ 		printf("______Oh, you again! It's been a looong time,\nbut I remember that face.\n\n\n______Heh heh heh. How're those gloves I\ninvented treatin' ya? Are they up to\nyour satisfaction?\n\nHow've I been? Awful nice of ya to ask.\nLemme see...\n\n\n______I've been searchin' high and low for\nnew treasure, but I've come up empty\npawed.\n\nI gotta say, I'm tired of diggin' after\nmy fortune in this blast furnace.\n\n\n______I'm startin' to think it's time I gave\nup this life of treasure huntin' and\nsettled down to enjoy my twilight\nyears.")
/*<152>*/ 		loadzone_temp_flags[1 /* 0x9 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf("______Well, I know if you head out of here\nand hang a right, you will find this\nnice, refreshing <r<spring>>, but...\n\nYeah, I am not sure what you should\ndo, to be honest.")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf("_Quench my thirst\"? Hmm... That\nreminds me. If you head back out of\nhere and turn right, you will end up\noutside.\nI found a <r<spring >>there. ______Let me tell you,\nbud, that water was dee-licious!\n\n\n______No idea how you would bring it in here,\nthough. I doubt those weird-looking\nfrog beasts would carry it for you.\n~~~Got any ideas?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf("______I wish there was something we could do\nto put out these flames...")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("_____rHEY! Keep that up, and you're going to\nbreak something, zzbrrt!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("______Hey, the flames are out! Now we can\nget through here.")
/*<153>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6911), ('next', 28), ('param3', 13)])
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 0), ('next', 27), ('param3', 14)])
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("______Master, the robot is waiting at the\nvolcano. I suggest you return there.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf("______Elder...I'm gonna do ya proud--just\nwait and see. I hope ya watch over\nme from wherever it is you are now!")
          		  case 1:
/*<158>*/ 			printf("______Wh-wha-what? The elder got...\nlaunched up somewhere?\nWhere'd he go, then?\n[1]Up in the sky![2]Beyond...")
/*<161>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*<162>*/ 				printf("______The sky? Up in the big, blue stuff, eh?\n\n\n\nOh... ______Well, _____he always was talkin' about\nhow much he loved the sky.\n\n\nI bet he's up there now digging around\nin the clouds for treasure.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf("______Beyond?\n\n\n\nUh...______beyond? _____Whaddya mean\n_beyond\"? Are ya telling me he's\n_gone\" gone?\n\nI mean, we all gotta go sometime, \nbut, wow...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
          				  case 0:
/*<177>*/ 					printf("______Traveling back and forth between here\nand the sky. The elder is soooo cool!")
          				  case 1:
/*<174>*/ 					printf("______What do you mean, the elder's back?\n\n\n\n______Are you saying he can travel between\nhere and the sky? That is one amazing\nguy, I tell you.")
/*<175>*/ 					loadzone_temp_flags[4 /* 0x9 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
          				  case 0:
/*<172>*/ 					switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
          					  case 0:
/*<173>*/ 						printf("______Twilight years, eh? Well, if that's\nwhat the elder wants, help an old\nMogma out, will ya?")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf("______Hey, pal, did ya go and visit the elder?\nHow's he doin'?\n\n\n___________What? Twilight years?\n\n\n\nUh...______what are ya talkin' about?\nIs _twilight years\" some sort of\ncode name for a big treasure?\n\n______I gotta tell ya, I've never heard of such\na thing.\n\n\nBut if that's what the elder wants help\nwith, go on and help him out, will ya?")
          							flw_171:
/*<171>*/ 							loadzone_temp_flags[3 /* 0x9 08 */] = true;
          						  case 1:
/*<287>*/ 							printf("______Whoa! It's my old pal! How've you\nbeen?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! I'm great!\n\n\n______One thing's got me worried, though.\nThe tribal elder's been acting odd since\ngoing to those ruins. He's just not\nhimself.\n______You talked to him earlier, right?\nHow was he doing?\n\n\n___________What? Twilight years?\n\n\n\nUh...______what are you talking about?\nIs _twilight years\" some sort of code\nname for treasure?\n\n______I gotta tell you, I've never heard of\nsuch a thing. And I know a thing or two\nabout treasure.\n\nBut if that's what the elder wants, help\nhim out, will ya?")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf("______<b<Guld>>'s wanderin' around over there\nsomewhere. Go see him! Chat with him\na bit, ya know?\n\nIt might cheer him up to see a familiar\nface.")
          					  case 1:
/*<156>*/ 						printf("______Whoa there! It's my old pal! How ya\nbeen, old pal?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! Yep, I'd\nsay I'm great.\n\n\n______One thing's got me worried, though.\nSee, our elder, <b<Guld>>, has been actin'\nkinda odd since going to those ruins.\n______Would ya go and see<b< Guld>>? He's over\nthataway somewhere, and I know he'd\nbe happy to see your mug.")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf("Hate to ask you this, bud, but could\nyou do the fire-extinguisher routine\nagain?")
          	  case 1:
/*< 30>*/ 		printf("______More flames... This is starting to burn\nme up...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf("_____dWhere have you been, zzzrbt! Get me\nto the top of the volcano! Now, brrzzt!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (loadzone_temp_flags[5 /* 0x9 20 */]) {
          	  case 0:
/*<181>*/ 		printf("______The deal with <b<Plats >>is he only shows\nsome backbone when he's off\nhunting treasure.")
          	  case 1:
/*<179>*/ 		printf("______Hey, it's you! That guy from before...~~~\n\n\n\n______Heh heh heh... Yeah, that was\npretty embarrassing.\n\n\nWe're all good now, though, because\nmy pal found out about it.\n\n\n______Truth is he got captured once too.\nGuess that makes us even. Nothin' for\neither of us to worry about.\n\n______Yeah, anyway, you seen <b<Plats>> around\nanywhere?\n[1]He was over there.[2]Nope.")
/*<183>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<184>*/ 			printf("______Oh, really? We're all cool, then.\n\n\n\nI just hadn't seen his ugly mug in a\nwhile and, well, you know...\n\n\n______I thought maybe he'd gone and gotten\nhimself all tied up again.\n\n\n______Let me tell ya, that guy's like a\ntrouble magnet!")
          			flw_182:
/*<182>*/ 			loadzone_temp_flags[5 /* 0x9 20 */] = true;
          		  case 1:
/*<185>*/ 			printf("______That dirt-brain... _____I bet he's off on some\nsolo treasure-hunting dig.\n\n\nHe knows he's not supposed to be out\nby himself. This place is dangerous!\n\n\n______What am I supposed to do, huh?\nI guess that's what you get when you're\n<b<treasure hunters>>. Bunch of guys who\ndon't know when to quit.\nIf you happen to run into <b<Plats>>, give\nhim my best, will you?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("______Hey! Nice work, bud. Now we are \ngetting somewhere!")
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6911), ('next', 37), ('param3', 13)])
/*< 37>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 0), ('next', 36), ('param3', 14)])
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("_____dDon't leave me! Press _____ to open your\n<r<map >>to find me, zzrrt!_____")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf("______All right, then. Where's the next place\nto hunt for riches, eh?")
          	  case 1:
/*<189>*/ 		printf("___________Hey, pal! You're still alive!\n\n\n\n______And by the looks of it, ya got all your\nloot back too. I knew you had it in ya.\n\n\nSo, uh..._____did ya find any treasure?\n[1]Tons![2]Not a thing...")
/*<192>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<193>*/ 			printf("______Seriously? I'm soooo jealous!\n\n\n\n______But the world's a big place, ya know?\nAnd I'm sure there's more treasure\nout there for the swiping.\n\nYeah, I'm not sitting on my tail waiting\nfor it to fall into my lap! You know\nwho's going to find all the loot next\ntime? Me! This guy! That's who!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf("______Whaaat? Ya didn't find much of\nanything? Aw, that's too bad, pal.\n\n\n______Don't get all sad and weepy on me,\nthough. The world's a big place, and\nit's filled with treasure!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf("I am off to continue my research, bud.\nI am sure I will bump into you again!")
          		  case 1:
/*< 46>*/ 			printf("______Well, how was it? What did you find?\n[1]Traps![2]Monsters!")
/*< 47>*/ 			switch (choice(2, 0)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf("______Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n______I am going to head out to another\nlocation and continue my research.\nGive me a holler if you see me again.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf("______Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n______By the way, I have got a hunch there is\na <y<Goddess Cube >>somewhere nearby.\n\n\nAnd my hunches are usually spot on,\nso you should take a good look around.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf("______You are something else, bud! There is\nnothing you cannot do!\n\n\n______You go ahead on in! You have earned\nthe right to blaze this trail.")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf("______Lots of<r< water >>and <r<something to carry it\naround in>>... Any bright ideas on where\nto find those things, bud?")
          				  case 1:
/*< 41>*/ 					printf("______How are we supposed to give this fellow\nenough <r<water>>? Whatever it is, it is\ngoing to have to be one<r< big container>>...\n\n______You have been adventuring all over the\nplace, right? You got any ideas?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf("Do you see this, bud? Talk about\nintriguing! We are definitely off the\nmap here.\n\n______This does not feel like<y< Goddess Cube\n>>stuff to me! I bet there is something\n<r<super important >>hidden around here!")
/*<144>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 146), ('param3', 39)])
/*<146>*/ 				printf("______All I can say is that is a big frog with\na big thirst. I do not think the amount\nof water one of your little <y<bottles >>can\nhold is going to cut it this time.")
/*<145>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 147), ('param3', 39)])
/*<147>*/ 				printf("______Hmmm...~~~______ You will have to have a<r< big\ncontainer >>to hold the water needed\nfor this job. ______Got anything like that?\n\n______And speaking of which, where are you\ngoing to get all the<r< water>>? I gotta\nsay, I am pretty much stumped.")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf("You want me to pour the water on this?\nNo problem, zzzbrt!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf("We have arrived at Eldin Volcano.\n\n\n\nYou can use your <r<dowsing>> ability to\nlocate the gate to the trial. You must\npass this trial in order to locate the\nsacred flame.")
          }

