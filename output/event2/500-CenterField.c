void entrypoint_500_02() {
	start()
	printf("####C#Whoops, missed! All this muscle's not\nworth much if I don't hit my target!\n\n\n####A#I'll start loading my machine back up\nwith another bomb, so keep clobbering\nstanky toes till I give you the signal!")
}

void entrypoint_500_37() {
	start()
	switch (scene_flags[14 /* 0x0 40 */]) {
	  case 0:
		switch (scene_flags[109 /* 0xC 20 */]) {
		  case 0:
			printf("######I have to examine this statue further,\nbud. Who knows what I might find out!")
		  case 1:
			printf("######According to some of the ancient texts\nI have read, there is a place way up in\nthe sky called the #####Isle of the Goddess#####.\n\nOld statues like the one behind me\nwere placed here to provide travelers\nwith a way back up to the island.\n\nMy research seems to suggest this\nparticular statue is special in that\nit alone holds the power to #####activate#####\nall the other statues.\n######Hey, I will be the first one to admit it\nsounds like something out of a fairy\ntale, but I am starting to believe it!\n\n######I mean, if that is not true, then what\nare all these statues doing all over\nthis land?")
			flw_62:
			printf("######It is a real head-scratcher, bud. Makes\nyou want to know more, does it not?\n#####Yeah!#####Not really...")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 73)])) {
			  case 0:
				printf("######Ah, sounds like I have a fellow\nconnoisseur of ancient cultures here!\n\n\n######All right, bud, you had better brace\nyourself, because I am about to blow\nyour mind.\n\nSo get this: people actually live on this\nsky island, and they get around by\nflying on the backs of huge birds that\nare way bigger than birds down here!\n######Up there everyone reveres the goddess,\nand the residents of all the islands\nin the sky live in a perfect society,\ntotally free of conflict or unhappiness!\n######Not only that, but from what I can tell,\ntheir civilization is way, way more\nadvanced than ours down here.")
				printf("######But it does not even stop there, bud!\nThis Isle of the Goddess has even more\nstuff to marvel at!\n\n######The place was crafted by the goddess\nherself, so it figures that it is filled \nwith wonders we do not have here.\n\n######The buildings are all made of gold!\nAn endless spring of mystical water\nfeeds a river through the place. One\nsip of that stuff, and you live forever!\n######The trees are heavy with plump fruit\nthat cures all disease! The fields are \ncrowded with pumpkins that never rot!\nMagic wildflowers bloom everywhere!\n######And the weather. Oh, the weather, bud!\nNot too hot, not too cold. No chance of\nsweaty heat in this garden paradise!\nThat is the Isle of the Goddess...\n###########Amazing, right?##### WRONG!\nIT IS BEYOND AMAZING!\n\n\n####!######You want to hear more \nabout it, don't you, bud?\n#####Sure!#####Nah...")
				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 75)])) {
				  case 0:
					printf("####'#Good to hear, bud! I am completely\nobsessed with this place. I cannot get\nenough of it!\n\n######I wish I had more to tell you now,\nbut I will need to research these statues\nto learn more.\n\n######Next time I bump into you, I will give\nyou the latest info!")
					flw_433:
					switch (scene_flags[14 /* 0x0 40 */]) {
					  case 0:
					  case 1:
						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
					}
				  case 1:
					printf("######Ah, that so, bud? I was hoping to tell\nyou more, but I guess it can wait.")
					goto flw_433
				}
			  case 1:
				printf("######Ah, that so, bud? I was hoping to tell\nyou more, but I guess it can wait.")
				goto flw_433
			}
		}
	  case 1:
		switch (scene_flags[3 /* 0x1 08 */]) {
		  case 0:
			printf("######Whew! Thanks for jumping in there to\nrescue me, bud!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 340), ('param3', 47)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 49), ('param2', 0), ('next', 338), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 256), ('next', 339), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 335), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 58), ('param3', 48)])
			printf("######Just who were those red pests?\nI did not expect to run into a pack of\nthem in this peaceful forest.\n\n######Same goes for you. This is the second\ntime I've bumped into one of your kind\ntoday. I tell you, all sorts of weird\nthings are going on lately.\n######I owe you big for taking care of those\nguys, so let me tell you something\nfascinating.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 437), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 19), ('param2', 356), ('next', 65), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 256), ('next', 56), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 0), ('next', 260), ('param3', 14)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 342), ('param3', 17)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 365), ('param3', 17)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 16), ('param2', 256), ('next', 59), ('param3', 15)])
			printf("######Hey, bud! I am Gorko the Goron. I am\nresearching the ancient history of\nthese woods here.\n\n######According to the ancient texts, there is\nsome kind of place up above called the\n#####Isle of the Goddess#####. Far up in the sky!\n\n######Apparently, these old statues serve \nas landmarks to those #####traveling up to\nthe sky##### or down from this Isle of the\nGoddess place.\n#####################If you find one, be sure to examine it #####to\nkeep tabs on the number of landmarks.\nThey are rumored to be quite useful.\n\nSupposedly this statue is special, as it is\nsaid to have the ability to activate all\nthe other statues.\n\n######The whole thing sounds a little\ncrazy, I know, but I for one believe\nit to be true!\n\nOtherwise, why would all these statues\nbe here all over the place?")
			goto flw_62
		  case 1:
			switch (scene_flags[94 /* 0xA 40 */]) {
			  case 0:
				printf("######G-get them!")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 37), ('param2', 0), ('next', 465), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 50), ('param3', 32)])
				printf("######Out of the way! Scram!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
			}
		}
	}
}

