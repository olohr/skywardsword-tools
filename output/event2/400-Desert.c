void entrypoint_400_13() {
	start()
	printf("...")
}

void entrypoint_400_65() {
	start()
	printf("We have arrived at #####Lanayru Mine#####.\n\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the\nsacred flame.")
	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
}

void entrypoint_400_30() {
	start()
	printf("Huh? You're looking for work, zrrpt?\nThen get rid of that funny-looking hat\nand come back with a helmet, vrrm!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_14() {
	start()
	printf("The mine cart in front of the door is\ngoing to pass through here, so it's\ndangerous for you to be there, vrrm!\nMaybe you should just go away, zrrpt!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_66() {
	start()
	printf("We have arrived at #####Lanayru Desert#####.\n\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the \nsacred flame.")
	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
}

void entrypoint_400_31() {
	start()
	printf("...")
}

void entrypoint_400_15() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
		  case 0:
			flw_38:
			printf("...")
		  case 1:
			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
			  case 0:
				flw_310:
				printf("...")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 310), ('param3', 31)])
				goto flw_310
			}
		}
	  case 1:
		goto flw_38
	}
}

void entrypoint_400_67() {
	start()
	printf("We have arrived at the #####Temple of\nTime#####.\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the\nsacred flame.")
	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
}

void entrypoint_400_32() {
	start()
	printf("These strange things have started\nattacking us recently, vrrm. We don't\nhave any weapons to defend ourselves,\nso if they attack, we're fried, phweep!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_16() {
	start()
	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
	  case 0:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
			  case 0:
				flw_12:
				printf("Still hanging around here?\nBe careful, vrrm!")
			  case 1:
				printf("You are looking for the dragon god,\nzrrpt?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of\n#####Lanayru Caves#####, bzzt. I don't know of \nany other dragons, though, phweep.")
				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
			}
		  case 1:
			goto flw_12
		}
	  case 1:
		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
		  case 0:
			flw_10:
			printf("I've added a #####pincer modification so\nyou can grab things#####, brrrrrrrt.\nBe careful out there, zrrt!")
			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 2)])) {
			  case 0:
				printf("######Thank you, zrrt!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 279), ('param3', 47)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 281), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 27), ('param2', 356), ('next', 280), ('param3', 15)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 282), ('param3', 17)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 7), ('param3', 48)])
				printf("######If you hadn't come along, they would\nhave sucked all of the electricity out\nof me, vrrm!\n\nOh...##### Look at that, zrrpt... You have a\n#########5#####. It appears to be an older model\nof Lanayru fabrication.\n\nAs thanks for saving me, I will upgrade \n#####that##### for you, zwooop. ######Give it here for a\nsecond, phwing!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 284), ('param3', 33)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 8), ('param3', 42)])
				give_item(75 0x4B);
				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
				goto flw_10
			  case 1:
				printf("Help, zrrt!")
				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
			}
		}
	}
}

void entrypoint_400_50() {
	start()
	temp_flags[5 /* 0x1 20 */] = true;
	printf("####Z#######A report, Master ####.\nWe have arrived at #####Lanayru Mine#####.")
}

