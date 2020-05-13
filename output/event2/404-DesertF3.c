          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("I love the view from here, vweep.")
          	  case 1:
/*< 50>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 51), ('param3', 23)])
/*< 51>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
          		  case 0:
/*< 52>*/ 			printf("Brrm-ZORT! Is that what I think it is?!_____\nQuick, take it to <b<Master Thunder\nDragon>>, vweep-vweep!")
          		  case 1:
/*< 30>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 31), ('param3', 23)])
/*< 31>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("______I don't think there's any way that\nseedling would ever mature if you\nplanted it in the <b<Lanayru area>>, vrrm...\n\n______We need your help, brrzrrt! ______Master\nThunder Dragon needs the <r<fruit from\nthe Tree of Life >>to regain his strength!")
          				  case 1:
/*< 70>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 31)])
/*< 32>*/ 					printf("______What are you doing with that seedling,\nvrrm?!_____ <b<Master Thunder Dragon>> needs\n<r<fruit from the Tree of Life>> to recover!\n\n______Unless you mean to help our master,\nbzzzzt?\n[1]Of course.[2]Not really.")
/*<131>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*<132>*/ 						printf("______Really, vrrm?! Thank you, zrrt!\nMake sure you plant the seedling\nsomewhere it will be sure to thrive,\nphoo-weep.\n______I fear growing the seedling to maturity\nin <r<Lanayru Province is impossible>>,______\nbrrzrrt. We're counting on you, vweep!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("______Well, since you uprooted it, it's your\nresponsibility now, vrrm! Make sure\nyou plant that seedling where it can\ngrow to maturity, phoo-weep.\n______And that means taking it somewhere\n<r<outside of the Lanayru area>>, bzzt!______\nWe're all counting on you, vweep!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("______<b<Master Thunder Dragon>>'s condition has\nbeen bad for a long time,~~~ and the soil\nhere is not suitable for growing trees,\nzrrt._____ ______If only we had more time, vrrm...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf("______You have certainly proved your passion\nfor digging, my friend! If you find\nout anything about the legend of the\nthree dragons, be sure to let me know.")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("______Is there anything else I can help you\nwith? If you find out anything about\nthe legend of the three dragons,\nbe sure to let me know!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("______I almost never get visitors!_____ My name is\n<b<Golo>>, and I am researching the <r<legend\nof the three dragons>>, one of which is\nsaid to live here!\n______At first glance, it would seem that\nthere is nothing in this area, but I know\nthere is something here. I will just keep\non looking!\nSo your name is Link?\nI see... Not the easiest name to\nsay, is it?\n\n______And how about you, Link?\nWhy are you here.~~~.~~~.~~~?\n\n\n______You are looking for a <b<sacred flame>>?\nThat sounds like something I have\nheard of before,_____ but maybe not...\n\n______Sweet goro,_____ ______I remember now! I read\nsomething about it in ancient\nscrolls that spoke of the <b<Lanayru\nSand Sea>>.\n______I do not remember all the details, but\nyou can get to Lanayru Sand Sea if you\njust go straight through here.")
/*<125>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 126), ('param3', 39)])
/*<126>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 128), ('param3', 39)])
/*<128>*/ 		printf("______If you want to get to the Lanayru Sand\nSea, you are going to need this key!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("______Good luck to you!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("______You made it to the dragon's home,\nLink?____T\n\n\n___________I am so jealous!____Z\n\n\n\n___________You beat me to the punch!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("______I was able to dig a tunnel to the place\nwhere the <r<Thunder Dragon>> lives, but...____-\n___________It is too narrow for me to go through.\n___________What am I going to do?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 31)])
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("______Nice to see you, Link.\n\n\n\nSay, you ever find that <b<sacred flame>>\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n______._____._____._____I see. So after all that adventuring,\nyou finally found it! \n\n\n____Link, I have to say... \nYou are pretty amazing!")
/*<170>*/ 				printf("______You are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n<r<narrow path>> ______that I cannot fit through\nwithout losing a few pounds!\n______My theory is that it probably links to\nthe home of the <r<Thunder Dragon>>, one\nof the three dragons in the legend.\n\n______And I am convinced that these robots\nmust have something to do with it as\nwell.~~~\n\n___________The <r<Thunder Dragon>>, a bunch of\nrobots, and Timeshift Stones_____._____._____.\n\n\n___________What a story!")
/*<146>*/ 				printf("______Oh, I almost forgot, Link!\nDo you remember that excavation\nproject you invested in?_____\n\nWell, we hit the jackpot! I found a\nlarge cache of Timeshift Stones.\n______I can pay you back tenfold now!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("______Nice to see you, Link.\n\n\n\nSay, you ever find that <b<sacred flame>>\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n______._____._____._____I see. So after all that adventuring,\nyou finally found it! \n\n\n____Link, I have to say... \nYou are pretty amazing!")
/*<171>*/ 				printf("______You are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n<r<narrow path>> ______that I cannot fit through\nwithout losing a few pounds!\n______My theory is that it probably links to\nthe home of the <r<Thunder Dragon>>, one\nof the three dragons in the legend.\n\n______And I am convinced that these robots\nmust have something to do with it as\nwell.~~~\n\n___________The <r<Thunder Dragon>>, a bunch of\nrobots, and Timeshift Stones_____._____._____.\n\n\n___________What a story!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf("Master Thunder Dragon has regained\nhis strength, and it is all thanks to your\nhelp, brrzrrt! We thank you, vweep!")
          		  case 1:
/*<136>*/ 			printf("Did you come to visit Master Thunder\nDragon, phoo-weep?")
          		}
          	  case 1:
/*< 53>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 54), ('param3', 23)])
/*< 54>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 26)])) {
          		  case 0:
/*< 55>*/ 			printf("Once he eats the <r<fruit from the Tree\nof Life>>, Master Thunder Dragon will\nregain his strength, vrrm!")
          		  case 1:
/*< 35>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 36), ('param3', 23)])
/*< 36>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 14)])) {
          			  case 0:
/*< 38>*/ 				printf("______This area is only good for growing\ngrass and flowers, zrrt._____ ______If we can't find\na way to grow the seedling quickly...\n_____Our master will not make it, bzzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("______Master Thunder Dragon's present\ncondition concerns me greatly, vwerp.\nFind him <r<fruit from the Tree of Life>>,\nor his systems may fail...")
          					  case 1:
/*< 37>*/ 						printf("______We wanted Master Thunder Dragon to\nget well, so we planted a <r<seedling from\nthe Tree of Life>>, which bears a fruit\nthat is said to cure any illness, vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf("______Situation critical, vrrrrm! <b<Master\nThunder Dragon >>is very sick, bzzt.~~~\n\n\n______And we can't do anything with this\nTimeshift Stone without Master\nThunder Dragon's permission, vrrm._____\n\n______But I guess we have bigger things to\nworry about than a Timeshift Stone,\nbrrzrrt...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("______________________Hey, over there! Is that you,\nLink?\n\n\n__________Nice timing!~~~ I have been \nmeaning to look for you!~~~\n\n\n__________Come over here for a minute!")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("______Hey there, Link! \nI wanted to tell you that I found a hole\nthat leads farther in!\n\nBut this rock is really strong. It looks\nlike it will be a while before I can get\nall the way through it.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("You should hurry up before you get left\nbehind, vrrm!")
          	  case 1:
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 12), ('param3', 31)])
/*< 12>*/ 		printf("______There are lots of big Timeshift Stones\nhere, zrrt._____ ______Did you get permission from\n<b<Master Thunder Dragon >>to come here\nlike we did, vrrm?\n______We were just about to transport this\nTimeshift Stone to Master Thunder\nDragon, vweep.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 86), ('param3', 39)])
/*< 86>*/ 		printf("____(_There are many monsters, vrrm.~~~\n______Practice extreme caution, bzrt!")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("Master Thunder Dragon is in very high\nspirits, vweep!")
          		  case 1:
/*<137>*/ 			printf("Master Thunder Dragon is strong\nagain, vrrm!")
          		}
          	  case 1:
/*< 56>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 57), ('param3', 23)])
/*< 57>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 28)])) {
          		  case 0:
/*< 58>*/ 			printf("Kerr-CHUNK! Where did you get that\nfruit?!____- Did you bring it for <b<Master\nThunder Dragon>>, voo-weep?!")
          		  case 1:
/*< 27>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 197), ('param2', 1), ('next', 28), ('param3', 23)])
/*< 28>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          			  case 0:
/*< 39>*/ 				printf("______The <b<Lanayru area>> is terrible for\ngrowing trees, zrrt._____ ______Do you know\nof a place where trees grow quickly,\nvweep?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("On the other side of the bridge, we\nplanted a <r<seedling from the Tree of\nLife>>, which is said to bear fruit that\ncan cure any illness, vrrm._____\n______But trees don't grow so well around\nhere, vweep...")
          				  case 1:
/*< 16>*/ 					printf("______We got permission from our master,\nthe Thunder Dragon, to dig for\n<b<Timeshift Stones>>, vweep.\n\n___________But <b<Master Thunder Dragon >>is very ill\nright now, brrzrrt.~~~ I'm worried about\nhim, vrrm._____ ______At this rate, our master \nmay cease functioning, vweep...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("_____._____._____.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("_____._____._____.")
          			  case 1:
/*<117>*/ 				printf("_____._____._____.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("_____._____._____.")
          			  case 1:
/*<114>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 95), ('param3', 31)])
/*< 95>*/ 				printf("_____._____._____.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("__________Link! I owe you my life!\nYou have to let me repay you.\n\n\n______Give me some time to prepare, and\nwhen you next return to visit me...\nI believe you will be mightily pleased!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 4), ('next', -1), ('param3', 7)])
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf("____K_This is <b<Lanayru Gorge>>. Legend tells of\na dragon loyal to the goddess living\nin this area.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("____Z_Signs indicate that an ancient\ncivilization established a quarry\nhere to mine the deposit of\nhigh-quality Timeshift Stones.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("______You have certainly proved your passion\nfor digging, my good friend! I will \nmake sure these funds are put to good\nuse, and I appreciate your patience.")
          	  case 1:
/*< 61>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 62), ('param3', 12)])
/*< 62>*/ 		printf("______So...you would not happen to be\ninterested in excavating, would you?____<\nYou are?! Well then, you are going to\nlove this!____<\n______The thing is, these research digs can\nget really expensive..._____ But they can\nalso be lucrative! Any interest in\ninvesting 10 Rupees in my dig?\n[1]Sure![2-]No chance.")
/*< 59>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("______Thanks! I will put these funds to good\nuse!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("Little goro, it seems you do not have \nenough Rupees. Well, you could always \ncome back later to make a small \ninvestment. My research needs you!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("___________That is too bad..._____ I guess no one\nunderstands the importance of\nfunding research digs these days...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("____Z_Consequently, the terrain is intricately\nsubdivided with the remnants of long-\nabandoned mining equipment, such as\nmine carts and their tracks.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Ahead is Lanayru Sand Sea,\nan area covered in an ocean of\nsand! There are lots of ancient\nruins there.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Some Bokoblins carry a Monster Horn\non their waist.\n\n\nIf you latch on to it and _____pull with your\nwhip>>, it is possible to claim it for\nyourself.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Ahead is Lanayru Desert.\nAdventures await those\nsolving the mysteries of the\nquarry in the desert!")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 89), ('param3', 23)])
/*< 89>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 36)])) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 41), ('param3', 23)])
/*< 41>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf("What's that, Link?\nYou say you will find a place where\nthe seedling <r<will >><r<grow quickly >>for me?\n\n______That would be a great help... All I\nwould need to do is eat one piece of\n<r<fruit from the Tree of Life>> to recover\nmy full strength.\n______But that seedling cannot be planted\njust anywhere. Look for a place with\n<r<very rich soil>>.")
          			  case 1:
/*< 42>*/ 				printf("______Hello there, Link.~~~\nIt looks like you've found a <r<seedling\nfrom the Tree of Life>>, haven't you?\n\nBut it's too late. I'm done for._____\nI won't live long enough for the tree to\ngrow large and produce the fruit that\ncould save me.______ Cough...cough...\nIt's such a shame. If I had the strength,\nI could sing you as many songs as you\nwanted._____ ______Cough...cough...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("____Link... Please bring me\nthe <b<fruit from the Tree of Life >>as soon\nas you...can.")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("The robots were worried about me, so\nthey planted a <r<seedling from the Tree\nof Life>>. The fruit of this tree is said to\nbe able to cure any illness...\nThey planted the seedling over there._____\nCough...___________ ______But it just won't grow._____\nCough...__________- ______I think this is the end for me._____")
          				  case 1:
/*<  1>*/ 					printf("________________Cough...cough..._____\n\n\n\n______Oh, hello..._____ I haven't had a visitor like\nyou here in...quite a while.\n\n\n______You're a human, aren't you? You must\nhave some reason for coming this far.\nWhat is it?\n\n~~~.~~~.~~~.\n\n\n\n______I see. So you're Link\nfrom the sky... _____Cough...~~~\nThat's not much of a name, is it?\n\n______How about I add a model number to\nyour name like my friends have got?\nMaybe <r<LD-Link-16>>._____._____._____?\n\nOh. I can tell you don't like the sound\nof that.~~~ That's a shame...\n~~~______Cough...cough...\nSo, what can I do for you?\n______Ohh..._____ You say you need me to teach\nyou a song? Cough...")
/*<130>*/ 					printf("______Hold on, now. Didn't you just say you\ncame from the sky, Link?\nSo then you're the hero chosen by the\ngoddess, aren't you?\nI see... Well, that is something...\n\n\n\n____\n_Although I must apologize. You see,\nI can't really help you.\n\n\n____\n_I may have enough strength for a brief\nchat like this, but... Well, as you can\nsee, I am quite ill._____ ______Cough...\n\n____\n_I'm in no shape to sing.\n\n\n\n______And to think it was the goddess herself\nwho entrusted me with this important\nduty... I feel the deepest shame...\nCough...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Ahead is Lanayru Mine. It is\nthere that I will solve the\nmystery of the Timeshift\nStones!")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Entry to the area ahead is\nallowed only by permission of\nthe <b<Thunder Dragon>>, <b<Lanayru>>.")
          }

