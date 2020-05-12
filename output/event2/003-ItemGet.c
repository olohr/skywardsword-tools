void entrypoint_003_062() {
	start()
	printf("")
	give_item(62 0x3E);
}

void entrypoint_003_028() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 2), ('next', 149), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 3), ('next', 28), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 4)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 4), ('next', 25), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 2)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 5), ('next', 22), ('param3', 23)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 0)])) {
				  case 0:
					printf("You got the last ###############!\nNow you can open the temple door.\n\n\nHurry back to the summit and open the\ndoor to the temple so you can continue\nyour search for Zelda, who has been\ntaken into the depths of the temple!")
					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
				  case 1:
					printf("You got the fourth ###############!\nCollect all five pieces to complete the key\nthat opens the temple door. Find that\n#####last piece#####!")
				}
			  case 1:
				printf("You got the third ###############!\nCollect all five pieces to complete the key\nthat opens the temple door. Now go find\nthe other #####two pieces#####!")
			}
		  case 1:
			printf("You got the second ###############!\nCollect all five pieces to complete the key\nthat opens the temple door. Now you\nhave to find the other #####three pieces#####!")
		}
	  case 1:
		printf("You got the first ###############! \nFind all five pieces to complete the key\nthat opens the door leading into the\ntemple. Find the other #####four pieces#####!")
	}
}

void entrypoint_003_010() {
	start()
	printf("You got a #########\n#####! Students\nat the Knight Academy practice with these.\nIt looks like it has a fairly sharp blade!\n\nPress ##### at any time to look at the items\nyou're carrying.#####")
	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
}

void entrypoint_003_097() {
	start()
	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 95), ('param2', 1), ('next', 222), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 225), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 26)])) {
		  case 0:
			printf("You got the #########a#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 5), ('next', -1), ('param3', 7)])
		  case 1:
			flw_539:
			printf("You got the #########a#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			printf("Just #####one##### more piece to go!")
			changeScene(1, 1) // 
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 550), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 68)])) {
		  case 0:
			goto flw_539
		  case 1:
			printf("You got the #########a#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			printf("Just #####two##### more pieces to go!")
			changeScene(1, 1) // 
		}
	}
}

void entrypoint_003_104() {
	start()
	printf("You got the #########h#####! With\nthis, Rupees and treasure will appear more\noften...but it also carries a curse that\nprevents your pouch from opening! Eeek!")
}

void entrypoint_003_121() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You upgraded to a #########y#####!\nSuperstrong metal makes this the toughest\n####w around.")
	}
}

void entrypoint_003_139() {
	start()
	printf("")
}

void entrypoint_003_173() {
	start()
	printf("You got an ###############! \nThis solid chunk of pure, crystallized\nmonster malice is extremely rare!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_156() {
	start()
	printf("")
}

void entrypoint_003_045() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 449), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 52)])) {
	  case 0:
		printf("You collected every last #########-#####.\n########'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
	  case 1:
		printf("You got a #########-#####!\nThis object's power halts the movements of\nthe Guardians for just #####90 seconds#####.\nCollect all #####15##### to pass the trial!")
	}
}

void entrypoint_003_190() {
	start()
	printf("")
}

void entrypoint_003_063() {
	start()
	printf("")
	give_item(63 0x3F);
}

void entrypoint_003_029() {
	start()
	printf("You got the ###############!\nThis strangely shaped gold sculpture is\ncovered in mysterious patterns.")
}

void entrypoint_003_011() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		printf("You got the ###############!\nThis mysterious sword is bathed in\ndivine light.\n\nThe memories of violent battles surge\nwithin this sword when you raise it to\nthe sky. ######Your #####Skyward Strike is now\nat maximum strength#####!")
		flw_462:
		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
		changeScene(7, 0) // 
	  case 1:
		printf("You got the ###############!\nThis mysterious sword is bathed in\ndivine light.")
		goto flw_462
	}
}

void entrypoint_003_080() {
	start()
	printf("")
}

void entrypoint_003_098() {
	start()
	printf("You got the #########b#####!\nThis old map details the area as it was\nlong ago, before the sea succumbed to the\ndesert sand.")
	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
}

void entrypoint_003_105() {
	start()
	printf("You upgraded to the mighty #########i#####!\nYour shots will now pepper a wide range. \nHold ##### to increase your shot power.")
}

void entrypoint_003_122() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
		  case 0:
			printf("You got a #########z#####! The mystical\npower within this shield allows it to repair\nitself over time. It protects against fire,\nelectric, and curse attacks!")
		  case 1:
			printf("You got a #########z#####! The mystical\npower within this shield allows it to #####repair\nitself##### over time. \n\nThis shield's low durability means it breaks\neasily, but it deflects fire, electric, and\ncurse attacks!")
			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
		}
	}
}

