void entrypoint_300_24() {
	start()
	switch (scene_flags[73 /* 0x8 02 */]) {
	  case 0:
		printf("I just know your friend's waiting on\nyou. That's why ya can't ever, ever\ngive up!")
	  case 1:
		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
		printf("######Hey, you! Long time no see. Thanks\nfor helping me earlier.\n\n\nSpeaking of helping, did you find that\nfriend you were looking for?\n#####Sure did!#####Not yet...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 44)])) {
		  case 0:
			printf("######You did? Heyyy, that's great news!#####\nHuh? You haven't rescued her?\n\n\n######Don't look so glum, pal. I'm sure you'll\nfigure it out and save her.\nNever give up!")
		  case 1:
			printf("######Oh, really? You think those red creeps\nmight have...gulp...you know?#####\n\n\n######What? You know she's still alive?\nThen everything's gonna be fine!\nStop with the sad face, will ya?\n\n######You give up, she's done for. That's why\nya can't ever, ever crawl into your\ntunnel defeated. Ya hear me?")
		}
	}
}

void entrypoint_300_07() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 326), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 327), ('param3', 17)])
	switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
	  case 0:
		flw_329:
		printf("######Hey! No running away! Take care of\nthese creeps, will ya?")
		flw_334:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
	  case 1:
		switch (loadzone_temp_flags[18 /* 0xB 04 */]) {
		  case 0:
			goto flw_329
		  case 1:
			printf("######Hey, you! You've really got those guys'\nattention. And it looks like they're\nspoiling for a fight.\n\n######Take one for the rest of us and chase\n'em outta here, will you?")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 4), ('next', 334), ('param3', 4)])
			goto flw_334
		}
	}
}

void entrypoint_300_08() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 57), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', -1), ('next', 338), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 155), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 339), ('param3', 39)])
	switch (scene_flags[27 /* 0x2 08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 340), ('param3', 13)])
		printf("Gyaah! Sneak attack! Hey, where'd all\nthe lava go? Now the road's open\nagain! You won't get away with this!")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 58), ('param3', 13)])
		printf("Gyaah! Sneak attack!\n\n\n\nWait... You ain't one of those red guys.\n###########Don't creep up on me like that!\nAlmost had to tackle ya there.\n\n######Didn't mean to yell at ya, but those red\njerks moved in and have been stinking\nup our turf, ya know?")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 60), ('param3', 39)])
		printf("They came up through that hole back\nthere, so I sunk the road leading to it\nin lava. That'll stop more of 'em\nfrom moving in, I'd say.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 62), ('param3', 39)])
		printf("Of course, we can tunnel underneath\nit, so it's no sweat for us.\n######Pretty clever, right?")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -1), ('next', 65), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 64), ('param3', 39)])
		printf("So stay away from the plug that's\nholding back the lava. It'll do more\nthan singe your brows off. Bye now!")
	}
}

void entrypoint_300_25() {
	start()
	printf("######Just curious, but...what do ya think\nthose red guys eat, anyway?")
}

void entrypoint_300_09() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 53), ('param3', 9), ('param4', 2), ('param5', 16)])) {
	  case 0:
		printf("Oh, hey! Sometimes these##### red, blobby\nthings #####will pop out too. Disgusting!\nBe careful not to let 'em grab you.")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2559), ('next', 350), ('param3', 13)])
		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
		  case 0:
			printf("Whoa! You scared me silly! ###########You can't\njust start digging right above my head,\nyou know?\n\n######But I get where you're coming from.\nYou never know what you're going to\nfind when you dig. That's what makes\nit so impossible to stop!\n###########Rupees #####are the most common thing\nyou'll dig up, but you might get some\n#####Eldin Ore #####as well!\n\n######Used to be plenty of hearts buried down\nhere too, but weirdly enough I haven't\nseen any recently. Go figure.\n\n######Anyhow, if you run across a hole and\nyou've got the time, dig, dig, dig!")
			flw_75:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 53), ('param2', 4), ('next', -1), ('param3', 28)])
		  case 1:
			printf("Whoa! You scared me silly! ###########You can't\njust start digging right above my head,\nyou know?\n\n######But I get where you're coming from.\nYou never know what you're going to\nfind when you dig, so it's impossible to\nstop!\n###########Rupees #####are the most common treasure\nyou'll dig up, but sometimes you might\neven score #####Eldin Ore##### or some #####hearts#####!\n\nSo if you run across a hole and you've\ngot the time, dig, dig, dig!")
			goto flw_75
		}
	}
}

void entrypoint_300_26() {
	start()
	switch (scene_flags[44 /* 0x4 10 */]) {
	  case 0:
		switch (scene_flags[74 /* 0x8 04 */]) {
		  case 0:
			switch (scene_flags[75 /* 0x8 08 */]) {
			  case 0:
				flw_236:
				printf("######You can find caves aboveground\nand belowground. I bet you can sniff\nout thin walls wherever you go!")
			  case 1:
				printf("######Huh? It was right there all along?\nNice work, greenie.")
				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
				goto flw_236
			}
		  case 1:
			switch (scene_flags[76 /* 0x8 10 */]) {
			  case 0:
				printf("Around here, you can find little\npockets or caves hidden behind thin,\ncracked walls. Who knows what\nyou might find in those places...")
			  case 1:
				printf("######You're looking pretty chipper, pal.\nYou come back to do some treasure\nhunting?\n\n######You may already know this, but #####Eldin\nVolcano #####is riddled with hidden\ncaves.\n\n######You can find 'em by checking around\nfor thin, cracked walls.\n\n\nYou can find all kinds of things in these\ncaves. It's mostly #####Rupees#####, sure, but ya\nnever know. ######If you get the itch for loot,\nyou should try some cave hunting.")
				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
			}
		}
	  case 1:
		switch (scene_flags[74 /* 0x8 04 */]) {
		  case 0:
			printf("######I got a hunch there's one around here\nsomewhere...")
		  case 1:
			printf("######You're looking pretty chipper, pal.\n\n\n\n######You come back here to do some\ntreasure hunting this time? In that\ncase, I'll let you in on a little secret.\n\n###########Eldin Volcano #####is riddled with hidden\ncaves. You can find 'em by checking\naround for thin walls with cracks.\n\nYou can find all kinds of things in these\ncaves. It's mostly #####Rupees#####, but ya never\nknow. ######I got a hunch there's one right\naround here somewhere...")
			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
		}
	}
}

