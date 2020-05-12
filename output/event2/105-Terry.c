void entrypoint_105_35() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 73), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 84), ('param3', 13)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_41:
		printf("That's a #####Life Medal#####! It bestows a bunch\nof mysterious and mystical effects on\nwhoever carries it!\n\nWhat kind of effects####\n.####\n.####\n.####\n? Don't ask me--\nI don't actually know! You should find\nout for yourself.\n\nI'm pretty sure it's a real bargain at\n#####800 Rupees#####, though! How about it?\n#####I'll buy it!#####No, thanks.")
		flw_13:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 105), ('param2', 8), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("That's a #####Life Medal#####! It bestows a bunch\nof mysterious and mystical effects on\nwhoever carries it!\n\nWhat kind of effects####\n.####\n.####\n.####\n? Don't ask me--\nI don't actually know! You should find\nout for yourself.\n\nToday, I'm slashing the price and\noffering it half off! Usually #####800\nRupees#####, now just #####400 Rupees#####! Want it?\n#####OK!#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_41
		}
	}
}

void entrypoint_105_01() {
	start()
	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
	  case 0:
		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 67), ('param3', 13)])
			printf("Oh, hello! I'm so glad to see you back\nat Beedle's Airshop! Let me know\nif you're interested in any of my items.")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 65), ('param3', 13)])
			printf("Oh! You are the wonderful boy who\nfound my #####Horned Colossus Beetle#####!\n\n\nTo thank you, you can choose any single\nitem here and I will sell it to you at half\nprice.")
		}
	  case 1:
		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 164), ('param3', 31)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 162), ('param3', 13)])
			printf("Ah! Welcome!\n\n\n\nWhat?! You found something?!\nIf I try to talk about it now, we\nmight crash...\n\nWhy don't we talk later this evening?\nYou can rest on that bed over there\nuntil it's night.")
		  case 1:
			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 165), ('param3', 13)])
				printf("Oh! Welcome, customer...\n\n\n\nPlease, help me! My #####Horned Colossus\nBeetle #####is missing!\n\n\nIt may look like it takes everything\nI've got to keep this place afloat, but I\ncan't get the thought of my poor lost\nbeetle out of my head!")
			  case 1:
				switch (scene_flags[16 /* 0x3 01 */]) {
				  case 0:
					switch (loadzone_temp_flags[13 /* 0x8 20 */]) {
					  case 0:
						flw_1:
						printf("Want to know why I'm on a bicycle?\n#####Yeah, why?#####Not really.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 4)])) {
						  case 0:
							printf("######Aren't you a curious one!\n\n\n\nI pedal this bike to generate enough\nelectricity to keep this place in the air!\nPlus, all this pedaling has got me in\nfantastic shape!\nYep, I'd say my lifestyle is pretty\n#####ecofriendly#####! But, uh...with you on\nboard, there's plenty of extra weight,\nso I have to pedal as hard as I can...")
							flw_27:
							printf("Oh, sorry! #####...#####I don't mean to be rude!\nPlease have a look around. I've got\nall kinds of great stuff!")
							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', -1), ('param3', 4)])
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1558), ('next', 28), ('param3', 13)])
							printf("Fine, then. Just don't break my\nconcentration!\n\n\nWith you on board, I have to pedal as\nhard as I can because of all the\nEXTRA WEIGHT...")
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 27), ('param3', 13)])
							goto flw_27
						}
					  case 1:
						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
						  case 0:
							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2838), ('next', 188), ('param3', 13)])
								switch (loadzone_temp_flags[12 /* 0x8 10 */]) {
								  case 0:
									printf("Oh! If you want, you can take a nap\non the bed over there. We can talk\ntonight when I can stop pedaling!")
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 187), ('param3', 31)])
									printf("######Oh####\n.####\n.####\n.####\n Valued customer...##### You're back####\n.####\n.####\n.####\n\n\n\n\nWhat?##### I don't seem like my usual self?\n\n\n\nI can't hide anything from you, can I?\n\n\n\nWell, I can't talk about it right now\nbecause I'm busy pedaling.\nWhy don't you lie down on the bed over\nthere and rest? We can talk tonight.")
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', -1), ('param3', 4)])
								}
							  case 1:
								goto flw_1
							}
						  case 1:
							goto flw_1
						}
					}
				  case 1:
					goto flw_1
				}
			}
		}
	}
}

