          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nSo you want to sell some treasure?")
          		flw_495:
/*<495>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 432), ('param3', 33)])
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Well, today I am buying these\ntreasures:\n\n\n<y<\x0E\x02\x02\x04\x00\x00\n>><y<\x0E\x02\x02\x04\x00\x01>>\n<y<\x0E\x02\x02\x04\x00\x02>>\n<y<\x0E\x02\x02\x04\x00\x03>>\n\x0E\x01\x09\x04\x10\x600Just these four! So, what do you want\nto do?\n[1]I'll sell![2-]No deal.")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 1 */ "Which will you sell to me?\n<y<[1]\x0E\x02\x02\x04\x00\x00>>.<y<[2]\x0E\x02\x02\x04\x00\x01>>.<y<[3]\x0E\x02\x02\x04\x00\x02>>.<y<[4]\x0E\x02\x02\x04\x00\x03>>.")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 481), ('param3', 33)])
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Hmmm, how many Rupees can I offer\nfor each <y<\x0E\x02\x02\x04\x00\x00>>... \nDoes \x0E\x02\x03\x06\x00\x00Í seem fair?")
          					flw_656:
/*<656>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 412), ('param3', 12)])
/*<412>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x10\x600I see that you're carrying \x0E\x02\x03\x06\x00\x04Í of those.\nHow many will you sell me?\n[1]1.[2]5.[3]All of them![4-]No deal.")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 497), ('param3', 33)])
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x01\x09\x04\x12\x900>>Ah, the old <y<\x0E\x02\x02\x04\x00\x00>> deal, eh?\nAnd you've got \x0E\x02\x03\x06\x00\x00Í of 'em?\nLet's see, how many Rupees is that\nworth...  Let's say \x0E\x02\x03\x06\x00\x01Í?\n[1]It's a deal![2-]Never mind.")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x80AAll right. Here's your money.")
/*<496>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 572), ('param3', 33)])
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2048), ('next', 573), ('param3', 13)])
/*<573>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 429), ('param3', 6)])
/*<429>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Thanks. Come back soon.")
/*<574>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x0COh. Really? OK, well, hopefully you'll\ncome back again sometime.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409You don't even have that many!\nQuit wasting my time.")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 497), ('param3', 33)])
          						goto flw_497
          					  case 2:
/*<498>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 497), ('param3', 33)])
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409Listen, pal...I've had enough of the\nfunny business. You don't even have a\nsingle one of those. So do you want to\nsell something else or what?\n[1]I'll sell![2-]No deal.")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 482), ('param3', 33)])
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Hmmm, how many Rupees can I offer\nfor each <y<\x0E\x02\x02\x04\x00\x01>>... \nDoes \x0E\x02\x03\x06\x00\x01Í seem fair?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 483), ('param3', 33)])
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Hmmm, how many Rupees can I offer\nfor each <y<\x0E\x02\x02\x04\x00\x02>>... \nDoes \x0E\x02\x03\x06\x00\x02Í seem fair?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 484), ('param3', 33)])
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Hmmm, how many Rupees can I offer\nfor each <y<\x0E\x02\x02\x04\x00\x03>>... \nDoes \x0E\x02\x03\x06\x00\x03Í seem fair?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 442), ('param3', 31)])
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nAh, hey... What do you need?\n[1]Shopping![2]Um...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409You want to do some shopping? Just\ncome back to the shop tomorrow.")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x609So when you say \x201Cum\"...that means\nyou don't have a good reason to be\nhere, huh?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0 */ "What? You think I'm being gruff?\nYou think I'm totally different during\nthe day?\n\n\x0E\x01\x09\x04\x10\x60BWell, I get tired of having to be a\nsmiley shopkeeper all day, all right?\nJust don't think that this is the real\nme.\nAnyway, enough about that... You're\nhere to make some money at my\n<r+<night market>>, am I right?\n[1]Night market?[2]Yep!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Ah, it's your first time here, isn't it?\nOh well...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x600Night is when I do my buying. See,\n<r<I buy treasure>>, but that's not to say\nI'll buy just any old thing. I only deal\nin <r<specific types of treasure>>.\n\x0E\x01\x09\x04\x10\x600Right. Let's get on with it, shall we?")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x409Why didn't you tell me that from the\nbeginning?")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6656), ('next', 57), ('param3', 13)])
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00TUgh... Nngh...nngh...\nH-help...")
/*<528>*/ 		switch (loadzone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			loadzone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          		}
          	  case 1:
/*<174>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6656), ('next', 536), ('param3', 13)])
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Ugh... Stupid <b<Pipit>>... So much hate\nfor you... For crying out loud...")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x01Oh, it's you, Link.\nI thought you might come by.\nLet's just say a little bug told me...")
          					flw_476:
/*<476>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 475), ('param3', 33)])
/*<475>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Let's see... Tonight I feel like buying:\n<y<\x0E\x02\x02\x04\x00\x00\n<y<\x0E\x02\x02\x04\x00\x01<y<\n<y<\x0E\x02\x02\x04\x00\x02<y<>>\n[1]I'll sell![2-]No deal.")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 1 */ "Which do you want to sell me?\n<y<[1]\x0E\x02\x02\x04\x00\x00>>.<y<[2]\x0E\x02\x02\x04\x00\x01>>.<y<[3]\x0E\x02\x02\x04\x00\x02>>.")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 461), ('param3', 33)])
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x02\x02\x04\x00\x00>>, eh?\nFor one of those, how many Rupees\nshould I part with? Hmmmm...\nHow about \x0E\x02\x03\x06\x00\x00Í?")
          								flw_657:
/*<657>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 458), ('param3', 12)])
/*<458>*/ 								printf(/* textboxtype: 1, unk: 1 */ "How many have you got there--\x0E\x02\x03\x06\x00\x04Í?\nAnd how many of those are you looking\nto sell?\n[1]1.[2]5.[3]All of them![4-]No deal.")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 452), ('param3', 33)])
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x14I love a good <y<\x0E\x02\x02\x04\x00\x00>>...\nAnd you're selling \x0E\x02\x03\x06\x00\x00Í of 'em, eh?\nHow many Rupees should I throw your\nway... I'm gonna say \x0E\x02\x03\x06\x00\x01Í.\n[1]OK![2-]Never mind.")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0 */ "OK, here's your money.")
/*<445>*/ 											OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 448), ('param3', 12)])
/*<448>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 450), ('param3', 33)])
/*<450>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\xFF04Thanks, mantis face!\n\n\n\nI mean that in a good way! I love\nmantises. Well, I'm looking forward\nto seeing more of your bugs,\nLink.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF13Well, that's too bad...\n\x0E\x01\x09\x04\x00\x500I guess I'll \x201Cbee\" seeing you...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x100You don't have that many... So I'll ask\nyou again...")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 452), ('param3', 33)])
          									goto flw_452
          								  case 2:
/*<453>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 452), ('param3', 33)])
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xFF0CYou don't have even one of those!\nYou look like you wouldn't harm a fly,\nbut you're still trying to rip me off?\n\n\x0E\x01\x09\x04\x01\xFF00Or do you just want to sell me a\ndifferent bug?\n[1]Yep![2-]No deal.")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 462), ('param3', 33)])
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x02\x02\x04\x00\x01>>, hmm?\nFor one of those, how many Rupees\nshould I part with? Hmmmm...\nHow about \x0E\x02\x03\x06\x00\x01Í?")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 463), ('param3', 33)])
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0 */ "<y<\x0E\x02\x02\x04\x00\x02>>, hmm?\nFor one of those, how many Rupees\nshould I part with? Hmmmm...\nHow about \x0E\x02\x03\x06\x00\x02Í?")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x01Hey, Link. Something's\nbugging me today. I mean that in a\ngood way...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 719), ('param3', 31)])
/*<719>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x01\x0E\x03\x01\x00Link... Want to hear\nsomething neat? OK, so...earlier in\nthe night, I went back into those\ncaves behind the waterfall.\nI saw some <r<Blessed Butterflies >>in this\nempty area. I wonder why they were\nswarming around that spot...\nWeird, right? \nIf you want to see them for yourself,\nyou should go into the caves at night.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Oh, right. Let's see what kind of bugs\nyou've got for me today.")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 666), ('param3', 31)])
/*<666>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 427), ('param3', 13)])
/*<427>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xFF01Oh. It's you... \x0E\x03\x01\x00Link.\nWhat do you want with me?")
/*<578>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 416), ('param3', 13)])
/*<416>*/ 		printf(/* textboxtype: 1, unk: 0 */ "<r<\x0E\x01\x09\x04\x00\x300>>Huh? What am I doing?\n\n\n\n<r<\x0E\x01\x09\x04ÿ\x114>><r<Bugs>>... I'm looking at bugs.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 418), ('param3', 6)])
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF00Bugs are amazing. Even more\namazing than Groose in a lot of ways...\n\n\nOh...\x0E\x01\x04\x02\x1Ewait. I'm not saying Groose isn't\nas amazing as a bug.")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Look, <r<I just really like bugs>>... I want to\ncollect all kinds of bugs. Sometimes,\nI even dream about having, like, an\nentire island full of bugs...")
/*<424>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04ÿ\xFF01...How about this!\n\n\n\n\x0E\x03\x01\x00Link, here's the plan.\n<r<If you find a bug, come sell it to me>>.\nWhen it comes to bugs, Rupees are \nno object.\n[1]Sure![2]Er...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\xFF04Mwah hah hah! Now all my\nbug-collecting ambitions will finally\nbe realized...")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0 */ "So if you ever want to sell any bugs,\njust bring them to me. I usually hang\nout here at night...\n\n\x0E\x01\x09\x04\x12\x100I won't just buy any bug, though.\nWhat I buy on any given day just\ndepends on the <r<mood>> I'm in.\n\nOh, one other thing... This might bug\nyou a little bit, but I only want to\n<r<do these deals at night>>. I have a\nreputation to protect, you know.\n\x0E\x01\x09\x04\x03\xFF14Got it, Link? I don't mean\nto be a pest, but I'm counting on you.\nI can't stop thinking about bugs...")
/*<447>*/ 			printf(/* textboxtype: 1, unk: 0 */ "...So let's get to it. Want to sell me\nsomething?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xFF05What? I was sure you'd go for that...\nDon't make me sic Groose on you...")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x00Nnngghh snrrrk...\nSNNNNRRRKK...")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<799>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<800>*/ 					switch (loadzone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x909Hee hee! Thanks, Link.\nBecause of you, I have an amazing new\nboyfriend!\n\nBut I feel kind of bad about <b<Cawlin>>,\nyou know?")
          					  case 1:
