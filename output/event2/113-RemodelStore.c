void entrypoint_113_33() {
	start()
	printf("######Hey, kid! You're a little short on\nmaterials. You don't have enough\n##########s#####.\n\nMy grandpa's notes say you can get\nthese from monsters that look like\nlizards.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 175), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_34() {
	start()
	printf("######Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough ###############.\n\nMy grandpa's notes say you can find\nthat stuff buried within fiery\nmountains.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 180), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_35() {
	start()
	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
	  case 0:
		printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nMy grandpa's notes say these blooms\nused to grow all over a sandy land.\nIt's the same type of flower you used\nto fix Scrapper, remember?")
		flw_188:
		printf("######So, is there anything else you want to\nupgrade?")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 184), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
	  case 1:
		printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nMy grandpa's notes say these things\nused to bloom out in sandy land, but\nwho knows if there are still any around\nout there.")
		goto flw_188
	}
}

void entrypoint_113_01() {
	start()
	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
	  case 0:
		printf("######Hey, kid! How's #####Scrapper##### treating\nyou? Anything to upgrade today?\n#####Upgrade.#####Repair shield.#####No, thanks.")
		flw_4:
		switch (choice(3, 1)) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 7)])) {
			  case 0:
				printf("######You got it! These are all the items you\nhave that I can upgrade right now.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
			  case 1:
				printf("######Hey, kid! You don't have anything\nI can upgrade for you right now...\nHow about you head over to Rupin's\nshop and buy something?")
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 2), ('param3', 14), ('param4', 2), ('param5', 19)])) {
			  case 0:
				printf("######These are the shields you can repair\nright now.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
			  case 1:
				printf("######What's all this nonsense? You don't\neven have any shields that need fixing!\n\n\nHaven't you got something better to\ndo than play jokes on hardworking\nfolks like me who are neck deep in\nelbow grease?")
			}
		  case 2:
			printf("######What the whazzit? Well then, why'd\nyou even come and talk to me?!")
		}
	  case 1:
		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
		  case 0:
			printf("######So...take good care of #####Scrapper#####\nfor me, will you? By the way, he can\nsense people's thought waves or\nsomething...\n######That means wherever you are, if you\nneed him, he'll be there in a jiffy!\n\n\nHe's got kind of a mean little mouth on\nhim, but if he's in a good mood, he'll\nwork hard for you!\n#####Anyway, enough of my yappin'!")
			printf("######So how 'bout another upgrade?\nI'll repair your shield too!\n#####Upgrade.#####Repair shield.#####No, thanks.")
			goto flw_4
		  case 1:
			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 40), ('param3', 31)])
				printf("######Hey, kid! What's up? You look like you\nneed to get something off your chest...\n\n\nI think I know what it is. You've got a\nfavor to ask me, right?\n#####Yes.#####Not really.")
				switch (choice(2, 0)) {
				  case 0:
					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
					  case 0:
						printf("######If you want me to get #####Scrapper##### here\nworking again, I need one #####Ancient\nFlower#####. But I dunno where they are.\n#####I have one!#####Me neither.")
						flw_84:
						switch (choice(2, 0)) {
						  case 0:
							printf("######WHAT?! You have one?! Are you\nkiddin' me?! That's amazing!")
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 11)])) {
							  case 0:
								printf("######Hold it#####... Why would you say you have\none when you really don't?! That's a\ndirty trick, kid.")
								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 101), ('param3', 47)])
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 100), ('param3', 39)])
								OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 356), ('next', 99), ('param3', 15)])
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 42), ('param3', 48)])
								printf("######So this is an #####Ancient Flower#####?!\nI can feel some slick, oily stuff coming\nout of its stem! Great, with this we can\nfix #####Scrapper#####!\n######...Wait right here! I'll have him up and\nrunning in no time!")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 61), ('param3', 42)])
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', -1), ('param3', 33)])
							}
						  case 1:
							printf("######Yeah, who has, right?\nBut if I just had one #####Ancient Flower#####...")
							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
							loadzone_temp_flags[3 /* 0x9 08 */] = false;
						}
					  case 1:
						printf("######...Huh? ####(It's about this old robot my\ngrandpa used to tinker around with?\n\n\n######...You probably just came here to make\nfun of the crazy junk guy for believing\nin his grandpa's stupid stories, right?\n\nWell, get in line... I've heard it before.####(\nWait... That's not why you're here?\nYou say you need to pick up something\nfrom below the clouds with this robot?\n######Do you know what that means?!\nThat means...you believe in my\ngrandpa's stories too, don't you?!")
						printf("######Well, I'm happy to hear that someone\nelse believes me, but I don't think I can\nhelp you. You see, my grandpa's old\nrobot... What's it called again...")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 95), ('param3', 39)])
						printf("Oh, hey, that's right... I remember!\nHis name is #####Scrapper#####. He may not be\nmuch to look at these days...\n\nBut he was an amazing robot once!\nWhen you called him, he would go\nanywhere and haul anything!\n\nSadly, as you can see now#####...#####he's just\nanother busted ol' hunk of junk...")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 97), ('param3', 39)])
						printf("######But old Gramps did tell me this:\nyou can get him working again with the\nextract from an #####Ancient Flower#####.\nIt's like oil to this guy.\n######But I've never even heard of, much less\nseen, any such thing!\n#####Take mine!#####Me neither.")
						goto flw_84
					}
				  case 1:
					flw_25:
					loadzone_temp_flags[4 /* 0x9 10 */] = false;
					printf("######Heyyyyy! Welcome to the Scrap Shop!\nI can use the stuff you find to upgrade \nyour gear and make it even stronger!\n\nAnd if your shield takes a beating, no\nworries. I can fix that too.\nSo what'll it be?\n#####Upgrade gear.#####Fix shield.#####Never mind.")
					goto flw_4
				}
			  case 1:
				goto flw_25
			}
		}
	}
}

