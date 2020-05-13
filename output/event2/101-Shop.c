void entrypoint_101_30() {
	start()
	printf("")
}

void entrypoint_101_31() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 25), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
	  case 0:
		printf("######You've got quite an eye, friend. Those\n############### do make a\nstrong point!\n\nDo be careful not to accidentally shoot\npeople! That would be quite rude.\nThey cost a mere #####20 Rupees#####.\n#####OK! #####No, thanks.")
		switch (choice(2, 0)) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 101), ('param2', 8), ('next', -1), ('param3', 7)])
		}
	  case 1:
		printf("I do apologize, but I can't sell you\nthis unless you have a bow. It's\nstore policy, you see.")
	}
}

void entrypoint_101_32() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 32), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 92), ('param2', 1), ('next', 31), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
	  case 0:
		printf("######Ahaa! I see you eyeing those\n#########)#####. So loud. So\nsatisfyingly smoky. And, oh yes,\nso very destructive!\nOne good blast, and even a sturdy\nwall can't hope to remain standing.\n\n\nKA-BOOM! All yours for #####20 Rupees#####.\n#####OK!#####No, thanks.")
		flw_33:
		switch (choice(2, 0)) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 101), ('param2', 8), ('next', -1), ('param3', 7)])
		}
	  case 1:
		printf("Ahaa! Very sorry, but I can't sell you\nthose unless you have a Bomb Bag.\nAgain, my apologies.")
	}
}

void entrypoint_101_33() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 47), ('param3', 12)])
	printf("######Ahaa! That's a #########t#####.\nYou can use it to block and repel\nattacks!\n\nYou must be careful, though, as it will\n#####break #####if it takes too much abuse.\n\n\nOh, and don't forget about fire. It will\nburn quite easily... It's an unfortunate\nproperty of wood. It could be yours for\n#####50 Rupees#####.\nCare to buy it, friend?\n#####OK! #####No, thanks.")
	loadzone_temp_flags[5 /* 0x9 20 */] = true;
	goto flw_33
}

void entrypoint_101_34() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 50), ('param3', 12)])
	printf("######Ahaa! That there is a very sturdy\n#########w#####.\n\n\nIt's much more durable than a\nwooden shield, and I'm happy to\nreport that it won't burst into flames!\n\nI suppose I should warn you that it\nwon't protect you from electricity,\nwhich could come as a nasty...shock.\n\nIt's yours for just #####100 Rupees#####.\nCare to buy it, friend?\n#####OK! #####No, thanks.")
	loadzone_temp_flags[5 /* 0x9 20 */] = true;
	goto flw_33
}

void entrypoint_101_35() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 51), ('param3', 12)])
	printf("######Ahaa! That's a #########z#####!\nAs you might surmise from its name, it\ncan handle all variety of attacks!\n\nFire? Not a sweat! Electricity? No\npainful zaps! Plus, it will automatically\nrepair itself when it sustains damage!\n\nIt's a little fragile, but that shouldn't\nbe a problem for one as talented and\nagile as yourself! \n\nAt a cost of #####500 Rupees#####, it's an\ninvestment...but an excellent one!\nCare to buy it?\n#####OK! #####No, thanks.")
	loadzone_temp_flags[5 /* 0x9 20 */] = true;
	goto flw_33
}