/*<801>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Thank you for bringing me the letter,\nLink.\n\n\n\x0E\x01\x09\x04\x01\xD14Sigh... I wonder what <b<Pipit>> would think\nif he knew about this...")
          				}
          			  case 1:
/*<130>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 133), ('param3', 31)])
/*<133>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 587), ('param3', 33)])
/*<587>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1024), ('next', 73), ('param3', 13)])
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Sigh... Oh, <b<Pipit>>... How can I get you to\nnotice me?")
/*<134>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 74), ('param3', 33)])
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x404Ah! \x0E\x03\x01\x00Link!\n\n\n\nUhh, what's the matter? Do you, uh...\nneed something?\n\x0E\x01\x08\x02\xFECDI wonder if he heard what I was just talking about...?\x0E\x01\x08\x02Í\n[1]Give the letter.[2]Don't give it.")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x906Huh? A letter? For me\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n?\nCould it be from <b<Pipit>>?!\n[1]Here you go![2]Never mind.")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x90AOh... Thank you. I'll just take that.")
/*<592>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3072), ('next', 593), ('param3', 13)])
/*<593>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 598), ('param3', 6)])
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 611), ('param3', 6)])
/*<611>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 591), ('param3', 49)])
/*<591>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x400I wonder who it's from?!")
/*<594>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 81), ('param3', 6)])
/*< 81>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xD00Whoa...\x0E\x01\x04\x02\x14 \x0E\x01\x06\x02\xFECDThat's some really terrible\nhandwriting...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x10\x400Anyway, never mind that... Let's see\nwhat it says...")
/*<596>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', -256), ('next', 665), ('param3', 13)])
/*<665>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 104), ('next', 597), ('param3', 24)])
/*<597>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 600), ('param3', 6)])
/*<600>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4608), ('next', 595), ('param3', 13)])
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0 */ "...\x201CGreetings. My love for you is wider\nthan the horizon and deeper than the\nclouds.\"\n\n\x0E\x01\x09\x04\x13\x1200\x201CI would very much like it if you would\ngo out with me.\nYour brave knight,\n<b<Cawlin>>\"\n\n\x0E\x01\x09\x04\x00\x500.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\n\n\n\n\x0E\x01\x09\x04\x01\xD00Wow... This <b<Cawlin >>guy... Isn't he one\nof <b<Groose>>'s flunkies?\n\n\n\x0E\x01\x09\x04\x0C\x400And...this... This is a love letter from\nthat <b<Cawlin>> kid...right?\n\n\n\x0E\x01\x09\x04\x0B\x712Hoo boy...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1792), ('next', 590), ('param3', 13)])
/*<590>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 612), ('param3', 6)])
/*<612>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 82), ('param3', 16)])
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09So, yeah... I have to say, he really put\nhis heart into it and everything...\n\n\nI don't know... Maybe I should consider\ngoing out with <b<Cawlin>>.\n\n\n\x0E\x01\x09\x04\x08\x900...Hah! As if!\n\n\n\n\x0E\x01\x09\x04\x01\xD14Sigh... I wonder what <b<Pipit>> would think\nif he knew about this...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x912What kind of a trick is that?\nStop messing around!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x406Huh? You're a strange one, aren't you,\nLink?")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link, what do you\nthink about <b<Pipit>>?\n\n[1]He's nice.[2]Why?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x70AYes! Yes, he is! He's kind and caring.\nAnd handsome and wonderful!\n\n\n\x0E\x01\x09\x04\x0C\x416Oh dear... I don't know what's come\nover me all of a sudden...\n\n\n\x0E\x01\x09\x04\x08\x400Sorry for bothering you with such an\nawkward question...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x406Huh? Oh... Well, you know... I just...\n\n\n\n\x0E\x01\x09\x04\x08\x416Oh, forget about it. I don't even know\nwhat I was thinking asking you a\nstrange question like that. Silly me...")
          			}
          		  case 1:
/*<669>*/ 			switch (loadzone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1001That outfit looks great on you!\n\n\n\n\x0E\x01\x09\x04\x00\x40ANot as good as it looks on Pipit,\nthough!")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x404Ah! \x0E\x01\x04\x02\x14\x0E\x03\x01\x00Link! \nCongratulations on advancing!\n\n\n\x0E\x01\x09\x04\x08\x400Wow... So this year's knight's uniform\nis dark green, eh? \x0E\x01\x04\x02\x14Looks neat! \n\n\n\x0E\x01\x09\x04\n\x1000I bet Zelda will be really happy to see\nyou in that...\n\n\n\x0E\x01\x09\x04\x00\x406Oh, and don't worry... I'm sure she's\nfine, wherever she is! She'll definitely\nbe home soon.")
/*<670>*/ 				loadzone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<831>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3584), ('next', 105), ('param3', 13)])
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xE08Finally, I can sleep! Thank you!")
          					  case 1:
/*<580>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3584), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Oh, thank you, thank you! I appreciate\neverything you've done.")
          					}
          				  case 1:
/*<744>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 123), ('param3', 31)])
/*<123>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 160), ('param2', 1), ('next', 124), ('param3', 23)])
/*<124>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 60)])) {
          					  case 0:
/*<126>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 31)])
/*< 19>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xE0DIs that...? The baby's <y<\x0E\x02\x01\x02 >>!\nYou found it!")
/*<584>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 586), ('param3', 47)])
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 713), ('param3', 15)])
/*<713>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 714), ('param3', 17)])
/*<714>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 556), ('param3', 6)])
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3328), ('next', 585), ('param3', 13)])
/*<585>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 557), ('param3', 48)])
/*<557>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 20), ('param3', 6)])
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Who's a sleepy baby?\nTime for beddy-bye.\x0E\x01\x05\x04x\x00")
/*<558>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3584), ('next', 559), ('param3', 13)])
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xE08Whew. The baby seems to have settled\ndown nicely. I bet the baby will sleep\nwell tonight. Oh! That means I'll\nfinally get a good night's sleep too!\n\x0E\x01\x09\x04\x10\xE00Thank you so much! I won't forget\nwhat you did for me.")
/*<103>*/ 						loadzone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 125), ('param3', 42)])
/*<125>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 716), ('param3', 43)])
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 18), ('param3', 31)])
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF09Ahh...I hope someone finds the \nbaby's <y<\x0E\x02\x01\x02 >>...\n\n\n\x0E\x01\x09\x04\x10\x00A <r<bird flew away with it>>. It must still\nbe <r<somewhere in town>>... \x0E\x01\x09\x04\x0D\x00Sigh.\nIt looks like I won't get any sleep\ntonight, either...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 561), ('param3', 31)])
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 3072), ('next', 562), ('param3', 13)])
/*<562>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 75), ('next', 11), ('param3', 6)])
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD...\x0E\x01\x04\x02-\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0D\x00Sigh...\x0E\x01\x05\x04A\x00")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 564), ('param3', 13)])
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Ahhh... Doesn't look like I'll get much\nsleep tonight...again.\n[1]Why?[2]Are you tired?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF06Sorry to worry you...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xF00The baby just goes on and on like this\nall night. I haven't slept a wink in...\nAhhh... I don't even know how long.\n\nThe baby usually sleeps like a sack of\nrocks. But that was before we lost\nthe you know what...\n[1]No, what?[2]Oh, that?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF01The baby's <y<\x0E\x02\x01\x02 >>.")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xF00If we had the you know what, then\nthe baby would settle down. But we \nlost it the other day.\n\n<r<A bird picked it up >>in its beak and <r<flew\noff with it>>. Maybe the bird thought it\nwas food. I don't know...\n\n\x0E\x01\x09\x04\x0E\xF00Of course, the bird wouldn't have \neaten it, so I think it must still be\n<r<somewhere here in town>>. I just don't\nknow where...\n\x0E\x01\x09\x04\x00\x09Sigh... It sure would be nice if\nsomeone would find it for me.")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF04So you know about it? Yes, the baby's\n<y<\x0E\x02\x01\x02 >>.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\xF07Well, you can see what my nights are\nlike, right?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Ahhh... This child just won't go to\nsleep for me... What can I do? Ahhh...\n[1]That's terrible![2]And your wife?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Yeah, it is pretty terrible... But even\nwhen babies cry, they're still really\ncute... If they're yours, I guess.\n\nYou'll understand someday when\nyou've got one of your own!")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Ah, the missus\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n. She gets tired from\nrunning the business all day.\n\n\n\x0E\x01\x09\x04\x0D\xF06I have to let her get some rest\nsometime, right...? Ha ha...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<795>*/ 				switch (loadzone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x401Hey, Link! Thanks to you, \nI found a wonderful girlfriend!\nThank you so much!")
          				  case 1:
/*<797>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3072), ('next', 548), ('param3', 13)])
/*<548>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x18Erm... Hmm...\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Let's just say you had an interest \nin how that relationship turned out.\nDo you think it would be best to go \nand ask her about it?\n\x0E\x01\x09\x04\x11\xE00I mean... That isn't to say that I have\na personal interest here, though.\nI'm just interested in the emotion\nof love...in general...")
          			}
          		  case 1:
/*<132>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 546), ('param3', 31)])
/*<546>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 1024), ('next', 92), ('param3', 13)])
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01What's up, Link?")
/*<545>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xC09...Huh? <b<Karane>> got a love letter?\n\n\n\n\x0E\x01\x09\x04\x0F\x1100I-I see... That's interesting...\nWow...\n\n\n\x0E\x01\x09\x04\x0C\xC54Erm... Wh-what do you think she\nintends to do...?\n[1]Date him.[2]Beats me.")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xE53What?! Th-this is a big problem,\nisn't it?!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xE09...Oh! I mean, uhh... It's not like\nthere's anything going on between\nme and <b<Karane>>, you know?\nWe're just friends...\nSo it's not my business who she goes\nout with. I don't have much to say\nabout it.\n\n\x0E\x01\x09\x04\x0C\xC00But you know...I do have a duty to\nmake sure that everyone is living up\nto the high ideals of our knight school,\nright?\n\x0E\x01\x09\x04\x08\xC00I mean, ideal love is unfettered and\npassionate. Anything less than that\ncan't really be called love at all, you\nknow what I mean? \n\x0E\x01\x09\x04\x0B\xC00So I should just step in and make sure\nthat she's found a true love that\naspires to the highest ideals of our\nfine educational institution, right?\n\x0E\x01\x09\x04\x11\xE00And what about me? I have the right to\nexperience an unfettered and\npassionate love too, don't I?\n\n\x0E\x01\x09\x04\x0C\xC1BYou understand, don't you,\nLink? I'm not wrong\nabout this, am I?\n[1]I don't know.[2]You like her?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x1152I see... Of course. You've got more\nimportant things to worry about\nthan this right now!")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1117Well, either way...\n\n\n\n\x0E\x01\x09\x04\x0F\xC00I don't suppose you'd mind asking her\nwhat her decision is going to be,\nwould you?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\xE53Wha-what?! Don't be ridiculous,\nLink!\n\n\n\x0E\x01\x09\x04\x12\xC00I don't even understand how you could\nmake such a wild accusation!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x1118So you don't know? Well... That's going\nto bother me until I find out...")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<815>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<745>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 256), ('param3', 31)])
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1602I'll do my best! And someday I'll be\nstrong. Come back soon so I can show\nyou the new me!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 277), ('param3', 32)])
/*<277>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 260), ('param3', 13)])
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11I just...whoo...need a breather...\n\x0E\x03\x01\x00Link, what have you got\nthere? Is that... a <y<Stamina Potion>>?\n\nI don't suppose you'd...let me have\nthat, would you?\n[1]Take it![2-]Sorry...")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BReally?! Thank you! I owe you one!")
/*<266>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3092), ('param2', 7936), ('next', 271), ('param3', 13)])
/*<271>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 270), ('param3', 6)])
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 135), ('next', 265), ('param3', 6)])
/*<265>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 279), ('param3', 33)])
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 264), ('param3', 6)])
/*<264>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Whoo-yeah! I can feel my muscles\nperking back up already!")
/*<268>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 269), ('param3', 13)])
/*<269>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12It's just that...at this rate, I don't\nknow if I'll ever get strong and burly.\n[1]Try your best![2]Yes, you can!")
/*<281>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 291), ('param3', 13)])
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Right! That's exactly what I need to do.\nNo more whining! I need to push\nmyself.")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1800Thank you, Link. \nI'll make you proud. You'll see! I'll be\nsuper burly in no time!\n\n\x0E\x01\x09\x04\x15\x1800OK, back to training! Come back soon\nso I can show you the new me!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1609Wow... Really? It's great to hear\nyou're so confident in me. Maybe I can\nactually do this...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Oh... Of course... I don't mean to put\nyou out.")
/*<288>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 3072), ('next', 287), ('param3', 13)])
/*<287>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Oh...but don't worry about me...\nI still have some get-up-and-go in\nme... I think... Maybe...")
          				}
          			  case 1:
/*<275>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 274), ('param3', 32)])
/*<274>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 276), ('param3', 13)])
/*<276>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Whew...whoo... It's no good...\n\n\n\nIf only I had <r<a potion that would give\nme stamina>>, then maybe I could reach\ndown deep for that 110%...")
/*<290>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 289), ('param3', 13)])
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03...Fat chance, right? I suppose I'll have\nto just put my nose to the grindstone...\nYep, just buckle down my bootstraps\nand all that... Right?\nAnyway, I'll just keep working on this\nfor as long as I can! All on my own,\nI guess... Sigh...")
          			}
          		}
          	  case 1:
/*<259>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 273), ('param3', 31)])
/*<273>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 272), ('param3', 32)])
/*<272>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 6912), ('next', 254), ('param3', 13)])
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Whew... Let me catch my breath...\n\n\n\n\x0E\x01\x09\x04\x10\x1600Hey... \x0E\x03\x01\x00Link! Oh!\nWhat am I doing? I'm training!\n\n\nI can't even lift a single barrel...\nPathetic, I know! That's why I want\nto get stronger.\n\nI'm a bit embarrassed about it, though,\nso I do it at night when no one's\naround to laugh at me...\n\n\x0E\x01\x09\x04\x00\x1711But it's not going so well. I'm just too\ntired. I was actually about ready to\nthrow in the towel...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOh! \x0E\x03\x01\x00Link, what have you\ngot there? That's not... It's not a\n<y<Stamina Potion>>, is it?\n\nI don't suppose you would mind letting\nme have that, would you?\n[1]Take it![2-]No way.")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ahh...if only there were <r<a potion that\nwould give me stamina>>, then I could\ndrink that and maybe find that last\nlittle bit of strength I need...")
/*<286>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 285), ('param3', 13)])
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03...Fat chance, right? I suppose I'll have\nto just put my nose to the grindstone...\nYep, just buckle down my bootstraps\nand all that... Right?\nAnyway, I'll just keep working on this\nfor as long as I can! All on my own,\nI guess... Sigh...")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08What now, Link?!\nTonight my head is swimming\nwith thoughts of Karane!\n\nIf you need to talk to me about\nsomething, it can wait until\ntomorrow. Now get lost!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Heh heh heh... I'm not afraid of\n<b<Groose>>! His room is mine now!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<746>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 302), ('param3', 31)])
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link! You're going to be\nshocked by how strong I am!\nCome back and see me soon!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 331), ('param3', 32)])
/*<331>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 305), ('param3', 13)])
/*<305>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Whoo... I can't seem to catch my\nbreath...\n\n\nHey, Link, I wonder...\nWould you mind sharing some \n<y<Stamina Potion>> with me?\n[1]Take some![2-]Sorry.")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BReally? Wow, thanks! I'll gladly take\nit, then.")
/*<333>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3092), ('param2', 7936), ('next', 312), ('param3', 13)])
/*<312>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 311), ('param3', 6)])
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 135), ('next', 309), ('param3', 6)])
/*<309>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 334), ('param3', 33)])
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 345), ('param3', 6)])
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Whoo-hoo! That's the stuff! It's like a\nrefreshing splash of ENERGY!")
/*<347>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 346), ('param3', 13)])
/*<346>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12...Sometimes I worry, though. All this\ntraining, and no results! How long do I\nneed to train before I start to get\nstronger?\nWhat do you think, Link?\nHow many push-ups do you think I\nneed to do to get strong?\n[1]About 1,000![2]Not about numbers.")
/*<348>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3073), ('param2', 2048), ('next', 349), ('param3', 13)])
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00SUlp... That many? Really?\n\n\n\n\x0E\x01\x09\x04\x10\xE00OK, then... I guess there really is no\ngain unless there is also pain. So much\npain...")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1600I guess that makes sense. Now that I\nknow that, I'll definitely start getting\nstronger!\n\n\x0E\x01\x09\x04\x00\x1800Come back soon so you can see how\nI'm doing!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07It's not about numbers? ...Of course!\n\n\n\n\x0E\x01\x09\x04\x07\x800You mean I should just keep at it until\nI've forgotten how many I've done,\nright?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Of course, of course... Sorry, I was\nbeing foolish and presumptuous.")
/*<344>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 343), ('param3', 13)])
/*<343>*/ 					printf(/* textboxtype: 1, unk: 0 */ "It's OK. I'll be fine! I'll just keep at it\non my own.")
          				}
          			  case 1:
/*<330>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 329), ('param3', 32)])
/*<329>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 303), ('param3', 13)])
/*<303>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Whew...whoo... It's no good...\n\n\n\nIf only I had <r<a potion that would give\nme stamina>>, then maybe I could reach\ndown deep for that 110%...")
/*<342>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 341), ('param3', 13)])
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03No, no... I can't keep asking you for\nfavors like that! I'll just keep working\nat it on my own.")
          			}
          		}
          	  case 1:
/*<301>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 328), ('param3', 31)])
/*<328>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 327), ('param3', 32)])
/*<327>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 6912), ('next', 296), ('param3', 13)])
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10Oh...whoo...I'm sweating up a storm.\nGood evening, Link!\n\n\n\x0E\x01\x09\x04\xC10\xFF00I've been training hard ever since we\nlast spoke, but I still feel so sluggish...\nMaybe I've just run out of energy.")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BAh! \x0E\x03\x01\x00Link, is that...\nIs that a <r<Stamina Potion>> you're \ncarrying?\n\nWould you mind if I had some?\n[1]Take some![2-]Sorry.")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Hey, Link. Do you think\nyou could give me some more\n<r<Stamina Potion>>?")
/*<340>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 339), ('param3', 13)])
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03No, no... I can't keep asking you for\nfavors like that! I'll just keep working\nat it on my own.")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0 */ "")
          		  case 1:
