void entrypoint_122_01() {
	start()
	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
	  case 0:
		printf("With the fortune-teller back on the\njob, this place feels alive again. \nIt's just not the same without him.")
	  case 1:
		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
		  case 0:
			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
			  case 0:
				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
				  case 0:
					printf("So the fortune-teller's at home with\na case of the blues, eh?\n\n\nI wonder if he'd come back if we found\nhim a new crystal ball...")
				  case 1:
					printf("His place is over on the #####eastern\nedge of town#####...\n\n\nIt's a bit too quiet around here without\nhim. Why don't you go check on him?\nMake sure he's doing all right.")
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 127), ('param3', 31)])
				printf("I haven't seen the #####fortune-teller #####much\nthese days...\n\n\nYou knew his crystal ball got broken,\nright? I just hope he's not sitting at\nhome kicking himself for not\nforeseeing this.")
				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
				  case 0:
					printf("What?")
					printf("So the fortune-teller's at home with\na case of the blues, eh?\n\n\nI wonder if he'd come back if we found\nhim a new crystal ball...")
					flw_129:
					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
				  case 1:
					printf("Would you mind running over and\nchecking in on him?\n\n\nHis house is on the##### eastern edge #####of\nSkyloft.")
					goto flw_129
				}
			}
		  case 1:
			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
			  case 0:
				printf("Have you explored Skyloft at night?\nIt's a different place under the cover\nof darkness.\n\nFor example, if you go to the Gear \nShop owner's house at night, he'll buy \nyour treasures.\n\nNow it's true there are dangers to be\nfound at night, but a student at the\nKnight Academy should have no\ntrouble with that.\nAll you have to do is #####nap in a bed #####until\nnightfall.##### That's it!")
			  case 1:
				printf("Only one thing to do when you're tired:\nget some sleep. ##########You can sleep anywhere\nthere's a bed#####, you know?\n\nSkyloft is a different place after the\nsun goes down. It's no lie.\n\n\n#####Find a bed and take a nap##### to sleep until\nnightfall. There's all kinds of curious\nthings to enjoy at night...")
			}
		}
	}
}

void entrypoint_122_19() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 34), ('next', 112), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', -1), ('next', 57), ('param3', 50)])
	printf("Mirror, mirror, on the wall...\nWho's the loveliest of them all?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 113), ('param3', 39)])
	printf("######That IS what you were thinking,\nright, ####?")
}

void entrypoint_122_02() {
	start()
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
		  case 0:
			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
			  case 0:
				printf("I've been hearing a weird rumor.\nApparently, after #####nightfall#####, people\nhave been hearing a woman sobbing\nin the##### dormitory#####.\nI tell you, it gives even a big guy like\nme the creeps.")
				printf("Huh? A hand? Reaching out of the\nstall?\n\n\nThat...#####that's one way of going about\nit, I guess.")
			  case 1:
				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
				  case 0:
					printf("I've been hearing a weird rumor.\nApparently, after #####nightfall#####, people\nhave been hearing a woman sobbing\nin the##### dormitory#####.\nI tell you, it gives even a big guy like\nme the creeps.")
					printf("What? #####Calling out for toilet paper\nwhile you're stuck in the restroom?\n\n\nYikes, that's rough. I should know--\nI've been there before.")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 164), ('param3', 31)])
					printf("I've been hearing a weird rumor.\nApparently, after #####nightfall#####, people\nhave been hearing a woman sobbing\nin the##### dormitory#####.\nI tell you, it gives even a big guy like\nme the creeps.")
				}
			}
		  case 1:
			flw_137:
			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
			  case 0:
				printf("Hi there! I hope you're pressing #####\nwhenever you need help.#####")
			  case 1:
				printf("So you're on your way to becoming\na knight now, right? Congratulations!\n\n\nBut I'm sure there's still plenty you\ndon't know. Don't forget to press #####\nif you need a pointer or two.#####")
			}
		}
	  case 1:
		goto flw_137
	}
}

