void entrypoint_102_15() {
	start()
	printf("While riding your Loftwing, you\ncan press ##### at any time to go over\nthe basic controls again.#####\n\nYou can also press ##### to #####charge#####, which\nis an attack that also gives you a #####burst\nof speed#####. Press ##### to #####slow down#####. Try all\nthese moves and see how they feel!#####")
}

void entrypoint_102_16() {
	start()
	printf("Here's a tip for how to really #####build up\nsome speed #####on your bird,\n####!\n\n#####Swing############### #####the Wii Remote up and down#####,\nand when you are #####high##### enough, #####tilt the\nWii Remote downward #####to go into a\ndescent that increases your speed.\nSwing up and down, then tilt down.\nGot it? That's how you increase\nyour speed!")
}

void entrypoint_102_01() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 26), ('next', 1), ('param3', 13)])
	printf("########, I'm going to tend to\nmy bird and make sure he's not hurt.\nI'll catch up with you later.\n\n######Go and see if anyone in town knows\nwhat happened to your Loftwing.")
}

void entrypoint_102_02() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 15), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 100), ('next', 103), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 1), ('next', 78), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', -1), ('next', 3), ('param3', 16)])
	printf("Hey, ####, I was hoping\nI'd find you here.\n\n\n##\n###I heard you'd gone searching for your\nbird around the waterfall, so I thought\nI'd fly around and help you look.\n\nHow's your search going? Any sign of\nyour Loftwing?")
	printf("######Oh no...\n\n\n\n######Well, let's not lose hope yet. There's a\nplace up ahead that Groose and his\ngang are always hanging around.\nMaybe we'll find something there!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 202), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 203), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 137), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 260), ('param2', 528), ('next', 135), ('param3', 13)])
	printf("#####Huh...?#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 171), ('param3', 39)])
	printf("######Who... Who's that?\n\n\n\n######Who's calling for me?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 141), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 268), ('param2', 5376), ('next', 136), ('param3', 13)])
	printf("Oh#####, sorry, ####. I got\ndistracted for a moment. Let's go!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_102_03() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1004), ('next', 102), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 19), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 16), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 257), ('next', 79), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 100), ('next', 80), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 17), ('param2', 356), ('next', 181), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 104), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 273), ('param2', 4864), ('next', 81), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 1), ('next', 105), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 20), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 99), ('next', 106), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 270), ('param2', 4360), ('next', 5), ('param3', 13)])
	printf("Look! There he is!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 14), ('param3', 39)])
	printf("###########No doubt about it. That's your\nLoftwing, ####!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 100), ('next', 18), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 172), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_102_04() {
	start()
	switch (scene_flags[3 /* 0x1 08 */]) {
	  case 0:
		printf("######Oh boy, I see you messed up your\nlanding.\n\n\n######Remember, #####once you dive #####off the edge,\nyou can control the angle of your fall\nby #####tilting #####the Wii Remote. I bet you're\nready to try again, aren't you?\nI won't push you this time, so take\nthe leap when you're ready! \n\n\nJust #####dash #####off the edge to jump into a\ndive. Then, just before you hit the\nground, press and hold #####!#####\n\nOh, and don't forget that you've got to\nland in the #####middle of that round design\nin that courtyard below#####.")
		scene_flags[0 'Skyloft'][3 /* 0x1 08 */] = false;
		switch (story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */]) {
		  case 0:
		  case 1:
			story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */] = true;
			story_flags[832 /* us: 805A9B32 0x01, jp: 805ACDB2 0x01 */] = true;
		}
	  case 1:
		switch (story_flags[39 /* us: 805A9AE5 0x20, jp: 805ACD65 0x20 */]) {
		  case 0:
			printf("######OK, let's try this again, shall we?\nThis time you won't have me to push\nyou over the edge, so gather up some\ncourage and JUMP!\nJust #####dash #####off the edge to leap into\na dive.\n\n\nOh, and just before you land, be sure\nyou press ##### to open up your\nSailcloth and slow your fall, or it's\ngoing to be an ugly landing...#####\nAnd don't forget that you've got to\nland in the #####middle of that round\ndesign in the courtyard below#####!")
		  case 1:
			switch (story_flags[26 /* us: 805A9ADA 0x04, jp: 805ACD5A 0x04 */]) {
			  case 0:
				printf("######That's so cruel! They've boarded him\nup in there!\n\n\n########, can you do\nsomething to get all those planks out of\nthe way?")
			  case 1:
				printf("######What're you waiting around for,\n####? Let's go get\nyour Loftwing!")
			}
		}
	}
}

void entrypoint_102_05() {
	start()
	story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */] = true;
	changeScene(9, 0) // 
}

void entrypoint_102_06() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1001), ('next', 23), ('param3', 24)])
	printf("######Your Loftwing really is amazing.\nEspecially considering everything the\npoor guy has been through this\nmorning.\n######I'm going to fly back and tell Father\nwhat happened.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 143), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 4864), ('next', 60), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 16), ('param2', 0), ('next', 42), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 43), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 44), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 144), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 142), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 4), ('next', 93), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 45), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 24), ('param3', 16)])
	printf("######Well, well, if it isn't ####!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 94), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1038), ('param2', 11776), ('next', 145), ('param3', 13)])
	printf("######Word around the plaza is you found\nthat dumb bird of yours.\n\n\n##\n###Well, that's just great. Because you and\nyour dumb bird can't tell time, all the\nprerace warm-ups me and the guys did\nwere for nothin'. Now I'm all stiff.\nWe've been waiting forever for the\nrace to start, and they delay it for\nyou? I don't get it. The big flake gets\nspecial treatment?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 96), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12606), ('next', 25), ('param3', 13)])
	printf("You're almost a man, and yet you still\ncan't seem to go anywhere without\nZelda.\n\nI bet you can't even decide what to\nhave for lunch on your own, huh?\n\n\nAnd don't think we haven't noticed the\nsmug looks. #Ooh, Zelda and I are \nBEST friends. We go everywhere\ntogether.\" Ugh!\n#####...#####You think you're pretty suave,\n######don't you?####< ######Well? Don't you?!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 46), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 6), ('next', 48), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 5), ('next', 26), ('param3', 17)])
	printf("######Groose has been going on forever\nabout how he's gonna be the one to\nbe with Zelda. He's really got his\npompadour in a ruffle about her!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 5), ('next', 27), ('param3', 16)])
	printf("######Der her her.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 66), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 49), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 28), ('param3', 16)])
	printf("######I hate to break it to you, but today's\nthe day I bust up this adorable little\nfantasyland you're living in.\n\n######Zelda's playing the role of the goddess\nat today's ceremony, and I'm gonna be\nthe one to claim that #####Sailcloth#####.\n\nWhen I heard she made it herself, man,\nno way was I gonna let some scrawny\nclown snatch that prize from me.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 5), ('next', 29), ('param3', 17)])
	printf("######Oh yes, that Sailcloth--Zelda's\nSailcloth--will be mine! Duh huh huh...\n\n\nOh, man, I bet she was thinking about\nme when she was stitching it...\n\n\nYup, I can see it now. First, I win the\nbig race, and then Zelda and I finish\nthe ceremony together on the statue.\nJust the two of us...\nIt'll be our special moment alone.\nNobody is stopping me and Zelda from\nhaving our moment. Oh, it's so real\nI can... I can see it...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 108), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1048), ('param2', 5644), ('next', 109), ('param3', 13)])
	printf("Duh... Duh huh huh huh!\nOh yeah...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 4), ('next', 110), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1296), ('param2', 3865), ('next', 111), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1552), ('param2', 2060), ('next', 67), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 30), ('param3', 39)])
	printf("Groose! Pssst, Groose!\n#####Behind you!##### Right behind you!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 5), ('next', 31), ('param3', 16)])
	printf("########\n###WHAT?! Can't you two see I'm in the\nmiddle of--")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 11), ('param2', 0), ('next', 92), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 4), ('next', 97), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 53), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 32), ('param3', 17)])
	printf("######GAH!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 6), ('next', 147), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 4103), ('next', 90), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 33), ('param3', 39)])
	printf("Care to explain just what you meant\nby #our special moment alone\"?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 55), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 34), ('param3', 16)])
	printf("######I...uh, nothing big, really. Just...\nJust...\n\n\n##############! Yeah, I was just\ntelling my buddy here how glad I was \nhe found that red bird of his. Boy,\nam I looking forward to a fair race!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 86), ('param3', 17)])
	printf("######Anyhow, later, Zelda. Look for me\nduring the race. I'll be the one\npulling off all the dangerous moves.")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 4), ('next', 56), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 4), ('next', 91), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 4), ('next', 98), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 35), ('param3', 39)])
	printf("############Hey, Groose!###### Wait up!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1298), ('param2', 4352), ('next', 100), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1553), ('param2', 4096), ('next', 114), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 5), ('next', 115), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 6), ('next', 116), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 205), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 206), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 69), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 36), ('param3', 39)])
	printf("######Did you hear that guy? A fair race? \nYeah, the chances of that happening\nare just about less than zero.\n\n######Either way, don't let those fools get\nyou down, ####! Just get\nout there and fly the best you can!\n\nI know you've got these guys beat, and\ndeep down I think you do too.\n#####Yeah!#####I dunno...#####Us? Alone?")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 4)])) {
	  case 0:
		printf("######That's the spirit, ####!\nTrust me--you can win this.")
		flw_101:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', -256), ('next', 207), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 58), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', -1), ('next', 221), ('param3', 16)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 112), ('next', 40), ('param3', 24)])
		printf("The Wing Ceremony will now begin!\nParticipating students, please\nassemble!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 41), ('param3', 16)])
		printf("Looks like it's race time. Good luck,\n####!")
		changeScene(18, 0) // 
	  case 1:
		printf("######Aww, don't be nervous. You can do this!")
		goto flw_101
	  case 2:
		printf("######Come on, ####! Try to \nfocus for once.")
		goto flw_101
	}
}