void entrypoint_500_54() {
	start()
	printf("####2#######Master ####, we've\narrived.")
}

void entrypoint_500_71() {
	start()
	printf("###########WHOA!")
}

void entrypoint_500_03() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 62), ('param2', 16384), ('next', 5), ('param3', 13)])
	printf("This time, you're the payload! Haha!\nI'll give you a boost, but there's no\nguaranteeing this is gonna work.")
}

void entrypoint_500_55() {
	start()
	printf("####K#This is the fabled #####surface##### that has\nlong been part of Skyloft legend.")
}

void entrypoint_500_72() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 445), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 453), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 444), ('param3', 6)])
	printf("###########Hey! ############!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 0), ('next', 458), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 446), ('param3', 16)])
	printf("######Duh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 56), ('param2', 0), ('next', 459), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16909), ('next', 447), ('param3', 13)])
	printf("I call it...the #####Groosenator#####!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 448), ('param3', 13)])
	printf("######Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
	printf("Here--check it out!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 48), ('param2', 0), ('next', 463), ('param3', 39)])
	printf("######First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!##### I had\nno clue I had the talent to make\nsomething like this, you know?\n\n######Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 449), ('param3', 39)])
	printf("######I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 450), ('param3', 13)])
	printf("Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
	printf("######There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 57), ('param2', 0), ('next', 452), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_04() {
	start()
	printf("")
}

void entrypoint_500_56() {
	start()
	printf("####K#By my calculations, you are currently\npositioned in a location known as\nthe #####Sealed Grounds#####.")
}

void entrypoint_500_73() {
	start()
	printf("...#####Young one...\n\n\n\n#####Child of destiny descended from\nthe sky...")
}

void entrypoint_500_05() {
	start()
	printf("######I knew it. The seal has given way.\n\n\n\nI'll explain later, but now is the time\nfor action. We must keep that beast\nfrom escaping that pit!\n\nIt must not reach the temple!")
}

void entrypoint_500_22() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 80), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 27), ('param3', 16)])
	printf("######Now, ####!#####\n\n\n\nStrike the sealing spike with a #####Skyward#####\n#####Strike#####, and restore the seal! ######Quickly!")
}

void entrypoint_500_57() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 23), ('param2', 356), ('next', 310), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 311), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 484), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 40), ('next', 509), ('param3', 17)])
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 511), ('param3', 6)])
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 512), ('param3', 6)])
	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 375), ('param3', 6)])
	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 517), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10302), ('param2', 17664), ('next', 485), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 0), ('next', 376), ('param3', 39)])
	printf("#####SWhoa!######")
	printf("######Feels like that seal is going to give way\nany second.######")
	printf("######Uh...but no need to panic!\n\n\n\n######You know what the #####Groosenator##### can\ndo, am I right?")
	printf("######As long as I'm at the controls of this\nbombshell beauty, I don't even know\nthe meaning of the word #defeat\"!\n\n######Flinging bombs on this monster's face,\ndefending the land... It's my purpose,\nI think. It's why I'm here.")
	printf("######Anyway, ####, I've got\nwork to do. Try not to get in the way of\nmy shots, OK?")
	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 419), ('param3', 42)])
	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
}

void entrypoint_500_74() {
	start()
	printf("#####Raise the sword of the goddess\nskyward... ##########Take aim at the evil aura\nand unleash its power...")
}

void entrypoint_500_40() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 84), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3592), ('param2', 2829), ('next', 86), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 52), ('param3', 39)])
	printf("########, look at the beast's\nforehead! Do you see the #####sealing spike#####\nembedded there?\n\n######Drive the spike back into its head, and\nput a stop to its rampage!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_58() {
	start()
	printf("####K#Please proceed with caution, ######Master.")
}

void entrypoint_500_23() {
	start()
	printf("Master, I have information to report.")
	printf("While these doors appear to have been\nopened recently, they are now sealed\nshut by a powerful unidentified force.")
}

void entrypoint_500_75() {
	start()
	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
}

void entrypoint_500_41() {
	start()
	printf("#####&Nice work there, ####!\nCourse, you couldn't've done it without\nme, but no need to thank Groose. \nI know I saved your tail.\nNow let's get that Gate of Time thing\nup and running. I'll go on ahead!")
}

