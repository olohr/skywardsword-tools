void entrypoint_106_34() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 21), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 20), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 12)])) {
	  case 0:
		printf("######This mysterious elixir is known as\n#########~#####!\n\n\nSimply pour it on a broken shield, and\nin moments the shield will be as good as\nnew! It's amazing!\n\nNot only that, but this multipurpose\nmixture will even restore #####four##### hearts!\n\n\nHow about some to take on your\ntravels? It's only #####30 Rupees#####!\n#####OK!#####No, thanks.")
		flw_11:
		switch (choice(2, 0)) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 106), ('param2', 8), ('next', -1), ('param3', 7)])
		}
	  case 1:
		printf("######Hello there!\n\n\n\n######Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n######If you want to know more about how\nthings work around here, just ask!")
	}
}

void entrypoint_106_51() {
	start()
	printf("######Ahh, OK... I can improve this potion.\nYou're sure this is what you want?\n#####Yep.#####Maybe not...")
	switch (choice(2, 0)) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
		printf("######Ah, wonderful... Just a moment...\nSorry to make you wait like this...")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 71), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 72), ('param3', 33)])
		printf("######All done... Here you are. I hope I didn't\nset your expectations too high...")
		loadzone_temp_flags[4 /* 0x9 10 */] = true;
	  case 1:
		printf("####\n#I understand... Is there anything else\nI can infuse for you?")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 78), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
	}
}

void entrypoint_106_35() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 54), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 53), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
	  case 0:
		printf("######That is a #########A#####.\nThis stuff makes you feel invincible!\nIt's a potion that reduces the damage\nyou take for a little bit of time.\nIf you find yourself facing an opponent\nwho's a little out of your league, this is\nthe potion for you!\n\nThis kind of potion doesn't come cheap\nthough. It's #####200 Rupees#####. How about it?\n#####Sure!#####No, thanks.")
		goto flw_11
	  case 1:
		printf("######Hello there!\n\n\n\n######Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n######If you want to know more about how\nthings work around here, just ask!")
	}
}

void entrypoint_106_52() {
	start()
	switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
	  case 0:
		printf("######Thank you very much! Yes, thank you!\nPlease, please come again!")
	  case 1:
		printf("####\n#Oh... So you're not interested?\nWell, I hope to see you again.")
	}
}

