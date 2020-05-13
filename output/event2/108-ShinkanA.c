void entrypoint_108_03() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 113), ('next', 33), ('param3', 24)])
	printf("#####Go!######")
}

void entrypoint_108_20() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("######While her statue may be gone, the\ngoddess is still with us, for she lives on\nin our hearts. Don't you agree,\n####?")
	  case 1:
		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
		  case 0:
			printf("######It seems every time I bump into you,\nyou appear stronger and somehow\nmore confident. Whatever you're\ndoing, keep it up, ####.")
		  case 1:
			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
			  case 0:
				printf("######Levias?!####( I've heard rumors about\nwhat's been going on out there, but\nlittle more.\n\nI'm afraid I lack sufficient knowledge\non this subject to be of help to you.\n\n\nGo speak with the head of physical\ntraining, #####Instructor Owlan#####. I'm sure\nhe can teach you more about this\nparticular topic!")
			  case 1:
				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
				  case 0:
					printf("######I must admit I'm starting to think I\nmight need to get a Remlit of my own.\n#####The Triforce?! What's that?####( Does it\nhave anything to do with little Mia?")
				  case 1:
					printf("######Lately I've been taking care of Mia\nfor the headmaster...\n\n\nIt's dangerous having her around.\nShe's so adorable that I'm starting to\nthink I need one of my own!")
				}
			}
		}
	}
}

void entrypoint_108_04() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 59), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', -1), ('next', 153), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 150), ('param3', 49)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 10), ('next', 152), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 2578), ('param2', 2562), ('next', 35), ('param3', 13)])
	printf("##########Hey, ####!\nUp here!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 244), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 213), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 10), ('next', 261), ('param3', 17)])
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		printf("######Good morning to you,\n####! I'm impressed\nwith your decision to test\nyour resolve in #####Hero Mode#####!\nOh, but today's the day of the long-\nawaited #####Wing Ceremony#####!\n\n\nAre you feeling ready? There's\nsomething I'd like to talk to you about.\n\n\nLook this way while pressing and\nholding #####, then press ##### to have a\nquick chat with me.#####")
		flw_64:
		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
	  case 1:
		printf("######Good morning to you,\n####! Today's finally\nthe day of the long-awaited\n#####Wing Ceremony#####!\nAre you feeling ready? Oh, I just\nremembered. There's something I'd\nlike to ask you about.\n\nLook this way while pressing and\nholding #####, then press ##### to have a\nquick chat with me.#####")
		goto flw_64
	}
}

void entrypoint_108_21() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 190), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 187), ('param3', 13)])
	printf("#####Hey, ####!")
	printf("##\n#######\n#I don't care how good a jumper you\nthink you are. You'll never reach a\nroof that high just pressing ##### to #####dash#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 193), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 189), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 230), ('param3', 39)])
	printf("There should be a wooden box up there.\nGrab and move one with #####, and use it\nas a platform of sorts.\n\nYou can climb onto a platform by \npressing ##### to #####dash #####or by pressing #####\nfor a few moments.")
}

void entrypoint_108_05() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		printf("######Yes. It looks like you've mastered\n#####dashing##### with #####. Just remember, if you\noverdo it, your stamina gauge will run\nout and you'll be huffing and puffing.\nAll right, then. You know what to do\nnext, right?\n#####Tell me!#####I know.")
		switch (choice(2, 0)) {
		  case 0:
			printf("You can easily jump a distance like\nthat just by jogging along toward it.\nYou'll #####autojump##### right across.\n\nAutojump#####...##### #####No matter how many\ntimes I say it, I never get tired of\nhearing it! A name for the ages, surely.")
		  case 1:
			printf("I see. Well then, come on over here\nquickly!")
		}
	  case 1:
		printf("######So what do you think? Using ##### to\n#####dash #####is useful, isn't it?\n\n\nHowever, don't dash around so much\nthat you tire yourself out, or your\n#####stamina gauge##### will empty and you'll be\ncompletely out of breath.\nIt's best to take a little break when\nyour stamina gauge gets close to\nempty.\n\nGot all that? On to the next point...\n\n\n\nYou can jump a short distance like this\njust by moving toward it. I like to call\nit the #####autojump#####. Ahh, yes, autojump#####...#####\nIt just has a nice ring to it.")
	}
}

