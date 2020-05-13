void entrypoint_303_27() {
	start()
	printf("Did you see that, Mistress Fi?")
}

void entrypoint_303_44() {
	start()
	printf("Whoa! Sure is hot here, brrzrrt.\nNo sweat, though, because I'm a\ncutting-edge, zzort, robot!")
}

void entrypoint_303_10() {
	start()
	printf("#####rBzzzrpt! Where are you going now?\nI'll wait here if you've got an errand\nto run, zzzt, but get going!")
}

void entrypoint_303_28() {
	start()
	printf("If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
}

void entrypoint_303_45() {
	start()
	printf("Hey! This isn't the right way, zrrt!\nDo you need to stop and ask for\ndirections?")
}

void entrypoint_303_11() {
	start()
	printf("#####rZzzbt! I'm in trouble over here!\nHurry up and help me, bzzzzat!")
}

void entrypoint_303_29() {
	start()
	printf("The flames blocking your path have\nbeen fully extinguished. I recommend\nproceeding ahead.")
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
}

void entrypoint_303_46() {
	start()
	printf("Are we almost there? Let's get a move\non, brzzt!")
}

void entrypoint_303_12() {
	start()
	printf("#####rHEY! Brzzpt! I need help...NOW!")
}

void entrypoint_303_47() {
	start()
	printf("Welcome back, ######Master.\n\n\n\nI conjecture your newly acquired\n#####Fireshield Earrings #####will allow you to\nsafely travel in extremely hot areas.\n\nI recommend continuing your search\nfor the##### sacred flame#####.")
}

void entrypoint_303_13() {
	start()
	printf("####<######ZZRRRPT!")
}

void entrypoint_303_30() {
	start()
	printf("####K#######I have a status update for you, Master.\nWe are now near the crater at the peak\nof #####Eldin Volcano#####.")
}

void entrypoint_303_48() {
	start()
	switch (scene_flags[108 /* 0xC 10 */]) {
	  case 0:
		switch (scene_flags[112 /* 0xF 01 */]) {
		  case 0:
			switch (scene_flags[113 /* 0xF 02 */]) {
			  case 0:
				switch (scene_flags[114 /* 0xF 04 */]) {
				  case 0:
					printf("######Hey, pal. You bust up those #####mugs with\nthe big shields #####yet?\n\n\n######Here's all you got to remember:\ncut wooden shields, repel spear \nattacks, and clamber up shields like\nthey were walls.\nIf you keep all that in your head, you'll\ndo just fine. I promise!")
					loadzone_temp_flags[7 /* 0x9 80 */] = true;
				  case 1:
					printf("Hey, pal. You still haven't figured out\nthose #####mugs with the big shields#####, right?\n\n\n######I've got one #####last bit of secret info #####that\nwill make your life a whole lot easier.")
					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 256), ('param3', 12)])
					printf("You know the drill by now, right?\n######It's gonna cost you some R-####\nU-####\nP-####\nE-####\nE-####\nS.####\n\nAnd the price for this is #####50 Rupees#####.\n#####OK!#####No, thanks.")
					flw_245:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 82)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 50), ('next', 248), ('param3', 23)])
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 84)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -50), ('next', 250), ('param3', 8)])
							printf("######Yes! There's not a stingy bone in your\nbody, is there? Truth be told, it makes\nme a bit worried about ya.\n\n######Keep your wits about ya, pal.\nThere are hustlers out there who'll\nfleece ya for every Rupee you've got. ")
							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
							printf("######All right, here goes my last secret.\nThose creeps' shields are huge, right?\nLike a wall?\n\n######Well then, treat 'em like a wall and\njab, jab, jab!\n\n\n######I'm not going to tell ya what happens,\nbut I highly recommend ya try it.\nI think you'll like the results!\n\n######Go get 'em, pal! And thanks again for\nthe business.")
							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
							loadzone_temp_flags[7 /* 0x9 80 */] = true;
						  case 1:
							printf("######What are you trying to pull, pal? You\ndon't have enough Rupees!\n\n\n######Come back when you've managed to\nscrape together #####50 Rupees#####, all right?")
							loadzone_temp_flags[7 /* 0x9 80 */] = true;
						}
					  case 1:
						printf("######What are you getting all stingy for?\nIt's a lousy #####50 Rupees#####.\n\n\n######Pfft. Whatever. Come see me if you\nchange your mind.")
						loadzone_temp_flags[7 /* 0x9 80 */] = true;
					}
				}
			  case 1:
				printf("Hey, pal. You still having problems\nwith them #####mugs with the big shields#####?\n\n\n######I got some##### more secret information\n#####that will make your life a whole lot\neasier.")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 255), ('param3', 12)])
				printf("But there's no free lunch, ya hear me?\n######It's gonna cost you some R-####\nU-####\nP-####\nE-####\nE-####\nS.####\n\nYep, #####30 Rupees #####to be exact.\n#####OK!#####No, thanks.")
				flw_234:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 76)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 237), ('param3', 23)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 78)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -30), ('next', 239), ('param3', 8)])
						printf("######I knew there was a reason I liked ya!\nAll right, here goes...\n\n\n######Those thugs are always trying to skewer\nya with those monster spears, right?\nTake one of those in the gut, and it's\nlights out.\nIf ya time it right, you can##### repel #####their\nattacks and...###########well, you know what\nhappens after that.#####\n#####Good info!#####I knew that.")
						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 80)])) {
						  case 0:
							printf("######You bet it is! I put my life on the line\nto get it too.\n\n\n######And I got more where that came from.\nThis next one's the hidden cherry\non top of the secret sundae. It's only\n##########50 Rupees#####.#####Gimme!#####No, thanks.")
							goto flw_245
						  case 1:
							printf("######You did? Nice work, pal. You're an\nobservant...uhm...whatever you are.\n\n\n######Good thing I saved the best for last!\nThis one's a real showstopper, but it\nain't cheap. It'll cost ya #####50 Rupees#####!\n#####I'm in!#####No, thanks.")
							goto flw_245
						}
					  case 1:
						printf("######What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n######Find yourself #####30 Rupees#####, then come\nand see me.")
						loadzone_temp_flags[7 /* 0x9 80 */] = true;
					}
				  case 1:
					printf("######What're you being so stingy for?\nIt's only #####30 Rupees#####. \n\n\n######All right, whatever. Come see me if you\nchange your mind.")
					loadzone_temp_flags[7 /* 0x9 80 */] = true;
				}
			}
		  case 1:
			printf("Hey, pal. You still having problems\nwith them #####mugs with the big shields#####?\n\n\n######I got some##### secret information##### here that\nwill make your life a whole lot easier.")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 253), ('param3', 12)])
			printf("But nothing in life is free, ya know?\n######It's gonna cost ya some R-####\nU-####\nP-####\nE-####\nE-####\nS.####\n\nYep, #####30 Rupees #####to be exact.\n#####OK!#####No, thanks.")
			flw_225:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 70)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 228), ('param3', 23)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 72)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -30), ('next', 230), ('param3', 8)])
					printf("######Thank you very much, pal! Listen up!\nThis is for your ears only. Don't go\nsquawking about it with every mug\nyou meet.\n######Here's the deal... #####The shields those\nlugs are carrying around? You can cut\nthem with your sword! What did I tell\nyou? Is that not top-notch info?\nWatch out for the creeps with the tough\niron shields, though--you can't cut\nthem. \n#####Got it, thanks! #####What? Is that it?")
					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 74)])) {
					  case 0:
						printf("######Heh heh... And I've got plenty more\ninfo where that came from. You\nknow you want to hear it.\n\n######You willing to cough up...#####another\n#####30 Rupees#####?\n#####You bet! #####No way.")
						goto flw_234
					  case 1:
						printf("Yo! What's up with you giving me that\nface? You know, the #I've heard it all\nbefore\" face.\n\n######That last tidbit was just the tip of the\niceberg, pal. Not that I ever seen one...\nI got something really juicy here for\nyou. Got another #####30 Rupees##### on you?#####Yep!#####Nope.")
						goto flw_234
					}
				  case 1:
					printf("######What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n######Find yourself #####30 Rupees#####, then come\nand see me.")
					loadzone_temp_flags[7 /* 0x9 80 */] = true;
				}
			  case 1:
				printf("######What're you being so stingy for?\nIt's only #####30 Rupees#####. \n\n\n######All right, whatever. Come see me if you\nchange your mind.")
				loadzone_temp_flags[7 /* 0x9 80 */] = true;
			}
		}
	  case 1:
		printf("######Yo, pal. This your idea of a break\nroom? Battling all them monsters\ngot ya a little run down, huh?\n\n######If those creeps with the #####big shields#####\nare as tough as they are ugly, they\nmust be a real pain in the neck.\n\n######See, I got some##### secret information##### that\nI'm sure will make your life easier.")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 257), ('param3', 12)])
		printf("######Of course, nothing comes for free in\nthis day and age. You're gonna have\nto part with some R-####\nU-####\nP-####\nE-####\nE-####\nS.\nThat spells Rupees, by the way.\nIt's all yours for #####30 Rupees#####.\nWhaddya say?\n#####Tell me! #####Nah.")
		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
		goto flw_225
	}
}