void entrypoint_122_03() {
	start()
	printf("######Hey, ####! Today's the big\nday, isn't it? You know, the Wing\nCeremony thing!\n\nWin this thing, and you'll get bumped\nup to the senior class.")
	printf("Here in Skyloft, it's being able to ride a\nLoftwing that separates the kids from\nthe adults.\n\n####\n#And if your goal is to become a knight,\nwell, good technique is even more\nimportant. All of us learned to fly the\nhard way: lots of practice.")
}

void entrypoint_122_20() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', -1), ('param3', 24)])
}

void entrypoint_122_04() {
	start()
	printf("######Ever heard of banging your knuckles\nagainst the door? It's called knocking.\nBarging into someone's house is what\nmost people call...rude.\nAnyway, you're lucky I'm home.\nI'm usually over at the bazaar working\nat my stall, but we're closed for the \nWing Ceremony.\n######Most days at work all I can think about\nis how bored I am, but now that I'm\nnot at work, I'm...even more bored!\nMy life is pretty sad...")
}

void entrypoint_122_21() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 18), ('next', 69), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 116), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 117), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 20), ('next', 74), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 70), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 20), ('next', 64), ('param3', 50)])
	printf("######Th-#####thanks for your help!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 65), ('param3', 50)])
	printf("######Don't you mention it!\n\n\n\nI guess I should hustle over and say\nhello to your mother too.\n\n\nI'm sure she's just like you, Pipit--\ntrustworthy and dependable.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 20), ('next', 66), ('param3', 50)])
	printf("######Whoa! Uhhhh, that's moving a bit too\nfast, don't you think?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 67), ('param3', 50)])
	printf("######Of course not! Don't be silly. It's best\nto get these things sorted out right\naway.\n\n######I hope you'll invite me to your house\nnext time.")
}

void entrypoint_122_05() {
	start()
	printf("######Is that you, ####?\nWhat are you doing up so late?\n\n\n######I'm hungry! My mom's still cooking,\nbut it's taking forever. When will it\nbe ready?")
}

void entrypoint_122_22() {
	start()
	printf("######This is unbelievable... The goddess\nstatue is gone!\n\n\n######Would somebody please explain just\nwhat's going on here in Skyloft?")
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
	  case 1:
		printf("And my little girl, Kukiel, still hasn't\ncome home. I'm starting to get\nworried.\n\n######Would you please go and look for\nher, ####?")
	}
}

void entrypoint_122_06() {
	start()
	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
	  case 0:
		printf("######Heyyy, kid! I hope you're putting ol'\nScrapper to good use.\n\n\nHe's got a bit of a mouth on him, but\nhe's a robot with a good heart. Well,\nif robots had hearts...\n\nJust remember to treat him kindly,\nand everything will work out fine!")
	  case 1:
		printf("######Heyyy! Up to some late-night mischief,\neh? Better watch yourself, or a Remlit\nwill take a bite out of your backside!\n\nMost of us don't go out after dark\nwithout a really good reason, y'know?")
	}
}

void entrypoint_122_23() {
	start()
	printf("It may look like my master only tinkers\nwith machines as a hobby, bzzt, but\nthat's not the whole story...vrrrrm...\n\nHe's building an automatic washing\nmachine for his mother, bzzt-CLANG!\n\n\nIsn't that great, vrrrrm?\n\n\n\nHe's not at all like a certain someone\nI know who drags Mistress Fi around\nthe world without a care for her\nsafety or happiness, bzzat!")
}

void entrypoint_122_07() {
	start()
	printf("#####VGood grief! Will you talk to that boy\nof mine for me?")
	flw_85:
	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
	  case 0:
		printf("I thought he would settle down a bit\nand maybe even wash his hands now\nthat he's got that robot up and running,\nbut he's still tinkering away!\nI'm telling you, that boy will never get\nthe grease out from beneath his\nfingernails. Ah...")
	  case 1:
		printf("He's up at unspeakable hours trying to\nrepair that rusty pile of an old robot he\ninherited!\n\nWhat he intends to do with that\nscrap-heap reject is beyond me!")
	}
}