void entrypoint_102_07() {
	start()
	printf("")
}

void entrypoint_102_08() {
	start()
	printf("########, let's run your bird\nthrough the basics just to\nmake sure he's not hurt.")
	printf("You can change the direction your bird\nis flying by #####tilting #####the Wii Remote to\nthe #####left and right#####.\n\nWhen you want to #####speed up#####...\n\n\n\n#####Swing the Wii Remote up##### to gain some\n#####altitude#####, then #####point the Wii Remote\ndown #####to drop into a fast dive!\n\nSo, again, #####tilt the Wii Remote up#####,\nthen #####point the Wii Remote down##### to\nspeed up! Those are the basics of\ngetting your bird up to top speed.")
	printf("So how's he handling? Do you think\nhe's flying all right?")
}

void entrypoint_102_09() {
	start()
	printf("Well, that's a huge relief! I don't know\nabout you, ####, but your\nLoftwing looks like he's flying great.\n\nMy father and the others are probably\nworried about your bird, so let's go\ngive them the good news!")
}

void entrypoint_102_10() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 119), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 120), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', -1), ('next', 113), ('param3', 16)])
	printf("")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', -1), ('param3', 39)])
}

void entrypoint_102_11() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 256), ('param2', 2), ('next', 122), ('param3', 13)])
	printf("##################!")
}