void entrypoint_303_14() {
	start()
	printf("####Z#MAL-MAL-MALfunction! Zzrrt!\nToo...zzrrggt...damage...bzzzz...")
}

void entrypoint_303_31() {
	start()
	printf("####Z#I am detecting extremely high\ntemperatures in this area. However,\nyour##### Fireshield Earrings #####will allow for\nextended periods of exploration.")
}

void entrypoint_303_49() {
	start()
	printf("######Master ####, I detect\nno##### water #####in the immediate vicinity.\n\n\nOf course, you will need a large basin\nto proceed past the impediment, but\nyou will also need #####water#####. ######I recommend\nyou start with that task.")
	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
}

void entrypoint_303_15() {
	start()
	printf("#####dHEY! I can't use that, zzrrpt! You're\ngoing to have to walk!")
}

void entrypoint_303_32() {
	start()
	printf("####Z#I calculate the probability of finding\nthe final##### sacred flame #####here at 90%.\nI recommend searching for flames.")
}

void entrypoint_303_16() {
	start()
	printf("#####rBrrzt! Wait for me!")
}

void entrypoint_303_33() {
	start()
	printf("I am detecting malfunctions within the\nrobot. I recommend repairing it and\ntrying again.")
}

void entrypoint_303_50() {
	start()
	printf("######A report, Master ####.\nThe transport robot is waiting for you\nat the base of the volcano.\n\nI recommend going up into the sky\nagain and returning to the base of\nthe volcano to guide the robot to\nthis location.")
	temp_flags[29 /* 0x2 20 */] = true;
}