void entrypoint_300_27() {
	start()
	switch (scene_flags[77 /* 0x8 20 */]) {
	  case 0:
		printf("######Long-lost ruins in the heart of a\nvolcano... Heh... Now that's a tale to\nget any #####treasure hunter#####'s heart\npumping!")
	  case 1:
		printf("######Hey, you! I hope you're taking good\ncare of my #####Bomb Bag#####.\n\n\n######By the way, you ever been to the\nheart of #####Eldin Volcano#####?\n\n\n######It's so hot down there it'll burn the\nclothes right off your back. POOF!\nYour average traveler will be dead in\nminutes.\n######But if you survive... Well, rumor has it\nthere are amazing ruins overflowing\nwith piles and mountains of treasure.\n\n######Course, it's nothing for my people\nto just tunnel right in there, ya know?\nYeah... I may have to make the effort\nsometime in the near future.")
		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
	}
}

void entrypoint_300_10() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 81), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 147), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 277), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 16), ('next', 82), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 250), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 258), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 298), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 16), ('next', 168), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3340), ('next', 24), ('param3', 13)])
	printf("Hmm... I'm sure they buried it around\nhere someplace, but I can't find it.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 25), ('param3', 16)])
	printf("Yo, #####Ledd#####! This is the place, ain't it?\nSo what is it they buried again?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 170), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -245), ('next', 26), ('param3', 13)])
	printf("A #####key#####! #####K-E-Y#####, #####KEY#####!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 259), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 149), ('param3', 6)])
	printf("They busted up the #####key to that door #####and\nhid the pieces all over the place.\n\n\nI'm telling you, one of the #####five pieces #####is\nburied right around here.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 251), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 85), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 169), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3330), ('next', 27), ('param3', 13)])
	printf("Hey, that reminds me... That##### strange\nblonde girl in the weird clothes ###########got\ntaken away too.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 86), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 28), ('param3', 16)])
	printf("######That's right! I bet they got something\nreally valuable stashed in there.\n\n\n######And that blonde girl they took is\nprobably part of their master plan too.\nI'm telling you, I can smell the riches\nfrom here!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 87), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 171), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4607), ('param2', -254), ('next', 29), ('param3', 13)])
	printf("So what're you saying we do once we\nfind all the pieces to the key?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 30), ('param3', 16)])
	printf("######Whaddya think, igneous? We sneak\ninside and take all the treasure we\ncan carry!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', -1), ('next', 89), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 172), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4371), ('param2', 4103), ('next', 31), ('param3', 13)])
	printf("Hey...##### Why are we so worried about a\nkey when we can just dig our way in?")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 254), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 90), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 173), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', 511), ('next', 174), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', 511), ('next', 32), ('param3', 13)])
	printf("What? Um...#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 33), ('param3', 39)])
	printf("Just sayin'.#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 91), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 175), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', -1), ('next', 261), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 34), ('param3', 6)])
	printf("You ain't as dumb as you look!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 345), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_300_28() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 4), ('next', 264), ('param3', 28)])
	printf("####K#######Master, this is #####Eldin Volcano#####. It is an\nactive volcano rich with the power\nof the earth.")
}

void entrypoint_300_11() {
	start()
	printf("######Master ####, I require\nyour confirmation on critical\ninformation obtained from that\n#####Mogma #####conversation.\nThe##### oddly garbed figure #####taken deeper\ninto the region must be...\n#####Zelda! #####Woman in black?")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 4)])) {
	  case 0:
		printf("######My calculations agree, Master. \nThere is a 90% probability the figure in\nquestion was indeed Zelda.")
		flw_92:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 66), ('param3', 39)])
		printf("Additionally, I calculate there is a 95%\nprobability that the key to this door is\nmade of the same material composition\nas this mechanism that bars it. ")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 94), ('param3', 39)])
		printf("I have detected objects of the same\nmaterial in the surrounding area.\n\n\nAscertaining the location of these\nobjects will aid in our search for\n#####Zelda#####. I have registered them as\n#####dowsing #####targets.######")
		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 344), ('param3', 56)])
		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
	  case 1:
		printf("The woman in black? The probability\nof your assessment being correct\nis...#####10%. #####Rounded up.\n\nI conclude the subject was likely\n#####Zelda#####.")
		goto flw_92
	}
}