void entrypoint_108_22() {
	start()
	switch (scene_flags[92 /* 0xA 10 */]) {
	  case 0:
		printf("######The ceremony won't start until you\nhave found your Loftwing.\n\n\nDon't worry about anything else.\nJust hurry up and find your bird!")
	  case 1:
		printf("######The start of the Wing Ceremony is\nbeing delayed until you find your\nLoftwing. Good news, isn't it?")
	}
}

void entrypoint_108_06() {
	start()
	printf("######You can't just ignore your instructor\nlike this, ####!\n\n\nLook over here and press ##### to target\nme, then press ##### to talk.#####")
}

void entrypoint_108_23() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		printf("######How are things, ####?!\nIs everything going well?\n\n\nIf there's anything else you need,\ndon't hesitate to come talk to me.\nI am your instructor, after all!")
	  case 1:
		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
		  case 0:
			printf("######The Spiral Charge is a stressful\nmaneuver for most any Loftwing to\npull off.\n\nBut you and that red bird of yours...\nI'll bet you can handle it without\na sweat!")
		  case 1:
			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
			  case 0:
				printf("##############... What are you\ndoing out at this hour?\n\n\nWhat's all this about Levias? Listen,\nthis isn't something I want to talk\nabout at this hour...\n\nCome back tomorrow morning. \nI'll tell you everything I know then.")
			  case 1:
				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
				  case 0:
					printf("######Well, ####... Are you close\nto finding Zelda?\n\n\nDon't give up! I believe if anyone can\nfind Zelda, it's you.")
				  case 1:
					printf("######You aren't allowed to ride your birds\nat night, so I'm afraid you won't be\nable to search for Zelda then, either.\n\nFor tonight, I suggest you go to bed and\nget some rest. You can start your\nquest tomorrow.\n\nYou won't make smart decisions if\nyou don't take the time to rest your\nmind and body.")
				}
			}
		}
	}
}

void entrypoint_108_07() {
	start()
	printf("####\n##############!\n\n\n\n#####You still don't get it?!")
}

void entrypoint_108_24() {
	start()
	switch (scene_flags[41 /* 0x4 02 */]) {
	  case 0:
		printf("######Hey now, ####! Now is\ncertainly not the time for that.\n\n\nHurry and find your Loftwing!\nYou should talk to the students inside\nthe academy. Perhaps they know\nsomething?")
	  case 1:
		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
		  case 0:
			printf("######Hey, ####! What do you\nthink you're doing slinking by your\ninstructors like that?!\n\nCome here for a moment.")
		  case 1:
			printf("######Hey, ####! What exactly\ndo you think you're doing ignoring\nyour instructor and just walking by\nlike that?\nCome over here and listen to what your\ninstructor has to say!")
		}
	}
}