void entrypoint_101_01() {
	start()
	switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
	  case 0:
		flw_41:
		printf("######Ahaa! How can I assist you, friend?\n#####How do I shop?#####I'm fine.")
		flw_1:
		switch (choice(2, 0)) {
		  case 0:
			printf("Oh, yes, yes! Allow me to explain!\n\n\n\nAll you need to do is stand in front of\nany of my wares and press ##### to\nexamine its beauty. Take your time\nand shop to your heart's delight!\nIt's always free to look, my friend, and\nthere's no pressure to buy!\nNo pressure at all...")
			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
			  case 0:
				printf("You may also wish to take certain\nitems you purchased here to the\nScrap Shop to have them upgraded!\n\nFor example, you can take one of my\nfinely crafted shields and even further\nenhance its durability.")
				loadzone_temp_flags[1 /* 0x9 02 */] = true;
			  case 1:
			}
		  case 1:
			printf("######Ahaa! Of course someone as bright and\nsavvy as yourself doesn't need to hear\nme ramble on! Straight to business.\n\nPlease, friend, feast your eyes on this\nlandscape of fantastical treasures I\nhave prepared for you today!")
			loadzone_temp_flags[1 /* 0x9 02 */] = true;
		}
	  case 1:
		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
		  case 0:
			switch (scene_flags[123 /* 0xE 08 */]) {
			  case 0:
				goto flw_41
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 110), ('param3', 31)])
				printf("######Ahaa! My friend, I just got a #####new item\n#####in today!\n\n\nMy latest treasure is a finely crafted\n###############! For discerning\nbow owners, it's simply a must.\n\nTake a look for yourself!")
				loadzone_temp_flags[1 /* 0x9 02 */] = true;
				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
			}
		  case 1:
			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
			  case 0:
				switch (scene_flags[122 /* 0xE 04 */]) {
				  case 0:
					goto flw_41
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 31)])
					printf("######Ahaa! I've got something #####new##### in stock\nfor you, friend.\n\n\nIt's a very mysterious shield called a\n#########z#####. I suggest you\nlinger and give it a good look.")
					loadzone_temp_flags[1 /* 0x9 02 */] = true;
					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
				}
			  case 1:
				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
				  case 0:
					switch (scene_flags[121 /* 0xE 02 */]) {
					  case 0:
						goto flw_41
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 104), ('param3', 31)])
						printf("######Oh, yes, my friend! I've got something\n#####new##### to show you!\n\n\nToday, I was able to procure a fine\n###############! I do hope that it\ndelights you.")
						loadzone_temp_flags[1 /* 0x9 02 */] = true;
						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
					}
				  case 1:
					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
					  case 0:
						switch (scene_flags[120 /* 0xE 01 */]) {
						  case 0:
							goto flw_41
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 123), ('param3', 31)])
							switch (scene_flags[124 /* 0xE 10 */]) {
							  case 0:
								printf("######Ahaa! You are quite lucky, as I have\na #####new item #####just in today, friend.\n\n\nIt's a splendid #########w#####!\nLook at the expert craftsmanship.\nIt steals your breath away, doesn't it?")
								flw_95:
								loadzone_temp_flags[1 /* 0x9 02 */] = true;
								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
							  case 1:
								printf("######Ahaa! I've got some #####new##### gear in stock#####\n#####to show you, friend.\n\n\nAvailable now, you can purchase an\n#########w #####and a ###############.\nI hope they meet with your approval!")
								goto flw_95
							}
						}
					  case 1:
						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
						  case 0:
							switch (scene_flags[124 /* 0xE 10 */]) {
							  case 0:
								goto flw_41
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 31)])
								printf("######Ahaa! You are in luck, because I'm\ncarrying a #####new##### #####item#####.\n\n\nToday's new addition is an expertly\nwoven ###############!\n\n\nTruly, any serious slingshot enthusiast\nwould be embarrassed not to own this,\ndon't you agree? Take a look, friend!")
								loadzone_temp_flags[1 /* 0x9 02 */] = true;
								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
							}
						  case 1:
							printf("######Ahaa! A customer! Hello there, friend.\n\n\n\nMy shop carries the finest products\nyou'll find anywhere!\n\n\nPlease, take a moment for your senses\nto savor the wonderful treasures I have\nprepared just for you, friend!\n\nIf you have any questions, please don't\nhesitate to ask.\n#####How do I buy?#####OK.######")
							goto flw_1
						}
					}
				}
			}
		}
	}
}

void entrypoint_101_36() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 53), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 52), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
	  case 0:
		printf("######I see you have an interest in \n#####10 ##############9#####! They\nare truly the perfectly matched\nprojectile for a slingshot.\nThey could be yours for #####20 Rupees#####.\nCare to buy them today?\n#####OK! #####No, thanks.")
		goto flw_33
	  case 1:
		printf("My friend...you don't appear to have\na slingshot.\n\n\nI simply couldn't sell you these in good\nconscience if you do not have a\nslingshot. Perhaps I can interest you\nin some of my other wares...")
	}
}

void entrypoint_101_02() {
	start()
	printf("")
}