void entrypoint_102_12() {
	start()
	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = true;
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
		  case 0:
			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
			flw_152:
			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
			  case 0:
				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
				flw_195:
				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
				  case 0:
					flw_174:
					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
					  case 0:
						switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
						  case 0:
							story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
							flw_131:
							switch (story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */]) {
							  case 0:
								switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
								  case 0:
									flw_159:
									switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
									  case 0:
										story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
										story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
										flw_166:
										switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
										  case 0:
											story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
											flw_182:
											story_flags[653 /* us: 805A9B1C 0x20, jp: 805ACD9C 0x20 */] = false;
											story_flags[632 /* us: 805A9B1A 0x04, jp: 805ACD9A 0x04 */] = false;
											story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
											switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
											  case 0:
												switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
												  case 0:
													flw_225:
													switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
													  case 0:
														switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
														  case 0:
															story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
															flw_227:
															switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
															  case 0:
																switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
																  case 0:
																	story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
																	flw_231:
																	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
																	  case 0:
																		story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
																	  case 1:
																	}
																  case 1:
																	goto flw_231
																}
															  case 1:
																goto flw_231
															}
														  case 1:
															goto flw_227
														}
													  case 1:
														goto flw_227
													}
												  case 1:
													story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
													goto flw_225
												}
											  case 1:
												goto flw_225
											}
										  case 1:
											goto flw_182
										}
									  case 1:
										goto flw_166
									}
								  case 1:
									switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
									  case 0:
										goto flw_159
									  case 1:
										switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
										  case 0:
											goto flw_159
										  case 1:
											scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
											goto flw_159
										}
									}
								}
							  case 1:
								goto flw_159
							}
						  case 1:
							goto flw_131
						}
					  case 1:
						goto flw_131
					}
				  case 1:
					goto flw_174
				}
			  case 1:
				goto flw_195
			}
		  case 1:
			goto flw_152
		}
	  case 1:
		goto flw_174
	}
}