void entrypoint_105_36() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 138), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 149), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 140), ('param3', 4)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_145:
		printf("That thing right there will allow you\nto carry one additional item in your\n#####Adventure Pouch#####!\n\nFor an adventurer like yourself, it\nhas to be the most amazing item ever\nimagined. And it costs just #####600########## Rupees#####.\n\nWhat? Me, raise prices? Never!\nYou're obviously hallucinating! So\nhow about it? Only #####600########## Rupees#####.\n#####OK!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("That thing right there will allow you\nto carry one additional item in your\n#####Adventure Pouch#####!\n\nFor an adventurer like yourself, it\nhas to be the most amazing item ever\nimagined. And it costs just #####300########## Rupees#####.\n\nIt's usually #####600 Rupees#####, so you'd\nbe getting an incredible deal.\nSo, want to buy it? Only #####300########## Rupees#####.\n#####OK.#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_145
		}
	}
}

void entrypoint_105_02() {
	start()
	printf("######Oh! You've come all this way?\nIt's so rare to have a customer here!\n\n\nBeedle's Airshop has everything you\ncould ever want. Please, take a look\naround!\n\nAnd if you actually buy something,\nthat would be even better!")
}

void entrypoint_105_37() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 142), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 144), ('param3', 13)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_147:
		printf("This thing will open up another space\nin your #####Adventure Pouch#####. It's my last\none, so it's, uh...a little expensive!\n\nThe price is #####1,200 Rupees#####. If I were\nyou, I'd think hard about whether I\nreally need it or not...\n#####I need it!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("This will open up another space in\nyour #####Adventure Pouch#####. It's my last one,\nso it's pretty expensive, I'm afraid!\n\nI usually sell it for #####1,200 Rupees#####.\nBut just for you, I'll sell it right now\nfor #####600 Rupees#####.\n\nStill, that's a lot of Rupees. If I were\nyou, I'd think carefully about whether\nI really need it...\n#####I need it!#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_147
		}
	}
}

void entrypoint_105_38() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 179), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 181), ('param3', 13)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_182:
		printf("That right there is a #####Bug Medal#####.\nAs long as you're carrying that, you'll\nbe able to see on your map where\nbugs can be found.\nQuite expensive, but if you like\ncatching bugs, it's indispensable! I'll\nsell it for #####1,000 Rupees#####. Wanna buy it?\n#####OK!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("That right there is a #####Bug Medal#####.\nAs long as you're carrying that, you'll\nbe able to see on your map where\nbugs can be found.\nQuite expensive, but if you like to\ncatch bugs, it's indispensable!\n\n\nI usually sell this for #####1,000 Rupees#####, but\ntoday I can offer it to you for just\n#####500 Rupees#####. How about it?\n#####OK!#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_182
		}
	}
}

void entrypoint_105_05() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 4), ('param3', 13)])
	printf("Oh! Your #####pouch##### is full! You can't\ncarry any more stuff!\n\n\nYour space at the Item Check is\ncompletely full as well?\n\n\nWell, hurry up and free up some space\nin your #####pouch##### or at the #####Item Check#####,\nand then come back!")
}

void entrypoint_105_06() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1558), ('next', 35), ('param3', 13)])
	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
	  case 0:
		flw_5:
		printf("Oh no! You don't have enough Rupees!\nLook at my face. If that's your idea of\na joke, I'm not laughing!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 152), ('param3', 5)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', -1), ('param3', 5)])
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			goto flw_5
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 5), ('param3', 4)])
			goto flw_5
		}
	}
}

void entrypoint_105_07() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 1304), ('next', 7), ('param3', 13)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("Oh! Thank you ever so much! You've\ngiven me the strength to keep pedaling!")
		flw_33:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 34), ('param3', 5)])
		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 105), ('param2', 11), ('next', -1), ('param3', 7)])
	  case 1:
		printf("Oh! It really suits you!")
		goto flw_33
	}
}

void entrypoint_105_08() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 37), ('param3', 13)])
	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
	  case 0:
		flw_11:
		printf("Oh! Please take a look at the other\nthings I have for sale.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 154), ('param3', 5)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', -1), ('param3', 5)])
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			goto flw_11
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 11), ('param3', 4)])
			goto flw_11
		}
	}
}

void entrypoint_105_09() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 30), ('param3', 13)])
	printf("Oh! Please wait a moment!")
}

void entrypoint_105_10() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 28), ('next', 31), ('param3', 13)])
	printf("Do you know how heavy you are?!\nI have to pedal extra hard with you\nup here!\n\nThen you have the gall to leave without\nbuying anything? Off with you!")
	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
}

void entrypoint_105_11() {
	start()
	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
	  case 0:
		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
		flw_157:
		switch (loadzone_temp_flags[10 /* 0x8 04 */]) {
		  case 0:
			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
			flw_159:
			switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
			  case 0:
				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
			  case 1:
			}
		  case 1:
			goto flw_159
		}
	  case 1:
		goto flw_157
	}
}