void entrypoint_400_68() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 171), ('param3', 39)])
	printf("Congratulations, ######Master.")
	printf("######You have completed the trial. You now\nhave the power to proceed to the sacred\nflame that will be entrusted to your\nsword and your strong spirit.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 174), ('param3', 39)])
	printf("The ########## #####are one of the goddess's\nsacred gifts.\n\n\nYou can extend these claws attached to\nchains to pull yourself to #####targets #####and\n#####vines##### beyond your reach.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 176), ('param3', 39)])
	printf("The flame is somewhere in the desert...\nI conjecture that it lies in a place\nyou have not yet visited, ######Master.")
}

void entrypoint_400_33() {
	start()
	printf("...")
}

void entrypoint_400_17() {
	start()
	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
	  case 0:
		switch (scene_flags[89 /* 0xA 02 */]) {
		  case 0:
			printf("######I am going to explore inside! ######I have to\nhead back to the Sealed Grounds soon,\nso it looks like I am going to be busy.")
		  case 1:
			printf("######What? You made it inside?\n\n\n\n######You mean to say there is a secret\npassage I did not know about?\nWhy did you not tell me, bud?!\n\n######I was just about to give up and go home\nwhen I heard this huge crash. I rushed\nback to find that the way had been\ncleared.\n######I am going to explore inside. ######I have to\ngo back to the Sealed Grounds soon, \nso it looks like I am going to be busy!")
			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
		}
	  case 1:
		switch (scene_flags[73 /* 0x8 02 */]) {
		  case 0:
			printf("######I wish I could see what is happening\non the other side! Maybe there is\nanother way into the temple?")
		  case 1:
			printf("######Good to see you, bud! Seems like you\npop up everywhere! Though I am one\nto talk...\n\n######Anyway, bud, there is something I am\ndying to tell you. It is the discovery of\nthe century!\n\n######This is a sacred place known as the\n#####Temple of Time#####.\n\n\n######I could not believe my eyes when I saw a\n#####human who lives on the legendary\nIsle of the Goddess#####!\n\n######It wore clothes just like the ones\nwritten about in the ancient\nmanuscripts! And it looked just\nlike you, bud!\n######It came with another person...and they\nentered the temple! I wanted to chase\nafter them...\n\n######But then there was an explosion all of a\nsudden! And the entrance... Well, you\ncan see for yourself, bud.\n\n######I do not think we are getting past this\nmess. I just wish we could find out\nwhat is happening on the other side!")
			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
		}
	}
}

void entrypoint_400_51() {
	start()
	printf("I am able to confirm that a time shift\nhas occurred within this space.\n\n\nAny impact to the blue stones creates a\nsustained temporal disruption field in\nthe surrounding area. Readings show\nthat this area ###########is in a past time state#####.")
}

void entrypoint_400_69() {
	start()
	printf("Avoid workplace accidents,\nvrrm! Safety first, zrrt!\n           #  --Floor Supervisor")
}

void entrypoint_400_34() {
	start()
	printf("You're interested in the Timeshift\nStones? Then you should take a tour\nof #####Lanayru Mining Facility#####, zooop!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_52() {
	start()
	printf("Readings indicate the materials used \nto construct the #####generator##### are also \npresent in this area. You can now use \nyour ###########dowsing##### ability to locate them.")
	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 268), ('param3', 56)])
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
}

void entrypoint_400_35() {
	start()
	printf("...")
}

void entrypoint_400_01() {
	start()
	printf("...")
}

void entrypoint_400_19() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
		  case 0:
			flw_43:
			printf("...")
		  case 1:
			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
			  case 0:
				goto flw_43
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 43), ('param3', 31)])
				goto flw_43
			}
		}
	  case 1:
		goto flw_43
	}
}

void entrypoint_400_53() {
	start()
	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
	printf("")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 160), ('param3', 39)])
	printf("")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 179), ('param3', 39)])
	printf("")
}

void entrypoint_400_70() {
	start()
	printf("This month's shipping quota:\n150 containers\n                  --Floor Supervisor")
}

