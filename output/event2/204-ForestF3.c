void entrypoint_204_25() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_116:
				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
				  case 0:
					flw_119:
					printf("If you make those spiky things #####explode#####,\nyou're in for a world of hurt. They're\nlike bombs!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 31)])
					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
					goto flw_119
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_116
		}
	}
}

void entrypoint_204_26() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_138:
				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
				  case 0:
					flw_141:
					printf("Tadtones get along with everybody.\nYou can usually find them where\n#####other fish are swimming#####.")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 140), ('param3', 31)])
					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
					goto flw_141
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_138
		}
	}
}

void entrypoint_204_09() {
	start()
	printf("######Hey, ####! Some nasty\nfish seem to have swam their way into\nthe flooded woods. I'd hate to bump \ninto those things underwater, kewww!\nWatch your toes!")
}

void entrypoint_204_27() {
	start()
	printf("The woods have been flooded!")
}

void entrypoint_204_10() {
	start()
	printf("######Oh, ####! \nYou've gathered all the Tadtones,\nhaven't you? That's no small feat! Or \nshould I say no small beat, kewwwww!\nAhem... Anyway, hurry and return to\nthe #####Water Dragon#####!")
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
}

void entrypoint_204_28() {
	start()
	printf("The Water Dragon is furious!")
}

void entrypoint_204_29() {
	start()
	printf("There aren't as many monsters in the\nwoods anymore.")
}

void entrypoint_204_12() {
	start()
	printf("It's a human!\n\n\n\nThe current is strong beyond this\npoint. It's too swift for a human like\nyou to swim through, so you better\nuse the exit over there.")
}

void entrypoint_204_30() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 145), ('param3', 35)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 42), ('param3', 16)])
	printf("Signs indicate this is a reference to\nyour #####dowsing##### ability.\n\n\nIt is a valid suggestion, ######Master. I am\nfamiliar with the unique aura\nsignatures of Tadtones.")
	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 9), ('next', 53), ('param3', 56)])
	printf("I will calibrate your ###########dowsing##### ability to\nlocate Tadtones. This capability should\nprove to be quite useful in your search.\n\nHowever, please note that you #####cannot\nuse your dowsing ability underwater#####.")
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
}

void entrypoint_204_13() {
	start()
	printf("Hey, hey! The current is pretty strong\npast here. If you're heading outside,\nyou better use the exit above!")
}

void entrypoint_204_31() {
	start()
	printf("The woods are a lake now!")
}

void entrypoint_204_14() {
	start()
	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
	  case 0:
		printf("")
	  case 1:
		printf("")
	}
}

void entrypoint_204_32() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_191:
				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
				  case 0:
					flw_194:
					printf("Tadtones store oxygen in their bodies,\nso when you catch one, it will #####restore\nsome of your air#####.")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 193), ('param3', 31)])
					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
					goto flw_194
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_191
		}
	}
}

void entrypoint_204_01() {
	start()
	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
	  case 0:
		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
		  case 0:
			printf("######Yeah, the forest's flooded, ka-roo, but\nI'm holding up! Give my best to the\n#####Water Dragon#####!")
		  case 1:
			switch (scene_flags[25 /* 0x2 02 */]) {
			  case 0:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					flw_123:
					printf("######I'll teach you something useful.\nSome rocks will roll away if you\nattack them, kwi-koo!")
				  case 1:
					printf("######Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
				}
			  case 1:
				goto flw_123
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 1), ('param3', 31)])
		printf("######Koro-koo! ######I was so shocked when\nwater started flowing out of the\n#####Great Tree's roots#####!\n\n######Kwee... How am I supposed to hide\nwhen the whole forest is underwater?\nI hope things go back to normal soon!")
	}
}

void entrypoint_204_02() {
	start()
	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
	  case 0:
		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
		  case 0:
			printf("######Oh, when will this water go away?!\nI can't swim, kik-kwoo!")
		  case 1:
			switch (scene_flags[25 /* 0x2 02 */]) {
			  case 0:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					printf("######I don't care if you go dowsing or\ndiving or what, kwi-koo. Just please\nfind those Tadtones!")
				  case 1:
					printf("######Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
				}
			  case 1:
				printf("######The #####Water Dragon##### flooded the forest?\nKew-aroo! She's probably planning to\neat us all when we're soggy!")
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 4), ('param3', 31)])
		printf("######We're finished, kew! What'll become\nof our forest? It's so...wet.")
	}
}