void entrypoint_122_24() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 89), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_122_08() {
	start()
	printf("#####VAll that lug does is make one filthy\nmess after another. I swear he leaves\na grease spot wherever he sits!\n\nI know he likes tinkering around with\nhis oily doodads, but I'm drowning in\ndirty laundry here!\n\n#####That lug? #####Sounds tough.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("That's right! My greasy-fingered son\nwho runs the Scrap Shop in the bazaar!")
		goto flw_85
	  case 1:
		printf("It IS tough! That greasy lug nut is\nfraying my wires!")
		goto flw_85
	}
}

void entrypoint_122_25() {
	start()
	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
	  case 0:
		switch (scene_flags[45 /* 0x4 20 */]) {
		  case 0:
			printf("######Hey! Shouldn't you rush off and look\nfor your bird? I think you should.")
		  case 1:
			printf("######I wonder what they're talking about\nover there. It looks pretty serious.")
		}
	  case 1:
		printf("######Man, it feels good to just sit here and\nrelax.\n\n\nI like to kick back here and spend time\nthinking about that girl.\n\n\n####\n#Yep, #####Kina #####is the best thing about the\nold pumpkin bar. She's adorable!")
	}
}

void entrypoint_122_09() {
	start()
	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
	  case 0:
		printf("######Hi, ####. Have you seen\nKukiel anywhere?\n\n\nI swear that child can disappear in the\nblink of an eye! She's quite a magician.")
	  case 1:
		printf("#####\nPardon me, ####.\nYou haven't seen Kukiel, have you?\n\n\nShe's always running off without a\nword to anyone. I don't know what I'm\ngoing to do with her.\n\nI guess she'll never learn unless she\nruns into trouble one day.")
	}
}

void entrypoint_122_26() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 98), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_122_27() {
	start()
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 12), ('next', -1), ('param3', 7)])
		  case 1:
			flw_102:
			printf("######Hey, mister! Did you know the goddess\nis gone?\n\n\n######Do you think she got mad and left\n'cause I never listen to my mom\nand dad?")
			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
		}
	  case 1:
		goto flw_102
	}
}

void entrypoint_122_10() {
	start()
	printf("######Hi, ####! This house\nbelongs to Kukiel. Pssst--by the way,\nthat's ME.\n\nI'm gonna go play with my special\nfriend today! It's going to be so much\nfun!")
}

void entrypoint_122_28() {
	start()
	printf("######HEY!\n\n\n\n######Oh... #####I guess it's OK as long as you're\ngoing to just sit.\n\n\n######But listen up! THAT is an expensive\nchair, and if you get it dirty... Well, I\ncan't be held responsible for what\nhappens.")
}

void entrypoint_122_11() {
	start()
	printf("######Zzz...let's play...zzz...\nUncle Bats!")
}

void entrypoint_122_29() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 106), ('param3', 39)])
	printf("You're too late for breakfast.\nWe stopped serving hours ago.\nYou'll have to wait for lunch!")
}

void entrypoint_122_12() {
	start()
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		printf("######Hey, ####! Have you\ntaken a look here recently?\n\n\nThere's not a Keese to be seen.\nNo other angry monsters either...\n\n\nBeen a while since I could take a quiet\nwalk out in the dark...")
	  case 1:
		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
		  case 0:
			flw_42:
			printf("######I heard you're the one responsible\nfor finding Kukiel!\n\n\n######Thank you so much! Just look at her...\nShe puts her parents through all\nthat worry and heartache, and now\nshe's out like a light.")
		  case 1:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
				  case 0:
					goto flw_42
				  case 1:
					printf("######What? Are you serious? You found\nKukiel?\n\n\nWhat did I tell you? Nobody here in\nSkyloft would harm a hair on her head!")
				}
			  case 1:
				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
				  case 0:
					printf("######I wonder where that little mischief\nmaker Kukiel's gone off to now.\n\n\nHer mom thinks she was kidnapped,\nbut I'm not so sure.\n\n\n######I mean, there's nobody here in Skyloft\nwho would do such a thing, right?\n\n\n######I bet she'll show up sooner or later.\n\n\n\nAnyway, keep your eyes peeled, and let\nus know right away if you see her.")
				  case 1:
					printf("##############, just look at Kukiel\nsleeping. She sure is a cutie.\n\n\nShe makes all the hard work I do\nmeaningful and gives me reason to\nkeep on doing it.\n\nNo idea who or what #Uncle Bats\" is.\nSilly girl.")
				}
			}
		}
	}
}

