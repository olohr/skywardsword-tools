void entrypoint_304_14() {
	start()
	switch (scene_flags[107 /* 0xC 08 */]) {
	  case 0:
		printf("######Here it is, the Mogma legend of these\nruins...\n\n\n#Ye who seek the entrance to the king's\ntreasure, look for the #####two statues that\nface one another#####.\"\n\n#Show your bravery and #####jump into the\nmouth of the sleeping statue#####. Do this,\nand the path will open before you.\"\n\n######It might all just be some frilly old story\nfor baby Mogmas, but we'll never stop\nlooking. And today's no exception.")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 99), ('param3', 49)])
		printf("############Ho ho ho... Ahhh!\nThe exit at last...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 17)])
		printf("...#########\n#Whoa!\n\n\n\n###########Don't scare me like that! I thought you\nwere one of those monster creeps!\n\n\n...######Oh, hey, what's this?\n\n\n\nYou got yourself a swanky pair of\n#####Digging Mitts#####, don'tcha?\n\n\n######Who are ya, anyway? Whatcha doing\nhere?\n#####On a quest!#####Well...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 28)])) {
		  case 0:
			flw_62:
			printf("######Hmm... I getcha.\n\n\n\n######Huh? Me?\n\n\n\n######Oh yah, the name's #####Guld#####. I'm the big\nboss of the Mogmas.\n\n\nThose Digging Mitts you got right\nthere... I invented 'em!\n\n\n######Hahah!")
			printf("...######No offense, pal, but you don't look\nlike the kinda guy I'd send in here on a\ntreasure-huntin' mission...\n\n######But what do I know... Ya might just\nsurprise me.\n\n\nSo here's the deal... Word in the\ntunnels is there's a huge treasure \nhidden in these here ruins...\n\nBut nobody who's ever seen it has\ncome back to tell the tale.\n\n\nCountless treasure hunters have\ndisappeared in here! Poof! Gone.\n\n\n######As a treasure digger, I gotta warn\nyou to just turn around and enjoy the\nmany peaceful years of diggin' left to\nyou, but...\n######You're gonna do this no matter what\nI say, aren't ya?\n#####Pretty much.#####...")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 32)])) {
			  case 0:
				flw_76:
				printf("######All right, then... I'm gonna let you in\non an ancient treasure-hunting legend\npassed down among generations of\nMogmas.\n######Every Mogma worth a handful o' dirt\nknows this one...\n\n\n######Here we go...\n\n\n\n#Ye who seek the entrance to the king's\ntreasure, look for the #####two statues that\nface one another#####.\"\n\n#Show your bravery and #####jump into the\nmouth of the sleeping statue#####. Do this,\nand the path will open before you.\"\n\n######You remember all that, and you're\ngolden.\n#####Thanks.#####Say it again!")
				flw_78:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 30)])) {
				  case 0:
					printf("######Some of my guys are searchin' around\nhere for the treasure.\n\n\nIf you get lost, holler at one of 'em.")
					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
				  case 1:
					printf("######Hahah hah... You sure are set on this!\n\n\n\nReady? Here goes...\n\n\n\n#######Ye who seek the entrance to the king's\ntreasure, look for the #####two statues that\nface one another#####.\"\n\n#Show your bravery and #####jump into the\nmouth of the sleeping statue#####. Do this,\nand the path will open before you.\"\n\n######Got it this time?\n#####Yep!#####One more time.")
					goto flw_78
				}
			  case 1:
				goto flw_76
			}
		  case 1:
			goto flw_62
		}
	}
}

void entrypoint_304_15() {
	start()
	printf("Bring light to each statue in\naccordance with the number of\nwings each possesses, from least\nto most.\nWhen light resides in each\nstatue, the king's treasure shall\nbe yours.")
}

void entrypoint_304_16() {
	start()
	switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
	  case 0:
		printf("######Those mitts I gave you were one of\nthe finest pieces in my collection.")
	  case 1:
		printf("######Hey, pal! How are the mitts I gave ya?\n\n\n\nPress ##### when you're diggin' down\nunderground to get a quick peep at\nwhat's happening aboveground.#####\n\nEven when we're burrowing, we know\nwhat's happening aboveground too!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 4)])
	}
}

