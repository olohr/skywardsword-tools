void entrypoint_008_002() {
	start()
	printf("Hey, friend! Walk yourself on over\nhere and say hello.")
}

void entrypoint_008_003() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		printf("How do you do? I'm what you call a\n#####Sheikah Stone#########\n.#####.#####.####\nbut you knew that\nalready, didn't you?\n\nI'm a stone of few words so I'll get right\nto it. #####I can see you're playing in #####Hero\nMode#####, so clearly you've mastered all\nthe puzzles out there before.\nI think that's pretty impressive! Tell\nyou what, I'm going to go ahead and\ngive you access to #####all the hints##### right\nfrom the start.\nIf you ever get the urge to look over\nhints you've already seen, just come\nand see me.\n\nGood luck to you, friend!")
	  case 1:
		printf("How do you do? I'm what you call a\n#####Sheikah Stone#####. Glad to meet you!\n\n\nI'm a stone of few words, so I'll get\nright to it. #####You're going to find\nyourself in puzzling circumstances as\nyou make your way through this world.\nIf you should find yourself stuck and\nyou have no idea how to move forward,\ncome see me.\n\nI've got nothing for you right now, but\ndown the road when you're feeling\nstuck, #####the things I'll show you##### may just\nget you back on the right track.\nGood luck out there, friend!")
	}
}

void entrypoint_008_004() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 6), ('next', -1), ('param3', 7)])
	  case 1:
		printf("Hey there, friend.####\n Unfortunately,\nyou're such a good explorer that I don't\nhave any hints to offer you right now.\n\nTell you what. You press on, and if you\nfind yourself stuck later, just come on\nback and see me.")
	}
}

void entrypoint_008_005() {
	start()
	printf("Hey, how's it going? I've got a new\nhint for you! Wanna see it?\n#####Sure!#####No need.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
	  case 1:
		printf("No problem. I hope you do well, and\nI wish you good luck!")
	}
}

void entrypoint_008_006() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		printf("Heya, friend.####\n Just so you know, I've\ngot every hint here ready for you!\nWanna see a hint?\n#####Sure!#####Nah.")
		flw_9:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
		  case 0:
			changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
		  case 1:
			printf("No problem. I hope you do well, and\nI wish you good luck!")
		}
	  case 1:
		printf("What's up?####\n I don't have any important\nhints for you, but I'll let you see any\nhints you've seen up till now. Wanna\nsee some hints?\n#####Sure!#####No need.")
		goto flw_9
	}
}