void entrypoint_106_01() {
	start()
	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
	  case 0:
		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
		  case 0:
			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
			  case 0:
				flw_105:
				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
				  case 0:
					switch (scene_flags[85 /* 0xB 20 */]) {
					  case 0:
						flw_6:
						switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
						  case 0:
							printf("######Hmm? Something I can do for you?\n#####Teach me!#####Not really.")
							flw_2:
							switch (choice(2, 0)) {
							  case 0:
								printf("######Such a smart boy you are! Just stand\nin front of the potion you want to hear\nabout, and press #####.\n\nI'll talk you through everything that\npotion will do for you. The potions I\ncarry are pretty basic.\n\nHowever, if you want something\nwith a bit more kick to it...\n\n\n######You can buy one of my potions and\nwalk it a few steps down to my husband\nthere. He'll be able to help you out.\n\n######He might not look like much, but he\nmixes a mean potion, and he's used to\ndealing with kids like you.")
								flw_7:
								loadzone_temp_flags[2 /* 0x9 04 */] = true;
							  case 1:
								printf("######No need to be rude. I'm busy too,\nyou know! But you look like such a\nnice boy, so I'll forgive you.\n\n######If you want some more potent potions,\ngo and talk to my husband. He can mix\nup ingredients to infuse and improve\nthe regular potions I sell here.")
								goto flw_7
							}
						  case 1:
							printf("######Welcome, young man!\n\n\n\nThis is the Potion Shop! I sell potions\nthat you'll find handy in sticky\nsituations. Want to hear more?\n#####Sure!#####Nah.")
							goto flw_2
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 106), ('param3', 31)])
						printf("######Here's something that'll put some fire\nin your belly, young man! The new\npotion I've been concocting is finally\nready!\nI call it a #####Stamina Potion#####!\n\n\n\nIf you drink this up, your stamina\ngauge won't drop as fast as usual!\n\n\nI'll admit it's a bit on the pricey side,\nbut I bet you'll find yourself in a\nsituation where a boost of stamina\nwill make it worthwhile!\nIf you want to buy some, just walk on\nover to the display and take a look!")
						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
						loadzone_temp_flags[2 /* 0x9 04 */] = true;
					}
				  case 1:
					goto flw_6
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 31)])
				printf("######Boy, have I got the new potion for you!\nI call it...the Air Potion!\n\n\nOne delicious gulp of this elixir and\nyou'll find that while you are\nunderwater, your #####oxygen gauge##### will\ndrop much more slowly!\nYou'll be like a little fish, young man!\nAnd the price is more than generous,\nif I do say so myself.\n\nIf you're interested in a bottle, young\nman, just examine the blue cauldron,\nand I'll come running!")
				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
				loadzone_temp_flags[2 /* 0x9 04 */] = true;
			}
		  case 1:
			goto flw_105
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 39), ('param3', 31)])
		printf("######Hey! You there! Yes, you! The adorable\nboy with the golden hair!\n\n\nWelcome to the Potion Shop! \nYou can drink our potions when you're\ninjured to fill up your hearts.\n\n######Hey, you're one of those knights,\naren't you? Or one in training,\nat least, hmmm?\n\nLet me tell you, one look at you and\nI can tell you'll need my potions by\nthe cauldron full! So don't try to slink\naway without stocking up.")
		printf("######Oh dear#####...#####\n\n\n\nI forgot to ask if you have an Empty\nBottle on you...\n\n\nJust so you know, I can't sell you a \npotion if you don't have an Empty \nBottle to pour it into!\n\n######For some reason, I like you, though, so\nI'll give you a spare Empty Bottle I've\nbeen keeping here in the stall!\nOh, it's nothing. It's my little gift.\n######You won't hear me say this often, but\nyou can put other things besides\npotions in an Empty Bottle, so it's a\nuseful thing to carry around!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 1), ('next', 46), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 20)])) {
			  case 0:
				printf("######Dear, your pouch is full! You're quite\nthe little shopper, aren't you?\n\n\n####\n#Why don't you leave some of your\nthings with that nice Item Check girl?\nThen you won't have to carry all that\njunk around with you!")
			  case 1:
				give_item(153 0x99);
				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
				switch (scene_flags[89 /* 0xA 02 */]) {
				  case 0:
					printf("######Empty Bottles fit in your Adventure\nPouch. Press ##### to take a look.#####")
					printf("If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n######So what would you like to buy?")
					goto flw_7
				  case 1:
					printf("######Empty Bottles fit in your Adventure\nPouch. Press ########## #####to take a look. #####\n\n\nHold ##### and tilt the Wii Remote to\nchoose the item you want to use.#####\n\n\nRelease ##### to select that item.\nEasy, right?#####")
					printf("If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n######So what would you like to buy?")
					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
				}
			}
		  case 1:
			printf("")
		}
	}
}

void entrypoint_106_53() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 40)])) {
	  case 0:
		printf("If you have any other potions that\nyou want to infuse, you can bring\nthem to me. I'll be happy to help!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
	  case 1:
		printf("Ah... I'm afraid this potion can't be\nimproved on. If you'd like to buy some\npotions, please speak with my wife...")
	}
}

void entrypoint_106_70() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 134), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof ###############.\nAccording to my secret infuser's\nhandbook, these##### #####can be found within\nheavily wooded areas.")
	flw_137:
	printf("######Sorry to disappoint... How about\nanother potion?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_106_54() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 84), ('param3', 12)])
	printf("#####\nOh, but...you don't have enough\nmaterials to enhance this potion...\n\n\nI'm really sorry, but...maybe you\ncould choose something else?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_106_71() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 139), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a light\ndusting of ###############.\nAccording to my secret infuser's\nhandbook, these##### #####can be found within\nheavily wooded areas.")
	goto flw_137
}