void entrypoint_300_29() {
	start()
	printf("####Z#Approximately 65% of the region is\ncovered by lava. It is inhabited by a\nlarge number of creatures that thrive\nin the extreme heat and direct flame.")
}

void entrypoint_300_12() {
	start()
	switch (scene_flags[55 /* 0x7 80 */]) {
	  case 0:
		printf("You listening? You've gotta remember\nthis. There are #####no bad holes #####around a\n#####green Rupee#####.\n\nA #####blue Rupee #####will have #####one or two bad\nholes #####around it, and a##### red Rupee #####will\nhave #####three or four#####.\n\nA ####\nsilver Rupee##### will be surrounded by\n#####five or six bad holes##### and a #####gold Rupee\n#####by #####seven or eight#####. Those are the rules!\n\nThe only thing standing between you\nand being filthy rich is luck. ######Here's\nhoping you're luckier than you look.\nHeh heh.")
	  case 1:
		switch (scene_flags[54 /* 0x7 40 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2059), ('next', 53), ('param3', 13)])
			printf("What? You looking to buy what I'm\nselling?")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 309), ('param3', 12)])
			printf("######Secret information on #####Thrill Digger\n#####can be yours for only #####20 Rupees#####.\n#####Tell me!#####Nah...")
			flw_44:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 8)])) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 20), ('param3', 10), ('param4', 2), ('param5', 12)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -20), ('next', 179), ('param3', 8)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2057), ('next', 45), ('param3', 13)])
					printf("Heh, heh... That's the spirit! Now\nyou've got to promise me this stays\nbetween the two of us. You gotta keep\nyour trap shut. Got it?")
					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 306), ('param3', 12)])
					printf("######The color of the Rupee you dig up will\ntell you how many bad holes are\naround you.\n\n######Like if you dig up a##### green Rupee#####, there\nare #####no bad holes #####around it!\n\n\nA #####blue Rupee #####will have #####one or two bad\nholes#####. A##### red Rupee #####will have##### three or\nfour#####, and a ####\nsilver Rupee##### has got #####five or\nsix#####.\nIf you're lucky enough to dig up a rare\n#####gold Rupee#####, there will be #####seven or eight\nbad holes #####nearby. There are almost no\ngood holes!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', -245), ('next', 54), ('param3', 13)])
					printf("What do you think? Makes planning\nwhere to dig a bit easier, don't it?\n\n\n######But at the end of the day, it comes down\nto luck. YOUR luck. So just do the\nbest you can, and cross your fingers\nor something.")
					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
				  case 1:
					printf("C'mon, pal! You ain't got enough\nRupees.\n\n\n######Unless you bring me exactly\n#####20 Rupees#####, I'm not telling you a thing.")
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 49), ('param3', 13)])
				printf("Why you gotta be such a Rupee\npincher? Fortune's knocking at your\ndoor, pal.\n\n######All right, it's your call. You change\nyour mind, come see me. The info\nwill cost you #####20 Rupees#####.")
			}
		  case 1:
			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
			printf("Hey, you! You're gonna try your mitts\nat #####Tubert's ##########Thrill Digger #####game, right?\n\n\n######Pssst. You want some #####top-secret info#####?\nIt's guaranteed to make you rich!\n######R-####\nI-####\nC-####\nH####\n.\n\nNow since you'll be lining your pockets\nwith Rupees, it's only fair I get a little\npiece of the pie. And I want my pie\nnow, thank you.")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 307), ('param3', 12)])
			printf("######I've got a super-discount price just\nfor you, buddy. How does #####20 Rupees\n#####sound?\n#####Deal!#####No, thanks.")
			goto flw_44
		}
	}
}

void entrypoint_300_13() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 4), ('next', 205), ('param3', 4)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 5), ('next', 204), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 36)])) {
	  case 0:
		flw_207:
		printf("Master, I am detecting #####extremely high\ntemperatures##### from the area directly\nahead.\n\nYou will not survive this environment\nwith your current ######heart total.\nI recommend you turn back.")
		flw_296:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 4), ('next', -1), ('param3', 5)])
	  case 1:
		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
		  case 0:
			goto flw_207
		  case 1:
			printf("######Master, I am detecting##### extremely high\ntemperatures##### from the area ahead.\nYou will not survive this environment\nwith your ######heart total.\nAdditionally, #####dowsing #####results do not\nsupport this path. Please reconfirm\nthe correct direction to proceed.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 4), ('next', 296), ('param3', 4)])
			goto flw_296
		}
	}
}

void entrypoint_300_30() {
	start()
	printf("####Z#Please exercise caution with flammable\nmaterials such as #####wood #####and #####fabric#####.")
}

void entrypoint_300_14() {
	start()
	switch (scene_flags[22 /* 0x3 40 */]) {
	  case 0:
		printf("I'm pretty sure the getup was blackish.\nBesides that, I don't remember much.")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2065), ('next', 70), ('param3', 13)])
		printf("Huh? Another stranger? And you're\nnot one of those red creeps, either.\nI swear this neighborhood's getting\ncrummier every day...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 78), ('param3', 39)])
		printf("Huh? Oh, nothing, just talking to\nmyself. Hey, I saw this #####funny-dressed\ncharacter #####go into that hole over there.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 154), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3342), ('next', 80), ('param3', 13)])
		printf("It might be the friend you're looking\nfor? You want to know what this\nkook was wearing?")
		printf("######Let's see...##### Yeah, I'm pretty sure the\ngetup was #####blackish#####. Other than that, I\ndon't remember much.")
		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
	}
}