void entrypoint_003_174() {
	start()
	printf("You got a ###############!\nVery few small birds possess this sky-blue\nplumage, making these feathers\nextremely rare!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_157() {
	start()
	printf("")
}

void entrypoint_003_046() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 444), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 50)])) {
	  case 0:
		printf("You collected every last #########.#####.\n########'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your personal growth.")
	  case 1:
		printf("You got a #########.#####!\nThis object's power halts the movements of\nthe Guardians for just #####90 seconds#####.\nCollect all #####15##### to pass the trial!")
	}
}

void entrypoint_003_191() {
	start()
	printf("")
}

void entrypoint_003_064() {
	start()
	printf("")
	give_item(64 0x40);
}

void entrypoint_003_047() {
	start()
	printf("You got a #########/#####!\nThis mysterious fruit enables you to\nsee beacons over the positions of\nSacred Tears for #####30 seconds#####!")
}

void entrypoint_003_012() {
	start()
	printf("")
	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
}

void entrypoint_003_081() {
	start()
	printf("You got a #########Q#####! This powerful\nelixir not only #####restores all of your hearts\n#####but also contains #####two #####servings in every\nbottle!")
}

void entrypoint_003_099() {
	start()
	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
	  case 0:
		printf("You got your #########c #####back!\nUse them to plan an escape that even\na Mogma would be proud of.")
		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
	  case 1:
		printf("You got the #########c#####! Even the\nMogma don't see ####8 this fancy\nvery often!\n\nThey don't just dig holes; #####they also let you\nburrow your way under the ground#####. Try to\nfind holes that you can dig down into!")
	}
}

void entrypoint_003_106() {
	start()
	printf("")
}

void entrypoint_003_123() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You upgraded to a #########{#####!\nThis mystical shield can repair itself over\ntime. It's also more durable.")
	}
}

void entrypoint_003_140() {
	start()
	printf("You upgraded to the ###############!\nIt's now double its original size, making it\neasier to catch even the most nimble bugs!")
}

void entrypoint_003_175() {
	start()
	printf("You got a ###############!\nA real rarity among skull ornaments,\nit shines with an eerie, golden color.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_158() {
	start()
	printf("You received ###############!\nCan you believe this letter might actually\ncontain heartfelt words from Cawlin?\n\nTake extra care that you don't end\nup using it as scrap paper!")
}

void entrypoint_003_192() {
	start()
	printf("")
}

void entrypoint_003_065() {
	start()
	printf("You got a #########A#####! This\nmysterious potion halves any damage\nyou receive! The effect lasts for #####three\nminutes#####.")
}

void entrypoint_003_048() {
	start()
	printf("You got #####one##### #########0#####! These\nform when a person is so completely\noverwhelmed with feelings of thankfulness\nthat crystallized gratitude is created.\nCollect these and show them to##### Batreaux#####!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_030() {
	start()
	printf("You got the ###############!\nIt is a carving of a coiled dragon made\nout of dazzling gold.")
}

void entrypoint_003_013() {
	start()
	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
	  case 0:
		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
		printf("You got the ############### back!\nNow you can cut right through your\ntroubles like before! You can also talk to\n###########Fi##### again.")
		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
	  case 1:
		printf("")
	}
}

void entrypoint_003_082() {
	start()
	printf("")
}

void entrypoint_003_107() {
	start()
	printf("")
}

void entrypoint_003_124() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You upgraded to a #########|#####!\nThis shield repairs itself with sacred\npower, and it's even more durable than\nother versions of the shield.")
	}
}

void entrypoint_003_141() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
		flw_616:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
		goto flw_616
	}
}

void entrypoint_003_176() {
	start()
	printf("You got a ###############!\nRumors say this item was dropped by\nthe goddess in a long-forgotten era. It's a\nlegendary treasure few will ever behold!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_159() {
	start()
	printf("You got ###############!\nIt contains Beedle's beloved insect pal.\nHurry back to Beedle with it!")
}

void entrypoint_003_193() {
	start()
	printf("")
}

void entrypoint_003_200() {
	start()
	printf("")
}

void entrypoint_003_066() {
	start()
	printf("You got a #########B#####!\nThis mighty potion prevents you from\nsustaining any damage for #####three minutes#####!")
}

void entrypoint_003_049() {
	start()
	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
	  case 0:
		printf("You got your #########1##### back!\nThe power to blast a powerful gust of\nair at anything you choose is yours\nonce again!")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', 428), ('param3', 38)])
		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
	  case 1:
		printf("You got the #########1#####!\nIt is an ancient and mystical device capable\nof blowing an endless gust of wind.\n\nIf you feel the controls are #####out of\nalignment #####when you are using this item,\npress ##### to center them again.#####")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', -1), ('param3', 38)])
	}
}

void entrypoint_003_031() {
	start()
	printf("You got the ###############!\nIt is made of shining gold. It also looks like\nit may be a part from...something.\nThe surface is inlaid with circuitry.")
}