void entrypoint_122_13() {
	start()
	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 60), ('param3', 31)])
		printf("######I still can't find Kukiel!\n\n\n\nWould you please help me find her?\nJust...hurry!")
	  case 1:
		printf("######Oh, good evening. It's awfully late,\nbut is there something I can do for\nyou?")
	}
}

void entrypoint_122_30() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 108), ('param3', 39)])
	printf("You're too late for breakfast.\nWe stopped serving hours ago.\nYou'll have to wait for lunch!")
}

void entrypoint_122_14() {
	start()
	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
	  case 0:
		printf("######Hey, ####! Kukiel's come\nhome!\n\n\nI heard you were the one who found\nmy girl!\n\n\n######Thanks a lot! The missus is grinning\nfrom ear to ear.")
	  case 1:
		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
		  case 0:
			printf("######Oh, it's you, ####.\nLooks like Kukiel's run off again.\n\n\n######My wife's in hysterics. She's telling\nfolks our girl's been kidnapped.\n\n\n######But it's Kukiel we're talking about\nhere!####\n You can bet she's just off playing\nsomewhere.")
			printf("######Let me know if you see her, OK?")
		  case 1:
			switch (loadzone_temp_flags[14 /* 0x8 40 */]) {
			  case 0:
				printf("######Hi, ####!\n\n\n\nThis is the##### Light Tower#####! You should try\nclimbing to the top. It is sooooo cool\nup there!")
			  case 1:
				printf("######Hey there, ####.\n\n\n\nYou know what's funny? Folks here call\nthis the #####Light Tower#####. It's supposedly\nhere to help people find Skyloft and\nprevent them from crashing into us.\n######But I've never seen any light coming\nout of it. I wonder who built it.\nAnd why...\n\n######You should climb all the way to the top,\nanyway. There's one amazing view of\nthe goddess from up there.")
				printf("######Me?\n\n\n\n######No, thank you, I'm good right down\nhere. Me and heights, we don't get\nalong.")
			}
		}
	}
}

void entrypoint_122_31() {
	start()
	printf("#####dZrrrt! This is the entrance to the\nvolcano! #####I better get there before\nMaster Shortpants!")
}

void entrypoint_122_15() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 37), ('next', 45), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 38), ('next', 46), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 39), ('next', 62), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 179), ('param3', 39)])
	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 37), ('param2', -1), ('next', 173), ('param3', 16)])
		printf("######Did you hear the news? One of the\nstudents in the Wing Ceremony has\nlost his bird. It's gone missing!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 38), ('param2', -1), ('next', 174), ('param3', 16)])
		printf("######Oh, really? That's terrible!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 39), ('param2', -1), ('next', 175), ('param3', 16)])
		printf("######To tell the truth, I'm not comfortable\naround birds. It's their talons--they\nlook so sharp and painful!")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 37), ('param2', -1), ('next', 37), ('param3', 16)])
		printf("######Such a beautiful day, but we're too busy\nto enjoy it. Some things never change.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 38), ('param2', -1), ('next', 38), ('param3', 16)])
		printf("######Isn't that the truth! The only thing my\nlug nut of a son is good for is getting\ngrease on his shirt! All I do is laundry,\nlaundry, laundry. It never ends!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 39), ('param2', -1), ('next', 39), ('param3', 16)])
		printf("######I hear you! And I'm terrible at washing\nclothes. I wish I could get someone to\ndo it for me.")
	}
}

void entrypoint_122_32() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 186), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 7), ('next', 187), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 183), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 99), ('next', 185), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1802), ('param2', 3072), ('next', 184), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 181), ('param3', 39)])
	printf("######Uh... #####I wonder where she's gone...")
}