void entrypoint_106_55() {
	start()
	printf("#####\nOh...dear. This is so uncomfortable\nto say, but...you don't seem to\nhave enough Rupees. I'd love to help\nyou, but...you see...")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_106_72() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 142), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a smidge\nof ###############.\nAccording to my secret infuser's\nhandbook, these##### #####can be found within\nheavily wooded areas.")
	goto flw_137
}

void entrypoint_106_56() {
	start()
	printf("#####\nOh no... You don't have any potions to\ninfuse.\n\n\n######My wife down there sells potions,\nif you want to speak with her...")
}

void entrypoint_106_73() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 145), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n###############.\nAs I recall, there's quite a few of these\naround Skyloft...")
	goto flw_137
}

void entrypoint_106_05() {
	start()
	printf("####\n#You don't have an #####Empty Bottle#####.\nCome back when you've got one,\nyoung man.")
}

void entrypoint_106_74() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 148), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a dusting of\n###############.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
	flw_151:
	printf("######Sorry to disappoint... How about\nanother potion?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_106_06() {
	start()
	printf("######My dear, you don't have enough\nmoney! You're such a sweet boy, but I\nhave to think of my husband and\nchildren!\n####\n#Come back and see me when you've\ngot some more pocket money.")
}

void entrypoint_106_75() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 153), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch of\n###############.\nAs I recall, there's quite a few of these\naround Skyloft...")
	goto flw_151
}

void entrypoint_106_07() {
	start()
	printf("######Thank you, sweetie! If you want a\npotion powered up, go see my husband\nat the end of the counter. He can mix\nsomething up for you.")
}

void entrypoint_106_76() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 156), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof ###############.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
	goto flw_151
}

void entrypoint_106_08() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 26)])) {
	  case 0:
		printf("####\n#Hmph! I don't need window-shoppers\nhere, dear.")
	  case 1:
		printf("######You don't want it, dear? I know some\nof my potions might taste a bit strange,\nbut there's no denying that they do\nwhat's advertised!")
	}
}

void entrypoint_106_77() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 159), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a sprinkling\nof ###############.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
	goto flw_151
}

void entrypoint_106_78() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch or\ntwo of ###############.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
	flw_165:
	printf("######Sorry to disappoint... How about\nanother potion?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_106_79() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 167), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a savory\nhint of ###############.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
	goto flw_165
}

void entrypoint_106_80() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 170), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n###############.\nSkyloft is quite famous for these lovely\nbugs, isn't it?")
	goto flw_165
}

void entrypoint_106_81() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 173), ('param3', 12)])
	printf("#####\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof ###############.\nAs I recall, you can only find these at\nnight in Skyloft and a few other areas\naround the sky. And they're quite rare.")
	goto flw_165
}

void entrypoint_106_31() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 9), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 8), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 4)])) {
	  case 0:
		printf("######That's a vat of #########N#####!\nDrink this, dear, and it will replenish\neight hearts.\n\nWhy don't you pick some up for your\nadventure? It's only #####20 Rupees#####.\nHow about it?\n#####Yes, please.#####No, thanks.")
		goto flw_11
	  case 1:
		printf("######Hello there!\n\n\n\n######Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n######If you want to know more about how\nthings work around here, just ask!")
	}
}

void entrypoint_106_32() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 14), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
	  case 0:
		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
			printf("######That's #########V#####! If you drink that,\nyour #####oxygen gauge #####will reduce less\nquickly when you're underwater\nfor a short time.\nAre you interested, dear? It's only\n#####20 Rupees#####.\n#####Sure!#####No, thanks.")
			goto flw_11
		  case 1:
			printf("######Slow down, dear. That potion is not\nquite ready for public consumption yet,\nbut I promise I'll have it out soon!\n\n######In the meantime, I've got plenty of\nother great potions for you to try out.\nWhy not have a look?")
		}
	  case 1:
		printf("######Hello there!\n\n\n\n######Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n######If you want to know more about how\nthings work around here, just ask!")
	}
}