void entrypoint_003_014() {
	start()
	printf("")
}

void entrypoint_003_083() {
	start()
	printf("")
}

void entrypoint_003_108() {
	start()
	printf("You got the #########l#####! The hefty\ncapacity of this wallet allows you to store\nup to #####500 Rupees #####in it!")
}

void entrypoint_003_125() {
	start()
	printf("You got the #########}#####!\nThis legendary shield is imbued with\nheroic power, making it completely\nindestructible!")
	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
}

void entrypoint_003_142() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
		flw_617:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
		goto flw_617
	}
}

void entrypoint_003_177() {
	start()
	printf("")
}

void entrypoint_003_194() {
	start()
	printf("You got a ###############! This\npotion will #####automatically #####restore your\nshield when it breaks and replenishes\n#####eight##### hearts. Plus, you can use it twice!")
}

void entrypoint_003_067() {
	start()
	printf("")
}

void entrypoint_003_032() {
	start()
	printf("You got a ####\n#### #####! It's worth a\nwhopping #####100 Rupees#####! You must feel\nlike a celebrity.")
}

void entrypoint_003_015() {
	start()
	printf("")
}

void entrypoint_003_084() {
	start()
	printf("You got a #########T#####!\nDrink it to make your stamina gauge\ndeplete at a slower rate! One bottle is\neffective for #####three minutes#####.")
}

void entrypoint_003_109() {
	start()
	printf("You got a #########m#####! You can carry up to\n#####1,000 Rupees##### in this massive wallet.")
}

void entrypoint_003_126() {
	start()
	printf("You got some #########~#####! \nThis potion #####fully replenishes##### your shield \ngauge and also restores #####four##### hearts! ")
}

void entrypoint_003_143() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
		flw_618:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
		goto flw_618
	}
}

void entrypoint_003_160() {
	start()
	printf("You got a ###############!\nIt's a baby's toy. Perhaps somebody\ndropped it?")
}

void entrypoint_003_178() {
	start()
	printf("")
}

void entrypoint_003_195() {
	start()
	printf("You got some ###############!\nThis homemade soup is Pumm's specialty,\nbut watch it! It'll get cold in##### five minutes#####!")
}

void entrypoint_003_068() {
	start()
	printf("You got the #########D#####! \nThis sacred gift left by the goddess grants\nyou the power to explore underwater and\neven execute a spin maneuver!")
	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
}

void entrypoint_003_050() {
	start()
	printf("You got the #########2#####!\nIt shows the layout of the area and reveals\nunexplored rooms.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 508), ('param3', 30)])
	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
	  case 0:
		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 34)])
	  case 1:
		printf("It also reveals the locations of treasure\nchests, so be sure to take a look!")
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 511), ('param3', 34)])
		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
	}
}

void entrypoint_003_033() {
	start()
	printf("You got a #########!#####! It's worth a\nstaggering #####300 Rupees#####! Shhh...\nDon't tell anyone!")
}

void entrypoint_003_016() {
	start()
	printf("")
}

void entrypoint_003_085() {
	start()
	printf("You got a #########U#####!\nThis miraculous brew prevents your \nstamina gauge from depleting at all\nfor #####three minutes#####!")
}

void entrypoint_003_127() {
	start()
	printf("You got some ###############!\nThis powerful elixir #####automatically#####\nrestores your shield when it breaks\nand also replenishes #####eight##### hearts!")
}

void entrypoint_003_144() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
		flw_619:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
		goto flw_619
	}
}

void entrypoint_003_161() {
	start()
	printf("You got ###############! They're a precious\nsource of protein that comes from a Deku\nHornet's hive. This material might be good\nfor making something.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_179() {
	start()
	printf("")
}

void entrypoint_003_196() {
	start()
	printf("")
}

void entrypoint_003_069() {
	start()
	printf("")
}

void entrypoint_003_051() {
	start()
	printf("")
}

void entrypoint_003_034() {
	start()
	printf("You picked up a #########\"#####!\nThat means you've lost #####10 Rupees#####.\nAnd that's a little bit sad.")
}

void entrypoint_003_017() {
	start()
	printf("You got the ###############!\nThis mysterious plant represents your\nspirit, ####.")
}

void entrypoint_003_086() {
	start()
	printf("You got an #########V#####! Drink\nthis to make your oxygen gauge deplete at\na slower rate. One bottle is effective for\n#####three minutes#####.")
}

void entrypoint_003_110() {
	start()
	printf("You got the #########n#####!\nThe voluminous capacity of this wallet\nallows you to store a whopping\n#####5,000 Rupees #####in it!")
}

void entrypoint_003_128() {
	start()
	printf("You got a ###############!\nWith this, you can carry 10 extra\n####9. Keep it with you\nwhen you use your ####4!")
}

void entrypoint_003_145() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
		flw_620:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
		goto flw_620
	}
}