void entrypoint_105_30() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 31), ('next', 18), ('param3', 13)])
	printf("Oh! Unfortunately, that sign means the\nitem is sold out.\n\n\nThanks to you, I've done a lot more\nbusiness than usual, so I'm having\ntrouble keeping the store stocked.")
}

void entrypoint_105_31() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 49), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 150), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 69), ('param3', 4)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_19:
		printf("That'll increase the number of items\nyou can carry in your ##########Adventure\nPouch##### #####by one!\n\nIt has to be the most useful thing\nimaginable for an adventure! And yet\nit costs a mere #####300 Rupees#####.\n#####I'll take it!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("That will let you carry one additional\nitem in your #####Adventure Pouch#####!\n\n\nIf you're on an adventure, this has to\nbe the most useful thing you can\nimagine. And it's half price just this\nonce! It's yours for #####150 Rupees#####.\n#####I'll take it!#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_19
		}
	}
}

void entrypoint_105_32() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 70), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 76), ('param3', 13)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_20:
		printf("Oh! You have great taste in things...\nIsn't it shiny? I found it someplace\nnearby.\n\nTo be honest, I have no idea what it's\nfor, but I'll sell it to you for\njust #####1,600 Rupees#####!\n#####OK!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("Oh! You have great taste in things...\nIsn't it shiny? I found it someplace\nnearby.\n\nTo be honest, I have no idea what it's\nfor, but I'm pricing it at #####1,600 Rupees#####!\n\n\nHowever, you can have it at half price\ntoday for only #####800 Rupees#####. Is it a deal?\n#####OK!#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_20
		}
	}
}

void entrypoint_105_33() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 71), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 79), ('param3', 13)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_22:
		printf("That's an #####Extra Wallet#####. It's amazingly\nuseful!\n\n\nWith this, you can carry an extra\n300 Rupees in your wallet!\n\n\nSay good-bye to all those times you\ncouldn't pick up another Rupee because\nyour wallet was stuffed full!\nLeave no Rupee behind!\nEven you must be able to see just how\nuseful this item is, and all for only\n#####100 Rupees#####. Want to buy it?\n#####OK!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("That's an #####Extra Wallet#####. It's amazingly\nuseful!\n\n\nWith this, you can carry an extra\n300 Rupees in your wallet!\n\n\nSay good-bye to all those times you\ncouldn't pick up another Rupee because\nyour wallet was stuffed full!\nLeave no Rupee behind!\nIt's usually #####100 Rupees#####, but I'll sell it to\nyou now for #####50############### #####Rupees#####. How about it?\n#####I'll take it!#####No, thanks.")
			goto flw_13
		  case 1:
			goto flw_22
		}
	}
}