void entrypoint_304_17() {
	start()
	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
	  case 0:
		printf("######Maaan... Why can't I just do one thing\nright?! What a lunkhead!")
	  case 1:
		switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
		  case 0:
			printf("######...Did you already figure out where\nthe treasure was from that map?")
		  case 1:
			printf("######Seriously? Then what did I give\nyou that map for? And you call\nyourself an adventurer...\n\n######Agh... Well, I must look dumber than\na jug of Moblin drool right now...")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', -1), ('param3', 4)])
		}
	}
}

void entrypoint_304_18() {
	start()
	switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
	  case 0:
		printf("######As long as those monsters are still\nthere, you and me oughta stay clear!")
	  case 1:
		printf("######Hey, guy! Still in one piece, eh?\n\n\n\nDid ya see all the monsters around\nthat place I was talkin' about?\n\n\n######I wonder what in the ever-tunnelin'\nworld those guys are looking for...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 15), ('next', -1), ('param3', 4)])
	}
}

void entrypoint_304_01() {
	start()
	switch (scene_flags[100 /* 0xD 10 */]) {
	  case 0:
		switch (scene_flags[50 /* 0x7 04 */]) {
		  case 0:
			switch (scene_flags[108 /* 0xC 10 */]) {
			  case 0:
				printf("######Hey, pal!\n\n\n\nYou're the one who lowered the level of\nthe lava, right?\n\n\n######While you're at it, maybe you could\ndo something about this chain too!")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 51), ('next', 139), ('param3', 32)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 100), ('next', 137), ('param3', 16)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 102), ('param3', 39)])
				printf("######Hey!\n\n\n\nI was watching ya, pal! Ya really \nsocked it to those lava thingers!\nAmazing stuff!\n\n######And if ya don't mind doing one more\nthing while you're at it, how about ya\nget me down from here!")
				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 1536), ('next', 12), ('param3', 13)])
			printf("######Hot! HOT!\n\n\n\nI'm not some sideshow for ya to gawk\nat! Get lost! Shoo now!")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 51), ('next', 113), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13311), ('param2', 1536), ('next', 111), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 11), ('param3', 39)])
		printf("######That stuff looks HOT! I wouldn't mind\na little hot bath for my sore shoulders,\nbut this is too much!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 117), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 100), ('next', 116), ('param3', 16)])
		printf("######What've we got here? Another new\nguard?\n\n\nHah!\n\n\n\nYou can't break me with interrogation,\nson. You'll never make me talk!\n\n\n######I'm not some sideshow for you to gawk\nat! Get lost! Shoo now!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 13), ('param3', 42)])
		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
	}
}

void entrypoint_304_19() {
	start()
	printf("#####...Enough of this foolishness...\nI am Ghirahim, Demon Lord!")
}

void entrypoint_304_02() {
	start()
	switch (scene_flags[101 /* 0xD 20 */]) {
	  case 0:
		printf("######All yours!\n\n\n\nThey've been in a buried treasure\nchest, so they ain't dirty or anything.\n\n\nNow these ain't the kind of thing that\nyou can easily get your hands on just\nanywhere, so take good care of 'em!")
		printf("######Right, then--I'm outta here!\nSo long!")
	  case 1:
		printf("######Oh yaaah! I'm saved!\n\n\n\n######I don't know who ya are or where\nyou're from, but I owe ya big-time!\n\n\nAre ya here looking for treasure too?\n#####Yep!#####Treasure?")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 4)])) {
		  case 0:
			printf("######Ha ha! You were totally caught up in\nthat too, pal!")
			flw_17:
			printf("I can see it on your face! You're here\nbecause of the #legend of the #####sleeping\nstatue#####,\" right?!\n\nBut those are some busted, old diggin'\nmitts. Ya can't go using them for\ntreasure huntin'!\n\n######I got it! As thanks, I'm gonna give ya\na replacement pair from my secret\nstash! Don'tcha go nowhere!")
			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
		  case 1:
			printf("######Well, well! No point trying to hide it!\nThere's only one reason you could have\nfor coming so far in here!")
			goto flw_17
		}
	}
}

void entrypoint_304_20() {
	start()
	printf("It shouldn't matter how powerful your\nsword is, you are still nothing...\nNot just a human... A human child!#####\nAnd yet you prevail!")
}

void entrypoint_304_03() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 51), ('next', 158), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 100), ('next', 156), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 154), ('param3', 39)])
	printf("######Hey!\n\n\n\nI was watching ya, pal! Ya really \nsocked it to those lava thingers!\nAmazing stuff!\n\n######And if ya don't mind doing one more\nthing while you're at it, how about ya\nget me down from here!")
	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_304_21() {
	start()
	printf("You filthy scamp! You have awakened \na wrath that will burn for eons! I swear\nto you, whatever it takes, I will drag\nyou into an eternity of torment!")
	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
}