void entrypoint_303_17() {
	start()
	printf("#####rI can't see you, brrrzt! Open your #####map\n#####with ##### and see where I am. Then\ncome get me, brzzzpt!")
}

void entrypoint_303_34() {
	start()
	printf("Do better this time, zzbrrrt!")
	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
}

void entrypoint_303_00() {
	start()
	printf("Get moving, Master Shortpants!\nI'll be following right behind you, zrrt!")
}

void entrypoint_303_18() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 63)])) {
	  case 0:
		printf("#####rMonsters! Zrrrbt, are you going to\nhandle those or what?!")
	  case 1:
		printf("#####rBzzzrt! Help! DANGER!")
	  case 2:
		printf("#####rMonsters, zzzbrt! I can't stand\nmonsters!")
	}
}

void entrypoint_303_35() {
	start()
	printf("If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
}

void entrypoint_303_01() {
	start()
	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
	  case 0:
		printf("I have got a hunch there are still \n#####Goddess Cubes #####on this mountain. \nYou should see if you can find them.")
	  case 1:
		printf("######Oh, hey! We meet again. How have you\nbeen, bud?\n\n\nI rumbled over here 'cause I heard\nsomeone had spotted #####Goddess Cubes\n#####in the area.\n\nYou may have already found some,\nbut I got a feeling there are some\nothers hidden away around here.\n\n######You might think about searching for\nthem yourself when you get the time.")
		loadzone_temp_flags[0 /* 0x9 01 */] = true;
	}
}