void entrypoint_500_24() {
	start()
	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
	  case 0:
		printf("######Master, I have important information\nfor you. The beast you face has a \n#####sealing spike##### lodged in its forehead.\n\nYou must not leave this place until you\nhave successfully restored the seal\nthat restrains this beast.")
	  case 1:
		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
		  case 0:
			switch (scene_flags[17 /* 0x3 02 */]) {
			  case 0:
				printf("######Master, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
			  case 1:
				printf("######Master, I have important information\nfor you. The beast you face has a \n#####sealing spike##### lodged in its forehead.\n\nYou must not leave this place until you\nhave successfully restored the seal\nthat restrains this beast.")
			}
		  case 1:
			printf("")
		}
	}
}

void entrypoint_500_59() {
	start()
	printf("####>######Oh NO!\n\n\n\n######Not good! The road crumbled, and I\ncan't get to the rest of my bomb stash!\nWhat do I do?!")
}

void entrypoint_500_76() {
	start()
	printf("######What in the world just happened?\nDid you use some kind of magic?\n\n\n######The statue reacted the moment you\ngot near it, bud. How crazy is that?")
}

void entrypoint_500_08() {
	start()
	printf("####D#We got it, but that shot hit kinda late!\n\n\n\n######I'll start loading 'er back up, so keep\nbeating on big ugly till I give you the\nsignal!\n")
}

void entrypoint_500_25() {
	start()
	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
}

void entrypoint_500_42() {
	start()
	printf("#### #Whew... I gotta say, ####,\nI thought we were goners this time.\nSorta glad I was wrong about that.\n\n####B#I'm gonna run ahead to the temple.\nYou should get back there too!")
}

void entrypoint_500_77() {
	start()
	printf("####>#########! Come up to the\ntemple, and #####make your way over\nhere#####. Hustle up!")
}

void entrypoint_500_09() {
	start()
	printf("#### #Nice! You're locked and loaded!\nWe'll aim it to send you straight for\nthe spike on its head!")
}

void entrypoint_500_26() {
	start()
	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
}

void entrypoint_500_43() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 369), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 59), ('param2', 0), ('next', 401), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 260), ('next', 403), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1042), ('param2', 4352), ('next', 402), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 4), ('next', 483), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 404), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 521), ('param3', 17)])
	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1086), ('param2', 16447), ('next', 132), ('param3', 13)])
	printf("########, bad news!\nThat beast looks like it's about to break\nfree again!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1089), ('param2', 16384), ('next', 136), ('param3', 13)])
	printf("Gotta get into position! Hang tight!")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 772), ('next', 420), ('param3', 14)])
	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
	changeScene(16, 0) // 
}