void entrypoint_122_16() {
	start()
	switch (temp_flags[52 /* 0x7 10 */]) {
	  case 0:
		printf("Stop by and chat with me once in a\nwhile, you hear? I may be old, but I'm\nnot boring.")
	  case 1:
		printf("Heh heh heh. Seems like you're on the\nroad to success, little friend. How 'bout\nI buy us a beverage?\n#####Thanks! #####Nah.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 42)])) {
		  case 0:
			printf("######There's a good lad. Cheers!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 30), ('next', 147), ('param3', 47)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 160), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 115), ('next', 150), ('param3', 24)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 149), ('param3', 6)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 30), ('next', 159), ('param3', 48)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 145), ('param3', 33)])
			printf("######That's the stuff! There we go!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 154), ('param3', 39)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 46)])) {
			  case 0:
				printf("Let me tell you something that may\ncome in handy.\n\n\nWhen you're out on the skies, you might\nsee##### ring-shaped rocks #####now and again.\n\n\n######I've heard there's some kind of \nunknown energy that builds up in the \ncenter of those big rocks.\n\nSo get this: if you fly your Loftwing\nthrough a hole, you'll come blasting\nout like you were shot out of a cannon.\n\n######I hear all the hotshot knights use this\ntrick to cover huge distances in a\nhurry.")
				flw_151:
				temp_flags[52 /* 0x7 10 */] = true;
			  case 1:
				printf("Let me share a bit of wisdom with you.\n\n\n\n######The sky is filled with floating islands\nof all shapes and sizes. Skyloft just\nhappens to be the one we call home.\n\nAnd no one knows when they were\ncreated or just how it is they stay\nairborne.\n\n######The only thing I can tell you with any\ncertainty is that we owe all of it--and\nthat includes our life here--to the\ngenerosity of the goddess.")
				goto flw_151
			  case 2:
				flw_53:
				printf("Let me give you some information you\nmight find useful somewhere down\nthe line.\n\nThe Knight Academy you and your\nfriends attend produces some\nfirst-class Loftwing riders.\n\nKeep your nose to the grindstone,\nand you might find yourself soaring\nthrough the skies and protecting the\ngood folk of Skyloft too.\nDon't know if you've met 'em or not,\nbut the rescue knights save anyone\nclumsy enough to fall off of Skyloft.\n\n######Only the Knight Academy's seniors are\ninvited to join that group. They're the\nbest of the best!\n\nYou might just have what it takes to\njoin them, but don't think it'll be easy.\nNo slacking, you hear!\n\n######Guess I should tell you my grandson's\none of 'em! Heh #####heh #####heh.")
				goto flw_151
			  case 3:
				switch (scene_flags[85 /* 0xB 20 */]) {
				  case 0:
					printf("Listen--here's a little information you\nmay find useful.\n\n\nAre you using those #####Stamina Potions\n#####they're selling over at the bazaar?\n\n\n######It's great stuff! Drink some of that,\nand your stamina gauge doesn't empty\nout so darn fast.\n\nAnd it's not just for running, either!\n\n\n\n######You can do spin attacks without getting\ntired so easily! I suggest you carry one\naround in case you tangle with\nsomething big and nasty.")
					goto flw_151
				  case 1:
					goto flw_53
				}
			}
		  case 1:
			printf("Hmph! No time for an old-timer...\nI see how it is.")
		}
	}
}

void entrypoint_122_33() {
	start()
	printf("######Hey, ####! Nice night for\na stroll outside, eh? I forgot how nice\nit feels to be out here at night with no\nmonsters to bother you.")
}

void entrypoint_122_17() {
	start()
	printf("You looking to get your grub on?\nThe food here is sooooo good!\n\n\nYou gotta be patient, though. It seems\nlike you wait forever for anything\naround here.")
}

void entrypoint_122_00() {
	start()
	printf("######Next, a dash of pepper...\n\n\n\n######Delicious! Another culinary delight\nready to be savored and enjoyed!")
}

void entrypoint_122_18() {
	start()
	printf("######Hi, ####. Are you tired?\nYou look beat.\n\n\nI know how you feel! I'm always up\nfor a quick nap.\n\n\n######You just make yourself at home.")
}