/*<679>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 686), ('param3', 31)])
/*<686>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 687), ('param3', 47)])
/*<687>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 689), ('param3', 15)])
/*<689>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 690), ('param3', 16)])
/*<690>*/ 			set_camera(27, 0)
/*<830>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 688), ('param3', 33)])
/*<688>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 568), ('param3', 48)])
/*<568>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3072), ('next', 59), ('param3', 13)])
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Hey, Link! Did you hand\nover that letter like I asked?\n[1]Actually...[2]Huh?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1F1DWh-what did you just say?! You gave it\nto that weirdo in the restroom?!")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1F00Didn't I specifically tell you NOT to\ngive it to the weirdo in the restroom?!\nSeriously! I said it like five times!\nI know I did!\n\x0E\x01\x09\x04\x1A\x1F17You fool! How could you?! Anyone who\nblocks the path of true love deserves\nto be kicked by a bird!\n\nI hate you, Link!")
/*<692>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 7936), ('next', 683), ('param3', 13)])
/*<683>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 14), ('param2', 0), ('next', 691), ('param3', 14)])
/*<691>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1F18Uwahhhhh!!!")
/*<697>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 256), ('next', 698), ('param3', 15)])
/*<698>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 696), ('param3', 6)])
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 1024), ('next', 693), ('param3', 13)])
/*<693>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 0), ('next', 65), ('param3', 14)])
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x1F12Y... You... Are you out of your mind?!\n\n\n\n\x0E\x01\x09\x04\x11\x1B00Seriously?! You gave it to that creep\nin the restroom? Really?! You gave\nit to that restroom weirdo?!")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<822>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 113), ('param3', 31)])
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 6912), ('next', 544), ('param3', 13)])
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FAhhh...so <b<Karane>> finally knows how\nI feel about her...\n\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00What should I do...?\nMy heart is pounding...")
          			  case 1:
/*<567>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 24), ('param2', 6912), ('next', 542), ('param3', 13)])
/*<542>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13What?! You actually did it?!\nYou gave the letter to <b<Karane>>...?!\n\n\n\x0E\x01\x09\x04\x01\x2500Oh no. OH NO. What now?! What do\nI do? Maybe I should go see what she\nthought of the letter...\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Ahh, but...this is so embarrassing...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 40), ('param3', 13)])
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Get it straight, Link.\nI need you to give the letter to the cute\nupperclassman with the <r<round hat>>.\n\n\x0E\x01\x09\x04\x01\x1B00And don't even think about giving it to\nthat <r<weirdo in the restroom>>! Not even\nby mistake! Don't you DARE!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hrrrnnnnghhh...!")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0 */ "3,985...3,986...\n3,987...3,988...")
/*<845>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Snrrrrrk... Hrrmphh...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFECD55...56...57...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Nnghh... Snrrrk... Hrmmph...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD5...6...7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x180AI could just keep going and going!\nNext, I'm going to train so hard that\nI can lift a barrel with one finger.")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x180APhew! Not a bad warm-up...")
          		}
          	  case 1:
/*<323>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 315), ('param3', 31)])
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\x190APhew! Well, that was a nice warm-up!\n\n\n\n\x0E\x01\x09\x04\x01\x1600...Hey, Link! I was just\nhoping you'd come by. I wanted to ask\nyou something.\n\n\x0E\x01\x09\x04\x07\x1800The other day I tried lifting some\nbarrels, and I was able to do it with\none arm!\n\n\x0E\x01\x09\x04\x00\x1600Do you think that means I've got\nenough muscle? What do you think,\nLink? Do I look strong?\n[1]Too strong![2]For sure.")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1809Huh? Aww, you're just saying that.\nBut it's still nice to hear it.")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1600It's all thanks to you,\nLink.\n\n\n\x0E\x01\x09\x04\x01\x1900I would have gotten discouraged if\nyou hadn't come by to cheer me on.\nYou gave me motivation!\n\n\x0E\x01\x09\x04\x07\x180BThank you so much, Link!")
/*<324>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x180BReally? Thanks! I'm so happy.")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<789>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<790>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09Hey, Link, thanks for\ntaking care of my sister like that.\nI won't forget what you did.")
          			  case 1:
/*<773>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 731), ('param3', 31)])
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09\x0E\x03\x01\x00Link! My sister made\nit home safely! \x0E\x01\x09\x04\n\x400Thank goodness... \nI was so worried about her.\n\n\x0E\x01\x09\x04\x0B\x400Thanks so much for your help,\nLink!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<788>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09\x0E\x03\x01\x00Link! My sister is safe!\n\n\n\n\x0E\x01\x09\x04\n\x400I'm so relieved! I was getting so\nworried there. All these worst-case\nscenarios kept popping into my head.\n\nWhat? You're the one who gave my\nsister the bird medicine?\x0E\x01\x04\x02\x14\n\n\n\x0E\x01\x09\x04\x0B\x400Thank you so much! I don't have much\nto give you to repay you, but please\ntake this with my gratitude!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xA05Oh, that's a shame. I wanted to\ngive you this <y<Empty Bottle>>, but it looks\nlike your pouch is full and you're also\nout of room at the Item Check...\nBut I'll hang on to it for you. If you can\nget rid of something from your pouch\nor make some room at the Item Check,\ncome see me later and it's all yours.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<787>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<813>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x400It may not look like much, but believe\nme, there's a dozen uses for a fine\nbottle like that. Thanks again!")
/*<814>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 183), ('param3', 31)])
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409What's the deal, Link?\nYou need to hurry up and take those\n<y<\x0E\x02\x01\x027 >>to my sister!\n\n\x0E\x01\x09\x04\n\x400I'm counting on you!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x406Where did all the <y<\x0E\x02\x01\x027\n>>go? You haven't given them to her yet?\n\n\n\x0E\x01\x09\x04\n\x400To get more <y<\x0E\x02\x01\x027>>, just\n<r<collect them from mushrooms>>. I'm\ncounting on you, Link.")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Great--you've made room in your\npouch. Well then, take these!\n\n\n<y<\x0E\x01\x09\x04\n\x400>>They're<y< \x0E\x02\x01\x027>>.\nThey'll heal the bird's injury.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x50DBut, wait... You're carrying too much.\n\x0E\x01\x09\x04\x00\x400Make some space in your pouch,\nand then come and talk to me.")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<748>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x404If she uses this, it will quickly heal\nthe bird. She should then be able to\nmake her own way home.\n\x0E\x01\x09\x04\x00\xC00Take it to my sister!\n\x0E\x01\x09\x04\x00\x400You can keep the <r<Empty Bottle >>once\nshe's had a chance to use the stuff\ninside.\n\nI'm counting on you, \nLink!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x50DWhat?! You found my sister?!\nHer bird's injured and can't fly?!\n\n\n\x0E\x01\x09\x04\n\xC00That's terrible! In that case, take her\nthis as quick as you can!\n\n\n<y<\x0E\x01\x09\x04\x00\x400>>These are <y<\x0E\x02\x01\x027>>. \nThey will heal the bird's injury.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC12I'm so worried... I feel just...sick.\nWhat was she thinking?\n\n\nI always made her take a <r<bottle>>\nof potion with her...but today I\nforgot...")
/*<836>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 837), ('param3', 33)])
/*<837>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x400My sister said she was curious about\nthat <b<colorful island>> that appeared\nrecently, so I suspect she's somewhere\nin the <r<south>><r<<r<western <r<sky>>.")
/*<838>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 839), ('param3', 17)])
/*<839>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400Would you please help us look for her,\nLink?")
          			}
          		  case 1:
/*<202>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 177), ('param3', 31)])
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC12Ugh... I'm so worried...\nSo worried...\n[1]What's wrong?[2]Calm down.")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x411Ahh, Link. \nYou really want to hear about all my\ntroubles? That's kind of you.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x400So you see, a short while ago my <r<little\nsister >>went out for a quick flight, but\nshe hasn't come home yet.\n\nIt was getting late for her to still be\nout, so I went looking for her\neverywhere... But I couldn't find her.\n\n\x0E\x01\x09\x04\x0B\x500I just hope nothing has happened.\n...I'm worried sick thinking about it.")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x411Hey, Link, would you\nmind helping me look for her?")
/*<832>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 833), ('param3', 33)])
/*<833>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x400She said she was curious about that\n<b<colorful island>> that appeared recently,\nso I suspect she's somewhere in the\n<r<south>><r<<r<western <r<sky>>.")
/*<834>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 835), ('param3', 17)])
/*<835>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400I'm counting on you,\nLink!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x500CALM?! How could I be calm at a time\nlike this?! ...I'm sorry. I know I\nshouldn't be yelling at you.\nThat won't help.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<763>*/ 	start()
/*<766>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<767>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409The Isle of the Goddess has...\ndisappeared? I mean, how does\nthat even happen?!\n\n\x0E\x01\x09\x04\n\x400This can't be good. Something bad is\nabout to happen. I know it. I mean,\nother than the island disappearing...")
          		flw_791:
/*<791>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<792>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<793>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400Just a while back I bumped into <b<Strich>>,\nwho told me he'd found some <r<rare bug>>.\nThe guy headed for the thunderhead\nlooking happier than I'd ever seen him.\nLooks like he's setting himself up to\nbomb his exam again...")
          			  case 1:
/*<768>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<772>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x400That <b<Strich>> guy said he was getting\na bunch of insects together so he could\ncreate Bug Heaven on an island <r<inside\nthat thunderhead>>!")
          				  case 1:
/*<771>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 769), ('param3', 31)])
/*<769>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA00Hey, you have a classmate named\n<b<Strich>>, right?\n\n\nHe said he'd discovered some kind of\ninsect paradise <r<inside that big\nthunderhead>>. That guy really loves\nbugs, doesn't he?\n\x0E\x01\x09\x04\x0B\x400I wonder what he intends to do\nwith this insect paradise...")
/*<770>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<811>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<812>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Did you hear all that racket just now?\nIt sounded like the island was fixing to\nshake itself to bits. What was all that?")
          			goto flw_791
          		  case 1:
/*<775>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<776>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Were you up to something down in the\nplaza? All of a sudden the whole sky\ngot real dark.")
          				goto flw_791
          			  case 1:
/*<774>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<765>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x405Doesn't it seem weird that all these\nbutterflies have been gathering here in\nthe plaza? There's nothing I can see\nthat would draw them here.")
          					goto flw_791
          				  case 1:
/*<842>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<843>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link! Always in a\nhurry to get somewhere, aren't you?")
          						goto flw_791
          					  case 1:
/*<780>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<785>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<784>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey there, Link! Have you\nseen those three troublemakers around\nhere recently? It's been a while since\nI've seen them hanging around.\nMaybe failing the test to get promoted\nto the senior class got them to finally \nbuckle down and study for once.")
          							  case 1:
/*<786>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hello, Link! Did I tell you\nI went to see that Fun Fun Island place\nmy sister was talking about?\n\nThe guy I met there was telling me how\nhe dropped his <r<party wheel >>below the\nclouds, whatever that is. He looked\npretty broken up about it.\nIf you ask me, he'd best get over it.\nEveryone knows that once something\nfalls below the clouds, it's long gone!")
          							}
          						  case 1:
/*<777>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x405Hey! Did you see what's going on?!\nThe Light Tower is shooting a beam of\nlight off into the thunderhead.\n\nIt's almost like the tower is telling us\nto head into that big mass of\nthunderclouds...or something.")
          							  case 1:
/*<841>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_781:
/*<781>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey there, Link! I haven't\nseen Zelda around lately. Do you know\nwhat happened to her?")
          								  case 1:
/*<779>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<782>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey there, Link!\n\n\n\n\x0E\x01\x09\x04\n\x400What's that? Something about <r<two\n>><r<sails>>?\x0E\x01\x04\x02\x1E Sorry, but I've got zero interest\nin silly riddles. Why don't you go ask\nthe town <r<fortune-teller>> for help?")
          									  case 1:
/*<778>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_781
          										  case 1:
/*<764>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE09Hey, Link, thanks for\ntaking care of my sister like that.\nI won't forget what you did.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_27() {
/*<796>*/ 	start()
/*<817>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<819>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x401Can you believe it? The Isle of the\nGoddess fell right out of the sky!\n\n\n\x0E\x01\x04\x02\x1EIt breaks my heart to see it missing\nfrom Skyloft...\x0E\x01\x09\x04\x11\xE00but, you know, I think\nit was a message from the goddess,\ntelling us to make the most of our lives.")
/*<820>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<821>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x40B\x0E\x01\x08\x02\xFFCDBesides, she's not the only goddess in my life...")
          		  case 1:
          		}
          	  case 1:
/*<816>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<818>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1101Hey, Link. Listen to this...\nIt's a confidential piece of information\nthat hasn't been shared with anyone\nbut you.\n\x0E\x01\x09\x04\x0C\x400So, I was flying around outside when\nall of a sudden this weird building\npopped out of the bottom half of the\nIsle of the Goddess!\n\x0E\x01\x09\x04\x11\xE00Just what's going on here in Skyloft?!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Hey, Link! \nYou're looking pretty upbeat lately.\n\n\n\x0E\x01\x09\x04\x00\x40BThat's the spirit! \x0E\x01\x04\x02\x14Zelda will be home\nbefore you even know it. Just keep on\nbelieving that while you wait for her\nto come back!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link!\nHow are you doing?\n\n\n\x0E\x01\x09\x04\x0C\x1400Huh?! What's this about a Triforce\nhidden by the goddess?\n\n\n\x0E\x01\x09\x04\x10\x1100Uhhh, I really don't know anything\nabout that...\n\n\n\x0E\x01\x09\x04\x08\x1400If you want to know about that kind\nof stuff, then you should ask one of\nthe instructors.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Hey, Link! \nYou're looking pretty upbeat lately.\n\n\n\x0E\x01\x09\x04\x00\x40BThat's the spirit! \x0E\x01\x04\x02\x14Zelda will be home\nbefore you even know it. Just keep on\nbelieving that while you wait for her\nto come back!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link! How are you?\nFeeling a bit better, I hope.\n\n\n\x0E\x01\x09\x04\x09\x1400I'm afraid I've got some problems too.\nBut, you know, I try to put on a brave\nface in front of other people.\n\n\x0E\x01\x09\x04\x11\x400If you do that, the unhappiness rolls\noff like water on a Loftwing's back.\nI always try to keep that in mind.")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link! You made it!\nFinally in the senior class! That outfit\nsuits you.\n\n\x0E\x01\x09\x04\x10\x1100But now's hardly the time to celebrate,\nright? I can't believe Zelda has gone\nmissing.\n\n\x0E\x01\x09\x04\x0C\x1400You and Zelda are so close... I know\nyou must be worried sick!\n\n\n\x0E\x01\x09\x04\x08\x1400I don't know... I just have this feeling\nshe's alive and well somewhere!\nYou've got to believe that and wait\nfor her to come home.")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<226>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 206), ('param3', 31)])
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B...Oh, <y<\x0E\x02\x01\x027>>! What a relief!\nYou brought the medicine!\n[1]Here, take it![2-]Sorry, no.")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Thank you! Now I can heal my bird's\ninjury.")
/*<607>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 610), ('param3', 47)])
/*<610>*/ 					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 224), ('param3', 15)])
/*<224>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 647), ('param3', 33)])
/*<647>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 646), ('param3', 6)])
/*<646>*/ 					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 256), ('next', 234), ('param3', 15)])
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', -256), ('next', 608), ('param3', 13)])
/*<608>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 236), ('param3', 48)])
/*<236>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 233), ('param3', 6)])
/*<233>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Now my poor bird should be healthy\nagain in no time!")
/*<237>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 581), ('param3', 6)])
/*<581>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 609), ('param3', 33)])
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 1280), ('next', 222), ('param3', 13)])
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09I was beginning to think we were\ndoomed...\n\n\nYou've saved my life...and my bird's!\nWe both owe you a big thanks!")
/*<225>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 223), ('param3', 43)])
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Here we go! See you back in town!")
/*<615>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 582), ('param3', 47)])
/*<582>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 613), ('param3', 33)])
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 583), ('param3', 17)])
/*<583>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 40), ('next', 616), ('param3', 48)])
/*<616>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 211), ('param3', 33)])
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<824>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          				  case 1:
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1113You...you monster!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x50BSo you'll give me those Mushroom\nSpores you're carrying? If you could\njust give them to me, my bird would be\nbetter in no time!\n[1]Here you go.[2-]No way.")
          				goto flw_208
          			}
          		  case 1:
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0 */ "<r<\x0E\x01\x09\x04\x00\x01My brother has some bird medicine>>.\nPlease go find him!\n\n\nI'll be waiting for you here with\nmy bird.")
          		}
          	  case 1:
/*<203>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 188), ('param3', 31)])
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x50BWell! If it isn't Link!\nI'm so glad you're here. \x0E\x01\x09\x04\x12\x200My bird\ngot injured while I was out for a\nquick flight, and now he can't fly.\n\x0E\x01\x09\x04\x01\x1500I somehow managed to make a\ncrash landing here, but now we can't\nget home!\n\n\x0E\x01\x09\x04\x12\x1500I can't go home until my bird's better.\n<r<I need medicine>> to get him healthy.\nOf course, it can't be human medicine.\nIt has to be <r<bird medicine>>.\nHey, Link, \x0E\x01\x09\x04\x15\x200I really need\nyour help. Will you go get some bird\nmedicine for me?\n[1]Of course![2]Sorry.")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x409Thank you! You're a real lifesaver.")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 1, unk: 0 */ "<r<My older brother has some bird\nmedicine>>. Just go find him, and he'll\ngive you what I need.\n\nI bet he's probably pacing <r<around\nthe plaza in Skyloft>>, waiting for me\nto come home and being worried\nout of his mind.")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x509So you have the medicine after all!\nWhy didn't you say so? Those\n<y<Mushroom Spores>> are just what I need!\n\nIf you could just give them to me,\nmy bird would be better in no time!\nDo you mind if I have them?\n[1]Here you go.[2-]No way.")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4352), ('next', 729), ('param3', 13)])
/*<729>*/ 					printf(/* textboxtype: 1, unk: 0 */ "No? Oh... Well, I guess there's nothing\nelse I can do but ask you to find my\nbrother and tell him what's happened\nhere. Would you mind?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Huh? Really? You already spoke to\nhim? Well, that makes things easier.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0 */ "I'll be waiting for you here with\nmy bird. Hurry back!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x1513You...you monster!\n\n\n\n\x0E\x01\x09\x04\x0B\x409...But you're just joking, right?\nYou must be...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<798>*/ 	start()
/*<806>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<807>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x456Did you hear all that noise outside a\nlittle while ago? I wonder what that\nwas all about...")
          	  case 1:
/*<808>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Well, if it isn't Link.\nYou know, you seem to be getting more\nhandsome by the day.\n\nThat knight's uniform really suits you.\nAnd you give off that \x201Creliable guy\"\nvibe too.")
          		  case 1:
/*<803>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<805>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xE06Whoa, you can already Spiral Charge?!\n\n\n\n\x0E\x01\x09\x04\x08\x909Wow...that's cool, Link!\n\x0E\x01\x04\x02\x1E\x0E\x01\x09\x04\x0C\x400I mean...\x0E\x01\x04\x02\x14whatever. I'm sure Pipit can\ndo it, too!")
          			  case 1:
/*<802>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<804>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Huh, the Triforce?\x0E\x01\x04\x02\x1E What's that\nsupposed to mean?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<760>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01The Isle of the Goddess has\nvanished, Link!\n\n\n\x0E\x01\x09\x04\x00\x1513And it was such a great resting spot\nfor the birds...")
          		  case 1:
/*<809>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<810>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Wow, I've never felt the island shake\nlike it did. What could've happened?")
          			  case 1:
/*<754>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<759>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link.\n\n\n\n\x0E\x01\x09\x04\x0C\x200So is it true you learned how to get\nyour Loftwing to pull off that\nlegendary Spiral Charge maneuver?\x0E\x01\x04\x02\x1E\n\x0E\x01\x09\x04\x0C\x50BThat's amazing!")
          				  case 1:
/*<753>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<758>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00WWhat?! The Triforce?!\nYeah, never heard of it...\n\n\nHave you tried asking the Knight\nAcademy headmaster about it?")
          					  case 1:
/*<752>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_755:
/*<755>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, hey, Link. \nWhere's your friend from the \nacademy? You know, Zelda~~.~~.~~.~~\nWas that it?\nI haven't seen you two together at all\nrecently. Did you have a fight or\nsomething?")
          						  case 1:
/*<749>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<757>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13For a moment there, it looked like\nthe sky was shrouded in darkness.\nI wonder if something happened...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_755
          								  case 1:
/*<751>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<756>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link.\n\n\n\n\x0E\x01\x09\x04\x11W<r<Two whirling sails>>, you say?\n\n\n\n\x0E\x01\x09\x04\x01\x00You know, those blades on the\n<r<windmills >>look kind of like whirling\nsails, don't they? I wonder if that's it...")
          									  case 1:
/*<750>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_755
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOh, Link. Thanks for all \nyour help!\n\n\n\x0E\x01\x09\x04\x00\x400My bird is back to full health.\nThank you so much.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<761>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOh, Link. Thanks for all \nyour help!\n\n\n\x0E\x01\x09\x04\x00\x400My bird is back to full health.\nThank you so much.")
/*<762>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 673), ('param3', 32)])
/*<673>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 29), ('param3', 24)])
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Ooooooooh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 674), ('param3', 17)])
/*<674>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 107), ('param3', 24)])
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Oooooh... Somebody...\nPlease, somebody help me...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 506), ('param3', 24)])
/*<506>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Please forget about the paper...\nGood-bye...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 505), ('param3', 24)])
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Ahhh... <r<Paper>>! You brought me\nsome <r<paper>>!\n\n\nI'll open the door... Please come in...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 502), ('param3', 24)])
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Oooh... <r<Paper>>...\n\n\n\nPlease... Somebody bring me <r<paper>>...\n<r<Bring me some paper>>...\n\n\n<r<Any kind of paper at all>>... Ooooh...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 142), ('param3', 13)])
/*<142>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1B1BYou fool! How dare you! This is no\nordinary piece of paper! It's a <r<letter>>!\nA very special one at that!\n\n\x0E\x01\x09\x04\x17\x2500I put my heart into every word...\nI guess you could say it's sort of like a...\nAll right, fine! It's a love letter!\n\n\x0E\x01\x09\x04\x17\x1800And that is why you will not, under any\ncircumstances, EVER allow it to be\nused as toilet paper! Do you hear me?!")
/*<169>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 172), ('param3', 13)])
/*<172>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 167), ('param3', 6)])
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0 */ "So listen up! The person you must give\nit to is a girl... An upperclassman...\nHer name is <b<Karane>>.\n\n\x0E\x01\x09\x04\x01\xC11You know who I mean, right?\nShe's the one with the <r<round hat>>.\nShe's really cute. You know the one.\n\n\x0E\x01\x09\x04\x17\x1800And don't you dare...not even by\nmistake...even think of giving it to\nthat <r<weirdo in the restroom>>! Swear it!")
/*<170>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 549), ('param3', 13)])
/*<549>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 168), ('param3', 6)])
/*<168>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Here it is. I'm entrusting this letter\nto you. So don't read what's inside!\nDo you hear me?!")
/*<710>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 109), ('next', 165), ('param3', 24)])
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0 */ "I'm counting on you,\nLink! Get to it!\nIf you don't mess this up, maybe I'll let\nyou be my sidekick!")
/*<550>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<139>*/ 			switch (loadzone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 3072), ('next', 108), ('param3', 13)])
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Huh...? What's your problem? Why are\nyou looking at the restroom?")
/*<162>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 23), ('param2', 6144), ('next', 161), ('param3', 13)])
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0 */ "What? There's someone in the\nrestroom at night who wants...paper?")
/*<143>*/ 				loadzone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 135), ('param3', 31)])
/*<135>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 155), ('param3', 33)])
/*<155>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4608), ('next', 34), ('param3', 13)])
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Hmm... Should I give it to her...?\nShould I not give it to her...?")
/*<136>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 672), ('param3', 33)])
/*<672>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 20), ('param2', 4889), ('next', 35), ('param3', 13)])
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0 */ "...Uwah! \x0E\x03\x01\x00Link, it's you!\nDon't sneak up on me like that!\n\n\n\x0E\x01\x09\x04\x17\x1800I have a serious dilemma on my mind\nright now. And you're distracting me!\n[1]Dilemma?[2]Can I help?")
/*<156>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 3072), ('next', 37), ('param3', 13)])
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 1, unk: 0 */ "What? You want to hear about it?\n\n\n\n\x0E\x01\x09\x04\x00\x1CHmph! Normally I would never,\never tell someone like you...\nBut these are dire times...")
          					flw_157:
/*<157>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 23), ('param2', 6144), ('next', 39), ('param3', 13)])
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Come to think of it, you might be just\nthe person I need! You seem to be\npretty good with the ladies...\n\n...Ugh. I can't believe I just said that.\nBut whatever! Let's do this!\n\x0E\x03\x01\x00Link! I have a task for\nyou!")
/*<159>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 171), ('param3', 13)])
/*<171>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 158), ('param3', 6)])
/*<158>*/ 					printf(/* textboxtype: 1, unk: 0 */ "So listen up... Your mission is to take\nthis piece of <r<paper >>to a certain person!\nIt's a very important piece of <r<paper>>!\nMake SURE you deliver it.")
/*<140>*/ 					loadzone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Huh? Really?!\n\n\n\n\x0E\x01\x09\x04\x00\x1CArrgh... Normally, I would never ask\nsomeone like you for help... But these\nare dire times...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 42), ('param3', 24)])
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Please forget about the paper...\nGood-bye...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 112), ('param3', 33)])
/*<112>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 111), ('param3', 6)])
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 53), ('param3', 6)])
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Please forget about the paper...\nGood-bye...")
/*<138>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 31)])
/*<144>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4), ('param2', 1), ('next', 154), ('param3', 13)])
/*<154>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 46), ('param3', 6)])
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ooooh...<r< Paper>>...\nI need <r<paper>>...\n\n\nI'm not angry or anything...\n<r<I just need some paper>>...\n[1]Give letter.[2-]Don't do it.")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x04Huh? You're giving me paper?\nI'm so happy...")
/*<146>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', 0), ('next', 511), ('param3', 13)])
/*<511>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0 */ "But...this looks like someone's letter...\nAre you sure I can have this?\n[1]Yes.[2-]No.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 0), ('next', 711), ('param3', 13)])
/*<711>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 109), ('next', 706), ('param3', 24)])
/*<706>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 517), ('param3', 33)])
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 153), ('param3', 6)])
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Thank you... I will use it with care...\n\n\n\nBut I'm shy, so don't ask me what I\nwant the paper for...\n\n\nMay we meet again...\nYou kind soul...")
/*<514>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 513), ('param3', 33)])
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x05\x03Ooooh... Somebody... Paper...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 148), ('param3', 32)])
/*<148>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 0), ('next', 149), ('param3', 13)])
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ahh... My love... I will always be by\nyour side... Tee hee...")
          	  case 1:
/*<825>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 527), ('param3', 31)])
/*<527>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 152), ('param3', 32)])
/*<152>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 0), ('next', 526), ('param3', 13)])
/*<526>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 151), ('param3', 6)])
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ah... You're the one from the\nother day...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 150), ('param3', 15)])
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x06\x02It's good to see you again... Actually,\nthanks to you, I met my true love...\n\n\nYes, him...\n\n\n\n\x0E\x01\x09\x04\x0C\x00It all started with that letter that\nyou gave me...\n\n\n\x0E\x01\x09\x04\x06\x00Those beautiful words of affection\ncaused me to fall hopelessly in love...")
/*<521>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ahh, my heart is bursting with thoughts\nof him... I feel so excited, so cheerful,\nso full of life...")
/*<723>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 522), ('param3', 42)])
/*<522>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 523), ('param3', 43)])
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 0), ('next', 519), ('param3', 13)])
/*<519>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Ahh... My love... I will always be by\nyour side... Tee hee...")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1005), ('next', 358), ('param3', 24)])
/*<358>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 359), ('param3', 32)])
/*<359>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 18), ('next', 360), ('param3', 32)])
/*<360>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 827), ('param3', 32)])
/*<827>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 30), ('next', 823), ('param3', 47)])
/*<823>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 5), ('next', 621), ('param3', 33)])
/*<621>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', -256), ('next', 361), ('param3', 13)])
/*<361>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 829), ('param3', 16)])
/*<829>*/ 	set_camera(31, 0)
/*<828>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 30), ('next', 362), ('param3', 48)])
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 356), ('next', 363), ('param3', 15)])
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0 */ "You're the one who sent the letter,\nright?")
/*<366>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 364), ('param3', 16)])
/*<364>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Y-yes...")
/*<622>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', -256), ('next', 367), ('param3', 13)])
/*<367>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 368), ('param3', 16)])
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1400\x09Tee hee. It was a wonderful love letter.\nThank you!")
/*<370>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 369), ('param3', 16)])
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x11It wasn't...that...great...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1301), ('param2', 3072), ('next', 373), ('param3', 13)])
/*<373>*/ 	printf(/* textboxtype: 1, unk: 0 */ "And, um... Wh-what's your...answer?")
/*<376>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 374), ('param3', 16)])
/*<374>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5131), ('param2', -256), ('next', 372), ('param3', 13)])
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1400\x12My answer? Ah...my answer...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', 256), ('next', 380), ('param3', 13)])
/*<380>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 274), ('next', 601), ('param3', 15)])
/*<601>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 381), ('param3', 16)])
/*<381>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1288), ('param2', 3328), ('next', 378), ('param3', 13)])
/*<378>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x2519Oh, please! Please go out...with me!")
/*<382>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', 256), ('next', 602), ('param3', 13)])
/*<602>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 20), ('next', 551), ('param3', 50)])
/*<551>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 3074), ('next', 379), ('param3', 13)])
/*<379>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Wait!")
/*<383>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 18), ('next', 384), ('param3', 17)])
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 386), ('param3', 6)])
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4625), ('param2', 3072), ('next', 387), ('param3', 13)])
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0 */ "I think you should go out with me\ninstead! I mean...er...I want to ask\nyou out!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 256), ('next', 624), ('param3', 13)])
/*<624>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', -256), ('next', 603), ('param3', 13)])
/*<603>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 99), ('next', 389), ('param3', 50)])
/*<389>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1306), ('param2', 6912), ('next', 390), ('param3', 13)])
/*<390>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x1B09What...? Hey, hold on there!\nWhat are you trying to pull all\nof a sudden?")
/*<604>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 99), ('next', 392), ('param3', 50)])
/*<392>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5140), ('param2', 2304), ('next', 393), ('param3', 13)])
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Errr...\x0E\x01\x09\x04\x1400\x900\nI want to go out with... Pipit...")
/*<649>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 99), ('next', 650), ('param3', 50)])
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x515\xC10Ha! See that, you fool?! I knew she\nwould choose me! She's been checking\nme out for weeks! Uhh, wait a second...")
/*<394>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 629), ('param3', 17)])
/*<629>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x511\x1D1DWait... Really?!")
/*<630>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', 0), ('next', 620), ('param3', 13)])
/*<620>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 274), ('next', 395), ('param3', 15)])
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 397), ('param3', 17)])
/*<397>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 18), ('next', 396), ('param3', 14)])
/*<396>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 605), ('param3', 6)])
/*<605>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 99), ('next', 398), ('param3', 50)])
/*<398>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1201\xFF00Truly? You choose me?")
/*<606>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 399), ('param3', 50)])
/*<399>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5140), ('param2', 2323), ('next', 400), ('param3', 13)])
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Yes! \x0E\x01\x09\x04\x1400\x900I'm so happy. Thank you...")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', 256), ('next', 635), ('param3', 13)])
/*<635>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1306), ('param2', 7936), ('next', 631), ('param3', 13)])
/*<631>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x1D17This can't be happening...")
/*<634>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1293), ('param2', 7936), ('next', 633), ('param3', 13)])
/*<633>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 5), ('next', 639), ('param3', 14)])
/*<639>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 638), ('param3', 6)])
/*<638>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 11), ('param2', 261), ('next', 637), ('param3', 15)])
/*<637>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x500\x18Aaaaaghhhh!!!")
/*<626>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 99), ('next', 625), ('param3', 50)])
/*<625>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 5), ('next', 407), ('param3', 17)])
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1293), ('param2', 1024), ('next', 618), ('param3', 13)])
/*<618>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 5), ('next', 552), ('param3', 14)])
/*<552>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4625), ('param2', 1024), ('next', 401), ('param3', 13)])
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1200\x01\x0E\x03\x01\x00Link!")
/*<402>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 100), ('next', 403), ('param3', 16)])
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4616), ('param2', 1024), ('next', 640), ('param3', 13)])
/*<640>*/ 	printf(/* textboxtype: 1, unk: 0 */ "When you told me about the letter,\nit was at that moment I finally\nrealized. I realized that...I love her.\n\n\x0E\x01\x09\x04\x1209\xC00I thought to myself, \x201CI can't let anyone\nelse take her from me!\"\n\n\n\x0E\x01\x09\x04\x1201\x400If you hadn't told me, I might\nnever have even noticed my own\nfeelings for her.\n\n\x0E\x01\x09\x04\x1208\x0BI'm so grateful. I don't know how I can\never thank you!")
/*<651>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 641), ('param3', 42)])
/*<641>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 642), ('param3', 43)])
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	loadzone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 794), ('param3', 42)])
/*<794>*/ 	loadzone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 100), ('next', 1), ('param3', 15)])
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1F1BEver since you botched that mission\nwith the letter, I've been having\nnightmares and can't get any sleep!\nIt's just one thing after another!\nWhat is going on?! I wonder if that\nbed is cursed? Maybe it's <b<Groose>>'s\nrevenge! You gotta help me,\nLink!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1F17What do you want, Link?!\nI won't forget what you've done to me!\n\n\nAnd ever since you botched that thing\nwith the letter, I've been having\nnightmares and can't get any sleep!\nIt's just one thing after another!\nWhat is going on?! I wonder if that\nbed is cursed? Maybe it's <b<Groose>>'s\nrevenge! \x0E\x01\x09\x04\x1C\x1A18You gotta help me,\nLink!")
/*<539>*/ 				loadzone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 27), ('param2', 7936), ('next', 102), ('param3', 13)])
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17It's over... It's all over...\n\n\n\n\x0E\x01\x09\x04\x1C\x1F00What do you want, Link?!\nHave you come to laugh at me in my\nmiserable state? Just leave me alone!")
          		}
          	  case 1:
/*<826>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 685), ('param3', 31)])
/*<685>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B\x1F17What do you want, Link?!\nI'm just hurting so bad right now...\n\n\n\x0E\x01\x09\x04\x1C\x1F00I don't know who that was in the\nrestroom, but I'm completely freaked\nout just knowing that they read my\nletter...\nI still can't even believe it! Who exactly\ndid you give it to?!")
          	}
          }