void entrypoint_300_31() {
	start()
	printf("####K#In the event you catch on fire, I highly\nrecommend you extinguish the flames\nby performing a##### forward roll##### or a #####spin\nattack#####.")
}

void entrypoint_300_15() {
	start()
	switch (scene_flags[36 /* 0x5 10 */]) {
	  case 0:
		printf("The one that went running through\nhere looked kinda like you.\n\n\nI don't think he was dressed in green,\nthough.")
	  case 1:
		printf("######Huh? You're looking for a friend?\nNOT treasure?\n\n\n######So that must have been your pal that\npassed by earlier, #####sprinting by #####without\nso much as a glance in this direction.######\n\nIt was sorta a blur of movement, so I\ndidn't get a real good look, but I knew\nit wasn't one of those red creeps.\n\nYour pal must have gone straight up\nhere, so why don't you follow?")
		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
	}
}

void entrypoint_300_32() {
	start()
	printf("######Master, the abilities of your sword have\nincreased. It is now possible to #####dowse\n#####for #####Rupees#####.\n\nI have registered #####Rupees #####as a viable\n#####dowsing##### target. ######Use this exciting new\nfeature as you deem necessary.")
	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 20), ('next', -1), ('param3', 56)])
}

void entrypoint_300_16() {
	start()
	switch (scene_flags[36 /* 0x5 10 */]) {
	  case 0:
		switch (scene_flags[61 /* 0x6 20 */]) {
		  case 0:
			printf("There are loads of these red, blue, and\ngreen stones called #####Rupees #####around\nhere. Sometimes you can even find\n#####silver #####and##### gold #####ones too.\nAnd while they ain't technically\ntreasure, you can also find these tough\n#####crystals#####. I bet you could #####use them to\nmake stuff#####.")
		  case 1:
			printf("Us #####Mogmas #####have claimed this territory\nto search around for riches. We're\nwhat you'd call #####treasure hunters#####.\n\nThere are loads of these red, blue, and\ngreen stones called #####Rupees #####around\nhere. Sometimes you can even find\n#####silver #####and##### gold #####ones too.\nAnd while they ain't technically\ntreasure, you can also find these tough\n#####mineral chunks#####. I bet you could #####use 'em\nto make stuff#####.\nSince you're here and all, you might as\nwell look around, right?")
			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
		}
	  case 1:
		printf("######Huh? You're looking for a friend?\nNOT treasure?\n\n\n######So that must have been your pal that\npassed by earlier, #####sprinting by #####without\nso much as a glance in this direction.######\n\nIt was sorta a blur of movement, so I\ndidn't get a real good look, but I knew\nit wasn't one of those red creeps.\n\nYour pal must have gone straight up\nhere, so why don't you follow?")
		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
	}
}