void entrypoint_303_19() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 22)])) {
	  case 0:
		printf("#####rHEY! Just how long, zzrrt, do I have to\nwait for you? Press ##### and use your\n#####map #####to find me, brzzzt!")
	  case 1:
		printf("#####rWhy are you so, zzzrrrt, SLOW?\nPress ##### to open your #####map #####and\nconfirm my location!")
	  case 2:
		printf("#####rBrrzpt! What are you doing? Get over\nhere already! If you don't know where\nI am, press ##### to open your #####map#####, zzzrt!")
	}
}

void entrypoint_303_36() {
	start()
	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 216), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 49), ('next', 217), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 49), ('next', 214), ('param3', 33)])
		printf("")
		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 209), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 49), ('next', 210), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 49), ('next', 110), ('param3', 33)])
		printf("#####dWhat's going on, brzzt? I almost blew\na rotor trying to slow myself during\nthat descent, zrbt... Anyway, this is\nwhere you wanted the water, right?\n####\nWHAT?! THE SUMMIT? #####Why didn't\nyou say so from the start, bzzrt?\nI don't want to carry this thing back\nto the sky. IT'S HEAVY, BRZZZT!\nBzzzrt...zrrbt...tzzptrr.#####")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 111), ('param3', 39)])
		printf("#####dThis place is, zrrrt, swarming with\nmonsters. Vrrrrrm...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 112), ('param3', 39)])
		printf("#####dI bust up enemies like a junkyard\nwrecker, zzizat! Too bad I've got\nmy mitts full with this basin, bzzz...")
		printf("#####dHey, Master Shortpants! Since we\ncame all this way, let's play a little\ngame called #protect the robot,\" bzzrt!\n\nHere's how it works--I'll follow you up\nthe volcano, zzzrt, and you make sure\nnothing touches me. Got it? Good!")
		printf("#####dYour job is simple, zzrrt! You make\nsure none of these monsters lays a\nclaw on me. NOT...ONE...CLAW!")
		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
	}
}

void entrypoint_303_02() {
	start()
	printf("######Master, I have information for you.\nWith the enhanced capabilities of your\nsword, you are now able to use your\n#####dowsing #####ability to find #####Goddess Cubes#####. \nI have taken the liberty of registering\n#####Goddess Cubes #####as #####dowsing #####targets.\n######Please use this ability as you deem\nnecessary.")
	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 21), ('next', -1), ('param3', 56)])
}

void entrypoint_303_37() {
	start()
	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
	  case 0:
		printf("Too bad you came all this way only to\nget stopped dead in your tracks.\nIt's just not your lucky day, bud.\n\n######Uh...#####I get the feeling I'm forgetting\nsomething important...\n\n\nI think it's something my buddy told\nme once, but... ###########Nope, can't remember.\n\n\n######Oh well, back to the water. If you need\nlots of the wet stuff, you should head\nover to #####Lake Floria#####. I think you'll find\nwhat you need.")
		flw_141:
		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
		  case 0:
		  case 1:
			loadzone_temp_flags[0 /* 0x9 01 */] = true;
		}
	  case 1:
		printf("######Well, look who we have here! You still\nlooking for your friend?\n\n\n######Of course, I'm on the hunt for \ntreasure. Heard there were some fancy\nruins out this way...so here I am!\n\n######Believe it or not, I haven't found a\nthing. Got any information for me?\n#####Want to know?#####I'm not telling!")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 25)])) {
		  case 0:
			printf("######You know something? Spill it!\nWe're friends, right?")
			flw_122:
			printf("######What? There's some fire blocking your\npath? Why don'tcha just pour some\nwater on it and move on?\n\n######Ya need how much water? Whoa...\nI get it. #####So the water we got here's not\nenough, right?\n\n######You know, I hear the little water we\ngot here is fed by some far-off water\nsource called #####Lake Floria###########.\n\n######So a buddy of mine went huntin' for\ntreasure in #####Faron Woods#####, and he told\nme he used the waterways there to find\nhis way back home.\n######He tells me Lake Floria was just about\nthe biggest lake you could imagine. Bet\nif you checked it out, there'd be enough\nwater there to solve your dilemma.")
			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
			goto flw_141
		  case 1:
			printf("######Don't get all tight lipped on me now!\nWe're friends, right? Out with it!")
			goto flw_122
		}
	}
}