void entrypoint_500_60() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 222), ('param3', 32)])
	printf("###########Hey! ############!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 294), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 229), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 231), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 295), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 20), ('param2', 356), ('next', 223), ('param3', 15)])
	printf("######Duh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 344), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 224), ('param3', 13)])
	printf("I call it...the #####Groosenator#####!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10302), ('param2', 512), ('next', 225), ('param3', 13)])
	printf("######Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
	printf("Here--check it out!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 33), ('param2', 0), ('next', 362), ('param3', 39)])
	printf("######First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!##### I had\nno clue I had the talent to make\nsomething like this, you know?\n\n######Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 226), ('param3', 39)])
	printf("######I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 227), ('param3', 13)])
	printf("Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
	printf("######There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 240), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_78() {
	start()
	printf("######Master, you must seal away the beast\nthat has broken free. Attempting to\nflee from your current situation will\nnot help you accomplish this task.")
}

void entrypoint_500_27() {
	start()
	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
}

void entrypoint_500_61() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 244), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 245), ('param3', 16)])
	printf("###########Hey! ############!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 297), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 501), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 298), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 36), ('param2', 0), ('next', 503), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 30), ('param2', 356), ('next', 502), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 247), ('param3', 48)])
	printf("######Duh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 46), ('param2', 0), ('next', 300), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 346), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16909), ('next', 248), ('param3', 13)])
	printf("I call it...the #####Groosenator#####!")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 29), ('param2', 356), ('next', 347), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 249), ('param3', 13)])
	printf("######Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
	printf("Here--check it out!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 47), ('param2', 0), ('next', 364), ('param3', 39)])
	printf("######First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!##### I had\nno clue I had the talent to make\nsomething like this, you know?\n\n######Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 250), ('param3', 39)])
	printf("######I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 251), ('param3', 13)])
	printf("Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
	printf("######There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 50), ('param2', 0), ('next', 253), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_44() {
	start()
	switch (scene_flags[6 /* 0x1 40 */]) {
	  case 0:
		printf("######The statue just reacted to you! \nWhat did you do? Come on, do not \nmake a big guy beg! I have got to know!")
	  case 1:
		printf("###########GORO!")
		printf("######What was THAT?!\n\n\n\n######The statue just reacted to you! \nWhat did you do? Come on, do not \nmake a big guy beg! I have got to know!")
		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
	}
}

void entrypoint_500_45() {
	start()
	printf("#####&Look at that. Seems like our ugly\nfriend grew itself a pair of hands.\nGreat timing!\n\nI hope it knows how to catch, because\nmy machine has a mean right arm!\n\n\n####B#When she's all loaded up, I'll let you\nknow. Until then, do what you need to\ndo to stop it!")
}

void entrypoint_500_28() {
	start()
	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
	  case 0:
		printf("######Master, the beast freed itself again.\nYou must stay here and stand\nagainst it.")
	  case 1:
		switch (scene_flags[18 /* 0x3 04 */]) {
		  case 0:
			printf("######Master, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
		  case 1:
			printf("######Master, the beast freed itself again.\nYou must stay here and stand\nagainst it.")
		}
	}
}

void entrypoint_500_62() {
	start()
	printf("")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 307), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 305), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 349), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 306), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 100), ('next', 304), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 308), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 20), ('param2', 356), ('next', 238), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 350), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 235), ('param3', 13)])
	printf("######Feels like that seal is going to give way\nany second.######")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 351), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10304), ('param2', 16896), ('next', 236), ('param3', 13)])
	printf("######Uh...but no need to panic!\n\n\n\n######You know what the #####Groosenator##### can\ndo, am I right?")
	printf("######As long as I'm at the controls of this\nbombshell beauty, I don't even know\nthe meaning of the word #defeat\"!\n\n######Flinging bombs on this monster's face,\ndefending the land... It's my purpose,\nI think. It's why I'm here.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10305), ('param2', 17152), ('next', 242), ('param3', 13)])
	printf("######Anyway, ####, I've got\nwork to do. Try not to get in the way of\nmy shots, OK?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 239), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_11() {
	start()
	printf("")
}

void entrypoint_500_29() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 100), ('param3', 46)])
	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
	  case 0:
		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
		  case 0:
			switch (scene_flags[43 /* 0x4 08 */]) {
			  case 0:
				printf("##############, we're in trouble! I\ncan't get to my stash of bombs!\n\n\n#### #All right...##### ########! We've\ngot no choice! You've got to get up onto\nthat ugly thing's head! Quick now!")
			  case 1:
				switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
				  case 0:
					printf("#####&The #####Groosenator##### is ready for action!\n\n\n\nJust press ##### to set up the shot!#####\n\n\n\nAdjust the machine's position with #####,\nand aim at your target with the\n#####Wii Remote#####. Once your shot's set, let\nthat scaly creep have it!")
				  case 1:
					printf("######Guess it's time for the #####Groosenator#####\nto work its magic again!\n\n\nJust like before, you'll see me appear\nabove ##### when the machine's ready\nfor action.#####\n\n####B#You and me are going to\ntag team this freak!\nLet's do it, ####!")
				}
			}
		  case 1:
			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
			  case 0:
				switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
				  case 0:
					printf("#####&The #####Groosenator##### is ready for action!\n\n\n\nJust press ##### to set up the shot!#####\n\n\n\nAdjust the machine's position with #####,\nand aim at your target with the\n#####Wii Remote#####. Once your shot's set, let\nthat scaly creep have it!")
				  case 1:
					printf("######So today's the day I finally get to\nbust out the #####Groosenator#####!\n\n\n######Soon as I'm ready to fire, you'll see my\nsignal appear above #####. ######Till then, it's\nup to you and that sword of yours to\nkeep that thing away!#####")
				}
			  case 1:
				switch (scene_flags[71 /* 0x9 80 */]) {
				  case 0:
					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
					  case 0:
						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
						  case 0:
							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
							  case 0:
								flw_194:
								printf("#####&So, where you flying to today?\n#####The sky!#####The surface.#####Never mind!")
								switch (choice(3)) {
								  case 0:
									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
									  case 0:
										printf("Somewhere fun in the sky, huh?\nWhat kind of fun are you looking for?\n#####Skydiving.#####Bug hunting.#####Something else...")
										switch (choice(3)) {
										  case 0:
											flw_209:
											loadzone_temp_flags[1 /* 0x9 02 */] = true;
											flw_204:
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 199), ('param3', 42)])
											printf("####B#OK, here we go! Hold on to your little\nhat!")
										  case 1:
											flw_202:
											loadzone_temp_flags[2 /* 0x9 04 */] = true;
											goto flw_204
										  case 2:
											printf("What kind of fun are you looking for?\nAnything in particular?\n#####Cutting!#####Shooting!#####Never mind.")
											switch (choice(3)) {
											  case 0:
												flw_203:
												loadzone_temp_flags[3 /* 0x9 08 */] = true;
												goto flw_204
											  case 1:
												loadzone_temp_flags[4 /* 0x9 10 */] = true;
												goto flw_204
											  case 2:
												flw_200:
												printf("If you ever want to travel to fun places\nin style, just come see me!")
											}
										}
									  case 1:
										printf("Somewhere fun in the sky, eh?\nWhere should I launch you?\n#####Skydiving.#####Bug hunting.#####Cutting.#####Never mind.")
										switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 129)])) {
										  case 0:
											goto flw_209
										  case 1:
											goto flw_202
										  case 2:
											goto flw_203
										  case 3:
											goto flw_200
										}
									}
								  case 1:
									printf("Somewhere fun down here, eh?\nWhat kind of fun are you\nlooking for?\n#####Lightning Round!#####Thrill Digger!#####Rickety Coaster!#####Never mind.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 53)])) {
									  case 0:
										loadzone_temp_flags[5 /* 0x9 20 */] = true;
										goto flw_204
									  case 1:
										loadzone_temp_flags[6 /* 0x9 40 */] = true;
										goto flw_204
									  case 2:
										loadzone_temp_flags[7 /* 0x9 80 */] = true;
										goto flw_204
									  case 3:
										goto flw_200
									}
								  case 2:
									goto flw_200
								}
							  case 1:
								printf("######Yo, ####!\n\n\n\nI decided the best thing for me to do\nis hang back here on the surface\nwith you. Hey, someone's got to do it!")
								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
								  case 0:
									goto flw_194
								  case 1:
									printf("This machine of mine can sling you all\nover the land if you're interested\nin flying without a Loftwing.")
									flw_575:
									printf("With a man of my skill at the controls,\nI can guarantee that I won't chuck you\nanywhere boring!\n\nIf you land somewhere you don't know,\nwell, maybe it's a great time to look\naround and explore the place!")
									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
									goto flw_194
								}
							}
						  case 1:
							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
							  case 0:
								goto flw_194
							  case 1:
								printf("######Yo, ####! \nThis machine of mine can sling you all\nover the land if you're interested in a\nlittle birdless flight.")
								goto flw_575
							}
						}
					  case 1:
						printf("######Want to head to Faron Woods, do you?\n\n\n\nNo sweat. Just hop on into the\n#####Groosenator#####, and I'll fling you over!\n#####OK!#####No way.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 6)])) {
						  case 0:
							printf("#####BAll right! Hop in, and I'll take care of\nthe flingin'. You just worry about\nthe landing...")
							loadzone_temp_flags[0 /* 0x9 01 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
						  case 1:
							printf("OK. Let me know if you decide you\nwant a #lift\" to the forest!")
						}
					}
				  case 1:
					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
					  case 0:
						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
						  case 0:
							flw_190:
							printf("#####&And the day is saved again thanks to\nthe big man. Now get down there, and\nfix that seal before it comes back!")
						  case 1:
							switch (scene_flags[19 /* 0x3 08 */]) {
							  case 0:
								goto flw_190
							  case 1:
								switch (scene_flags[43 /* 0x4 08 */]) {
								  case 0:
									printf("##############, we're in trouble! I\ncan't get to my stash of bombs!\n\n\n#### #All right...##### ########! We've\ngot no choice! You've got to get up onto\nthat ugly thing's head! Quick now!")
								  case 1:
									switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
									  case 0:
										printf("#####&The #####Groosenator##### is ready for action!\n\n\n\nJust press ##### to set up the shot!#####\n\n\n\nAdjust the machine's position with #####,\nand aim at your target with the\n#####Wii Remote#####. Once your shot's set, let\nthat scaly creep have it!")
									  case 1:
										printf("######Guess it's time for the #####Groosenator#####\nto work its magic again!\n\n\nJust like before, you'll see me appear\nabove ##### when the machine's ready\nfor action.#####\n\n####B#You and me are going to\ntag team this freak!\nLet's do it, ####!")
									}
								}
							}
						}
					  case 1:
						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
						  case 0:
							flw_189:
							printf("#####&I think I showed that monster who the\nreal boss is, eh? ########, get\ndown there and seal it away again!\n\nJust zap the spike down there with a\nblast from your sword like last time.")
						  case 1:
							switch (scene_flags[18 /* 0x3 04 */]) {
							  case 0:
								goto flw_189
							  case 1:
								switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
								  case 0:
									printf("#####&The #####Groosenator##### is ready for action!\n\n\n\nJust press ##### to set up the shot!#####\n\n\n\nAdjust the machine's position with #####,\nand aim at your target with the\n#####Wii Remote#####. Once your shot's set, let\nthat scaly creep have it!")
								  case 1:
									printf("######So today's the day I finally get to\nbust out the #####Groosenator#####!\n\n\n######Soon as I'm ready to fire, you'll see my\nsignal appear above #####. ######Till then, it's\nup to you and that sword of yours to\nkeep that thing away!#####")
								}
							}
						}
					}
				}
			}
		}
	  case 1:
		printf("#####&Grannie says that crazy monster we\nsaw could break free again at any time,\nbut we're not going down easy.\n\n######There's nothing I hate more than being\ncaught unprepared, so I'm brewing up\na secret weapon to take on big ugly!\n\n######It's not ready yet, but you can bet it'll\ngo down in history as a Groose original.")
	}
}