void entrypoint_400_36() {
	start()
	printf("The Timeshift Stones power us, as\nwell as the machines we use, vreep!\nThat's why we have to stay hard at\nwork, zoop!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_02() {
	start()
	printf("")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_54() {
	start()
	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
	  case 0:
		printf("##############! You made it into the\ndragon's territory?!####T\n\n\n###########I am so jealous!####Z\n\n\n\n###########You outdid me again, bud!")
		flw_149:
		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
		story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
		story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
		story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
	  case 1:
		switch (scene_flags[75 /* 0x8 08 */]) {
		  case 0:
			printf("######I found the passage that leads\nto where the #####Thunder Dragon##### lives...####-\n\n\n###########But it is too narrow for a big guy like\nme to pass through. ###########If only there was a\nway...")
			goto flw_149
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 105), ('param3', 31)])
			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
			  case 0:
				printf("######Hello, hello, ####.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 108), ('param3', 39)])
				printf("How is your search for that #####sacred\nflame #####going? Did you find it?!\n\n\nI have been dying to hear whether you\nfound it. Well...did you?\n\n\n######.#####.#####.#####So after that wild, long adventure,\nyou found it! ########, you\nare truly amazing.")
				printf("######You know, I think it is time I tell you\nwhat I found out about the legend of\nthe three dragons.#####\n\nI am certain there is a hidden area just\nbeyond here in the desert!\n\n\nYou see, I found a #####narrow passageway###########\nthat was too tight for me to fit through.\n\n\n######And my gut tells me that one of the\nthree dragons of legend, the #####Thunder\nDragon#####, lives there!\n\n######These robots are connected to him\nsomehow. I am sure of it, bud.#####\n\n\n################The T##########hunder Dragon#####, robots, and\nTimeshift Stones#####.#####.#####.#####\n\n\n################What an adventure!")
				printf("######I just remembered, ####.\nI have got something to report on the\nexcavation project you invested in\nearlier!#####\nI found loads of Timeshift Stones!\n######Now I can pay you back 10 times what\nyou gave me!")
				rupees += 100;
				flw_285:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 110), ('param3', 42)])
				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
				goto flw_149
			  case 1:
				printf("######Hello, hello, ####.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 211), ('param3', 39)])
				printf("How is your search for that #####sacred\nflame #####going? Did you find it?!\n\n\nI have been dying to hear whether you\nfound it. Well...did you?\n\n\n######.#####.#####.#####So after that wild, long adventure,\nyou found it! ########, you\nare truly amazing.")
				printf("######You know, I think it is time I tell you\nwhat I found out about the legend of\nthe three dragons.#####\n\nI am certain there is a hidden area just\nbeyond here in the desert!\n\n\nYou see, I found a #####narrow passageway###########\nthat was too tight for me to fit through.\n\n\n######And my gut tells me that one of the\nthree dragons of legend, the #####Thunder\nDragon#####, lives there!\n\n######These robots are connected to him\nsomehow. I am sure of it, bud.#####\n\n\n################The T##########hunder Dragon#####, robots, and\nTimeshift Stones#####.#####.#####.#####\n\n\n################What an adventure!")
				goto flw_285
			}
		}
	}
}

void entrypoint_400_71() {
	start()
	printf("A report, ######Master ####.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 299), ('param3', 30)])
	printf("The symbols on this power generator\ncorrespond to the symbols on the three\nremote power nodes you activated.\nLogic suggests that they are connected.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
}

void entrypoint_400_37() {
	start()
	printf("...")
}

void entrypoint_400_03() {
	start()
	printf("...")
}

void entrypoint_400_20() {
	start()
	switch (scene_flags[3 /* 0x1 08 */]) {
	  case 0:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
			  case 0:
				flw_66:
				printf("No matter how many times I see the\nTemple of Time, my circuits still get\noverloaded with impressiveness, zrrp!")
			  case 1:
				printf("You are looking for the dragon god,\nzrrpt?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of\n#####Lanayru Caves#####, bzzt. I don't know of \nany other dragons, though, phweep.")
				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
			}
		  case 1:
			goto flw_66
		}
	  case 1:
		switch (scene_flags[69 /* 0x9 20 */]) {
		  case 0:
			printf("That was scary, vrrrrrm...\nThanks for helping me, bzzt.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
			printf("######This is the #####Temple of Time#####. Within it\nis the sacred #####Gate of Time #####made by the\ngoddess, bzzt.\n\n######It's my job to patrol outside the temple,\nvrrm! If you want to reach the Gate of\nTime, you will need to pass through\nthat door, bzzap.\n######Huh? You need another way in,\nphoo-weep?\n\n\n######Well, #####Lanayru Mining Facility #####and the\n#####Temple of Time ##########are connected\nunderground#####, dzzt. Lanayru Mining\nFacility is right here!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 98), ('param3', 33)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 30)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 90), ('param3', 6)])
			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 97), ('param3', 6)])
			printf("This map... It looks inaccurate, bzzt.\nI'm going to fix it for you, zrrm!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 3), ('next', 197), ('param3', 30)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 67), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 200), ('param3', 34)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 199), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 65), ('param3', 17)])
			printf("######Lanayru Mining Facility is just ahead.\nGood luck, vrrt!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 68), ('param3', 33)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 0), ('next', 89), ('param3', 14)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 101), ('param3', 17)])
			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 201), ('param3', 17)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 204), ('param3', 42)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
		  case 1:
			printf("Help, zrrt!")
			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
		}
	}
}