void entrypoint_303_03() {
	start()
	printf("Quench my thirst to\nclear your path.")
}

void entrypoint_303_20() {
	start()
	printf("#####rIt's about time, bzrrt! Don't leave me\nhanging like that.")
}

void entrypoint_303_38() {
	start()
	switch (scene_flags[114 /* 0xF 04 */]) {
	  case 0:
		printf("######Master ####, I have a\nstatus report for you. ######The flames that\nimpede your progress have not yet been\nextinguished. \nShall I register the #####Water Dragon#####'s\nvessel as a #####dowsing #####target?\n#####Yes!#####Not yet.")
		flw_139:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 31)])) {
		  case 0:
			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
			printf("######Master, I have completed registering\nthe #####Water Dragon#####'s vessel as a #####dowsing\n#####target.######")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 134), ('param3', 56)])
			flw_134:
			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
			loadzone_temp_flags[0 /* 0x9 01 */] = false;
		  case 1:
			printf("######Understood, Master. I will not proceed\nwith registration.")
			goto flw_134
		}
	  case 1:
		printf("A report, ######Master ####.\nI recommend following the #####Mogma#####'s\nadvice and returning to #####Lake Floria#####.\n\nI also have some advice pertinent to\nthe situation. It concerns a method\nfor transporting water from the lake...#####\nI suggest you visit the #####Water Dragon#####.######\nI conjecture that you can transport\na large volume of water using the #####water\nbasin##### that the previously injured\nWater Dragon recuperated in.")
		printf("Would you like me to analyze previous\ndata and register the vessel as a\n#####dowsing##### target?\n#####Yes!#####Not yet.")
		goto flw_139
	}
}

void entrypoint_303_04() {
	start()
	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
	  case 0:
		printf("######Hey! Are you here looking for\n#####Goddess Cubes##### too? Nice work getting \npast that hot spot back there, bud.\n\n######The heat back there did not bother\nme a bit, but these flames right\nhere are another matter.")
		flw_17:
		printf("######I wish there was something we could do\nto put out these flames...")
	  case 1:
		printf("######Oh, hey! We meet again. How have you\nbeen, bud?\n\n\n######I rumbled over here 'cause I heard\nsomeone had spotted some##### Goddess\nCubes #####in the area.\n\n######I have got a hunch they may be down in\nthat direction, but...this flaming\nwall of fire is blocking the way!")
		loadzone_temp_flags[0 /* 0x9 01 */] = true;
		goto flw_17
	}
}

void entrypoint_303_21() {
	start()
	printf("#####rBzzzort! What do you think you're\ndoing?")
}

void entrypoint_303_39() {
	start()
	switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
	  case 0:
		printf("######If I'm going to retire, I want to live in\na place up high with a glorious view.\n\n\n######I've lived most of my life underground,\nit's true, but I still gaze up at that sky.\nIt's so...big and blue and fluffy.\n\n######If I had my way, I'd like to come back\nin my next life as a bird and spend my\ntime soaring the wild blue yonder.")
	  case 1:
		printf("######Oh, you again! It's been a looong time,\nbut I remember that face.\n\n\n######Heh heh heh. How're those gloves I\ninvented treatin' ya? Are they up to\nyour satisfaction?\n\nHow've I been? Awful nice of ya to ask.\nLemme see...\n\n\n######I've been searchin' high and low for\nnew treasure, but I've come up empty\npawed.\n\nI gotta say, I'm tired of diggin' after\nmy fortune in this blast furnace.\n\n\n######I'm startin' to think it's time I gave\nup this life of treasure huntin' and\nsettled down to enjoy my twilight\nyears.")
		loadzone_temp_flags[1 /* 0x9 02 */] = true;
	}
}