void entrypoint_300_33() {
	start()
	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
	  case 0:
		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
		  case 0:
			printf("Wonder where the next treasure might\nbe... Gotta remember not to forget\nabout the whole digging thing.")
		  case 1:
			printf("Hey, you! Did ya make it to the ruins?\n\n\n\n######I decided it wasn't worth the trouble.\nBoy, was my partner steamed!\n\n\n######He kept shouting, #All you had to do\nwas dig your way in! How hard could it\nbe?\" #####He's right too. Digging would\nhave made it easy. Heh heh...")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 4), ('next', -1), ('param3', 4)])
		}
	  case 1:
		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
		  case 0:
			printf("Wonder where my search for riches\nwill lead me next... A #####treasure hunter's\njourney never ends#####. Heh heh...")
		  case 1:
			printf("######Hey, you. Hope you're taking good care\nof my #####Bomb Bag#####.\n\n\n######I was nice enough to give it to you, so\nbe sure you put it to good use.\nOh, and don't burn a hole in it!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 4), ('next', -1), ('param3', 4)])
		}
	}
}

void entrypoint_300_17() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3589), ('next', 123), ('param3', 13)])
	printf("Whoa! Now there's a green one!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 181), ('param3', 13)])
	printf("One of your people just came charging\nthrough here. #####Dressed all in black#####!\nThat a friend of yours?######")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 152), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 126), ('param3', 13)])
	printf("See that up ahead? That's what we call\na drop-dead dead end, but this\ncharacter danced right over it.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 128), ('param3', 39)])
	printf("Seriously? Jumping over a gap like\nthat? #####My jaw hit the dirt.")
}

void entrypoint_300_18() {
	start()
	printf("The mountains ahead are crawling with\nthose red troublemakers, but...\n\n\nI got a feeling that shady so-and-so is\ngonna zip right on by 'em.\n\n\nCan you imagine treasure hunting with\nsomeone who could do that? ######You got\nyourself some good friends, don'tcha?")
}