void entrypoint_304_05() {
	start()
	printf("")
}

void entrypoint_304_22() {
	start()
	printf("Hey, pal!\n\n\n\nHow are those mitts treatin' ya?\n\n\n#####\n#####If you want to get a good look \n#####aboveground#####, try pressing #####!#####\n\n\nGot it? Press ##### to see #####aboveground#####!\nDon't you go forgettin' it!#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_304_06() {
	start()
	printf("")
}

void entrypoint_304_23() {
	start()
	switch (scene_flags[97 /* 0xD 02 */]) {
	  case 0:
		printf("######Me? I'm going to explore this room a\nlittle more.\n\n\nI also need to report to the boss for\nthat guy who ran off.")
	  case 1:
		switch (scene_flags[119 /* 0xF 80 */]) {
		  case 0:
			printf("######Wow, you just took down the wall!\nYou got some starch in your socks,\npal!")
		  case 1:
			switch (scene_flags[77 /* 0x8 20 */]) {
			  case 0:
				printf("######This room has a #####fake wall##### somewhere...\n\n\n\nAnd on the other side of that wall,\nthere's another room. Or so I hear...\n\n\n######The ground underneath us is full of\nmonsters, so we don't go tunneling\ntoo much down there, but...\n\n######If you're feelin' adventurous, there\njust might be a #####hidden route#####...")
			  case 1:
				switch (scene_flags[78 /* 0x8 40 */]) {
				  case 0:
					printf("######Did you get that from one of ours?\nDon't you worry. I won't try to take it\nfrom ya.\n\n######I'm tellin' ya, the information in that\nbox... I think it'll definitely be useful.")
				  case 1:
					printf("...")
					printf("######Heyyy! We meet again!\n\n\n\nHeh heh heh... Sorry, but I kinda\nhappened to overhear that\nconversation.\n\nIt seems one of my guys was giving ya\na hard time. Sorry about that.\n\n\n######But that stuff he was sayin' was all\ntrue.\n\n\nThere's a breeze coming from\nsomewhere in this room. I tell ya,\nI can smell it.\n\n######I figure the information in that chest\nwill be useful to ya.")
					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
				}
			}
		}
	}
}

void entrypoint_304_07() {
	start()
	printf("")
	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
	changeScene(1, 0) // 
}

void entrypoint_304_24() {
	start()
	printf("The bridge of decision...\nChoose the path you believe in...\nMove forward bravely.")
}

void entrypoint_304_08() {
	start()
	printf("Fire Sanctuary")
}

void entrypoint_304_25() {
	start()
	printf("Signs indicate that there is an 80%\nchance the information held by this\nindividual will be of benefit to you.\n\nI strongly recommend that you rescue\nhim and acquire the information.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 163), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 161), ('param3', 42)])
	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
}

void entrypoint_304_09() {
	start()
	switch (scene_flags[105 /* 0xC 02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 149), ('param3', 39)])
		printf("######Hey! Hey! Come on, pal! Please help\nme! Get me offa this chain!\n\n\n######I got a hot tip just for you if you help\nme out! ")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 42)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 1536), ('next', 108), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 109), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 41), ('param3', 39)])
		printf("######Ohhh yah! You've come along at the\nright time, pal!\n\n\n######I don't know who ya are or where \nyou're from, but what I need right now\nis for ya to get me offa this chain!\n#####I'm in a hurry.#####...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
		  case 0:
			flw_43:
			printf("######I'm not asking ya to do it for nothing,\nthough! Set me free, and I'll tell ya the\n#####big, gigantic secret #####about this room!\n\nIt's a secret about treasure! OK?")
			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
		  case 1:
			goto flw_43
		}
	}
}

void entrypoint_304_10() {
	start()
	switch (scene_flags[106 /* 0xC 04 */]) {
	  case 0:
		printf("######Here! Take this!\n\n\n\nThis here's some super-secret info that\nI put together. Took some real sweat\nand work too.\n\nI had to survey this place near a\nhundred times to figure it out, but... \n\n\nYou ready for this? Now don't go\nfaintin' when I tell ya. Right around\nhere, there is...\n\n###########A #####hidden room#####!\n\n\n\n...\n\n\n\n######So in return, please don't tell anyone\nthat I was captured. It'll just be our\nlittle secret, OK?\n#####OK, it's a secret.#####...")
		switch (scene_flags[119 /* 0xF 80 */]) {
		  case 0:
			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 54)])) {
			  case 0:
				printf("######All right, then! Go ahead and open\n'er up! But don't forget our deal!")
				flw_123:
				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
			  case 1:
				printf("######You low-down, no-good'un!")
				goto flw_123
			}
		  case 1:
			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 24)])) {
			  case 0:
				printf("######All right, then! Go ahead and open\n'er up. But don't forget our deal!\n\n\nLater, then... I said bye now.")
				flw_131:
				printf("#####Oh...")
				goto flw_123
			  case 1:
				printf("######Well, ain't that the lowest of the low!\nAnd here I thought I was bein' polite...")
				goto flw_131
			}
		}
	  case 1:
		printf("######Hoooo-yah! That is the sweet, sweet\nflavor of freedom, hoss!\n\n\n######And, uhh...heh heh...thanks for\ntaking the trouble to free me...\nSucker!\n\nYou really think I would divulge super-\nsecret info about treasure? My momma\ndidn't raise no patsy! I spent too long\nfindin' that info!\n###########Huh?!\n\n\n\n######Those gloves are from my brother's\nsecret collection! Are ya friends with\nmy brother or something?\n\n#####That's right.#####I helped him!")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 20)])) {
		  case 0:
			flw_51:
			printf("######Wait, wait, wait! There's somethin'\nI want to give you!\n\n\n######I'll just go get it. Wait here!")
			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
		  case 1:
			goto flw_51
		}
	}
}