void entrypoint_500_46() {
	start()
	printf("#####&Well, look who's finally back. Good\nthing too, 'cause I was getting tired of\nwaiting to put a hurting on his ugly\nmug!\n##############! Let's do this!\nOur game plan is the same as last time.\nYou know what to do!")
}

void entrypoint_500_63() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 392), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 260), ('next', 382), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 54), ('param2', 0), ('next', 408), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 394), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1042), ('param2', 4352), ('next', 393), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 4), ('next', 395), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 524), ('param3', 16)])
	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1086), ('param2', 16447), ('next', 379), ('param3', 13)])
	printf("########, bad news!\nThat beast looks like it's about to break\nfree again!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1089), ('param2', 16384), ('next', 385), ('param3', 13)])
	printf("Gotta get into position! Hang tight!")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 772), ('next', 422), ('param3', 14)])
	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
	changeScene(16, 0) // 
}

void entrypoint_500_47() {
	start()
	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 540), ('param3', 13)])
		printf("########, look at the beast's\nforehead! Do you see the #####sealing spike#####\nembedded there?\n\n######Drive the spike back into its head, and\nput a stop to its rampage!")
	  case 1:
		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
		  case 0:
			switch (scene_flags[17 /* 0x3 02 */]) {
			  case 0:
				printf("######Now, ####!#####\n\n\n\nStrike the sealing spike with a #####Skyward#####\n#####Strike#####, and restore the seal! ######Quickly!")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 158), ('param3', 13)])
				printf("########, look at the beast's\nforehead! Do you see the #####sealing spike#####\nembedded there?\n\n######Drive the spike back into its head, and\nput a stop to its rampage!")
			}
		  case 1:
			printf("##############, go quickly! \nCheck on the #####sealing spike #####at the \nbottom of the pit.\n\n######There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
		}
	}
}