void entrypoint_400_55() {
	start()
	printf("A report, ######Master. I can no longer\ndetect #####Zelda#####'s aura.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 288), ('param3', 39)])
	printf("The moment the gate was destroyed,\nZelda's presence disappeared from my\nreadings. ###########You can no longer search for\nher with your dowsing ability#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 103), ('param3', 39)])
	printf("Zelda's companion instructed you to\nmeet with the ancient one in the Sealed\nGrounds.\n\nThis corresponds with the records in\nmy memory. I propose that we travel to\nthe #####Sealed Temple#####.")
	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_400_72() {
	start()
	printf("Monthly Temple of Time\nCleaning Assignments\n                  --Floor Supervisor")
}

void entrypoint_400_38() {
	start()
	printf("I don't see many humans around here,\nvrrt. Are you interested in the\nTimeshift Stones, phweep?")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_04() {
	start()
	printf("")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_21() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
		  case 0:
			flw_47:
			printf("...")
		  case 1:
			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
			  case 0:
				goto flw_47
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 31)])
				goto flw_47
			}
		}
	  case 1:
		goto flw_47
	}
}

void entrypoint_400_56() {
	start()
	printf("")
}

void entrypoint_400_73() {
	start()
	printf("Plants are drying out, vrrt!\nLet's keep Lanayru green, zzt!\n                  --Floor Supervisor")
}

void entrypoint_400_39() {
	start()
	printf("...")
}

void entrypoint_400_05() {
	start()
	printf("")
}

void entrypoint_400_22() {
	start()
	switch (scene_flags[103 /* 0xD 80 */]) {
	  case 0:
		switch (scene_flags[30 /* 0x2 40 */]) {
		  case 0:
			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
			  case 0:
				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
				  case 0:
					flw_81:
					switch (scene_flags[8 /* 0x0 01 */]) {
					  case 0:
						printf("This is #####Lanayru Mining Facility#####,\nphwing! It is where Timeshift Stones\nare produced.\n\n######No matter how many times I see this\nplace, my rotors still hum with\nadmiration, bzzt!")
					  case 1:
						printf("Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.\n\n######This is #####Lanayru Mining Facility#####,\nphwing! It is where Timeshift Stones\nare produced.\n\n######No matter how many times I see this\nplace, my rotors still hum with\nadmiration, bzzt!")
						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
						flw_85:
						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
					}
				  case 1:
					printf("You are looking for the dragon god,\nzrrpt?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of\n#####Lanayru Caves#####, bzzt. I don't know of \nany other dragons, though, phweep.")
					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
				}
			  case 1:
				goto flw_81
			}
		  case 1:
			printf("Did you figure out how to access the\nremote power nodes, zrrpt? Just\nsetting the dials will not be enough to\nopen the entrance to the facility, vrrm.")
			goto flw_85
		}
	  case 1:
		printf("You are not in my memory banks, brrt.\n\n\n\n######This is the power generator for the\nmechanism that opens the entrance\nto Lanayru Mining Facility, zrrpt!\n\n######But it won't budge until you activate\nthe remote power nodes and set those\n#####three dials##### to access them correctly.")
		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
	}
}

void entrypoint_400_57() {
	start()
	printf("####Z#This arid region was transformed into\na desert over the course of several\nhundred years.")
}

void entrypoint_400_74() {
	start()
	switch (scene_flags[11 /* 0x0 08 */]) {
	  case 0:
	  case 1:
		printf("My estimates indicate that this object\nhas been broken for many years.\nI am unable to analyze the content of\nits speech at this time.")
		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
	}
}

void entrypoint_400_06() {
	start()
	printf("")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_23() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
		  case 0:
			flw_51:
			printf("...")
		  case 1:
			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
			  case 0:
				goto flw_51
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 51), ('param3', 31)])
				goto flw_51
			}
		}
	  case 1:
		goto flw_51
	}
}

void entrypoint_400_58() {
	start()
	printf("####Z#My projections show that #####Zelda##### must\nhave traveled through this area.")
	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
}