void entrypoint_303_05() {
	start()
	switch (scene_flags[106 /* 0xC 04 */]) {
	  case 0:
		printf("######Well, I know if you head out of here\nand hang a right, you will find this\nnice, refreshing #####spring#####, but...\n\nYeah, I am not sure what you should\ndo, to be honest.")
	  case 1:
		switch (scene_flags[105 /* 0xC 02 */]) {
		  case 0:
			printf("#Quench my thirst\"? Hmm... That\nreminds me. If you head back out of\nhere and turn right, you will end up\noutside.\nI found a #####spring #####there. ######Let me tell you,\nbud, that water was dee-licious!\n\n\n######No idea how you would bring it in here,\nthough. I doubt those weird-looking\nfrog beasts would carry it for you.\n#####Got any ideas?")
			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
		  case 1:
			printf("######I wish there was something we could do\nto put out these flames...")
		}
	}
}

void entrypoint_303_22() {
	start()
	printf("#####rHEY! Keep that up, and you're going to\nbreak something, zzbrrt!")
}

void entrypoint_303_06() {
	start()
	printf("######Hey, the flames are out! Now we can\nget through here.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6911), ('next', 28), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 0), ('next', 27), ('param3', 14)])
	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_303_23() {
	start()
	printf("######Master, the robot is waiting at the\nvolcano. I suggest you return there.")
}

void entrypoint_303_40() {
	start()
	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
	  case 0:
		flw_165:
		switch (scene_flags[81 /* 0xB 02 */]) {
		  case 0:
			printf("######Elder...I'm gonna do ya proud--just\nwait and see. I hope ya watch over\nme from wherever it is you are now!")
		  case 1:
			printf("######Wh-wha-what? The elder got...\nlaunched up somewhere?\nWhere'd he go, then?\n#####Up in the sky!#####Beyond...")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 41)])) {
			  case 0:
				printf("######The sky? Up in the big, blue stuff, eh?\n\n\n\nOh... ######Well, #####he always was talkin' about\nhow much he loved the sky.\n\n\nI bet he's up there now digging around\nin the clouds for treasure.")
				flw_164:
				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
			  case 1:
				printf("######Beyond?\n\n\n\nUh...######beyond? #####Whaddya mean\n#beyond\"? Are ya telling me he's\n#gone\" gone?\n\nI mean, we all gotta go sometime, \nbut, wow...")
				goto flw_164
			}
		}
	  case 1:
		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
		  case 0:
			goto flw_165
		  case 1:
			switch (scene_flags[81 /* 0xB 02 */]) {
			  case 0:
				switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
				  case 0:
					printf("######Traveling back and forth between here\nand the sky. The elder is soooo cool!")
				  case 1:
					printf("######What do you mean, the elder's back?\n\n\n\n######Are you saying he can travel between\nhere and the sky? That is one amazing\nguy, I tell you.")
					loadzone_temp_flags[4 /* 0x9 10 */] = true;
				}
			  case 1:
				switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
				  case 0:
					switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
					  case 0:
						printf("######Twilight years, eh? Well, if that's\nwhat the elder wants, help an old\nMogma out, will ya?")
					  case 1:
						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
						  case 0:
							printf("######Hey, pal, did ya go and visit the elder?\nHow's he doin'?\n\n\n###########What? Twilight years?\n\n\n\nUh...######what are ya talkin' about?\nIs #twilight years\" some sort of\ncode name for a big treasure?\n\n######I gotta tell ya, I've never heard of such\na thing.\n\n\nBut if that's what the elder wants help\nwith, go on and help him out, will ya?")
							flw_171:
							loadzone_temp_flags[3 /* 0x9 08 */] = true;
						  case 1:
							printf("######Whoa! It's my old pal! How've you\nbeen?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! I'm great!\n\n\n######One thing's got me worried, though.\nThe tribal elder's been acting odd since\ngoing to those ruins. He's just not\nhimself.\n######You talked to him earlier, right?\nHow was he doing?\n\n\n###########What? Twilight years?\n\n\n\nUh...######what are you talking about?\nIs #twilight years\" some sort of code\nname for treasure?\n\n######I gotta tell you, I've never heard of\nsuch a thing. And I know a thing or two\nabout treasure.\n\nBut if that's what the elder wants, help\nhim out, will ya?")
							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
							goto flw_171
						}
					}
				  case 1:
					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
					  case 0:
						printf("###########Guld#####'s wanderin' around over there\nsomewhere. Go see him! Chat with him\na bit, ya know?\n\nIt might cheer him up to see a familiar\nface.")
					  case 1:
						printf("######Whoa there! It's my old pal! How ya\nbeen, old pal?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! Yep, I'd\nsay I'm great.\n\n\n######One thing's got me worried, though.\nSee, our elder, #####Guld#####, has been actin'\nkinda odd since going to those ruins.\n######Would ya go and see##### Guld#####? He's over\nthataway somewhere, and I know he'd\nbe happy to see your mug.")
						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
					}
				}
			}
		}
	}
}