void entrypoint_003_162() {
	start()
	printf("You got ####### ###############! These highly\nprized feathers come from birds foreign to\nSkyloft and can serve as a useful material.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_197() {
	start()
	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
	  case 0:
		printf("You took back the ###############!\nIt would take too long to grow if\nyou planted it here. Maybe you\nshould find another place for it...")
	  case 1:
		printf("You got the ###############!\nIt is a very young form of a legendary tree\nwhose fruit is said to cure any illness.")
		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
	}
}

void entrypoint_003_052() {
	start()
	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 105), ('param2', 1), ('next', 598), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 96)])) {
		  case 0:
			printf("You got your ####<##########i #####back!\nUse it to stun enemies on patrol.")
			flw_433:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 417), ('param3', 38)])
			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
		  case 1:
			printf("You got your #########4 #####back!\nUse it to stun enemies on patrol.")
			goto flw_433
		}
	  case 1:
		printf("You got the #########4#####! Use this projectile-\nshooting weapon to fling ####9 at\nyour foes! The hard seeds will stun your\nenemies.\nYou can press ##### anytime you want to\n#####center the cursor#####.#####")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 493), ('param2', 20), ('next', 521), ('param3', 25)])
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 520), ('param3', 38)])
		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
	}
}

void entrypoint_003_035() {
	start()
	printf("You got #####five##### #########0##########s#####!\nThese crystals are feelings of gratitude\nin crystallized form.\n\nIt must have taken a lot of gratitude to\nproduce this bunch of #####five crystals#####!\nHelping people feels good!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_018() {
	start()
	printf("")
}

void entrypoint_003_000() {
	start()
	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
	  case 0:
		printf("There's nothing useful in here!")
	  case 1:
		printf("You really shouldn't open other people's\ncupboards without permission...")
	}
}

void entrypoint_003_087() {
	start()
	printf("You got an #########W#####!\nThis wonder potion keeps the oxygen gauge\nfrom depleting at all for three##### minutes#####!")
}

void entrypoint_003_111() {
	start()
	printf("You got the #########o#####!\nNo wallet can match the cavernous\ncapacity and luxurious quality of this one!\nIt can store a jaw-dropping #####9,000 Rupees#####!")
}

void entrypoint_003_129() {
	start()
	printf("You upgraded to a ###############!\nNow it carries up to #####20##### additional\n####9! Keep it with you\nwhen you use your ####4!")
}

void entrypoint_003_146() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
		flw_621:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
		goto flw_621
	}
}

void entrypoint_003_163() {
	start()
	printf("You got a ###############!\nThis dried mass of plant material could\ncome in handy. Might as well take it\nwith you.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_180() {
	start()
	printf("You got the ###############!\nThis engraved object was created to lead\nthe chosen hero to the hidden location\nof the Triforce!")
	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
}

void entrypoint_003_198() {
	start()
	printf("You got the ###############! Eating this\nsucculent fruit of legend cures any illness.\nTake it to the Thunder Dragon!")
}

void entrypoint_003_999() {
	start()
	printf("You got the #########K#####!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press ##### while carrying an\nobject to look down and drop your cargo.\nBombs away!#####")
}

void entrypoint_003_053() {
	start()
	printf("You got the #########5#####! The unexplained power\ncontained within this insect-shaped item\nallows you to control it as it flies through\nthe air!\nPoint the Wii Remote #####at the screen #####and\npress ##### to launch it into the air!\n\n\nIf the controls feel #####out of alignment#####,\npress ##### while pointing the Wii Remote\nat the center of the screen.#####")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 38)])
}

void entrypoint_003_036() {
	start()
	printf("You got some #########$#####!\nThis is a powder that is released by\nglowing mushrooms.")
}

void entrypoint_003_019() {
	start()
	printf("You got the ###############! Now you can hit targets\nat a very long range. Arrows also do a lot\nmore damage than Deku Seeds.\n\nPress ##### to center your aim anytime you\nfeel the aiming controls are #####out of\nalignment#####.#####")
	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 498), ('param2', 20), ('next', 421), ('param3', 25)])
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 7), ('next', -1), ('param3', 38)])
}

void entrypoint_003_001() {
	start()
	printf("You got a ###############! \nThis key will open a locked door. You can\nonly use it in this area.")
}

void entrypoint_003_070() {
	start()
	printf("You got a #########F#####!\nAreas with insects will now be marked with\n##### on your map! You can open your map \nto see where the bugs like to hang out.")
}

void entrypoint_003_088() {
	start()
	printf("You caught a #########H#####! This playful sprite\nreplenishes #####six##### of your hearts!\n\n\nIf you put it in a bottle and keep it with\nyou, it will come to your aid #####automatically\n#####if you #####run out of hearts#####.")
}