void entrypoint_105_50() {
	start()
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		printf("######Oh! Thank you so much. I will always\nbe grateful for this!\n\n\nMy beloved #####Horned Colossus Beetle#####...\nI just never get tired of looking at it.")
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("######Oh! Thank you so much! I owe you a\nlifetime of gratitude for this!\n\n\nTo say thank you, I'll sell you one\nitem from my shop at half off, so\nplease stop by again!")
		  case 1:
			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 31)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 130), ('param3', 47)])
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 356), ('next', 132), ('param3', 15)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 131), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 117), ('param3', 48)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 538), ('next', 108), ('param3', 13)])
				printf("Yes, can I help you? Ah... Pray,\nyou have something to show me?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 118), ('param3', 39)])
				printf("######Ohh! You really did find my precious\n#####Horned Colossus Beetle#####?!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 127), ('param3', 47)])
				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 31), ('param2', 3328), ('next', 123), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 134), ('param3', 48)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 121), ('param3', 6)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 119), ('param3', 39)])
				printf("######You found him! My dear bug, I thank\nyou from the bottom of my heart!\n\n\nNext time you enter my shop, I demand \nyou take any one of my items for half\noff the listed price!\n\n######It's just my way of saying thank you!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 115), ('param3', 42)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
			  case 1:
				switch (scene_flags[14 /* 0x0 40 */]) {
				  case 0:
					switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
					  case 0:
						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 114), ('param3', 31)])
							printf("######Please find my precious #####Horned\nColossus Beetle#####!")
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 112), ('param3', 31)])
							printf("######Ah, I don't suppose you'd be willing\nto go look for my precious #####Horned\nColossus Beetle#####? I'd be grateful if\nyou did!\n#####Of course!#####Let it go.")
							flw_57:
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
							  case 0:
								printf("######Ah! Truly? I must thank you! \nI shan't forget this!")
								printf("######My precious #####Horned Colossus Beetle#####...\n...Please go and find him with all\nhaste. He abides out there, \nsomewhere, all alone in the wild.\n######I beg of you!")
								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 21), ('next', -1), ('param3', 4)])
							  case 1:
								printf("#####!Simple for you to say, I'm sure, but I\ncan't just forget about him so easily.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 21), ('next', -1), ('param3', 4)])
							}
						}
					  case 1:
						switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
						  case 0:
							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
							  case 0:
								printf("######If you wish to go back to Skyloft,\nsimply sleep in the bed until morning.")
								flw_98:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 21), ('next', 55), ('param3', 4)])
								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
								  case 0:
									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
									  case 0:
										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 63), ('param3', 31)])
											printf("######By the way...\n\n\n\n######About my precious #####Horned Colossus\nBeetle#####... Have you found him yet?")
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 56), ('param3', 31)])
											printf("######But I would be remiss if I didn't let\nyou know of the weight on my heart...\n\n\n######My precious #####Horned Colossus Beetle\n#####has gone missing, along with his cage...\n\n\n######It's a tragedy that shatters a man to the\ncore... 'Twas such a rare insect and so\nvery...friendly to boot.\n#####I'll find it!#####Don't worry.")
											goto flw_57
										}
									  case 1:
										printf("######Hmm#####...")
									}
								  case 1:
								}
							  case 1:
								printf("######Ahh, your face cries out in earnest\nwonder, and that cry is \"What's this?!\"\n\n\n######This, my dear bug, is a very rare insect\ncalled a #####Horned Colossus Beetle#####.\n\n\n######He is my most precious possession.\n\n\n\nI could gaze at him all night...")
								goto flw_98
							}
						  case 1:
							printf("######Ah! You mounted my bed and rode the\nsleep sheep through the fields of night\nonce more. You were out like a log!\n\n######I daresay you weigh as much as a\nlog as well, and a rather large one at\nthat. Pedaling around with you on \nboard has quite enervated me.\n###########.#####.#####.###########It's quite all right, though, old bug!\nI'm actually getting rather used to it.\nYou're getting me into cracking shape.")
							goto flw_98
						}
					}
				  case 1:
					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
					  case 0:
						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 116), ('param3', 31)])
							flw_116:
							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
							printf("######Ah! Wakey for the young slugabed,\nhmmmm? You appeared to be relishing\nthat snooze, so I declined to wake you.\n\n######But I must say, old bug, you did make\nthe shop a mite heavier... Heh heh!\n#####Your accent!#####Where am I?")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 10)])) {
							  case 0:
								printf("Hmmm? The mellifluous timbre of\nmy voice sounds different to you?\n\n\n###########...###########Perhaps a touch, I suppose...\n#####But pray, what does it matter, hmm?")
								printf("######This is my humble home, of sorts.\nWhen night draws her tenebrous \ncurtain across the sky, I come here.\n\n######A bit lacking in creature comforts,\nto be sure, but I can relax in peace.\n\n\nYou're aware that Loftwings don't fly\nat night, I'm sure...so I suppose I shall\nhave to take you back to town with me\non the morrow, hmm?\nWhen you wish to go back to Skyloft,\njust chase your dreams on the bed\nonce more, and on the morrow you\nshall be there. ")
								flw_97:
								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
								goto flw_98
							  case 1:
								printf("######This is my humble home, of sorts.\nWhen night draws her tenebrous \ncurtain across the sky, I come here.\n\n######A bit lacking in creature comforts,\nto be sure, but I can relax in peace.\n\n\nYou're aware that Loftwings don't fly\nat night, I'm sure...so I suppose I shall\nhave to take you back to town with me\non the morrow, hmm?\nWhen you wish to go back to Skyloft,\njust chase your dreams on the bed\nonce more, and on the morrow you\nshall be there. ")
								printf("Hmmm? The mellifluous timbre of\nmy voice sounds different to you?\n\n\n###########...###########Perhaps a touch, I suppose...\n#####But pray, what does it matter, hmm?")
								goto flw_97
							}
						  case 1:
							goto flw_116
						}
					  case 1:
						goto flw_116
					}
				}
			}
		}
	}
}

void entrypoint_105_34() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 72), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 82), ('param3', 13)])
	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
	  case 0:
		flw_42:
		printf("That's a #####Bug Net#####. You know, for\ncatching bugs! Insects too.\n\n\nOK, so there aren't so many bugs here,\nbut you'll be able to catch tons with\nthis when there are some!\n\nAnd at only #####50 Rupees#####, I'm sure\nyou'll make a #net profit\"!\nWant to buy it?\n#####OK!#####No, thanks.")
		goto flw_13
	  case 1:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
			printf("")
			goto flw_13
		  case 1:
			goto flw_42
		}
	}
}

