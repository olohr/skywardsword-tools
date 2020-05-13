          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 21), ('param3', 12)])
/*< 21>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 20), ('param3', 23)])
/*< 20>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 12)])) {
          	  case 0:
/*< 26>*/ 		printf("______This mysterious elixir is known as\n<y<____~>>!\n\n\nSimply pour it on a broken shield, and\nin moments the shield will be as good as\nnew! It's amazing!\n\nNot only that, but this multipurpose\nmixture will even restore <r<four>> hearts!\n\n\nHow about some to take on your\ntravels? It's only <r<30 Rupees>>!\n[1]OK![2-]No, thanks.")
          		flw_11:
/*< 11>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*< 13>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 12>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 106), ('param2', 8), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*< 29>*/ 		printf("______Hello there!\n\n\n\n______Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n______If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf("______Ahh, OK... I can improve this potion.\nYou're sure this is what you want?\n[1]Yep.[2-]Maybe not...")
/*< 70>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*<110>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
/*< 68>*/ 		printf("______Ah, wonderful... Just a moment...\nSorry to make you wait like this...")
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 71), ('param3', 12)])
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 72), ('param3', 33)])
/*< 72>*/ 		printf("______All done... Here you are. I hope I didn't\nset your expectations too high...")
/*< 89>*/ 		loadzone_temp_flags[4 /* 0x9 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf("____\n_I understand... Is there anything else\nI can infuse for you?")
/*<100>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 78), ('param3', 12)])
/*< 78>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 54), ('param3', 12)])
/*< 54>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 53), ('param3', 23)])
/*< 53>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
          	  case 0:
/*< 57>*/ 		printf("______That is a <y<____A>>.\nThis stuff makes you feel invincible!\nIt's a potion that reduces the damage\nyou take for a little bit of time.\nIf you find yourself facing an opponent\nwho's a little out of your league, this is\nthe potion for you!\n\nThis kind of potion doesn't come cheap\nthough. It's <r<200 Rupees>>. How about it?\n[1]Sure![2-]No, thanks.")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf("______Hello there!\n\n\n\n______Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n______If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
          	  case 0:
/*< 91>*/ 		printf("______Thank you very much! Yes, thank you!\nPlease, please come again!")
          	  case 1:
/*< 75>*/ 		printf("____\n_Oh... So you're not interested?\nWell, I hope to see you again.")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          						  case 0:
/*<  5>*/ 							printf("______Hmm? Something I can do for you?\n[1]Teach me![2-]Not really.")
          							flw_2:
/*<  2>*/ 							switch (choice(2, 0)) {
          							  case 0:
/*<  4>*/ 								printf("______Such a smart boy you are! Just stand\nin front of the potion you want to hear\nabout, and press (A).\n\nI'll talk you through everything that\npotion will do for you. The potions I\ncarry are pretty basic.\n\nHowever, if you want something\nwith a bit more kick to it...\n\n\n______You can buy one of my potions and\nwalk it a few steps down to my husband\nthere. He'll be able to help you out.\n\n______He might not look like much, but he\nmixes a mean potion, and he's used to\ndealing with kids like you.")
          								flw_7:
/*<  7>*/ 								loadzone_temp_flags[2 /* 0x9 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf("______No need to be rude. I'm busy too,\nyou know! But you look like such a\nnice boy, so I'll forgive you.\n\n______If you want some more potent potions,\ngo and talk to my husband. He can mix\nup ingredients to infuse and improve\nthe regular potions I sell here.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf("______Welcome, young man!\n\n\n\nThis is the Potion Shop! I sell potions\nthat you'll find handy in sticky\nsituations. Want to hear more?\n[1]Sure![2-]Nah.")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 106), ('param3', 31)])
/*<106>*/ 						printf("______Here's something that'll put some fire\nin your belly, young man! The new\npotion I've been concocting is finally\nready!\nI call it a <y<Stamina Potion>>!\n\n\n\nIf you drink this up, your stamina\ngauge won't drop as fast as usual!\n\n\nI'll admit it's a bit on the pricey side,\nbut I bet you'll find yourself in a\nsituation where a boost of stamina\nwill make it worthwhile!\nIf you want to buy some, just walk on\nover to the display and take a look!")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						loadzone_temp_flags[2 /* 0x9 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 31)])
/*<129>*/ 				printf("______Boy, have I got the new potion for you!\nI call it...the Air Potion!\n\n\nOne delicious gulp of this elixir and\nyou'll find that while you are\nunderwater, your <b<oxygen gauge>> will\ndrop much more slowly!\nYou'll be like a little fish, young man!\nAnd the price is more than generous,\nif I do say so myself.\n\nIf you're interested in a bottle, young\nman, just examine the blue cauldron,\nand I'll come running!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				loadzone_temp_flags[2 /* 0x9 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 39), ('param3', 31)])
/*< 39>*/ 		printf("______Hey! You there! Yes, you! The adorable\nboy with the golden hair!\n\n\nWelcome to the Potion Shop! \nYou can drink our potions when you're\ninjured to fill up your hearts.\n\n______Hey, you're one of those knights,\naren't you? Or one in training,\nat least, hmmm?\n\nLet me tell you, one look at you and\nI can tell you'll need my potions by\nthe cauldron full! So don't try to slink\naway without stocking up.")
/*< 42>*/ 		printf("______Oh dear_____..._____\n\n\n\nI forgot to ask if you have an Empty\nBottle on you...\n\n\nJust so you know, I can't sell you a \npotion if you don't have an Empty \nBottle to pour it into!\n\n______For some reason, I like you, though, so\nI'll give you a spare Empty Bottle I've\nbeen keeping here in the stall!\nOh, it's nothing. It's my little gift.\n______You won't hear me say this often, but\nyou can put other things besides\npotions in an Empty Bottle, so it's a\nuseful thing to carry around!")
/*< 45>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 1), ('next', 46), ('param3', 23)])
/*< 46>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
          		  case 0:
/*< 59>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 20)])) {
          			  case 0:
/*< 60>*/ 				printf("______Dear, your pouch is full! You're quite\nthe little shopper, aren't you?\n\n\n____\n_Why don't you leave some of your\nthings with that nice Item Check girl?\nThen you won't have to carry all that\njunk around with you!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf("______Empty Bottles fit in your Adventure\nPouch. Press _____ to take a look._____")
/*<114>*/ 					printf("If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n______So what would you like to buy?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf("______Empty Bottles fit in your Adventure\nPouch. Press <g<_____ >>to take a look. _____\n\n\nHold _____ and tilt the Wii Remote to\nchoose the item you want to use._____\n\n\nRelease _____ to select that item.\nEasy, right?_____")
/*<115>*/ 					printf("If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n______So what would you like to buy?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 40)])) {
          	  case 0:
/*< 81>*/ 		printf("If you have any other potions that\nyou want to infuse, you can bring\nthem to me. I'll be happy to help!")
/*< 80>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 1:
/*<113>*/ 		printf("Ah... I'm afraid this potion can't be\nimproved on. If you'd like to buy some\npotions, please speak with my wife...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 134), ('param3', 12)])
/*<134>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <y<_____>>.\nAccording to my secret infuser's\nhandbook, these<y< >>can be found within\nheavily wooded areas.")
          	flw_137:
/*<137>*/ 	printf("______Sorry to disappoint... How about\nanother potion?")
/*<135>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 84), ('param3', 12)])
/*< 84>*/ 	printf("_____\nOh, but...you don't have enough\nmaterials to enhance this potion...\n\n\nI'm really sorry, but...maybe you\ncould choose something else?")
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 139), ('param3', 12)])
/*<139>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a light\ndusting of <y<_____>>.\nAccording to my secret infuser's\nhandbook, these<y< >>can be found within\nheavily wooded areas.")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf("_____\nOh...dear. This is so uncomfortable\nto say, but...you don't seem to\nhave enough Rupees. I'd love to help\nyou, but...you see...")
/*<102>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 12)])
/*< 86>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 142), ('param3', 12)])
/*<142>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a smidge\nof <y<_____>>.\nAccording to my secret infuser's\nhandbook, these<y< >>can be found within\nheavily wooded areas.")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("_____\nOh no... You don't have any potions to\ninfuse.\n\n\n______My wife down there sells potions,\nif you want to speak with her...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 145), ('param3', 12)])
/*<145>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n<y<_____>>.\nAs I recall, there's quite a few of these\naround Skyloft...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf("____\n_You don't have an <y<Empty Bottle>>.\nCome back when you've got one,\nyoung man.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 148), ('param3', 12)])
/*<148>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a dusting of\n<y<_____>>.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
          	flw_151:
/*<151>*/ 	printf("______Sorry to disappoint... How about\nanother potion?")
/*<149>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf("______My dear, you don't have enough\nmoney! You're such a sweet boy, but I\nhave to think of my husband and\nchildren!\n____\n_Come back and see me when you've\ngot some more pocket money.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 153), ('param3', 12)])
/*<153>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch of\n<y<_____>>.\nAs I recall, there's quite a few of these\naround Skyloft...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf("______Thank you, sweetie! If you want a\npotion powered up, go see my husband\nat the end of the counter. He can mix\nsomething up for you.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 156), ('param3', 12)])
/*<156>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <y<_____>>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 26)])) {
          	  case 0:
/*< 76>*/ 		printf("____\n_Hmph! I don't need window-shoppers\nhere, dear.")
          	  case 1:
/*< 37>*/ 		printf("______You don't want it, dear? I know some\nof my potions might taste a bit strange,\nbut there's no denying that they do\nwhat's advertised!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 159), ('param3', 12)])
/*<159>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a sprinkling\nof <y<_____>>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 12)])
/*<162>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch or\ntwo of <y<_____>>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	flw_165:
/*<165>*/ 	printf("______Sorry to disappoint... How about\nanother potion?")
/*<163>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 167), ('param3', 12)])
/*<167>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a savory\nhint of <y<_____>>.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 170), ('param3', 12)])
/*<170>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n<y<_____>>.\nSkyloft is quite famous for these lovely\nbugs, isn't it?")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 173), ('param3', 12)])
/*<173>*/ 	printf("_____\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <y<_____>>.\nAs I recall, you can only find these at\nnight in Skyloft and a few other areas\naround the sky. And they're quite rare.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 9), ('param3', 12)])
/*<  9>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 8), ('param3', 23)])
/*<  8>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 4)])) {
          	  case 0:
/*< 38>*/ 		printf("______That's a vat of <y<____N>>!\nDrink this, dear, and it will replenish\neight hearts.\n\nWhy don't you pick some up for your\nadventure? It's only <r+<20 Rupees>>.\nHow about it?\n[1]Yes, please.[2-]No, thanks.")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf("______Hello there!\n\n\n\n______Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n______If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 14), ('param3', 23)])
/*< 14>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
/*< 24>*/ 			printf("______That's <y<____V>>! If you drink that,\nyour <b<oxygen gauge >>will reduce less\nquickly when you're underwater\nfor a short time.\nAre you interested, dear? It's only\n<r+<20 Rupees>>.\n[1]Sure![2-]No, thanks.")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf("______Slow down, dear. That potion is not\nquite ready for public consumption yet,\nbut I promise I'll have it out soon!\n\n______In the meantime, I've got plenty of\nother great potions for you to try out.\nWhy not have a look?")
          		}
          	  case 1:
/*< 27>*/ 		printf("______Hello there!\n\n\n\n______Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n______If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 17), ('param3', 23)])
/*< 17>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 25), ('param3', 12)])
/*< 25>*/ 			printf("______Now that amazing concoction is called\n<y<____T>>.\n\n\nDrinking it will make your <b<stamina\ngauge >>decrease more slowly for a\nshort time.\n\nIt's a little pricey but well worth it.\nI'll sell it to you for <r<50 Rupees>>!\n[1]OK![2-]No, thanks.")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf("______This wonderful potion completely stops\nyour <b<stamina gauge >>from being\ndepleted for a little while.\n\nHowever, I haven't quite perfected\nthe formula, so you'll have to wait until\nit's ready.\n\n______Please feel free to take a look at my\nother potions, though.")
          		}
          	  case 1:
/*< 28>*/ 		printf("______Hello there!\n\n\n\n______Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n______If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	loadzone_temp_flags[4 /* 0x9 10 */] = false;
/*<181>*/ 	switch (loadzone_temp_flags[7 /* 0x9 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 119), ('param3', 23)])
/*<119>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 44)])) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf("______Ah...hello... Welcome to my humble\nlittle side business over here.\n\n\nI, uh...infuse the potions my wife sells\nwith new ingredients to increase their\npower. It's nothing, really...just\nsomething I like to do.\n______Well...ah, do you have any potions\nyou would like me to infuse?\n[1]Sure.[2-]Nah.")
/*< 63>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*< 94>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 30)])) {
          					  case 0:
/*< 66>*/ 						printf("______These are the potions you are currently\ncarrying that I can infuse...")
/*< 64>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          					  case 1:
/*< 95>*/ 						printf("_____\nOh no... You don't have any potions to\ninfuse.\n\n\n______My wife down there sells potions,\nif you want to speak with her...")
          					}
          				  case 1:
/*< 67>*/ 					printf("____\n_I see... No bother to me... Hope to see\nyou again...someday...")
          				}
          			  case 1:
/*<121>*/ 				switch (loadzone_temp_flags[6 /* 0x9 40 */]) {
          				  case 0:
/*<123>*/ 					printf("______You can buy a <y<Bug Net >>from <r<Beedle's\nAirshop>> if you don't have one...\n\n\nBeedle is usually flying his shop outside\naround the Bazaar... Yes... If you <g<look\naround>>, you should see him up there...")
          				  case 1:
/*<117>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
/*<120>*/ 					printf("______Oh, welcome! Our shop is in the potion-\nbrewing-and-infusing business, as\nI'm sure you know...\n\nAnyway, I can improve potions you buy\nover there from my wife.\n\n\n______But of course... Sir, you'll need to\nbring me some insects if you want me\nto improve potions for you. Or bugs...\nYou can call them bugs if you like...\nYou can buy a <y<Bug Net >>from <r<Beedle's\nAirshop>> if you don't have one...\n\n\n______Beedle is usually flying his shop outside\naround the Bazaar... Yes... If you <g<look\naround>>, you should see him up there...")
/*<122>*/ 					loadzone_temp_flags[6 /* 0x9 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 160), ('param2', 1), ('next', 178), ('param3', 23)])
/*<178>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 58)])) {
          				  case 0:
/*<182>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 179), ('param3', 31)])
/*<179>*/ 					printf("______Oh, welcome... Sorry, did you just say\nyou have something to give me?\n\n\nYou'll have to forgive me. I'm a little\ntoo busy right now. Do you think...you\ncould come by my house later?\nI'll be there <r<tonight>>.\nSorry for the inconvenience... Hope\nto see you later.")
/*<180>*/ 					loadzone_temp_flags[7 /* 0x9 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 184), ('param3', 31)])
/*<184>*/ 				printf("______...Welcome!\n_____......_________\n_Sigh...\n\n\n______Sorry--I shouldn't be sighing in front\nof a customer... You see, recently\nI haven't been able to sleep <r<at night>>...\n\nAhhh... Sorry, I also shouldn't be\ncomplaining in front of a customer...\nAgain...")
/*<185>*/ 				loadzone_temp_flags[7 /* 0x9 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