void entrypoint_003_112() {
	start()
	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
	  case 0:
		printf("You got your #########p #####back!\nAnd look! The rest of your items are\nhere too!")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 8), ('next', 420), ('param3', 38)])
		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
	  case 1:
		printf("You got the #########p#####!\nYou can store all kinds of useful items in\nthis handy piece of gear.")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 57)])
	}
}

void entrypoint_003_147() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
		flw_622:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
		goto flw_622
	}
}

void entrypoint_003_164() {
	start()
	printf("You got a ###############! It's the tail of a\nlarge lizard with a spiked ball on the end.\nSure, it's a little gross, but you never know\nwhen you might need one.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_181() {
	start()
	printf("")
}

void entrypoint_003_199() {
	start()
	printf("You got the ###############! Your wallet can\nnow hold an additional 300 Rupees!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_071() {
	start()
	printf("You got the #########G#####!\nUse it to catch bugs and other small things.\nWhen you're hunting bugs, remember to\napproach quietly and strike quickly!")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 612), ('param3', 38)])
	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
}

void entrypoint_003_054() {
	start()
	printf("You got some #########6#####! It's just normal\nwater, but it might come in handy\nsometime.")
}

void entrypoint_003_037() {
	start()
	printf("")
}

void entrypoint_003_002() {
	start()
	printf("You got a ###############! It's worth just\n#####1 Rupee#####, so collect lots of them!")
}

void entrypoint_003_089() {
	start()
	printf("")
}

void entrypoint_003_113() {
	start()
	printf("You made your #########p\n#####bigger! You can now fit an additional\nitem inside.")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', -1), ('param3', 57)])
}

void entrypoint_003_130() {
	start()
	printf("You upgraded to a ###############!\nNow it carries up to #####30##### additional\n####9! Keep it with you\nwhen you use your ####4!")
}

void entrypoint_003_148() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
		flw_623:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
		goto flw_623
	}
}

void entrypoint_003_165() {
	start()
	printf("You got some ###############!\nThis hard concretion sparkles brightly. \nIt also has lots of different uses.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_182() {
	start()
	printf("")
}

void entrypoint_003_072() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 18), ('param4', 2), ('param5', 58)])) {
	  case 0:
		printf("You found a #########H#####!\nThis playful sprite replenishes\n#####six##### of your hearts!\n\nYou don't have an ###############,\nhowever, so you'll have to let this one\nfly off.")
	  case 1:
		printf("You found a #########H#####!\nThis playful sprite replenishes\n#####six##### of your hearts!")
	}
}

void entrypoint_003_055() {
	start()
	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
	  case 0:
		printf("You got some #########7#####! These\nspores from a giant mushroom are said to\nwork wonders on injured birds.")
	  case 1:
		printf("You got some #########7#####!\nThese spores are from a giant mushroom.")
	}
}

void entrypoint_003_038() {
	start()
	printf("")
}

void entrypoint_003_020() {
	start()
	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
	  case 0:
		printf("You got your ############### back!\nNow you can reach faraway spots again.")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 430), ('param3', 38)])
		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
	  case 1:
		printf("You got the ###############! With this sacred\ngift, you will be able to explore areas\nthat were previously unreachable!\n\nAim for special #####targets##### and #####vines#####, then fire\na claw on a chain that pulls you to the\nplace you have targeted!\n\nPress ##### to center your aim anytime you\nfeel the aiming controls are #####out of\nalignment#####.#####")
		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', -1), ('param3', 38)])
	}
}

void entrypoint_003_003() {
	start()
	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
	  case 0:
		printf("You found a ###############! It's worth\n#####5 Rupees#####. Better drop it in your wallet\nfor now.")
	  case 1:
		printf("You got a ###############! It's worth #####5 ##########Rupees#####.\nLucky find!")
	}
}

void entrypoint_003_114() {
	start()
	printf("You got the #########r#####!\nYour maximum number of hearts is\nincreased by #####one #####as long as you carry\nthis with you.\nYou can always keep it with you at times\nwhen you think you'll need it most.")
}

void entrypoint_003_131() {
	start()
	printf("You got the ###############!\nNow you can carry #####5##### extra arrows. Carry it\nwith you when you're using the bow.")
}

void entrypoint_003_149() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
		flw_624:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
		goto flw_624
	}
}