void entrypoint_300_01() {
	start()
	printf("######Master, I require your confirmation.\nYou are currently attempting to\nascertain the location of #####Zelda#####.\n\nAre you familiar with how to use\n#####dowsing #####to search for Zelda?\n#####Of course! #####I forgot...")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 58)])) {
	  case 0:
		printf("######Of course you do. My apologies. Please\ncontinue your search for Zelda.")
		flw_311:
		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
	  case 1:
		printf("######Understood, Master. To begin #####dowsing#####,\npress and hold #####.#####\n\n\nUse the Wii Remote to select a dowsing\ntarget. You will be able to sense the\ntarget through the tip of your sword.\n\nThe closer you get to the target, the\n#####stronger the sword's reaction will\nbecome#####. You will be alerted with a\nvibration and audible cue.\nYou may also use the #####cursor #####to gauge\nan accurate direction of the target's\nlocation.\n\nPlease select Zelda as your dowsing\ntarget and commence your search.")
		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
		goto flw_311
	}
}

void entrypoint_300_19() {
	start()
	printf("Zelda is ahead... #####Hurry.")
	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
}

void entrypoint_300_02() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 156), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 108), ('param3', 13)])
	printf("Grrr... Those creeps just shimmied on\nin and took over our territory.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 106), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 115), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 157), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3590), ('next', 3), ('param3', 13)])
	printf("Yeow! What're you doing? Don't be\nsneakin' up on me like that!\n\n\nHuh? You're looking for your friend?######\nCan't help you there. ######Nobody's come\nthrough here, so...##\n###\n\nMaybe they went up the mountain\nfrom over thataway.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 158), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 55), ('param3', 13)])
	printf("Ahh... #####Wish someone would chase these\nclowns outta here.")
	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
}

void entrypoint_300_03() {
	start()
	switch (loadzone_temp_flags[19 /* 0xB 08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 314), ('param3', 39)])
		flw_314:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 346), ('param3', 40)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 256), ('next', 313), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 320), ('param3', 14)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 263), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 150), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2056), ('next', 5), ('param3', 13)])
		printf("You're one tough customer! Thanks for\nall your help!\n\n\n######I don't blame you for not knowing\nthis, but us #####Mogmas #####always honor our\ndebts. Let me give you something to\nprove it. Any special requests?\n#####A way forward.#####Rupees!")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 26)])) {
		  case 0:
			printf("Oh, right. You're trying to find your\nfriend, aren'tcha?\n\n\n######In that case, take these things!\nThey're something pretty special, if I\nsay so myself.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 6), ('param3', 42)])
			give_item(56 0x38);
			printf("With these, you should be able to get to\nthe top of that ledge right behind me.##\n###\nJust try digging in that hole below the\nledge. You're in for a surprise!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 137), ('param3', 39)])
			flw_137:
			printf("I just hope your friend hasn't been\ncaptured by those red guys. Here's\nhoping everything's OK.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3599), ('next', 134), ('param3', 13)])
			printf("Huh? Rupees? Is that really what\nyou're after?\n\n\n###########I mean, it's his reward and all, but...really?\nJust Rupees? Seems like a waste of a reward\nopportunity to me. And I don't even have any.\n#####Oh wait, I know. I got something good instead.\n######So, hey...uh...#####I don't exactly have any\nRupees on me...\n\n\n######But I got something better! Didn't you\nsay you were looking for a friend?\nWell, I got something that can help you\nreach this friend... Take these instead!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 135), ('param3', 42)])
			give_item(56 0x38);
			printf("With these, you should be able to get to\nthe top of that ledge right behind me.##\n###\nJust try digging in that hole below the\nledge. You're in for a surprise!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 160), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2048), ('next', 139), ('param3', 13)])
			printf("#####It's not like I'm using these things, you know?\nAnd they're WAY better than Rupees!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 137), ('param3', 13)])
			goto flw_137
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 314), ('param3', 39)])
		goto flw_314
	}
}

void entrypoint_300_20() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 322), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 352), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 143), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 272), ('next', 142), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 183), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 1799), ('next', 141), ('param3', 13)])
	printf("Whoa... #####You took out every last one\nof 'em...#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
}

void entrypoint_300_04() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 323), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 14), ('param3', 17)])
	switch (scene_flags[4 /* 0x1 10 */]) {
	  case 0:
		printf("Hey, I'm hoping you find your friend\nall in one piece!")
	  case 1:
		switch (loadzone_temp_flags[17 /* 0xB 02 */]) {
		  case 0:
			switch (loadzone_temp_flags[18 /* 0xB 04 */]) {
			  case 0:
				printf("When that creep in the #####blue hat #####blows\nhis horn, it starts a bad-guy stampede.\nWhat're you gonna do about it?")
			  case 1:
				switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
				  case 0:
					printf("######You got those creeps all worked up, so\nnow you've got to take care of 'em!\n\n\n######But they keep using that #####horn to call\nin reinforcements#####. They just keep\ncoming and coming!\n\nI bet the horn blower in the##### blue hat###########\nis the leader.")
					flw_114:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 4), ('next', -1), ('param3', 4)])
				  case 1:
					printf("######What's that? You really sent those\ncreeps packing?\n\n\n######Well, seems like they're extra mad at\nyou, so... Guess it's only natural that\nyou had to handle things.\n\n######But did you notice when you start\nwhittling 'em down, they call in\nreinforcements with that #####horn#####?\nThat ain't a fair fight, if you ask me.\nI bet the horn blower in the #####blue cap###########\nis the leader.")
					goto flw_114
				}
			}
		  case 1:
			printf("Now there's an idea! Why don'tcha\nmake yourself useful and get rid of\n'em? ######Yeah, like that's gonna happen...")
		}
	}
}