void entrypoint_108_08() {
	start()
	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
	  case 0:
		printf("")
	  case 1:
		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 77), ('param3', 31)])
			printf("######Ah, ####. How goes your\nsearch for Zelda? Have you found her\nyet?\n\n######What? ####(Levias? Ah, so you've been\ntalking to the headmaster, I take it?\n\n\nIf I'm correct, Levias is the one inside\nthe thunderhead. But#####...##########that's not the\nLevias that we all know.\n\n#####That's...####(#####a #####monster#####!\n\n\n\n######It certainly looks like Levias, but last\ntime I approached him, he came\nrushing at me! And his eyes...\nThey were full of malice.\nPeople change... Or old, wizened\ncreatures change, rather. #####Perhaps\nit's more that...##########he is possessed by\nsomething. #####That's how it felt to me.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 78), ('param3', 6)])
			printf("######What?####( You want to talk to Levias?\n\n\n\n#####That's...#####impossible. I don't think\nLevias is capable of listening. Not in\nhis current state, no.\n\n#####And...#####even if you were to get close\nenough to talk to him, it will likely end\nwith you getting brushed aside and sent\nflying to your death in a sea of clouds.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 201), ('param3', 6)])
			printf("#####RWhat? ####(You're still planning on going?\n\n\n\n#####I see...##### It's because you need to find\nZelda.\n\n\nI understand...##### I get the feeling\nnothing I could say would talk you\nout of it.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 202), ('param3', 6)])
			printf("Hey! I have an idea. \nCome with me!")
			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
			changeScene(0, 0) // 
		  case 1:
			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
			  case 0:
				printf("######Oh, hello, ####!\n#####Hmm? The Triforce?\n\n\nSorry, I can't say I know what that is!\nPerhaps you should ask the\nheadmaster?")
			  case 1:
				printf("######Ah, ####! How's your\nsearch for Zelda going?\n\n\nSorry for leaving it all up to you.\nI know you must be doing everything\nyou can to find her.")
			}
		}
	}
}

void entrypoint_108_09() {
	start()
	printf("######Levias is inside the thunderhead.\nHe's been acting so strangely...\nLike something has possessed him.\n\nIf we can somehow free him from\nwhatever it is that has a hold over\nhim, then there's a chance he will\nreturn to his senses.\nListen well, ####, because\nI'm about to teach you a very\npowerful bird-riding technique. \n\n######It's called the #####Spiral Charge#####!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 257), ('param3', 39)])
	printf("Using the Spiral Charge, you can rid\nLevias of the blight that has hold\nof him!\n\nThe technique is quite easy to perform.\nAll you have to do is press #####.\n\n\nHowever, the acceleration effect lasts\nlonger than any #####attack##### move you've\nused so far. Maintaining stable flight\ncan be tricky.\nThis is a technique that only senior\nKnight Academy students who have\nmastered high-level flight skills are\nallowed to perform.\nIt's still a bit too early for you, but...\n#####This is an extraordinary circumstance,\nso I'll make an exception this time.\nHowever, I will test you.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 258), ('param3', 39)])
	printf("######First, dive off this platform and call\nyour bird.")
	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
	loadzone_temp_flags[13 /* 0x8 20 */] = true;
}

void entrypoint_108_10() {
	start()
	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
	  case 0:
		printf("######What happened to Zelda...it's just\nterrible.\n\n\nBut there's no point in your kicking\nyourself about it. It was an accident...")
	  case 1:
		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
		  case 0:
			switch (scene_flags[91 /* 0xA 08 */]) {
			  case 0:
				printf("######Leave the ceremony to us. You just\nfocus on finding your bird as quickly\nas you can.")
			  case 1:
				printf("######What's wrong, ####?\n#####Your bird won't come to you when\nyou call it?\n\nFor a Loftwing to ignore its master's\ncall...something must be very wrong#####...\n\n\nHave you talked to##### Instructor Horwell\n#####about this? He's leading today's\nceremony and should be made aware\nof what's going on!\nI see... Well, if the headmaster is aware\nof the situation, then I'm sure he'll \ndelay the ceremony for you.\n\nYou just worry about finding that\nbird of yours!")
				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
			}
		  case 1:
			switch (scene_flags[90 /* 0xA 04 */]) {
			  case 0:
				printf("######That reminds me... You always seem\nto confuse #####Instructor Horwell #####and\nme!\n\nI am #####Owlan#####, of course. I have white\nhair, and I teach practical skills.\n#####Instructor Horwell #####has brown hair, and\nhe teaches academics. Don't forget it!")
			  case 1:
				printf("######Hey, ####. The day of the\nWing Ceremony is finally upon us!\n\n\nIt's time to put what you've learned to\nuse... All those practical skills I taught\nyou, and all the academic prowess\n#####Instructor Horwell##### taught you!\nWhile we're at it, do you remember how\nto #####look around #####using #####?#####\n\n\n#####Press##### ##### when you want to take a look\nat your surroundings!#####\n\n\nIf you feel as though the #####cursor has\nmoved out of alignment#####, point the Wii\nRemote at the screen and press ##### to\neasily rectify the situation.#####")
				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
			}
		}
	}
}