void entrypoint_003_166() {
	start()
	printf("You got an ###############!\nLegends say this beautiful flower\nflourished in the ancient past.\nSupposedly it glows in the dark...")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_183() {
	start()
	printf("")
}

void entrypoint_003_056() {
	start()
	printf("You got the #########8#####! Use these sharp\nclaws to dig through patches of soft earth.\n\n\nBe sure to try digging with ##### anywhere\nyou see signs that something has been\nburied in soft ground.")
}

void entrypoint_003_039() {
	start()
	printf("")
}

void entrypoint_003_021() {
	start()
	printf("You got the ###############!\nIt proves your victory today.\nWait till Zelda sees this!")
	changeScene(3, 0) // 
}

void entrypoint_003_004() {
	start()
	printf("You got a ###############! It's worth #####20 Rupees#####.\nDon't spend it all in one place!")
}

void entrypoint_003_073() {
	start()
	printf("")
}

void entrypoint_003_090() {
	start()
	printf("You upgraded to the #########Z#####!\nCrafted for the expert bowman, this bow\nhas enhanced attack power and can launch\narrows even farther!")
}

void entrypoint_003_115() {
	start()
	printf("")
}

void entrypoint_003_132() {
	start()
	printf("You upgraded to the ###############!\nWith this, you can carry #####10##### extra arrows.\nCarry it with you when you're using\nthe bow.")
}

void entrypoint_003_167() {
	start()
	printf("You got an ###############! These amber-\ncolored chunks of precious stone are\nfound everywhere. No one knows where\ntheir strange shape comes from.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_184() {
	start()
	printf("")
}

void entrypoint_003_057() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 52), ('param2', 1), ('next', 397), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 28)])) {
	  case 0:
		printf("You got #####5 ##############9#####! These small seeds\nserve as ammunition for your ####4.\nMake sure you've always got a few handy!")
	  case 1:
		printf("")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 493), ('param2', -5), ('next', -1), ('param3', 25)])
	}
}

void entrypoint_003_022() {
	start()
	printf("")
}

void entrypoint_003_005() {
	start()
	printf("The ########## #####is complete! With its power,\nyou have the ability to make Zelda's wish of\n#####vanquishing ##########Demise##### a reality.")
	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
}

void entrypoint_003_074() {
	start()
	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 11), ('next', 676), ('param3', 4)])
	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
	  case 0:
		flw_156:
		printf("You got #########J#####! It may\nlook like ordinary water, but this pure\nwater contains a powerful energy.")
	  case 1:
		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
		  case 0:
			printf("You got some #########J#####!\nThis pure water can heal the wounds of the\nWater Dragon. It has mystical properties\nthat cannot be found in ordinary water.")
			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
		  case 1:
			goto flw_156
		}
	}
}

void entrypoint_003_091() {
	start()
	printf("You have upgraded to the #########[#####!\nIt uses a sacred power of the goddess to\nrain a terrible force upon your enemies.")
}

void entrypoint_003_116() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You got a #########t#####!\nThis light wooden shield breaks easily and\ncan burn, so be careful how you use it.")
		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
	}
}

void entrypoint_003_133() {
	start()
	printf("You've upgraded to the ###############!\nIt holds #####15##### extra arrows. Carry it with \nyou when you're using the bow.")
}

void entrypoint_003_150() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
		flw_625:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
		goto flw_625
	}
}

void entrypoint_003_168() {
	start()
	printf("You got a ###############! This item is similar\nin appearance to an #####, yet very\ndifferent. It can only be found in certain\nplaces.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_185() {
	start()
	printf("")
}

void entrypoint_003_040() {
	start()
	printf("You got #########(#####!\nThrow them or roll them to blow up even\nhard objects. Try to pick up and store\nthem whenever you come across any.")
}

void entrypoint_003_023() {
	start()
	printf("")
}

void entrypoint_003_006() {
	start()
	printf("You got a ###############! This item's life-giving\nenergy restores one heart of life.")
}

void entrypoint_003_092() {
	start()
	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
	  case 0:
		printf("You got your #########\ #####back!\nTime to make something explode.")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', 434), ('param3', 38)])
		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
	  case 1:
		switch (scene_flags[44 /* 0x4 10 */]) {
		  case 0:
			printf("You got a #########\#####! #####Ledd##### was kind enough\nto give it to you, so make sure you take\ngood care of it.")
			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
		  case 1:
			printf("You found a #########\#####!\nYou can store bombs in this bag and carry\nthem with you to use later.\n\nNow that you can carry bombs with you,\nthere's a good chance you can get to\nplaces you haven't explored yet.\nSee if #####Ledd #####will lend it to you!")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 3), ('next', -1), ('param3', 38)])
		}
	}
}

void entrypoint_003_075() {
	start()
	printf("You got the #########K#####!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press ##### while carrying an\nobject to look down and drop your cargo.\nBombs away!#####")
}

void entrypoint_003_117() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You upgraded to a #########u#####!\nThis shield is much more durable than\nthe standard ####t.")
	}
}

void entrypoint_003_134() {
	start()
	printf("You got the ###############! It can hold\n#####5##### extra bombs, so carry it with you when\nyou need extra firepower.")
}

void entrypoint_003_151() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
		flw_626:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
		goto flw_626
	}
}