void entrypoint_303_07() {
	start()
	switch (temp_flags[0 /* 0x1 01 */]) {
	  case 0:
		flw_32:
		printf("Hate to ask you this, bud, but could\nyou do the fire-extinguisher routine\nagain?")
	  case 1:
		printf("######More flames... This is starting to burn\nme up...")
		temp_flags[0 /* 0x1 01 */] = true;
		goto flw_32
	}
}

void entrypoint_303_24() {
	start()
	printf("#####dWhere have you been, zzzrbt! Get me\nto the top of the volcano! Now, brrzzt!")
}

void entrypoint_303_41() {
	start()
	switch (loadzone_temp_flags[5 /* 0x9 20 */]) {
	  case 0:
		printf("######The deal with #####Plats #####is he only shows\nsome backbone when he's off\nhunting treasure.")
	  case 1:
		printf("######Hey, it's you! That guy from before...#####\n\n\n\n######Heh heh heh... Yeah, that was\npretty embarrassing.\n\n\nWe're all good now, though, because\nmy pal found out about it.\n\n\n######Truth is he got captured once too.\nGuess that makes us even. Nothin' for\neither of us to worry about.\n\n######Yeah, anyway, you seen #####Plats##### around\nanywhere?\n#####He was over there.#####Nope.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 55)])) {
		  case 0:
			printf("######Oh, really? We're all cool, then.\n\n\n\nI just hadn't seen his ugly mug in a\nwhile and, well, you know...\n\n\n######I thought maybe he'd gone and gotten\nhimself all tied up again.\n\n\n######Let me tell ya, that guy's like a\ntrouble magnet!")
			flw_182:
			loadzone_temp_flags[5 /* 0x9 20 */] = true;
		  case 1:
			printf("######That dirt-brain... #####I bet he's off on some\nsolo treasure-hunting dig.\n\n\nHe knows he's not supposed to be out\nby himself. This place is dangerous!\n\n\n######What am I supposed to do, huh?\nI guess that's what you get when you're\n#####treasure hunters#####. Bunch of guys who\ndon't know when to quit.\nIf you happen to run into #####Plats#####, give\nhim my best, will you?")
			goto flw_182
		}
	}
}

