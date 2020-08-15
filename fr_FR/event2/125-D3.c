          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Cherche les <r<joyaux>> dissimulés\nderrière chaque statue.\nFrappe\x2010les du plus bas au plus\nhaut et la porte s'ouvrira.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, regardez.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Le symbole au sol est l'<r<emblème de\nFarore>>.\n\n\nJe détecte que la puissance sacrée de la\n<y+<Triforce>> en émane.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Pour arriver jusqu'à cet emblème,\nje vous recommande de franchir\ncette porte.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, regardez.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Le symbole au sol est l'<r<emblème de\nNayru>>.\n\n\nJe détecte que la puissance sacrée de la\n<y+<Triforce>> en émane.\n\n\nMais le chemin qui y conduit est fermé.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Regardez là\x2010bas.\nC'est un <y<chronoglobe>>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Je vous recommande de vous servir de\nce <y<chronoglobe>> pour ouvrir la voie\nvers l'<r<emblème>>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Maître, regardez.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Le symbole au sol est l'<r<emblème de Din>>.\n\n\n\nJe détecte que la puissance sacrée de la\n<y+<Triforce>> en émane.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Mais il ne semble pas possible\nd'atteindre l'emblème d'ici.\n\n\nJe vous recommande d'entrer dans\ncette salle en empruntant un autre\nchemin.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\nNous sommes revenus dans la salle où\nse trouve l'<r<emblème de Din>>.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 2, unk: 0 */ "La probabilité que vous trouviez la\nforce sacrée au bout de ce parcours\nde lave est de 60 %.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 2, unk: 0 */ "Je vous recommande d'avancer avec\ndétermination.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\nJe détecte la présence d'une force\nsacrée dans cette salle.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. Vous êtes arrivé jusqu'à\nl'emblème. Plantez\x2010y votre épée.\n\nVous devriez alors être conduit vers\nla <y+<Triforce>>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. Vous êtes arrivé jusqu'à\nl'emblème. Plantez\x2010y votre épée.\n\nVous devriez alors être conduit vers\nla <y+<Triforce>>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. Vous êtes arrivé jusqu'à\nl'emblème. Plantez\x2010y votre épée.\n\nVous devriez alors être conduit vers\nla <y+<Triforce>>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 61), ('param3', 51)])
/*< 61>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 53), ('param3', 16)])
/*< 53>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 1), ('param3', 6)])
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\nJe détecte l'existence de trois forces\nsacrées au sein de ce bâtiment.\n\nSelon mes conclusions, il s'agit de la\n<y+<<y+<<pling><y+<Triforce>>.\n\n\nJ'ai marqué par des \x25B3 sur votre carte\nles endroits d'où proviennent ces\nforces.")
/*< 42>*/ 	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
/*< 60>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          }

          void entrypoint_125_03() {
/*<  2>*/ 	start()
/*<  7>*/ 	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
          	  case 0:
/*<  8>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 9), ('param3', 30)])
/*<  9>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
          	  case 1:
/*< 57>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 3), ('param3', 17)])
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\nCes secousses semblent être la\nmanifestation d'un <r<<pling>changement\nde structure >>du bâtiment.")
/*<  4>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 30)])
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 2 */ "Ce changement va vous permettre\nd'entrer dans la salle voisine.")
          			flw_5:
/*<  5>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 11), ('param3', 34)])
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0 */ "Je vous recommande d'utiliser ce\n<r<panneau de contrôle >>à votre avantage\npour récupérer la <y+<Triforce>>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2 */ "En exploitant ces changements,\nvous devriez pouvoir vous rendre dans\nles autres salles.")
          			goto flw_5
          		}
          	}
          }