void entrypoint_113_36() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nMy grandpa's notes say you can find\n##########s##### on the common in lots of\ndifferent places. Seems like it's one\ntreasure that's not so hard to find.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 190), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_02() {
	start()
	printf("######All right. You want to upgrade this?\nThere's no going back, y'hear?\n#####Go for it!#####Never mind.")
	switch (choice(2, 0)) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 10), ('param3', 33)])
		printf("######OK! You just wait right there!")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 12), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 14), ('param3', 33)])
		printf("######All done! Here you go!")
		loadzone_temp_flags[4 /* 0x9 10 */] = true;
	  case 1:
		printf("######Make up your mind, little buddy!\nTry picking something else.")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 18), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
	}
}

void entrypoint_113_37() {
	start()
	printf("######Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough ##########s#####.\n\nMy grandpa's notes say you can find\nthese in the \"world of the spirit\"...\nwhatever that's supposed to mean.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 195), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_03() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 27), ('param3', 12)])
	switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
	  case 0:
		printf("######Oh, thanks! Come again soon, y'hear!######")
		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
		flw_143:
		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
		  case 0:
			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
			  case 0:
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 51)])
				printf("A report, ######Master.\n\n\n\nBecause of the improvement to your\nsword, you can now use your dowsing\nability to locate #####treasure#####.\n\nPlease use the additional entry in\nyour dowsing target list at your\nleisure and convenience.")
				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 18), ('next', 147), ('param3', 56)])
				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
			}
		  case 1:
		}
	  case 1:
		printf("######Hold on now... You changed your \nmind? Well, in all the...\n\n\n######Ehh, it's fine. Come see me whenever\nyou change it back, little buddy!######")
		goto flw_143
	}
}

void entrypoint_113_20() {
	start()
	printf("#####e######Phew#####...##### There you go!######")
}

void entrypoint_113_38() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nMy grandpa's notes say you can get\nthat disgusting stuff from soft,\nsquishy monsters.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 200), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_04() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 35)])) {
	  case 0:
		printf("If you've got anything else you want\nme to tinker around with, you just let\nme know!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
	  case 1:
		printf("Huh. Looks like you don't have\nanything else I can upgrade.\nCome again soon!")
	}
}