void entrypoint_303_08() {
	start()
	printf("######Hey! Nice work, bud. Now we are \ngetting somewhere!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6911), ('next', 37), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 0), ('next', 36), ('param3', 14)])
	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_303_25() {
	start()
	printf("#####dDon't leave me! Press ##### to open your\n#####map #####to find me, zzrrt!#####")
}

void entrypoint_303_42() {
	start()
	switch (scene_flags[82 /* 0xB 04 */]) {
	  case 0:
		printf("######All right, then. Where's the next place\nto hunt for riches, eh?")
	  case 1:
		printf("###########Hey, pal! You're still alive!\n\n\n\n######And by the looks of it, ya got all your\nloot back too. I knew you had it in ya.\n\n\nSo, uh...#####did ya find any treasure?\n#####Tons!#####Not a thing...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 61)])) {
		  case 0:
			printf("######Seriously? I'm soooo jealous!\n\n\n\n######But the world's a big place, ya know?\nAnd I'm sure there's more treasure\nout there for the swiping.\n\nYeah, I'm not sitting on my tail waiting\nfor it to fall into my lap! You know\nwho's going to find all the loot next\ntime? Me! This guy! That's who!")
			flw_195:
			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
		  case 1:
			printf("######Whaaat? Ya didn't find much of\nanything? Aw, that's too bad, pal.\n\n\n######Don't get all sad and weepy on me,\nthough. The world's a big place, and\nit's filled with treasure!")
			goto flw_195
		}
	}
}

void entrypoint_303_09() {
	start()
	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
	  case 0:
		switch (scene_flags[111 /* 0xC 80 */]) {
		  case 0:
			printf("I am off to continue my research, bud.\nI am sure I will bump into you again!")
		  case 1:
			printf("######Well, how was it? What did you find?\n#####Traps!#####Monsters!")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
			  case 0:
				flw_49:
				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
				  case 0:
					printf("######Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n######I am going to head out to another\nlocation and continue my research.\nGive me a holler if you see me again.")
					flw_51:
					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
				  case 1:
					printf("######Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n######By the way, I have got a hunch there is\na #####Goddess Cube #####somewhere nearby.\n\n\nAnd my hunches are usually spot on,\nso you should take a good look around.")
					goto flw_51
				}
			  case 1:
				goto flw_49
			}
		}
	  case 1:
		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
		  case 0:
			printf("######You are something else, bud! There is\nnothing you cannot do!\n\n\n######You go ahead on in! You have earned\nthe right to blaze this trail.")
		  case 1:
			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
			  case 0:
				switch (temp_flags[15 /* 0x0 80 */]) {
				  case 0:
					printf("######Lots of##### water #####and #####something to carry it\naround in#####... Any bright ideas on where\nto find those things, bud?")
				  case 1:
					printf("######How are we supposed to give this fellow\nenough #####water#####? Whatever it is, it is\ngoing to have to be one##### big container#####...\n\n######You have been adventuring all over the\nplace, right? You got any ideas?")
					temp_flags[15 /* 0x0 80 */] = true;
				}
			  case 1:
				printf("Do you see this, bud? Talk about\nintriguing! We are definitely off the\nmap here.\n\n######This does not feel like##### Goddess Cube\n#####stuff to me! I bet there is something\n#####super important #####hidden around here!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 146), ('param3', 39)])
				printf("######All I can say is that is a big frog with\na big thirst. I do not think the amount\nof water one of your little #####bottles #####can\nhold is going to cut it this time.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 147), ('param3', 39)])
				printf("######Hmmm...########### You will have to have a##### big\ncontainer #####to hold the water needed\nfor this job. ######Got anything like that?\n\n######And speaking of which, where are you\ngoing to get all the##### water#####? I gotta\nsay, I am pretty much stumped.")
				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
			}
		}
	}
}

void entrypoint_303_26() {
	start()
	printf("You want me to pour the water on this?\nNo problem, zzzbrt!")
}

void entrypoint_303_43() {
	start()
	printf("We have arrived at Eldin Volcano.\n\n\n\nYou can use your #####dowsing##### ability to\nlocate the gate to the trial. You must\npass this trial in order to locate the\nsacred flame.")
}