void entrypoint_300_21() {
	start()
	switch (scene_flags[65 /* 0x9 02 */]) {
	  case 0:
		switch (scene_flags[97 /* 0xD 02 */]) {
		  case 0:
			printf("I'm stating the obvious here, but you\ncan #####pick up and put down ##########bomb flowers\n#####with #####, the same way you do with jars.\n\nWhen you're holding something,\n#####point up and swing #####the Wii Remote\ndown to throw it.\n\nTo roll it, #####point down and swing #####the\nWii Remote up.\n\n\nGo on and practice a bit with those\n#####bomb flowers #####over there.")
		  case 1:
			printf("######You, uh...know you don't have\na #####Bomb Bag#####, don'tcha?\n\n\n######Without a #####Bomb Bag#####, you can't safely\ncarry #####bomb flowers #####with you when\nyou're out and about. You won't find a\n#####Mogma #####without one.\n######What?##### Why are you staring at me\nlike that?\n\n\n######No! No way, no how. You are not\ngetting my bag. You'll have to be\nsatisfied with blowing up stuff\nright around here.")
			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
		}
	  case 1:
		printf("######Huh? Who're you supposed to be?\nNever seen you around here before...\n\n\nWhoa, hold it right there! ######Are you a\nfriend of those red creeps?\n#####No way! #####Red creeps?")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 28)])) {
		  case 0:
			printf("######You're not, huh? #####Well, you don't look\nlike 'em, that's for sure. You're not\nTHAT ugly.\n\n######So what then? You here to pick\n#####bomb flowers##### ?\n#####Bomb what?#####Yep.")
			flw_189:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 30)])) {
			  case 0:
				printf("###########Bomb flowers#####. You're joking, right?\n##\n###Those are them growing right over\nthere.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', 198), ('param3', 39)])
				printf("You pick one with #####, and the fuse\nlights. A few seconds later...BOOM!\nYou don't wanna stop and sniff this\nflower. Dangerous plants, believe me.\n######But once you learn to use them, they're\na powerful weapon. Us #####Mogmas #####are\ncrazy about 'em!\n\n######You can #####toss##### and #####roll #####them the same\nway you do jars. See what you can do\nwith those #####bomb flowers #####over there.\n\n#####Um...################ Huh? You do know #####how to roll\nand throw #####stuff, right?\n#####Uh-huh.#####Not really...")
				flw_283:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 60)])) {
				  case 0:
					printf("######Of course you do! You use the\nWii Remote. #####Point it up and swing it\nforward #####to #####throw #####things. #####Point it down\nand swing it forward #####to##### roll #####'em.\nI mean, hey, everyone knows that!")
					flw_192:
					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
				  case 1:
					printf("######Don't know any of this stuff, huh?#####\nNo worries, pal. I gotcha covered with\nall the info you need.\n\n######When you've got a #####bomb flower#####, point\nthe Wii Remote##### up#####!\n\n\nThe trajectory of the bomb will show\nup for ya, so all ya do is line it up with\nyour target and##### swing it down #####to\nchuck it!\nA trajectory guide will also show up if\nyou point the Wii Remote #####down#####.\n#####Swing it up #####to roll the bomb along that\nguideline!\n######To reach places up #####high#####, it's best to\nthrow bombs, but to #####cover distances #####or\n#####pass through narrow spaces#####, rolling is\ndefinitely the way to go.")
					goto flw_192
				}
			  case 1:
				printf("######That's what I figured. You can pick\nsome pretty powerful ones in this area.\n\n\n########\n###Look! There are some right over there!\nTake as many as you want.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', 199), ('param3', 39)])
				printf("I'm sure you already know this, but\nonce you pick a flower with #####, the\nfuse starts burning. Then it'll blow up\nin just a couple of seconds.\nYou can also##### toss##### or #####roll #####them, just\nlike you can with some other stuff.\nYou should practice.\n\n#####Um...################huh? You do know #####how to roll\n#####stuff, right?\n#####Yep.#####Not really...")
				goto flw_283
			}
		  case 1:
			printf("######Yeah, monsters carrying big blades?\nThey're crawling all over the place.\nCan't believe you haven't run into any\nof 'em.\n######But if you don't know 'em, I guess\nyou're not pals.\n\n\nSo what is it then? You here to pick\n#####bomb flowers#####?\n#####Bomb what?#####Yep.")
			goto flw_189
		}
	}
}