void entrypoint_204_03() {
	start()
	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
	  case 0:
		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
		  case 0:
			printf("######Yeah, the forest's flooded, karoo, but\nI'm holding up! Give my regards to the\n#####Water Dragon#####!")
		  case 1:
			switch (scene_flags[25 /* 0x2 02 */]) {
			  case 0:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					flw_131:
					printf("######Kik-kwee! If you want to know more\nabout Tadtones, you should talk to the\nParella. They know all about them.\n#####Parella?#####I know.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 110)])) {
					  case 0:
						printf("######They're those water-dwelling folks with\nthe pointy mouths, kwee-koo!")
						flw_179:
						printf("######If you run into one in the water, kweek,\nsee what it has to say!")
					  case 1:
						goto flw_179
					}
				  case 1:
					printf("######Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
				}
			  case 1:
				goto flw_131
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 7), ('param3', 31)])
		printf("######All this started after the #####Water Dragon#####\nshowed up, kera-kwoo! This flood must\nbe her fault!")
	}
}

void entrypoint_204_20() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_105:
				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
				  case 0:
					flw_31:
					printf("You can catch those rogue #####Tadtones#####\nwith a #####spin#####! It will pull them toward\nyou so you can grab them.\n\nOh... #####But I guess you humans #####use up air\n#####when you do that, so don't go\noverboard!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 31)])
					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
					goto flw_31
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_105
		}
	}
}

void entrypoint_204_04() {
	start()
	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
	  case 0:
		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
		  case 0:
			printf("######Hurry back to the #####Water Dragon#####, kwee!")
		  case 1:
			switch (scene_flags[25 /* 0x2 02 */]) {
			  case 0:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					printf("######Try dowsing, kwook, and find the\nTadtones!")
				  case 1:
					printf("######Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
				}
			  case 1:
				printf("######As you collect Tadtones, kew-kwee,\nyou'll fill in the musical score.\nKeep searching till you find them all!")
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 10), ('param3', 31)])
		printf("######Kee-paleep! I saw the #####Water Dragon#####!\nShe must be hiding around here\nsomewhere!")
	}
}

void entrypoint_204_21() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_108:
				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
				  case 0:
					flw_111:
					printf("The pretty bubbles are #####poisonous#####.\nBe careful! If you breathe one in,\nyou'll #####choke#####!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 110), ('param3', 31)])
					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
					goto flw_111
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_108
		}
	}
}

void entrypoint_204_05() {
	start()
	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
	  case 0:
		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
		  case 0:
			printf("######Off you go, now! Hurry and return to\nthe #####Water Dragon#####!")
		  case 1:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				printf("######Yes, yes! That's it! Dowsing! Use your\ndowsing ability, and you'll find the rest\nof those Tadtones in no time flat! ...Or\nis it sharp? Ahem...kewww...")
			  case 1:
				switch (scene_flags[25 /* 0x2 02 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 52), ('param3', 31)])
					printf("######Kewwww... How nice to see you again,\n####!\n\n\nHow goes the #####Tadtone##### gathering?\nI'd actually thought of something\nyou might be interested to know.\n\n######You see, it's like...hrmm... How\nshould I explain this, kewwww?\n\n\nThere was a technique you used when\nsearching for the others of my tribe,\nremember? That!\n\n######Use that thing you do, kewww, and\nyou'll have a much easier time getting\nthose Tadtones!")
					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
				  case 1:
					printf("######Oh, ####.\n\n\n\n######What's this? The #####Water Dragon##### caused\nthis flood? So the old girl finally grew\nangry with all the monsters running\nabout the forest, kewwww?\n######...The woods won't be getting drier\nanytime soon, kewwww...")
				}
			}
		}
	  case 1:
		switch (scene_flags[27 /* 0x2 08 */]) {
		  case 0:
			printf("######All of a sudden water came gushing\nfrom the #####base of the tree #####and flooded\nthe entire woods, kewwwww.\n\n######But, you know...I rather like it this\nway! Oh ho ho!")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 13), ('param3', 31)])
			printf("######Oh, kewwwwww. You.#####.#####.##### You're that one\nfrom before. Come to think of it, I'd\nforgotten to ask your name.\n\n######...#####I see. ########, is it?\nNow there's an odd name, kewwwww.\n######Ah...\n\nWhat brings you to see me?\n#####This water!#####The woods...")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 104)])) {
			  case 0:
				flw_162:
				printf("######Kewwww, it's good to see you again!\nYes, things look a bit different here,\ndon't they?\n\n######The water came gushing out of the #####base\nof the tree##### behind me###### and flooded the\nentire woods.\n\n######I don't know what caused it,\nbut I suppose it will clear out the\nmonster infestation, kewww, so you\nwon't hear me complaining!")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 165), ('param3', 6)])
				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
			  case 1:
				goto flw_162
			}
		}
	}
}