void entrypoint_108_11() {
	start()
	switch (scene_flags[20 /* 0x3 10 */]) {
	  case 0:
		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
		  case 0:
			printf("######Could there truly be a world below the\nclouds?\n\n\nShould it even exist, I imagine its\nterrain to be the exact opposite of our\nlush green world. It's probably nothing\nbut dust and rock...")
		  case 1:
			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
			  case 0:
				printf("######How goes your search for Zelda?\n\n\n\nRemember to find a bed and sleep if\nyou start getting tired. A quick nap can\nrestore your hearts and refresh your\nmind to explore after dark.")
			  case 1:
				printf("######Take good care of yourself, and best of\nluck in your search for Zelda!")
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 124), ('param3', 31)])
		printf("######I heard the news, ####!\nZelda's fallen down through the clouds,\nand you're going to look for her.\nIs that right?\nThe headmaster told me there's land\nbeneath the clouds... Do you know\nanything about that?")
		switch (adventure_pouch_has(9 0x0009)) {
		  case 0:
			printf("So that's the famous sword... Ah, and\na shield####\n.####\n.####\n.####\n It looks like you have one\nalready. Very good!\n\nHere--take this as a little gift from me.")
			flw_172:
			give_item(4 0x04);
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 173), ('param3', 12)])
			flw_173:
			printf("If you're not sure how to use a shield,\n#####Knight Commander Eagus #####at the\nSparring Hall will happily teach you.")
			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
			switch (scene_flags[89 /* 0xA 02 */]) {
			  case 0:
			  case 1:
				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 80)])) {
			  case 0:
				printf("So that's the famous sword... Ah, but\nit won't do you much good if you don't\nhave a shield to protect yourself with!\n\nUnfortunately, you don't seem to have\nspace to carry any other items. Here,\ntake this instead. Consider it a little\ngift from your friend and teacher.")
				goto flw_172
			  case 1:
				printf("So that's the famous sword... Ah, but\nit won't do you much good if you don't\nhave a shield to protect yourself with!\n\nHere--take this with you!")
				give_item(116 0x74);
				printf("The Wooden Shield is light and\nmaneuverable, but it's the weakest\nof all the shields. Also, keep in mind\nthat it's particularly vulnerable to fire.\nIf it breaks, you can buy a new one\nat the bazaar.\n\n\nTo equip the shield, #####hold ########## ##########and #####point\n#####at it with the Wii Remote.#####")
				goto flw_173
			}
		}
	}
}

void entrypoint_108_12() {
	start()
	switch (scene_flags[77 /* 0x8 20 */]) {
	  case 0:
		printf("")
	  case 1:
		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
		  case 0:
			printf("#####\nOh! You managed to destroy 10 targets\nwithin the time limit!\n\n\nIf you can control your bird that well,\nyou'll have no problems at all! I knew\nyou could do it, ####.\nAnd what a magnificent red bird...\nYou are henceforth permitted to use\nthe Spiral Charge attack as a qualified\nbird rider!")
			printf("The next thing we have to address is\njust how to go about finding Levias.\n\n\nMaybe the #####owner of the Lumpy\nPumpkin #####might know something.\nEvery year he makes an offering of\nhis pumpkin soup for Levias.\nGo to the Lumpy Pumpkin and\nask him what he knows!")
			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
		  case 1:
			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
			  case 0:
				printf("######If you can't destroy 10 targets in \nunder 120 seconds, I can't in good\nconscience give you permission to\nuse this dangerous technique.\nI'll be here for a while, so why don't you\ntake a break and cool off? Come talk\nto me when you want to try again. ")
				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
			  case 1:
			}
		}
	}
}