void entrypoint_500_64() {
	start()
	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 281), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 273), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 0), ('next', 289), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 18), ('param2', 356), ('next', 270), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 500), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 268), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 260), ('next', 271), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 269), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 270), ('next', 504), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 288), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 41), ('param2', 0), ('next', 275), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3585), ('param2', 256), ('next', 272), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1077), ('param2', 13824), ('next', 290), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 42), ('param2', 0), ('next', 274), ('param3', 39)])
	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1082), ('param2', 15360), ('next', 267), ('param3', 13)])
	printf("#####0Whoa! Wh-what's with all the shaking?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 287), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1079), ('param2', 14592), ('next', 283), ('param3', 13)])
	printf("#####1The whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 353), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3584), ('param2', 5632), ('next', 499), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 43), ('param2', 0), ('next', 266), ('param3', 39)])
	printf("######Go quickly, ####!\nCheck on the #####sealing spike##### at the center\nof the pit.")
	printf("######There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 44), ('param2', 0), ('next', 505), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 270), ('next', 285), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_30() {
	start()
	printf("######I knew it. The seal has given way.\n\n\n\nI'll explain later, but now is the time\nfor action. We must keep that beast\nfrom escaping that pit!\n\nIt must not reach the temple!")
}

void entrypoint_500_48() {
	start()
	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
	  case 0:
		printf("##########, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
	  case 1:
		switch (scene_flags[18 /* 0x3 04 */]) {
		  case 0:
			printf("######You do remember how to seal the beast\naway, yes?\n\n\nHit the sealing spike with a Skyward\nStrike!##### Focus your mind. You have the\npower to do this.")
		  case 1:
			printf("##########, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
		}
	}
}

void entrypoint_500_65() {
	start()
	printf("####C######WHOA!####\n Since when did it learn\nhow to fly?!\n\n\n####B#It's headed straight for the temple,\nbut there's no way I'm letting it\nget there!##### Big ugly's going down\nburning!")
}

void entrypoint_500_13() {
	start()
	printf("######Master ####, I'm sensing\na change in the area that was triggered\nby your Skyward Strike.")
	printf("I have also detected an aura that\ncorrelates closely to your Sailcloth.\nI surmise this aura belongs to Zelda.\n\nI can lead you in the direction of this\naura through a process known as\n###########dowsing#####.\n\nWould you like me to explain this\nprocess to you?\n#####Please!#####Nah...")
	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 81)])) {
	  case 0:
		printf("######As you wish, Master.\n\n\n\nDowsing is when I detect the presence \nof the aura of something you wish to\nsearch for using the tip of the sword.\n\nThe nearer you are to an object\nemitting the aura in question, the\n#####stronger the response will be#####.\n\nThis response manifests itself through\nvibration and sound. The direction of\nthe object emitting the aura is\nindicated by the purple #####pointer #####you see.")
		flw_570:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 496), ('param3', 56)])
		printf("Hold down ##### and select Zelda as your\ndowsing target, then point in the\ndirection you wish to search.#####")
		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
	  case 1:
		printf("Understood, ######Master.")
		goto flw_570
	}
}