void entrypoint_101_37() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 141), ('param3', 12)])
	loadzone_temp_flags[5 /* 0x9 20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 80), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 20)])) {
	  case 0:
		printf("######That's a ###############.\nWith this in your pouch, you can\ncarry 10 additional seeds.\n\nRecommended for slingshot\nenthusiasts! It costs #####100 Rupees#####.\nDo we have a deal, friend?\n#####OK!#####No, thanks.")
		goto flw_33
	  case 1:
		printf("My friend...you don't appear to have\na slingshot.\n\n\nI simply couldn't sell you these in good\nconscience if you do not have a\nslingshot. Perhaps I can interest you\nin some of my other wares...")
	}
}

void entrypoint_101_03() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 2)])) {
	  case 0:
		printf("")
	  case 1:
		printf("")
	}
}

void entrypoint_101_38() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 142), ('param3', 12)])
	loadzone_temp_flags[5 /* 0x9 20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 84), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 22)])) {
	  case 0:
		printf("######That's a ###############. With\nthis in your pouch, you can carry five\nmore arrows!\n\nPerfect for anyone enamored with\narchery! It costs #####150 Rupees#####.\nDo we have a deal, friend?\n#####OK! #####No, thanks.")
		goto flw_33
	  case 1:
		printf("I do apologize, but I can't sell you\nthis unless you have a bow. It's\nstore policy, you see.")
	}
}

void entrypoint_101_04() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 1), ('next', 63), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
	  case 0:
		printf("It pains me to tell you, friend, but...\n\n\n\nIt appears your pouch is full. May I\nsuggest you stow some of your\nbelongings at the Item Check?")
		loadzone_temp_flags[5 /* 0x9 20 */] = false;
	  case 1:
	}
}

void entrypoint_101_39() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 143), ('param3', 12)])
	loadzone_temp_flags[5 /* 0x9 20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 92), ('param2', 1), ('next', 86), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
	  case 0:
		printf("######That's a ###############. Just \nslip this into your pouch, and you can\ncarry five additional bombs.\n\nIf you relish a good explosion, this is\nthe item for you! It costs a mere\n#####150 Rupees#####. Care to buy it, friend?\n#####OK! #####No, thanks.")
		goto flw_33
	  case 1:
		printf("Ahaa! Very sorry, but I can't sell you\nthose unless you have a Bomb Bag.\nAgain, my apologies.")
	}
}

void entrypoint_101_05() {
	start()
	printf("Ahhhh, it pains me to say this, but...\n\n\n\nI believe you are already carrying\nyour limit for this item. Perhaps you\ncould turn your attention to any of\nmy other magnificent wares...")
	loadzone_temp_flags[5 /* 0x9 20 */] = false;
}

void entrypoint_101_06() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 18), ('param3', 33)])
	printf("######Oh my!####\n#\n")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 512), ('next', 61), ('param3', 22)])
	printf("My dear friend! You--ahem--you don't\nhave enough Rupees to pay for this\nitem. You mustn't tease me like that!")
	loadzone_temp_flags[5 /* 0x9 20 */] = false;
}

void entrypoint_101_07() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 512), ('next', 43), ('param3', 22)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 14)])) {
	  case 0:
		printf("######Ahaa! Thank you for your loyal and\ncontinued patronage, friend.")
		flw_144:
		switch (loadzone_temp_flags[5 /* 0x9 20 */]) {
		  case 0:
			switch (scene_flags[89 /* 0xA 02 */]) {
			  case 0:
				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
				  case 0:
					flw_70:
					printf("I've taken the liberty of placing your\npurchases in your pouch. Press ##########\n#####to open it, then##### equip #####what you need!#####")
					flw_137:
					loadzone_temp_flags[5 /* 0x9 20 */] = false;
				  case 1:
					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
					  case 0:
						printf("If you have any doubts about the\n#####durability of your shield#####, I suggest you\nhave it examined at the #####Scrap Shop#####.\n\nProvided you take good Gondo there\nthe necessary treasures and the like,\nhe will happily upgrade your items!")
						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
						goto flw_137
					  case 1:
						goto flw_70
					}
				}
			  case 1:
				printf("I've taken the liberty of placing the\nitem in your pouch. To open your\npouch, press and hold #####...#####\n\nThen #####move #####the Wii Remote to point\nthe cursor. Point at the item you\nwant to equip and #####release ##########.\nThat's all there is to it.#####\nFor example, to equip an item like a\nshield, it's as simple as selecting it\nin your pouch!")
				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
				loadzone_temp_flags[5 /* 0x9 20 */] = false;
			}
		  case 1:
		}
	  case 1:
		printf("######Ahaa! The customer is always right!")
		goto flw_144
	}
}

void entrypoint_101_08() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 58), ('param3', 33)])
	printf("######...######")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 512), ('next', 30), ('param3', 22)])
	printf("That's quite all right, friend! I've\nquite a few other fine items in stock,\nso do take your time and look around!")
	loadzone_temp_flags[5 /* 0x9 20 */] = false;
}