void entrypoint_400_40() {
	start()
	printf("My friend was kidnapped the other\nday, vrrt! And I heard they sucked out\nall of his electricity, zrrrrpt!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_75() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 2), ('next', 293), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', -1), ('param3', 6)])
}

void entrypoint_400_07() {
	start()
	printf("...")
}

void entrypoint_400_24() {
	start()
	switch (scene_flags[30 /* 0x2 40 */]) {
	  case 0:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
			  case 0:
				flw_187:
				printf("Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.")
			  case 1:
				printf("You are looking for the dragon god,\nzrrpt?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of\n#####Lanayru Caves#####, bzzt. I don't know of \nany other dragons, though, phweep.")
				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
			}
		  case 1:
			goto flw_187
		}
	  case 1:
		switch (scene_flags[100 /* 0xD 10 */]) {
		  case 0:
			printf("Ahhh! What are you doing, vrrt?!\n\n\n\n######Still... You'll never get it to open just\nfiddling with the dials, bzzt.")
			flw_155:
			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
		  case 1:
			switch (scene_flags[34 /* 0x5 04 */]) {
			  case 0:
				printf("You're trying to figure out how to\nconfigure the device to get you into\nLanayru Mining Facility, zrrpt?\n\n######You look kind of suspicious, vrrm.\nI probably shouldn't be telling you how\nto access the remote power nodes to\nenter the facility, zwoop.\n######And don't let me catch you stabbing\nor fiddling with this device, bzzt!")
				goto flw_155
			  case 1:
				printf("You look kind of suspicious, vrrm.\n\n\n\n######Don't let me catch you fiddling with\nthis device, bzzt!")
				goto flw_155
			}
		}
	}
}

void entrypoint_400_59() {
	start()
	temp_flags[6 /* 0x1 40 */] = true;
	printf("#########Z######We have arrived at #####Lanayru Deser##########t#####.\nThe terrain in this area changed\ndramatically as climate forces rapidly\nturned it into a desert.")
}

void entrypoint_400_76() {
	start()
	printf("We have arrived at the #####Temple of\nTime#####.\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the\nsacred flame.")
	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
}

void entrypoint_400_08() {
	start()
	switch (scene_flags[29 /* 0x2 20 */]) {
	  case 0:
		printf("Stay away from the blue stones, zrrpt.\nThey're too dangerous, vrrrrrm, for\nhumans! And try not to get in the way!")
	  case 1:
		printf("Where did you come from, dzzzzt?\nWe're here collecting Timeshift Stones\nand transporting them to #####Lanayru\nMining Facility#####.\n######Stay away from the blue stones, zrrpt.\nThey're too dangerous for humans!")
		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
	}
}

void entrypoint_400_25() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
		  case 0:
			flw_55:
			printf("...")
		  case 1:
			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
			  case 0:
				goto flw_55
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 31)])
				goto flw_55
			}
		}
	  case 1:
		goto flw_55
	}
}

void entrypoint_400_77() {
	start()
	printf("######Master ####, all three\nremote power nodes have been\nactivated.\n\nPlease make your way to the #####power\ngenerator #####in front of #####Lanayru\nMining Facility#####.")
}

void entrypoint_400_09() {
	start()
	printf("...")
}

void entrypoint_400_26() {
	start()
	switch (scene_flags[30 /* 0x2 40 */]) {
	  case 0:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
			  case 0:
				flw_189:
				printf("Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.")
			  case 1:
				printf("You are looking for the dragon god,\nzrrpt?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of\n#####Lanayru Caves#####, bzzt. I don't know of \nany other dragons, though, phweep.")
				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
			}
		  case 1:
			goto flw_189
		}
	  case 1:
		switch (scene_flags[102 /* 0xD 40 */]) {
		  case 0:
			printf("Ahhh! What are you doing, vrrt?!\n\n\n\n######Still... You'll never get it to open just\nfiddling with the dials, bzzt.")
			flw_153:
			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
		  case 1:
			switch (scene_flags[34 /* 0x5 04 */]) {
			  case 0:
				printf("You're trying to figure out how to\nconfigure the device to get you into\nLanayru Mining Facility, zrrpt?\n\n######You look kind of suspicious, vrrm.\nI probably shouldn't be telling you how\nto access the remote power nodes to\nenter the facility, zwoop.\n######And don't let me catch you stabbing\nor fiddling with this device, bzzt!")
				goto flw_153
			  case 1:
				printf("You look kind of suspicious, vrrm.\n\n\n\n######Don't let me catch you fiddling with\nthis device, bzzt!")
				goto flw_153
			}
		}
	}
}

void entrypoint_400_60() {
	start()
	printf("####Z#I have confirmed numerous areas of\n#####sinksand#####. Should you step in sinksand,\nyou may be swallowed by the desert.\nBodily danger has increased by 30%.")
}