void entrypoint_304_11() {
	start()
	switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
	  case 0:
		printf("######Hey! Where are you tearin' off to right\nthis second?!\n\n\nI've got some pipin'-hot info, and all\nya need to do for it is get me offa\nthis chain!")
		flw_44:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 15), ('next', 162), ('param3', 4)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 42)])
	  case 1:
		printf("######Hey! Hang on there a second!\n\n\n\nWhat kinda right-thinkin' person does\nthat? Just ignores a fella in need?\nThat's just despicable. Terrible,\nisn't it? Isn't it?\nI've got some pipin'-hot info, and all\nya need to do for it is get me offa this\nchain!")
		goto flw_44
	}
}

void entrypoint_304_12() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 1), ('param3', 31)])
	switch (scene_flags[103 /* 0xD 80 */]) {
	  case 0:
		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
		  case 0:
			printf("######ACK! You again?!\n\n\n\n######Heh heh! Doesn't matter how many\ntimes you try to catch me, you'll always\nend up empty handed!")
		  case 1:
			printf("Aghhh! A green monster!\n\n\n\n######Ack... I can't believe they're following\nus down here now...\n\n\nGuess I can have some fun with him for\nnow, though...\n\n\n######Heh, heh, heh! You're on Mogma turf\nnow, fiend! You may be scary, but #####as\nlong as the way ahead of me is clear#####,\nyou'll never catch me!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 4)])
		}
	  case 1:
		printf("######Ahhh! So busy, so busy... Burning the\nmidnight oil again looking for loot!")
		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
	}
}

void entrypoint_304_13() {
	start()
	switch (scene_flags[104 /* 0xC 01 */]) {
	  case 0:
		printf("Here ya go!\n\n\n\n######Ya know, some monsters seemed to be\nlooking for something on those cliffs\nahead of us...\n\nYou heading that way too, guy?\nYou take care out there. Don't wanna\nsee you get skewered or nothin'.\n\n######Me? I'm headin' back to the boss's\nplace. I'll open the door for you while\nI'm at it. See ya!")
		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
	  case 1:
		printf("######Noooooooo... You got me! Go on, then,\nyou monster! Boil me, bake me...\nDo your worst!\n\n...\n\n\n\n######Huh? I know those gloves...\n\n\n\nAin't those from my brother's secret\ncollection?\n#####He gave me 'em.#####That's right.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 8)])) {
		  case 0:
			flw_34:
			printf("######What?! You know my brother?!\n\n\n\nAwww, you're all green. I thought you\nwere a monster!\n\n\n######Hey, don't get all angry! I thought you\nwere one of them. Sorry, guy!\n\n\nLemme give ya something good to make\nup for it. Hang on there a sec.")
			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
		  case 1:
			goto flw_34
		}
	}
}