void entrypoint_003_169() {
	start()
	printf("You got a ###############!\nIt may look like a boring wad of gunk,\nbut it's used to make all sorts of things!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_058() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 491), ('param2', 199), ('next', 455), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 54)])) {
	  case 0:
		printf("")
	  case 1:
		printf("")
	}
}

void entrypoint_003_186() {
	start()
	printf("You learned the ###############!\nIt's a mysterious melody that has been\npassed down from ancient times.")
	changeScene(2, 0) // 
}

void entrypoint_003_041() {
	start()
	printf("You got #########)#####! Throw them or roll\nthem to blow things up. Into your Bomb\nBag they go!")
}

void entrypoint_003_024() {
	start()
	printf("")
}

void entrypoint_003_007() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 158), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
	  case 0:
		printf("You got an ###############! You can reuse it\nwith your own bow, so there's no reason to\nlet it go to waste.")
	  case 1:
		printf("")
	}
}

void entrypoint_003_093() {
	start()
	printf("You got a #########]#####!\nYour life has increased by #####one #####and\nis also now fully replenished!")
}

void entrypoint_003_076() {
	start()
	printf("You've upgraded to the #########L#####!\nIt flies faster than the ####5.\nWatch where you're flying, speedy!")
}

void entrypoint_003_100() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		printf("You got the #########d#####! While you are\ncarrying this medal, hearts will appear\neven when playing in #####Hero Mode#####.\n\nIt will also cause heart flowers to bloom. \nIf you're someone who worries about\nhearts during an adventure, keep this\nwith you!")
		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
	  case 1:
		printf("You got the #########d#####!\nHearts will appear more often as long as\nyou're carrying this.\n\nIf you're worried about running out of\nhearts while you're out adventuring,\nkeep this with you!")
	}
}

void entrypoint_003_118() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You upgraded to a #########v#####!\nThis very sturdy shield is much tougher\nthan the standard ####t.")
	}
}

void entrypoint_003_135() {
	start()
	printf("You've upgraded to the ###############!\nIt can hold #####10##### extra bombs. Carry it with\nyou when you need extra firepower.")
}

void entrypoint_003_152() {
	start()
	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
	  case 0:
		printf("You got ####### ###############! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
		flw_627:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
	  case 1:
		printf("You caught ####### ###############! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
		goto flw_627
	}
}

void entrypoint_003_059() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 492), ('param2', 19999), ('next', 460), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 56)])) {
	  case 0:
		printf("")
	  case 1:
		printf("")
	}
}

void entrypoint_003_187() {
	start()
	printf("")
	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
}

void entrypoint_003_042() {
	start()
	printf("You got a #########*#####!\nThis peculiar fruit replenishes your\nstamina gauge!")
}

void entrypoint_003_025() {
	start()
	printf("You got the ###############!\nThis carved wooden statue looks like it's\nsupposed to inspire gratitude. It also looks\nlike the stone statue on the upper floor.")
}

void entrypoint_003_008() {
	start()
	printf("You got ###############! You can shoot these\nwith your bow. You have a limited supply,\nso shoot carefully.")
}

void entrypoint_003_077() {
	start()
	printf("You've upgraded to the #########M#####!\nYour ####5 can now fly farther than ever\nbefore!")
}

void entrypoint_003_094() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 1), ('next', 206), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 14)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 2), ('next', 202), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 12)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 3), ('next', 199), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
			  case 0:
				printf("You got a #########^#####!\nCollect four to increase your heart\ncapacity by one. Just #####one #####more!")
			  case 1:
				printf("You got a #########^#####!\nCollect four to increase your heart\ncapacity by one. #####Two #####to go!")
			}
		  case 1:
			printf("You got a #########^#####!\nCollect four to increase your heart\ncapacity by one. #####Three #####to go!")
		}
	  case 1:
		printf("You got a #########^#####!\nThis completes the ####].\nYour heart capacity will increase by one!")
	}
}

void entrypoint_003_101() {
	start()
	printf("You got the #########e#####!\nWhile you're carrying this, Rupees will\nmysteriously appear more often. Keep it\nwith you when your wallet feels empty!")
}

void entrypoint_003_119() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You got an #########w#####!\nThis sturdy metal shield is unaffected by\nfire, but watch out for electrical attacks!")
		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
	}
}

void entrypoint_003_136() {
	start()
	printf("You've upgraded to the ###############!\nIt can hold #####15 #####extra bombs. Carry it with\nyou when you need extra firepower.")
}

void entrypoint_003_153() {
	start()
	printf("You got an ###############! You can fill it\nwith all sorts of useful things.")
}