void entrypoint_400_78() {
	start()
	printf("A report, ######Master ####.\nMy analysis indicates that you can\nrestore this #####device##### to an operable state\nby inserting a source of energy.")
}

void entrypoint_400_27() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
		  case 0:
			flw_120:
			printf("...")
		  case 1:
			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
			  case 0:
				goto flw_120
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 120), ('param3', 31)])
				goto flw_120
			}
		}
	  case 1:
		goto flw_120
	}
}

void entrypoint_400_61() {
	start()
	printf("####Z#As a safety measure, I recommend\nyou ###########check the terrain##### on your map\nwith #####. #####")
}

void entrypoint_400_79() {
	start()
	printf("######A report, Master ####.\n\n\n\nThe map you possess corresponds to the\nactual terrain of this area with only\n35% accuracy.\n\nThe robot you met earlier modified\nyour map to show #####past terrain########### that is\nnow submerged below the sinksand.")
}

void entrypoint_400_10() {
	start()
	printf("That's a mine cart for transporting\nTimeshift Stones, zrrpt. They're not\nfor human use, so get lost, vrrm!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_28() {
	start()
	switch (scene_flags[30 /* 0x2 40 */]) {
	  case 0:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
			  case 0:
				flw_191:
				printf("Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.")
			  case 1:
				printf("You are looking for the dragon god,\nzrrpt?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of\n#####Lanayru Caves#####, bzzt. I don't know of \nany other dragons, though, phweep.")
				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
			}
		  case 1:
			goto flw_191
		}
	  case 1:
		switch (scene_flags[101 /* 0xD 20 */]) {
		  case 0:
			printf("Ahhh! What are you doing, vrrt?!\n\n\n\n######Still... You'll never get it to open just\nfiddling with the dials, bzzt.")
			flw_154:
			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
		  case 1:
			switch (scene_flags[34 /* 0x5 04 */]) {
			  case 0:
				printf("You're trying to figure out how to\nconfigure the device to get you into\nLanayru Mining Facility, zrrpt?\n\n######You look kind of suspicious, vrrm.\nI probably shouldn't be telling you how\nto access the remote power nodes to\nenter the facility, zwoop.\n######And don't let me catch you stabbing\nor fiddling with this device, bzzt!")
				goto flw_154
			  case 1:
				printf("You look kind of suspicious, vrrm.\n\n\n\n######Don't let me catch you fiddling with\nthis device, bzzt!")
				goto flw_154
			}
		}
	}
}

void entrypoint_400_62() {
	start()
	printf("####Z#My readings indicate that #####Zelda #####has\npassed through here. As previously\nstated, this area is highly dangerous.\n\n#########Z######I suggest reuniting with her quickly\nto determine the motivations behind\nher actions at #####Eldin##### #####Province#####.")
}

void entrypoint_400_11() {
	start()
	printf("...")
}

void entrypoint_400_63() {
	start()
	printf("######Master ####, I have\ninformation to report.\n\n\nI can confirm that you will not be\nconsumed by the sinksand in this\ncurrent position. I suggest verifying\nyour location on the map.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 261), ('next', 193), ('param3', 30)])
	printf("Readings indicate that there is a\nsubmerged path beneath the\nsinksand.\n\nIt is possible to walk along a route\nabove this path without submerging\ncompletely into the sinksand.\n\nSimulations suggest that placing\nbeacons to mark a safe route along\nthese paths before proceeding would\nsignificantly reduce risk.")
	printf("I recommend placing #####multiple########### beacons.")
	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
}

void entrypoint_400_29() {
	start()
	printf("...")
}

void entrypoint_400_80() {
	start()
	printf("#####Tumbleweeds##### sometimes roll across the\nsand in Lanayru Desert and other\nplaces.\n\nTumbleweeds are used as a material to \nupgrade a variety of items. You can\ncollect them with a##### Bug Net#####.")
}

void entrypoint_400_12() {
	start()
	printf("Do not interfere with mining\noperations! Stop talking to me, zrrpt!")
	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
}

void entrypoint_400_64() {
	start()
	printf("######################Hey, you over there! Say, is that\nmy buddy ####?\nIt is!\n\n##########You have come at the perfect\ntime! #####I have something I want to\nshow you.#####\n\n##########Come on up here!")
	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
}