void entrypoint_500_31() {
	start()
	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 545), ('param3', 13)])
		printf("########, look at the beast's\nforehead! Do you see the #####sealing spike#####\nembedded there?\n\n######Drive the spike back into its head, and\nput a stop to its rampage!")
	  case 1:
		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
		  case 0:
			switch (scene_flags[17 /* 0x3 02 */]) {
			  case 0:
				printf("######Now, ####!#####\n\n\n\nStrike the sealing spike with a #####Skyward#####\n#####Strike#####, and restore the seal! ######Quickly!")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 6157), ('next', 147), ('param3', 13)])
				printf("########, look at the beast's\nforehead! Do you see the #####sealing spike#####\nembedded there?\n\n######Drive the spike back into its head, and\nput a stop to its rampage!")
			}
		  case 1:
			printf("##############, go quickly! \nCheck on the #####sealing spike #####at the \nbottom of the pit.\n\n######There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
		}
	}
}

void entrypoint_500_49() {
	start()
	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
	  case 0:
		printf("##########, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
	  case 1:
		switch (scene_flags[18 /* 0x3 04 */]) {
		  case 0:
			printf("######You do remember how to seal the beast\naway, yes?\n\n\nHit the sealing spike with a Skyward\nStrike!##### Focus your mind. You have the\npower to do this.")
		  case 1:
			printf("##########, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
		}
	}
}

void entrypoint_500_66() {
	start()
	printf("####A#Is that it? Man, I thought it was going\nto put up more of a fight. Somebody\nshould really thank the genius who\nmade this machine!\nOK, ####, time for you to\ngo show big ugly who's boss!")
}

void entrypoint_500_14() {
	start()
	printf("######Master, I have information for you.\n\n\n\nI have the ability to offer information\non items and creatures you #####target\n#####with #####.#####\n\n#####While targeting##### something with #####,\npress ##### and I will brief you with all\nthe information I know on the subject.##########")
}

void entrypoint_500_32() {
	start()
	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
	  case 0:
		printf("#####1Aaaaah!")
	  case 1:
		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
		  case 0:
			switch (scene_flags[17 /* 0x3 02 */]) {
			  case 0:
				printf("#####0...What are you doing standing there?\nGet your tail down there, and patch up\nthat seal like Grannie told you!\n\nAll you gotta do is whack that spike\nwith a blast from your sword, right?")
			  case 1:
				printf("#####1Aaaaah!")
			}
		  case 1:
			printf("######Whoa! Wh-what's with all the shaking?\n\n\n\nThe whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
		}
	}
}

void entrypoint_500_67() {
	start()
	printf("#####&Hey, ####! The machine's\nloaded and ready to bring the boom!\n\n\nWhen you want me to back you up with\na big blast, just send me the signal\nwith #####!#####")
}

void entrypoint_500_33() {
	start()
	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
	  case 0:
		switch (scene_flags[106 /* 0xC 04 */]) {
		  case 0:
			printf("######I'll help Zelda in my own way.#####\nYou'll see, ####.")
		  case 1:
			printf("######Hey. How goes it, ####?\nYou know, I've been doing some hard\nthinking lately.\n\nGrannie keeps telling me I got my own\npart to play in this whole thing,\nyou know?\n\nI'm not cut out for slashing and\nskewering monsters with a sword\nlike you, but maybe I don't gotta be.\n\n####@#I think I got another way to help Zelda.\nI'm gonna do it the #Groose way.\"\n\n\nI'm not giving you any details right\nnow, but just wait and see. I got\nan idea brewing that'll knock your\ngreen beanie off!")
			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
		}
	  case 1:
		switch (scene_flags[105 /* 0xC 02 */]) {
		  case 0:
			printf("#####-Sniff...##### I'm just deadweight.\nWhat kinda use is that to anyone#####.#####.#####.")
		  case 1:
			printf("#####=#####Awwww, c'mon!\n\n\n\n################I couldn't do a thing!\n\n\n\n################I'm totally useless!")
			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
		}
	}
}

void entrypoint_500_50() {
	start()
	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
	  case 0:
		printf("######Master, it is your destiny to seal away\nthis beast. You must not run from it.")
	  case 1:
		switch (scene_flags[19 /* 0x3 08 */]) {
		  case 0:
			printf("######Master, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
		  case 1:
			printf("######Master, it is your destiny to seal away\nthis beast. You must not run from it.")
		}
	}
}

void entrypoint_500_68() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 489), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 407), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 400), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 55), ('param2', 0), ('next', 487), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 29), ('param2', 356), ('next', 396), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 260), ('next', 486), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 490), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 398), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1042), ('param2', 4352), ('next', 397), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 4), ('next', 399), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 523), ('param3', 16)])
	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1086), ('param2', 16447), ('next', 386), ('param3', 13)])
	printf("########, bad news!\nThat beast looks like it's about to break\nfree again!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1089), ('param2', 16384), ('next', 391), ('param3', 13)])
	printf("Gotta get into position! Hang tight!")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 772), ('next', 421), ('param3', 14)])
	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
	changeScene(16, 0) // 
}