void entrypoint_300_05() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 210), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 3075), ('next', 11), ('param3', 13)])
	printf("Hey! Hey! HEY! Y-you mess with our\nturf and you're gonna...pay?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 302), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2062), ('next', 117), ('param3', 13)])
	printf("Whoa! You're not...##### Yo, #####Ledd#####, I don't\nthink this is one of those red creeps.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 33)])
	printf("######Y-y-yeah, I think you're right...\nNo reason to scare the hair off us,\nthough!\n\n######Sorry 'bout that, pal. These monsters\nshowing up and messing with our\nturf has got me on edge.\n\n######They show up here, and I'm gonna\nknock the red clean out of 'em!\nThat's what I'm doing here.\nYeah, me, #####Ledd#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 164), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 4629), ('next', 119), ('param3', 13)])
	printf("#####Yeah, whatever, Mr. Too Scared to Dig in\nthe Dark.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', -1), ('next', 214), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 163), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 120), ('param3', 13)])
	printf("Anyway, if you're looking for treasure,\nyou should stay clear of those red guys.")
	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
}

void entrypoint_300_22() {
	start()
	printf("######Master, I am detecting##### extremely high\ntemperatures #####from the area directly\nahead.\n\nI calculate a 95% chance your clothing\nwill immediately combust upon\nentrance. Please proceed with caution. \n\nYou may be able to pass through safely\nif you##### run#####. I recommend confirming\nyour direction by #####dowsing #####before\nmaking the attempt.")
	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
}

void entrypoint_300_06() {
	start()
	printf("######You, the goddess's chosen hero...")
}

void entrypoint_300_23() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 33), ('param3', 9), ('param4', 2), ('param5', 40)])) {
	  case 0:
		switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
		  case 0:
			printf("Do me a favor, will ya? Try not to go\ncrazy and##### roll around #####all over the\nplace. Dust bunnies, ya know?")
		  case 1:
			printf("Back again, huh? Don't mind me or\nanything--it's just MY HOUSE!\n\n\n######What? What do you mean I didn't have\nto tunnel all the way up here?\n\n\n######Look, I know it's a run-down, dirty\nhovel, but it's MINE! And I want to\nknow who's dropping by my dirty hovel.\n\n######Oh, and just 'cause you're all rested\ndoesn't mean you can #####roll around\n#####and bust the place up!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 4), ('next', -1), ('param3', 4)])
		}
	  case 1:
		printf("Hey! Welcome to my place! Make\nyourself at home.\n\n\n######What? Of course this is my house!\n\n\n\n######OK, OK, those red creeps built it,\nbut...##### They split, right? So what's\nthe harm?\n\n######Us #####Mogmas #####live in the ground, so we\ndon't have what you would call\n#houses.\" ######I just wanted to see what it\nfelt like to say #Welcome to my place!\"")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 33), ('param2', 4), ('next', -1), ('param3', 28)])
	}
}