void entrypoint_204_22() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
		  case 0:
			switch (scene_flags[25 /* 0x2 02 */]) {
			  case 0:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					flw_76:
					printf("Some Tadtones hang out in groups.\nYou have to catch those similar\nTadtones #####one right after the other#####, or\nthey'll swim out of your score.\nIf you want to catch a bunch at once,\nuse a #####spin maneuver##### to #####draw in##### nearby\nTadtones. That's your best bet.")
				  case 1:
					printf("The woods have been flooded!")
				}
			  case 1:
				goto flw_76
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 66), ('param3', 31)])
			printf("Hey, are you collecting Tadtones?\n#####Yep.#####Nope.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 46)])) {
			  case 0:
				printf("I'll let you in on a secret, then.\n\n\n\nSome Tadtones hang out in groups.\nYou have to catch those similar\nTadtones #####one right after the other#####, or\nthey'll swim out of your score.\nIf you want to catch a bunch at once,\nuse a #####spin maneuver##### to #####draw in##### nearby\nTadtones. That's your best bet.\n\nAside from that...#####it's really just a\nmatter of keeping at it!")
				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
			  case 1:
				printf("Oh...sorry.")
			}
		}
	}
}

void entrypoint_204_06() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
		  case 0:
			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
			  case 0:
				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
				flw_34:
				changeScene(7, 0) // 
			  case 1:
				goto flw_34
			}
		  case 1:
			goto flw_34
		}
	  case 1:
		printf("######If you wish to earn my favor, gather\nthe #####Tadtones##### and return to me.")
	}
}

void entrypoint_204_23() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_112:
				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
				  case 0:
					flw_115:
					printf("If you don't collect Tadtones of the\nsame color #####one right after another#####,\nthey'll wriggle out of your score.\nBut don't work yourself into a panic!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 114), ('param3', 31)])
					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
					goto flw_115
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_112
		}
	}
}

void entrypoint_204_24() {
	start()
	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
	  case 0:
		printf("Hurry back! The #####Water Dragon #####is\nwaiting!")
	  case 1:
		switch (scene_flags[25 /* 0x2 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				flw_96:
				switch (scene_flags[24 /* 0x2 01 */]) {
				  case 0:
					switch (scene_flags[70 /* 0x9 40 */]) {
					  case 0:
						flw_98:
						printf("The #####ferocious fish##### are baaaaack!\nSWIM FOR YOUR LIFE!\n\n\nThey can't follow you if you dive\n#####deep#####!")
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 197), ('param3', 31)])
						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
						goto flw_98
					}
				  case 1:
					printf("Those big fish are scary. They charge\nyou for no reason! So testy... I'm glad\nnone of them are around right now.")
				}
			  case 1:
				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
			}
		  case 1:
			goto flw_96
		}
	}
}

void entrypoint_204_07() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 155), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 156), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 158), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 157), ('param3', 6)])
	printf("######Kewwwwww, ####!\nCan you hear me?\n\n\nI thought up something good! Why\ndon't you come and chat with me for a\nmoment, kewwwwwww.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