void entrypoint_106_33() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 153), ('param2', 1), ('next', 17), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
	  case 0:
		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 25), ('param3', 12)])
			printf("######Now that amazing concoction is called\n#########T#####.\n\n\nDrinking it will make your #####stamina\ngauge #####decrease more slowly for a\nshort time.\n\nIt's a little pricey but well worth it.\nI'll sell it to you for #####50 Rupees#####!\n#####OK!#####No, thanks.")
			goto flw_11
		  case 1:
			printf("######This wonderful potion completely stops\nyour #####stamina gauge #####from being\ndepleted for a little while.\n\nHowever, I haven't quite perfected\nthe formula, so you'll have to wait until\nit's ready.\n\n######Please feel free to take a look at my\nother potions, though.")
		}
	  case 1:
		printf("######Hello there!\n\n\n\n######Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n######If you want to know more about how\nthings work around here, just ask!")
	}
}

void entrypoint_106_50() {
	start()
	loadzone_temp_flags[4 /* 0x9 10 */] = false;
	switch (loadzone_temp_flags[7 /* 0x9 80 */]) {
	  case 0:
		flw_116:
		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 119), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 44)])) {
			  case 0:
				flw_62:
				printf("######Ah...hello... Welcome to my humble\nlittle side business over here.\n\n\nI, uh...infuse the potions my wife sells\nwith new ingredients to increase their\npower. It's nothing, really...just\nsomething I like to do.\n######Well...ah, do you have any potions\nyou would like me to infuse?\n#####Sure.#####Nah.")
				switch (choice(2, 0)) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 30)])) {
					  case 0:
						printf("######These are the potions you are currently\ncarrying that I can infuse...")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
					  case 1:
						printf("#####\nOh no... You don't have any potions to\ninfuse.\n\n\n######My wife down there sells potions,\nif you want to speak with her...")
					}
				  case 1:
					printf("####\n#I see... No bother to me... Hope to see\nyou again...someday...")
				}
			  case 1:
				switch (loadzone_temp_flags[6 /* 0x9 40 */]) {
				  case 0:
					printf("######You can buy a #####Bug Net #####from #####Beedle's\nAirshop##### if you don't have one...\n\n\nBeedle is usually flying his shop outside\naround the Bazaar... Yes... If you #####look\naround#####, you should see him up there...")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
					printf("######Oh, welcome! Our shop is in the potion-\nbrewing-and-infusing business, as\nI'm sure you know...\n\nAnyway, I can improve potions you buy\nover there from my wife.\n\n\n######But of course... Sir, you'll need to\nbring me some insects if you want me\nto improve potions for you. Or bugs...\nYou can call them bugs if you like...\nYou can buy a #####Bug Net #####from #####Beedle's\nAirshop##### if you don't have one...\n\n\n######Beedle is usually flying his shop outside\naround the Bazaar... Yes... If you #####look\naround#####, you should see him up there...")
					loadzone_temp_flags[6 /* 0x9 40 */] = true;
				}
			}
		  case 1:
			goto flw_62
		}
	  case 1:
		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
		  case 0:
			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
			  case 0:
				goto flw_116
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 160), ('param2', 1), ('next', 178), ('param3', 23)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 58)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 179), ('param3', 31)])
					printf("######Oh, welcome... Sorry, did you just say\nyou have something to give me?\n\n\nYou'll have to forgive me. I'm a little\ntoo busy right now. Do you think...you\ncould come by my house later?\nI'll be there #####tonight#####.\nSorry for the inconvenience... Hope\nto see you later.")
					loadzone_temp_flags[7 /* 0x9 80 */] = true;
				  case 1:
					goto flw_116
				}
			}
		  case 1:
			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 184), ('param3', 31)])
				printf("######...Welcome!\n#####......#########\n#Sigh...\n\n\n######Sorry--I shouldn't be sighing in front\nof a customer... You see, recently\nI haven't been able to sleep #####at night#####...\n\nAhhh... Sorry, I also shouldn't be\ncomplaining in front of a customer...\nAgain...")
				loadzone_temp_flags[7 /* 0x9 80 */] = true;
				goto flw_116
			  case 1:
				goto flw_116
			}
		}
	}
}