void entrypoint_500_34() {
	start()
	printf("#####&With my machine, the woods are just\na fling away!####\n#")
	printf("You stay safe out there!######")
}

void entrypoint_500_51() {
	start()
	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
	  case 0:
		printf("##############, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
	  case 1:
		switch (scene_flags[19 /* 0x3 08 */]) {
		  case 0:
			printf("######To break the seal for a third time...\nTruly this is a fearsome beast.\n\n\nBut now you must send it back to\nits prison once more. Restore the\nseal! I know you hold the power.")
		  case 1:
			printf("##############, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
		}
	}
}

void entrypoint_500_69() {
	start()
	printf("Awwright! It's time for Groose to\nexplode into action!")
	printf("Adjust the machine's position with #####,\nand aim at your target with the\n#####Wii Remote#####.\n\nOnce you finish aiming, press ##### to\nlaunch a bomb. If it hits, you'll stun\nthe scaly sucker!")
	printf("If you forget the controls, press #####\nanytime you're in control of the\n#####Groosenator #####to review the basics!#####")
}

void entrypoint_500_17() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 102), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3330), ('next', 17), ('param3', 13)])
	printf("So lemme see if I've got this right.\n\n\n\nThe old lady living in the #####temple #####down\nthe road from here knows where\n#####Zelda #####is?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 104), ('param3', 39)])
	printf("I see... Right, ####.\nThanks for getting me here. You've \ndone a good job. You can head home.\n\n######Big #####Groose #####will handle the search for\n#####Zelda##### from here.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 24), ('param2', 5632), ('next', 18), ('param3', 13)])
	printf("Yup. I'll track her down, save her, and\nthen give her a lift back to Skyloft...#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 107), ('param3', 39)])
	printf("######Then when we get back, I'll ask her if\nshe wants to make our whole going-out\nthing official, and then the two of us\nwill get some quality time together.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 112), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3), ('param2', 512), ('next', 113), ('param3', 13)])
	printf("######Anyway, the point is your work here is\ndone. I got it covered from here!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 105), ('param3', 6)])
	printf("Now, it's off to find that old lady you\nwere talking about.")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 1024), ('next', 22), ('param3', 14)])
	printf("Catch you later, ####!")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 256), ('next', 111), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 114), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_35() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 53), ('param3', 13)])
	printf("#####T#####It's too late!\n##########All...####\n##### All is lost.#########(#")
}

void entrypoint_500_52() {
	start()
	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
	  case 0:
		printf("##############, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
	  case 1:
		switch (scene_flags[19 /* 0x3 08 */]) {
		  case 0:
			printf("######To break the seal for a third time...\nTruly this is a fearsome beast.\n\n\nBut now you must send it back to\nits prison once more. Restore the\nseal! I know you hold the power.")
		  case 1:
			printf("##############, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
		}
	}
}

void entrypoint_500_18() {
	start()
	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 116), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 44), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 467), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 28), ('param2', 356), ('next', 30), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 28), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 260), ('next', 31), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 29), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 270), ('next', 120), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 33), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 34), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1077), ('param2', 13824), ('next', 32), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 470), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 469), ('param3', 6)])
	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 129), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1082), ('param2', 15381), ('next', 472), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 471), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3605), ('param2', 2319), ('next', 24), ('param3', 13)])
	printf("#####0Whoa! Wh-what's with all the shaking?")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 130), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1079), ('param2', 14592), ('next', 468), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 119), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 118), ('param3', 39)])
	printf("#####1The whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 71), ('param3', 39)])
	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 125), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 128), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3600), ('param2', 5632), ('next', 23), ('param3', 13)])
	printf("######Go quickly, ####!\nCheck on the #####sealing spike##### at the center\nof the pit.")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 28), ('param2', 356), ('next', 122), ('param3', 15)])
	printf("######There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 124), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 28), ('param2', 0), ('next', 264), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 270), ('next', 366), ('param3', 15)])
	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_500_01() {
	start()
	printf("####B#Hah! She packs a mean punch, doesn't\nshe! I tell you, I was in love the first\ntime I pulled this lever!\n\n####>#I'll start loading her back up with\nanother bomb, so keep beating on big\nugly till I give you the signal!")
}

void entrypoint_500_36() {
	start()
	printf("The creature we passed who was under\nassault may have information.\nI suggest we fight off his assailants.")
}

void entrypoint_500_53() {
	start()
	printf("#####&Hey, ####, the machine's\nall loaded and ready to smash!\n\n\nIf that flabby sack of teeth tries to\nclimb the wall, I can blast it off from\nhere with a bomb!\n\nWhen you want some backup from\nme, just send me the signal with #####!#####")
}

void entrypoint_500_70() {
	start()
	printf("######Master, please make sure to use your\nSailcloth when descending from high\nelevations. Failing to do so has a high\nprobability of resulting in injury.\nI took the liberty of deploying the\nSailcloth for you this time, but in the\nfuture you can manually engage it by\npressing ##### before landing.#####")
}