void entrypoint_108_13() {
	start()
	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
	  case 0:
		printf("######The Lumpy Pumpkin is a little\ngathering spot on an oblong island to\nthe southeast of Skyloft.\n\nThe owner's daughter, #####Kina#####, works\nthere. She has the most lovely voice.\n\n\n#####I'm also#####...#####a fan of hers. But you don't\nneed to tell anyone else about that,\ndo you?")
	  case 1:
		switch (scene_flags[77 /* 0x8 20 */]) {
		  case 0:
			flw_108:
			printf("######Hey, ####! Want to try\nsome Spiral Charge training?\n#####Yep!#####Later.")
			switch (choice(2, 0)) {
			  case 0:
				printf("######Excellent. That's what I want to hear!\nWell then, dive off this platform.")
				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
				loadzone_temp_flags[13 /* 0x8 20 */] = true;
			  case 1:
				printf("I think it's fine to wait until you feel\nready!\n\n\nI'll be here for a while. Come back\nanytime!")
				loadzone_temp_flags[13 /* 0x8 20 */] = false;
			}
		  case 1:
			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
			  case 0:
				printf("######What's wrong?! Hurry up and dive off\nthe platform! Are you having second\nthoughts?\n#####I'll do it!#####I quit.")
				switch (choice(2, 0)) {
				  case 0:
					printf("######Ah! That's the answer I was looking\nfor. Take to the skies,\n####!")
					loadzone_temp_flags[13 /* 0x8 20 */] = true;
				  case 1:
					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
					printf("I think it's fine to wait until you feel\nready!\n\n\nI'll be here for a while. Come back\nanytime!")
					loadzone_temp_flags[13 /* 0x8 20 */] = false;
				}
			  case 1:
				goto flw_108
			}
		}
	}
}

void entrypoint_108_30() {
	start()
	printf("Listen up, ####!\n\n\n\nI taught your Loftwing to perform a\n#####Spiral Charge #####when you press #####.")
}

void entrypoint_108_14() {
	start()
	printf("")
}

void entrypoint_108_31() {
	start()
	printf("Press ##### to #####Spiral Charge #####and break\nthe #####10 targets #####placed around the\nfloating boulders up ahead.")
}

void entrypoint_108_15() {
	start()
	printf("######Hey, ####! Where do you\nthink you're going? This is a\ncompetition! Dive off the platform!")
}

void entrypoint_108_32() {
	start()
	printf("If you can destroy 10 targets in under \n#####120 seconds#####, I will recognize you as\na skilled bird rider.")
}

void entrypoint_108_16() {
	start()
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		switch (loadzone_temp_flags[15 /* 0x8 80 */]) {
		  case 0:
			printf("######This gives me pause... The monsters\nthat usually prowl Skyloft at night are\nnowhere to be seen, and the Remlits\nno longer show aggressive behavior.\nWhat could have happened?")
		  case 1:
			printf("######Look, ####! Though night\nhas come, Mia exhibits none of the\nnocturnal aggressiveness we've come\nto expect in Remlits!\nIt's just amazing!")
			loadzone_temp_flags[15 /* 0x8 80 */] = true;
		}
	  case 1:
		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
		  case 0:
			printf("######I keep my distance from Mia at night.\n\n\n\nThere was that one time when she\nsnuck into the academy after nightfall.\n\n\nI recommend that you be extra careful\nwhen you go out at night. Oh dear...\nThat caused quite the commotion.")
		  case 1:
			printf("######It's dangerous to be out at night.\nYes, best to avoid it entirely!\n\n\nEven the headmaster's darling Mia\nturns quite feral when night falls...\nA mysterious energy settles over\nSkyloft with the darkness.")
		}
	}
}