void entrypoint_003_170() {
	start()
	printf("You got a ###############! \nThis extremely sharp claw looks painful to\neven touch!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_188() {
	start()
	printf("")
	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
}

void entrypoint_003_060() {
	start()
	printf("You got #####10 ##############9#####! These small seeds\nserve as ammunition for your ####4.\nMake sure you've always got a few handy!")
}

void entrypoint_003_043() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 399), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 30)])) {
	  case 0:
		printf("You collected every last #########+#####.\n########'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
	  case 1:
		printf("You got a #########+#####!\nThis object's power halts the movements of\nthe Guardians for just #####90 seconds#####.\nCollect all #####15##### to pass the trial!")
	}
}

void entrypoint_003_026() {
	start()
	printf("You got the ###############!\nThis mass is made up of faintly glowing\nsquare crystals. Several are missing.")
}

void entrypoint_003_009() {
	start()
	printf("")
	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
}

void entrypoint_003_078() {
	start()
	printf("You got a #########N#####!\nWhen placed in your pouch, you can use\nthis item to restore #####eight hearts#####.")
}

void entrypoint_003_095() {
	start()
	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 96), ('param2', 1), ('next', 210), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 213), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 18)])) {
		  case 0:
			printf("You got the #########_#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 5), ('next', -1), ('param3', 7)])
		  case 1:
			flw_533:
			printf("You got the #########_#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			printf("Just #####one##### more piece to go!")
			changeScene(3, 1) // 
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 546), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 64)])) {
		  case 0:
			goto flw_533
		  case 1:
			printf("You got the #########_#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			printf("Just #####two##### more pieces to go!")
			changeScene(3, 1) // 
		}
	}
}

void entrypoint_003_102() {
	start()
	printf("You got the #########f#####!\nIf you carry this with you, treasure will\nappear more often. It's the perfect thing\nto take along on a treasure hunt!")
}

void entrypoint_003_137() {
	start()
	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
	  case 0:
		printf("You got your ############### back!\nLook around to see if there's something\nin the area you can grab with it.")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', 413), ('param3', 38)])
		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
	  case 1:
		printf("You got the ###############! Attached to the end of\nthe whip is a strange, glowing sphere of\nlight that can latch on to various things.\n\nIf you see something you can't reach,\ntarget it with ##### and swing the Wii Remote\nto snag it with your whip! SNAP!#####")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', -1), ('param3', 38)])
	}
}

void entrypoint_003_171() {
	start()
	printf("You got a ###############!\nThis well-crafted horn is made of sturdy\nanimal bone. You might find a use for this\nas a material.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_154() {
	start()
	printf("")
}

void entrypoint_003_189() {
	start()
	printf("")
	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
}

void entrypoint_003_061() {
	start()
	printf("")
	give_item(61 0x3D);
}

void entrypoint_003_027() {
	start()
	printf("You got the ###############!\nIt's a squid-shaped statue studded with\nintriguing suction cups.")
}

void entrypoint_003_079() {
	start()
	printf("You got a #########O#####!\nThe ####N has been powered up\nand now #####restores all of your hearts#####.")
}

void entrypoint_003_096() {
	start()
	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 95), ('param2', 1), ('next', 216), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 20)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 219), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 22)])) {
		  case 0:
			printf("You got the #########`#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 5), ('next', -1), ('param3', 7)])
		  case 1:
			flw_538:
			printf("You got the #########`#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			printf("Just #####one##### more piece to go!")
			changeScene(2, 1) // 
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 97), ('param2', 1), ('next', 548), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 66)])) {
		  case 0:
			goto flw_538
		  case 1:
			printf("You got the #########`#####! Created\nby the old gods, the Triforce possesses\n#####ultimate power##### and is said to grant the\nwishes of whoever possesses it!")
			printf("Just #####two##### more pieces to go!")
			changeScene(2, 1) // 
		}
	}
}

void entrypoint_003_103() {
	start()
	printf("You got the #########g#####!\nCarry this with you to prolong the effects\nof a potion. If you've got this, remember\nto pack lots of potions!")
}

void entrypoint_003_120() {
	start()
	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
	  case 0:
		printf("Your shield has been repaired.\nIt looks good as new!")
	  case 1:
		printf("You upgraded to a #########x#####!\nThis heavy shield is even tougher than the\nstandard ####w.")
	}
}

void entrypoint_003_138() {
	start()
	printf("You got the ###############!\nWith these, you can stand any heat without\na sweat. This is one of the three sacred\ngifts left by the goddess.")
	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
}

void entrypoint_003_172() {
	start()
	printf("You got an ###############!\nThis simple, slightly macabre fashion\nstatement bears the Bokoblin symbol.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 59)])
}

void entrypoint_003_155() {
	start()
	printf("")
}

void entrypoint_003_044() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 500), ('param2', 14), ('next', 439), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 48)])) {
	  case 0:
		printf("You collected every last #########,#####.\n########'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
	  case 1:
		printf("You got a #########,#####!\nThis object's power halts the movements of\nthe Guardians for just #####90 seconds#####.\nCollect all #####15##### to pass the trial!")
	}
}