void entrypoint_113_21() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 62), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 22), ('next', 63), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 43), ('param3', 16)])
	printf("######Thank you, BZZRT! I've got a full tank\nof energy, and I'm ready to carry\nanything, zzzzt!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 119), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 113), ('param3', 16)])
	printf("###########Huh...?##### Who is this green-clad\nindividual of small stature?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 22), ('next', 44), ('param3', 50)])
	printf("######WHOA! It talked! Can you believe\nthat? I guess I really did fix him!\n\n\nThis kid gave me the materials I\nneeded to fix you. Go on!\nSay thank you!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 45), ('param3', 16)])
	printf("######...Hmmm. Are you sure it was him,\ngrrzt?\n\n\n######...Well then, I extend my reluctant\nthanks to you in a gesture of obligatory\ngratitude, vrrrrrrt-CHONK.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 22), ('next', 46), ('param3', 50)])
	printf("######Heyyyy now! Watch it! That's no way\nto talk to someone who just saved\nyour life!\n\n######...Anyway, this kid wants you to haul\nsome stuff around, and you're going\nto help him!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 47), ('param3', 16)])
	printf("######Hmmph. This individual may have\nrestored my operations, but I am not\ninclined to offer assistance, zrrt.\n\n######Serving children is very low in my task\npriority, dzzt!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 114), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 67), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 48), ('param3', 16)])
	printf("######Master ####...\n\n\n\nMaterials from the windmill have\nyielded a signal that you may search\nfor with your ###########dowsing #####ability. Use it to\nlocate the fallen #####propeller#####.")
	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 12), ('next', 154), ('param3', 56)])
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
	printf("However, it will not be possible to\ncarry the item in your pouch and\nreturn to the sky.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 130), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 22), ('next', 115), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 3), ('next', 49), ('param3', 50)])
	printf("######Who are you?!\n######ZRRPT-FOOOSH!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 129), ('param3', 39)])
	printf("######Your name is...Fi? Dzzt! Should I call\nyou Mistress Fi? Are you looking for\nsomething, Mistress Fi?")
	printf("######I... #####I understand, vrrt!\n\n\n\n######At your request, I will carry anything,\nregardless of weight or destination...\nwhizzt!")
	printf("###########......#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 88), ('param3', 16)])
	printf("######Master...\n\n\n\nWe now have the means to bring the\npropeller back to Skyloft. You may\nimmediately begin your search for the\n#####Windmill Propeller#####.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 90), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 100), ('next', 127), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 89), ('param3', 39)])
	printf("######Master Shortpants! I offer\nassistance! I can now detect Mistress\nFi's thought waves, vrrt!\n\n######Should you need me, ask Mistress Fi to\ncall me, and I will arrive with haste,\nbzzat!")
	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 150), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 134), ('param3', 50)])
	printf("######So how do you plan to recover all the\nstuff that fell beneath the clouds?\n\n\nYou know, you could always ask the\n#####fortune-teller #####over there...\n\n\nI know he's kind of goofy looking,\nbut when it comes to finding things,\nhe's always right on the money.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 142), ('param3', 42)])
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
	loadzone_temp_flags[3 /* 0x9 08 */] = false;
}

void entrypoint_113_39() {
	start()
	printf("######Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough ##########s#####.\n\nMy grandpa's notes say you can get\n##########s##### from flying monsters,\nincluding the ones that come out \naround here at night.")
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		printf("######Hmm...though now that I think of it,\nnights around here have been strangely\nmonster free lately!")
		flw_208:
		printf("######So, is there anything else you want to\nupgrade?")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 204), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
	  case 1:
		goto flw_208
	}
}

void entrypoint_113_05() {
	start()
	printf("######Hey, kid! I can't upgrade that if you\nhaven't got the treasure I need to do it!\n\n\n######Come on. Pick something else\nfor me to upgrade for you!")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 24), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_06() {
	start()
	printf("######Hey, kid! You don't have enough\nRupees. I don't do charity upgrades!\n\n\n######Pick something else for me to upgrade\nfor you!")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 23), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_40() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nGrandpa's notes say you can get 'em\nfrom monsters that use them to call\ntheir buddies, but you'd need to pull\n'em out of their hands using something.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 210), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_07() {
	start()
	printf("######Hey, kid! You don't have anything\nI can upgrade for you right now...\nHow about you head over to Rupin's\nshop and buy something?")
}

void entrypoint_113_41() {
	start()
	printf("######Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough ##########s#####.\n\nAccording to my grandpa's notes,\nyou can sometimes get these from\nmonsters that carry clubs...")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 215), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_08() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 73), ('param3', 12)])
	printf("######OK. One shield in need of patching up.\nThat'll be #####10 rupees#####.\n#####OK!#####No, thanks.")
	switch (choice(2, 0)) {
	  case 0:
		switch (has_rupees(10)) {
		  case 0:
			rupees += -10;
			printf("######OK! You just wait right there!")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 121), ('param3', 12)])
			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 80), ('param3', 33)])
			printf("######All done! Here you go!")
		  case 1:
			printf("######Hey, kid! You don't have enough\nRupees! Go find some and come back!")
		}
	  case 1:
		printf("Not interested, huh? Do you need me\nto fix anything else?")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
	}
}

void entrypoint_113_42() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nAccording to my grandpa's notes, you\ncan get 'em by slaying monsters who\nhave the power to curse you...")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 220), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_09() {
	start()
	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 2), ('param3', 14), ('param4', 2), ('param5', 29)])) {
	  case 0:
		printf("######Hey, kid! You want me to fix any of\nyour other shields?")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 33)])
	  case 1:
		printf("######Hey, kid! Looks like you're out of\nshields that need repairing.\nSee you later!")
	}
}

void entrypoint_113_43() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nMy grandpa's notes say you can get\nthese feathers from the rare little\nblue birds living in wooded areas.\nYou'll need a Bug Net, though!")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 224), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_44() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\n##############s##### are #####s\nthat shine bright like gold. Seems like\nthey are crazy rare!")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 230), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_45() {
	start()
	printf("######Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough ##########s#####.\n\nThey're very rare and extremely\nvaluable, or at least that's what it says\nhere in my grandpa's notes.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 235), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_30() {
	start()
	printf("######Hey, kid! It looks like you're a bit short\non materials. You don't have enough\n###############.\n\nMy grandpa's notes say you can find\nthe stuff in some of the Deku Hornet\nhives found in heavily wooded areas.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 160), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_31() {
	start()
	printf("######Hey, kid! It looks like you're a bit short\non materials. You don't have enough\n##########s#####.\n\nMy grandpa's notes say you can find\nthese feathers on little birds living in\nwooded areas. If you find one, you'll\nneed to use your Bug Net to catch it.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 164), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_113_32() {
	start()
	printf("######Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough ##########s#####.\n\nMy grandpa's notes say you can find\n##########s##### rolling around in the\ndesert. You'll need a net to catch them,\nthough.")
	printf("######So, is there anything else you want to\nupgrade?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 170), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