void entrypoint_108_33() {
	start()
	printf("All right! Off you go!")
}

void entrypoint_108_17() {
	start()
	printf("##############! Where are you\nheaded?\n\n\nDive off this platform and call your\nLoftwing!")
}

void entrypoint_108_18() {
	start()
	printf("######Ah, ####! You'd like a\nlesson from me, even at a time like\nthis?\n#####Please!#####No...")
	switch (choice(2, 0)) {
	  case 0:
		printf("Well, well! Such enthusiasm!\n\n\n\nAllow me tell you about the history of\nSkyloft!\n\n\nSkyloft is an island that has floated\nhere for ages... Thousands of years.\n\n\nOur ancestors have always lived on this \nisland, as well as the surrounding\nislands in the sky.\n\n######There is an impenetrable barrier of\nclouds below Skyloft. Nobody who has\nfallen down through the clouds has\never been seen again.\nThey say there is a vast expanse of\npure nothingness beneath the clouds!\n\n\n####\n#Ah, but that's a good place to leave it\ntoday. You'd better go prepare for the\nWing Ceremony.")
	  case 1:
		printf("I... I see. Well, classes are canceled\ntoday due to the Wing Ceremony!\n\n\nDon't you think you'd better head\noutside and get ready for the\nceremony?")
	}
}