void entrypoint_102_13() {
	start()
	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = false;
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
		  case 0:
			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
			flw_154:
			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
			  case 0:
				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
				flw_196:
				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
				  case 0:
					flw_198:
					switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
					  case 0:
						flw_156:
						switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
						  case 0:
							switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
							  case 0:
								story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
								flw_158:
								switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
								  case 0:
									switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
									  case 0:
										story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
										flw_161:
										switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
										  case 0:
											story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
											story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
											flw_165:
											switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
											  case 0:
												story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = false;
												flw_168:
												switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
												  case 0:
													story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
													flw_177:
													switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
													  case 0:
														flw_192:
														switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
														  case 0:
															story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */] = true;
															flw_213:
															switch (story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */]) {
															  case 0:
																story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = false;
																flw_233:
																switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
																  case 0:
																	story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
																	flw_238:
																	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 53), ('param2', 0), ('next', -1), ('param3', 29)])
																  case 1:
																	goto flw_238
																}
															  case 1:
																goto flw_233
															}
														  case 1:
															goto flw_213
														}
													  case 1:
														switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
														  case 0:
															switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
															  case 0:
																goto flw_192
															  case 1:
																story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
																goto flw_192
															}
														  case 1:
															goto flw_192
														}
													}
												  case 1:
													goto flw_177
												}
											  case 1:
												goto flw_168
											}
										  case 1:
											goto flw_165
										}
									  case 1:
										goto flw_161
									}
								  case 1:
									goto flw_161
								}
							  case 1:
								goto flw_158
							}
						  case 1:
							goto flw_158
						}
					  case 1:
						switch (scene_flags[65 /* 0x9 02 */]) {
						  case 0:
							scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
							goto flw_156
						  case 1:
							goto flw_156
						}
					}
				  case 1:
					goto flw_198
				}
			  case 1:
				goto flw_196
			}
		  case 1:
			goto flw_154
		}
	  case 1:
		switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
		  case 0:
			goto flw_198
		  case 1:
			story_flags[301 /* us: 805A9AFD 0x80, jp: 805ACD7D 0x80 */] = false;
			scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = false;
			goto flw_198
		}
	}
}

void entrypoint_102_14() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', 189), ('param3', 39)])
	printf("This is Zelda's journal. One of the \nentries is unfinished.\nRead the entry?\n#####Read it!#####Don't read.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 51)])) {
	  case 0:
		printf("Tomorrow's the big day! The Wing\nCeremony! Finally, ####\ncan take a big step toward becoming\na knight.\nI can't wait to see him promoted\nto full knighthood, but I'm a little\nworried he might have some trouble\nwinning the race.\nLately, #### hasn't taken\nhis flight training seriously. Someone\nneeds to make sure he doesn't mess up\nhis chance!\nSo I've made up my mind. Tomorrow\nI'll wake him up extra early and make\nsure he gets in some last-minute\npractice, whether he likes it or not.\nHe has to win, or we won't be able to\nperform the closing ceremony\ntogether!")
	  case 1:
		printf("You've chosen not to read her journal.")
	}
}