void entrypoint_108_01() {
	start()
	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
	  case 0:
		switch (scene_flags[41 /* 0x4 02 */]) {
		  case 0:
			printf("I'll see what I can do about the\nceremony. You go hurry and find\nyour bird!")
		  case 1:
			printf("######What's wrong, ####?\nYou're looking a little pale...\n\n\nWhat?!####2 Your Loftwing is missing?!\nHow strange and troubling.\nDo you#####...#####think you can find him?\n\nYou're going to start looking for him\nnow?! How will you make it back in \ntime to fly in the ceremony?!\n\nIt looks like your participation in the\nceremony hinges on #####feather##### or\nnot you can find that bird on time#####...#####\n\n###########Ahem. Excuse me...#####")
			switch (scene_flags[30 /* 0x2 40 */]) {
			  case 0:
				printf("I see... So the headmaster has\nsummoned me?\n\n\nAll right then, I'll go speak with him\nimmediately.\n\n\nI still owe you for helping me out\nearlier, so don't worry about the\nceremony for now. You focus on\nfinding your Loftwing!")
				flw_72:
				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
			  case 1:
				printf("Maybe that's life's way of getting\nback at you for not listening to your\ninstructors...\n\nAnyway, never mind that... So you say\nthe headmaster is summoning me?\n\n\nIn that case, don't you worry about the\nceremony. Just go find that bird of\nyours!")
				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
				goto flw_72
			}
		}
	  case 1:
		switch (scene_flags[28 /* 0x2 10 */]) {
		  case 0:
			switch (scene_flags[30 /* 0x2 40 */]) {
			  case 0:
				printf("####\n#Ahhh, I'm so glad Mia is safe.\n\n\n#####\n###########Such an odd creature, the #####Remlit#####.\nShe may look cuddly now, but at night,\nit's another story entirely!\n#####Why?#####At night?")
				switch (choice(2, 0)) {
				  case 0:
					printf("Hmm... You don't know what happens\nto Remlits at night?\n\n\nIt's frightening, really...")
					flw_13:
					printf("######When night falls here in Skyloft, \ncreatures like this Remlit become\npossessed by an evil force.\n\nAnd monsters that hide in caves during\nthe day make their way out and prowl\nin the dark of night.\n\nThat is why nobody dares to leave their\nhome at night. Certainly not if they can\navoid it.\n\nIt might be fine for youngsters like \nyou, well trained in the way of the\nknight. You can defend yourself!\n\nBut still, it would be wise to keep\nyour guard up when you're out and\nabout after dark!")
				  case 1:
					goto flw_13
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 49), ('param3', 39)])
				printf("######Nice work! You've brought her back\nsafe and sound!\n\n\n###########Sorry for troubling you with this.\nI know you're busy, ####!\nI suppose I should feed Mia now...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 52), ('param3', 39)])
				printf("Please tell the headmaster that we\nfound his pet. He should be up by\nthe #####Statue of the Goddess#####.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 242), ('param3', 39)])
				printf("I believe Zelda is there with him, so\nyou should hurry along.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 50), ('param3', 42)])
				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
			}
		  case 1:
			switch (temp_flags[2 /* 0x1 04 */]) {
			  case 0:
				printf("######What is it, ####?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 60), ('param3', 39)])
				printf("If you dash at the wall from there,\nyou'll be able to #####hang #####from the edge!\n\n\nDo be careful when you're hanging\noff the ledge, and keep an eye on\nyour #####stamina gauge#####.")
			  case 1:
				switch (temp_flags[1 /* 0x1 02 */]) {
				  case 0:
					printf("######So will you help by finding Mia and\nbringing her back to me?\n#####Sure!#####Nah.")
					switch (choice(2, 0)) {
					  case 0:
						flw_2:
						printf("######Fantastic! So you'll do it?! I know\nyou're in a hurry, so I really appreciate\nyour taking the time to help.")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3328), ('param2', 0), ('next', 44), ('param3', 22)])
						printf("######You should be able to climb up\nsomewhere over there. If you hang off\nthat ledge there, you can climb onto\nthe roof from the other side.\n######I'm terribly sorry, but I know you're\nquite the climber! I really do\nappreciate it.")
						temp_flags[2 /* 0x1 04 */] = true;
						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
					  case 1:
						printf("######Ah, I see...\n\n\n\nCan you please tell the headmaster\nthat Instructor Horwell has found Mia\nand that he shouldn't worry?")
					}
				  case 1:
					switch (scene_flags[38 /* 0x5 40 */]) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 1), ('param3', 31)])
						printf("######So what are you up to? Rushing to get\nsome last-minute bird-riding practice\nin this morning, ####?\n\nOh? #####You have someone to meet?\n#####Ah, #####Zelda#####'s waiting for you, is she?")
						printf("Perfect timing, then!\n\n\n\nYou see, Zelda's father--Headmaster\n#####Gaepora#####--has a pet named #####Mia#####, and,\nwell...she's scampered off again.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 236), ('param3', 39)])
						printf("Look!##\n### Over there! Do you see her?\n\n\n\n##\n###The headmaster is so busy working\nwith Zelda preparing for the\nceremony...\n\nI thought that maybe I should feed her,\nbut the ceremony is about to start and\nI just put on a fresh set of clothes\nand, well...you see...\n######Will you help me out and go retrieve\nMia for me?\n#####I'm on it!#####I'm busy...")
						switch (choice(2, 0)) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 2), ('param3', 39)])
							goto flw_2
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 3), ('param3', 39)])
							printf("######Ah, I see...\n\n\n\nCan you please tell the headmaster\nthat Instructor Horwell has found Mia\nand that he shouldn't worry?")
							temp_flags[1 /* 0x1 02 */] = true;
							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
						}
					  case 1:
						switch (scene_flags[37 /* 0x5 20 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 67), ('param3', 39)])
							printf("######What are you waiting for?!\nListen to your instructor for once!")
						  case 1:
							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 100), ('next', 89), ('param3', 17)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 264), ('param3', 39)])
							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
							  case 0:
								printf("######Right, right. Use ##### to target\nsomething in the direction you're\nfacing.#####\n\n######You're looking at me like you already\nknow all this. There's no harm in\nreviewing the basics, you know.\n\n###########In Hero Mode#####...###########you'll #####lose hearts\ntwice as fast#####, so it's doubly important\nto know how to effectively ############### target.#####\n\nIt's a little silly to carry on a\nconversation from this distance.\nWhy don't you come join me up here?")
								flw_58:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 41), ('param3', 39)])
								printf("######You should be able to climb up if you\n#####dash##### up to the top of that wooden box, \ndon't you think?\n\nMove while holding ##### to #####dash#####.\nYou should be able to make that jump\nfairly easily!\n\nTry climbing up here!")
								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
							  case 1:
								printf("######Excellent! Always remember you can\npress ##### to target something.#####\n\n\nOnce you have #####targeted##### someone with\n#####, you can easily talk to him or her\nby pressing #####.#####\n\nAnd even when there isn't anything to\ntarget, #####pressing##### ##### is a convenient\nway to quickly face your view forward.#####\n\nOh, but it's a little silly to carry on a\nconversation from this distance.\nWhy don't you come join me up here?")
								goto flw_58
							}
						}
					}
				}
			}
		}
	}
}

void entrypoint_108_19() {
	start()
	printf("######Hey now! That's my seat that you've\nperched yourself on. Students must sit\nin the student seating!")
}

void entrypoint_108_02() {
	start()
	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
	  case 0:
		printf("######What are you doing? #####Dash #####off the ledge\nwith ###############, #####dive #####down, and get on your\nbird!\n\nRemember, you'll need to press ##### to\ncall your bird!#####")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 23), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 24), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 177), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 180), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 25), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 26), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 27), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 181), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 19), ('next', 15), ('param3', 13)])
		printf("######Your attention, please. At last we are\nready to begin the #####Wing C##########eremony#####.\n\n\nI was beginning to worry that we'd have\nto proceed without ####,\nbut luckily that is no longer a concern.\n\nI'm glad you could all make it. Before\nwe start, I'll explain the rules for\ntoday's competition.")
		flw_16:
		printf("I have attached a small statuette to this\nbird, who I will then release to the\nskies.\n\nOn my signal, press ##### to #####dash #####and\n#####dive #####off the ledge. Once you are in the\nair, mount your Loftwing.\n\nRemember to #####call your bird##### promptly\nwith ##### once you dive off the edge.#####\n\n\nWhoever catches the bird and claims\nthe statuette with ##### will be this year's\nchampion.\n\n##\n###Those are the rules. Simple enough,\nI should think, but do you need to hear\nthem again?\n#####Nope!#####Again!")
		switch (choice(2, 0)) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 17), ('param3', 39)])
			printf("###########Excellent.\n\n\n\nAs you well know, today's champion\nwill graduate to the next class, bringing\nhim one step closer to knighthood.\n\nHe will also receive a #####gift #####from the\nyoung woman chosen to play the role\nof the #####goddess #####in this year's ritual.\n\nToday is a special day for many\nreasons, but it is also the 25th\nanniversary of our fine institution.\n\nTo celebrate the occasion, today's\nchampion shall also receive his gift\nhigh #####atop the Statue of the Goddess#####. \n\nI hear the young woman performing\nthe role of the goddess this year has\ncrafted the gift herself.\n\nAnd as you all well know, the role of\nthe goddess this year will be\nperformed by...")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 267), ('param2', 3840), ('next', 178), ('param3', 13)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 175), ('param3', 39)])
			printf("###########The lovely Zelda!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1048), ('param2', 3084), ('next', 31), ('param3', 13)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 20), ('param3', 39)])
			printf("Let's see your finest flying out there.\nShow me just how hard you've\nbeen practicing.\n\nAlso, I want to see good, clean flying.\nAnyone caught interfering with other\nriders will answer to me!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 182), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 4), ('next', 183), ('param3', 50)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 512), ('param2', 23), ('next', 176), ('param3', 13)])
			printf("#####That goes ######double for you,\nGroose!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 184), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 53), ('param3', 50)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 39), ('param3', 33)])
			printf("######All right, gentlemen, line up. At my\ncommand, the competition will begin!")
			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
		  case 1:
			printf("#####RVery well... But listen close this time!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 16), ('param3', 39)])
			goto flw_16
		}
	}
}

