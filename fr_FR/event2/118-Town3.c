          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA12C'est bizarre, on ne voit plus la Déesse,\nd'ici. Je me demande bien pourquoi...\n\n\nEnfin, bref...")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Alors, tu as retrouvé la petite Nacia ?\n\n\n\n\x0E\x01\x09\x04\x00\xE00T'as fait ça tout seul ? Tu es bien digne\nd'être un apprenti chevalier !\n\n\n\x0E\x01\x09\x04\x00\x400Va le dire à sa mère pour la rassurer !\nElle habite une maison au bord de la\nrivière !")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ben qu'est\x2010ce qui t'arrive,\nLink ? T'es tout pâle.\n[1]C'est horrible ![2-]Ah bon ?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x506Comment ? Nacia a disparu ?\n\n\n\n\x0E\x01\x09\x04\x00\x500Elle a été enlevée par un monstre ?!\n\n\n\n\x0E\x01\x09\x04\x0B\x400Maintenant que tu en parles, on\nraconte qu'une créature démoniaque\nvivrait quelque part à Célesbourg.\n\n\x0E\x01\x09\x04\n\x500À la nuit tombée, elle sortirait dans\nle bourg pour terroriser les gens et\nenlever les enfants !\n\n\x0E\x01\x09\x04\x00\x400Ce n'est sûrement qu'une légende, mais\nça m'intrigue quand même...")
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04J'espère qu'il n'y a rien de grave...")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 283), ('param3', 31)])
/*<283>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06J'ai croisé la mère de Nacia qui\narpentait le village en appelant\nsa fille. Qu'est\x2010ce qui a bien pu\nse passer ?")
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE01Il paraît que c'est toi qui as remporté\nla chevauchée céleste ! Félicitations !\n\n\n\x0E\x01\x09\x04\x00\xA00Mais dis\x2010moi, tu fais une drôle de tête.\nQu'est\x2010ce qui va pas ?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xC12Qu'est\x2010ce que c'était que ce\ngrondement, tout à l'heure ?")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (loadzone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 512), ('next', 156), ('param3', 13)])
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nOoooh ! C'est fascinant !\n\n\n\nIl existe encore dans ce monde\nd'innombrables plantes encore\ninconnues !\n\nJ'ai retrouvé la motivation de\npoursuivre ma collection !")
/*<263>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2560), ('next', 264), ('param3', 13)])
/*<264>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 262), ('param3', 17)])
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x03\x01\x00Link !\nMerci mille fois ! Ne t'en fais pas, je\nprendrai grand soin de ma nouvelle\nplante.\nSi tu trouves d'autres plantes rares,\npréviens\x2010moi !")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          	  case 1:
/*<168>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 512), ('next', 171), ('param3', 13)])
/*<171>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 36), ('next', 172), ('param3', 32)])
/*<172>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 36), ('next', 153), ('param3', 17)])
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00SOh ! Mais... Mais c'est... Oui ! C'est\nexactement ce que je recherchais !\nUne nouvelle espèce de plante !")
/*<169>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 1280), ('next', 154), ('param3', 13)])
/*<154>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Voyons voir...\nEst\x2010ce un végétal, ou un animal ?\n\n\nHmm...\nC'est peut\x2010être la plus grande\ndécouverte de ce siècle !")
/*<147>*/ 		loadzone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x257Comment.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.?\nTu as retrouvé la fillette qui\navait disparu ?\n\nAlors, en fin de compte, elle\nn'avait pas été enlevée ?\nTant mieux !\n\n\x0E\x01\x09\x04\x00\x609Quoi qu'il en soit, c'est une\naffaire de réglée ! Beau travail,\nchevalier !")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1557Si on <g<percute>> la <r<tombe la plus\nproche de l'arbre >>puis qu'on\nla <g<déplace>>, le démon apparaîtrait...\n\n\x0E\x01\x09\x04\x00\x1513Enfin, il est hors de question\nque j'aille me promener dans\nle cimetière en pleine nuit...")
          				  case 1:
/*<400>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 401), ('param3', 31)])
/*<401>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Alors tu es allé parler au vieux\nmonsieur à la Citrouille perchée ?\n\n\nSi on <g<percute>> la <r<tombe la plus\nproche de l'arbre >>puis qu'on la\n<g<déplace>>, le démon apparaît...?\n\n\x0E\x01\x09\x04\x00\x1513Je me demande si c'est vrai\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nEnfin, je te déconseille de te\npromener dehors la nuit.")
/*<402>*/ 					loadzone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x200Où tu peux trouver ce vieux monsieur ?\n\n\n\n\x0E\x01\x09\x04\x00\x200Il doit être <r<à la Citrouille perchée>>,\nà l'est d'ici. C'est un habitué.\n\n\n\x0E\x01\x09\x04\x12\x200Évidemment, il faut s'y rendre en\noiseau.")
/*<334>*/ 						loadzone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 36), ('param3', 31)])
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1513Tu as entendu la rumeur ? On raconte\nqu'une fillette aurait disparu alors\nqu'elle jouait dans le cimetière...\n\n\x0E\x01\x09\x04\x12\x1500Même dans un petit bourg comme le\nnôtre, on n'est plus en sécurité...\n[1]Tout à fait ![2-]Ah bon ?")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xC06Comment ? Elle pourrait avoir été\nenlevée par un monstre ?\n\n\n\x0E\x01\x09\x04\x00\xC00Il ne faut pas exagérer quand même...\n\x0E\x01\x04\x02\x1EAh\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n\n\n\n\x0E\x01\x09\x04\x09\x200Maintenant que tu en parles, il y a un\n<r<<pling>vieux monsieur>> qui habite près d'ici\nqui raconte qu'un monstre vivrait à\nCélesbourg.\n\x0E\x01\x09\x04\x12\x200Mais il est toujours saoul alors\npersonne ne le prend au sérieux...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x1557Tu es bien insouciant... Quelqu'un a\ndisparu dans notre bourg ! C'est très\ngrave !")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1504On raconte qu'une fillette\naurait disparu !")
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x501Oh ! Alors tu as remporté la\nchevauchée céleste et tu es passé dans\nla classe supérieure !\n\n\x0E\x01\x09\x04\x0C\x200Je vois ça à ton uniforme de chevalier !\nIl te va bien !\n\n\n\x0E\x01\x09\x04\x0C\x500Tu as fait un nouveau pas en avant\nsur la voie qui te permettra de devenir\nun vrai chevalier !")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x1501J'ai eu peur... La terre s'est mise à\ngronder tout à coup et après ça, l'île\nde la Déesse avait disparu !\n\n\x0E\x01\x09\x04\x12\x200Mais... Au fait...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Tu as ressenti cette grosse secousse ?\nJe me demande bien ce que c'était...\n\n\n\x0E\x01\x09\x04\x12\x200Ah, au fait...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Oh, Link !\nQu'est\x2010ce que tu fais ?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 72), ('param3', 17)])
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... Tu t'intéresses à ce moulin ?\n\n\n\nIl a été construit de manière à\npouvoir pivoter pour capter le\nvent le plus efficacement possible.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 32), ('param2', 0), ('next', 197), ('param3', 15)])
/*<197>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 33), ('param2', 100), ('next', 175), ('param3', 15)])
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Mais, il y a très très longtemps...\n\n\n\nLa petite <r<hélice>> qui permettait\nau moulin de pivoter s'est détachée.\n\n\nEt elle serait tombée sous les nuages.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Et depuis, comme il sert plus à rien,\non a laissé ce moulin à l'abandon.")
/*<179>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 181), ('param3', 6)])
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 75), ('param3', 6)])
/*< 75>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 315), ('param2', 0), ('next', 257), ('param3', 51)])
/*<257>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 258), ('param3', 50)])
/*<258>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 76), ('param3', 17)])
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Afin de pouvoir faire bouger ce\nmoulin, je vous suggère d'aller\nrécupérer son <r<hélice >>tombée sur terre.")
/*< 77>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 165), ('param3', 36)])
/*<165>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 259), ('param3', 16)])
/*<259>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 198), ('param3', 6)])
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x800Comment ? Si tu me ramènes l'hélice,\nest\x2010ce que je pourrais réparer\nle moulin ?\n\nBen, je devrais pouvoir remettre\nl'hélice en place, mais...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf(/* textboxtype: 1, unk: 2 */ "Mais comment tu comptes t'y prendre\npour retrouver cette hélice ?\n\n\nSi elle est tombée sous les nuages,\nelle est perdue pour de bon...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2048), ('next', 79), ('param3', 13)])
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13 Attends un peu.\nTu connais <b<Dorco>> qui tient l'atelier\nde rénovation au marché couvert ?\n\nJ'ai entendu dire que son grand\x2010père\nutilisait un <r<robot volant >>pour aller\nrécupérer de la ferraille sous les\nnuages...\nMais bon, connaissant la famille\nde Dorco, à mon avis, c'est du pipeau.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01La statue de la Déesse est plus là !\nQu'est\x2010ce qu'on va faire ?!\n\n\nC'était l'endroit idéal pour\nattraper des insectes !")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (loadzone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Moi aussi j'irai à la boutique de Terry\nacheter le filet à papillons !\n\n\nEt je le ferai agrandir à l'atelier\nde rénovation, ouais !")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\n\n\n\nQuoi ? T'es allé à la boutique\nde Terry ? Pff ! C'est pas juste !\nMoi aussi je veux y aller !")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					loadzone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Mais, euh ! Je veux mon filet à\npapillons ! Je dois trouver un moyen\nd'aller à la boutique de Terry...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tu as retrouvé Nacia ?\n\n\n\n\x0E\x01\x09\x04\x0F\x1300Tout le monde se faisait\ndu souci pour elle !")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 420), ('param3', 31)])
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\n\n\n\nQuoi ? T'es allé à la boutique\nde Terry ? Pff ! C'est pas juste !\nMoi aussi je veux y aller !")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Nacia ?\n\n\n\n\x0E\x01\x09\x04\x12\x900Ben, hier, je l'ai vue jouer dans le\n<r<cimetière>>...\n\n\n\x0E\x01\x09\x04\n\x900Mais ma mère est venue me chercher\nalors je suis parti avant elle.\n\n\n\x0E\x01\x09\x04\x01\x900Il lui est arrivé quelque chose ?")
          					  case 1:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1301Je me demande comment je pourrais\nfaire pour acheter un filet à papillons\nde la boutique de Terry...\n[1]Où est\nNacia ?[2]La boutique\nde Terry ?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Je réfléchis à un moyen d'arrêter\nla boutique de Terry.\n\n\n\x0E\x01\x09\x04\x12\x900Il paraît que quand on fait sonner\n<pling>la cloche qui pend, il s'arrête.\n\n\n\x0E\x01\x09\x04\x10\x1300Si seulement je pouvais <r<lancer\nquelque chose >>jusque là\x2010haut !\n\n\nSi jamais tu trouves pas la boutique\nde Terry avec la vue subjective,\nregarde donc sur ta <g<carte>> !")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\n\n\n\nQuoi ? T'es allé à la boutique\nde Terry ? Pff ! C'est pas juste !\nMoi aussi je veux y aller !")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 31)])
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hé, regarde là\x2010haut ! La <b<boutique de\nTerry>> est enfin arrivée !\n\n\n\x0E\x01\x09\x04\n\x1300Il vend des <r<filets à papillons >>!\nIl m'en faut un !\n\n\n\x0E\x01\x09\x04\x12\x900Si je pouvais faire sonner la cloche qui\npend, je pourrais rentrer dans sa\nboutique...\n\n\x0E\x01\x09\x04\x10\x1300Mais elle est trop haute, il faudrait un\n<r<projectile >>pour l'atteindre !")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Il veut pas que je fasse peur aux gens\nqui entrent ici et il veut que j'aie l'air\nd'une plante.\n\n\x0E\x01\x09\x04\x00\x12Alors il faut que je reste tranquille\nsans bouger.\n\n\n\x0E\x01\x09\x04\x09\x13Finalement, ça me change pas\nbeaucoup de mon ancienne vie...")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xD0FDis\x2010moi, Link, tu n'aurais\npas vu mon mari ?\n\n\nSous prétexte que c'est devenu plus\ncalme, il se met à sortir en pleine\nnuit... Il aura l'air fin s'il se retrouve\nnez à nez avec un monstre !")
          			  case 1:
/*<476>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xE08Ah, Link !\nDepuis la mésaventure de la dernière\nfois, Nacia ne sort plus de la maison\nsans prévenir. Quel soulagement.\nPar contre, son père doit encore être\nen train de traînasser quelque part\ncomme à son habitude.")
          			}
          		  case 1:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xE08\x0E\x03\x01\x00Link, merci infiniment\nd'avoir retrouvé Nacia.\n\n\nUn jour, il faudra aussi que je\nremercie le monsieur qui a joué\navec elle...")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 142), ('param3', 31)])
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xE14Tiens, Link !\n\n\n\n\x0E\x01\x09\x04\x00\x800Grâce à toi, j'ai pu retrouver ma petite\nNacia saine et sauve ! Comment\npourrais\x2010je assez te remercier...?\n\n\x0E\x01\x09\x04\x09\x800Tu m'as permis de retrouver\nle sourire ! Merci infiniment !")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          			  case 1:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xE13Comment ? Tu as retrouvé Nacia ?\n\n\n\n\x0E\x01\x09\x04\x0F\xE00Je vois. Si elle est chez un gentil\nmonsieur, je suppose qu'elle ne craint\nrien. Mais je veux vite la revoir !")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 278), ('param3', 31)])
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xD12Ah... L'île de la Déesse est tombée et je\nn'ai toujours aucune nouvelle de Nacia.\n\n\nMa petite Nacia...\n\n\n\n\x0E\x03\x01\x00Link ! Retrouve\x2010la vite,\nje t'en prie !\n\n\n\x0E\x01\x09\x04\x09\xD00Et ne me dis pas que tu n'as pas envie\nde la chercher !")
          				  case 1:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xD12Ah...\x0E\x01\x04\x02\n Je t'en prie...\x0E\x01\x04\x02\n Retrouve vite ma\npetite Nacia !\n\n\nPourvu qu'il ne lui soit rien arrivé !\nMa pauvre enfant !")
          				}
          			  case 1:
/*<493>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 31)])
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 21), ('next', 276), ('param3', 32)])
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD00C'est affreux ! L'île de la Déesse est\ntombée ! Je cherchais Nacia là\x2010bas\nmais...\n\nMais dis\x2010moi ! Tu n'aurais pas vu ma\npetite Nacia ?\n[1]Non[2]Nacia ?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x150D\xD12Ah bon...")
          			flw_21:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x150F\xD00Elle a disparu ! Tu ne voudrais\npas m'aider à la retrouver,\nLink ? \n\n\x0E\x01\x09\x04\x1509\xD00J'ai demandé à plusieurs personnes.\nCertaines m'ont dit qu'elles l'avaient\naperçue avec un individu patibulaire...\n\n\x0E\x01\x09\x04\x150B\xD00D'autres m'ont dit qu'elle avait été\nattaquée par un monstre. Qu'est\x2010ce\nque je vais faire ?\n\n\x0E\x01\x09\x04\x150E\xD00C'est forcément un kidnapping !\nMa petite Nacia est si adorable\nqu'elle s'est fait enlever !")
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD00Il faut sauver ma petite Nacia !\n\n\n\n\x0E\x01\x09\x04\x150F\xD00Je t'en supplie, Link !\n[1]Je m'en\noccupe[2-]Impossible")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x150C\xE14Merci ! Tu es digne d'être un élève de\nl'école de chevalerie.\n\n\n\x0E\x01\x09\x04\x1500\x800Je compte sur toi.")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD12Et tu te prétends élève de l'école\nde chevalerie ?\n\n\nLa mission des chevaliers n'est\x2010elle pas\nde veiller à la sécurité des habitants\ndu bourg ?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD12C'est ma fille ! Elle a cinq ans !")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD00Tu tombes bien ! Tu n'aurais pas vu ma\npetite Nacia, par hasard ?\n[1]Non[2]Nacia ?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 107), ('next', 11), ('param3', 24)])
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x0D\x02\x1900HYAAAAAA !!!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 352), ('param3', 32)])
/*<352>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 21), ('next', 356), ('param3', 32)])
/*<356>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5386), ('param2', 3072), ('next', 355), ('param3', 13)])
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 8), ('next', 350), ('param3', 16)])
/*<350>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD11Nacia ! Nacia !\nMais où est\x2010ce qu'elle est passée ?")
/*<357>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5387), ('param2', 3328), ('next', 349), ('param3', 13)])
/*<349>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... Ah, je me demande vraiment où\nma petite Nacia a bien pu aller...\n\n\nQu'est\x2010ce que je vais faire si elle a\nvraiment été enlevée ?!")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 366), ('param3', 16)])
/*<366>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x150E\xD11Ah ! \x0E\x03\x01\x00Link !")
/*<362>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 361), ('param3', 47)])
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 49), ('param2', 356), ('next', 359), ('param3', 15)])
/*<359>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 367), ('param3', 17)])
/*<367>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5390), ('param2', 3840), ('next', 363), ('param3', 13)])
/*<363>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 368), ('param3', 48)])
/*<368>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 49), ('param2', 100), ('next', 358), ('param3', 14)])
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (loadzone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xC08Tu es au courant pour l'île de la\nDéesse ? Comment est\x2010ce qu'elle\na pu disparaître ?\n\nZelda est introuvable, et Hergo est\nparti. Mais qu'est\x2010ce qui se passe, ici ?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05La nuit, je m'entraîne dur pour\ndevenir aussi fort que toi !")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BSalut Link !\nL'<y<Endurol >>que tu m'as apporté fait des\nmiracles !\n\n\x0E\x01\x09\x04ÿ\xFF00Mais je ne pense pas encore être\nà ton niveau...\n\n\nN'hésite pas à venir me rendre visite\nun de ces soirs !")
          			flw_440:
/*<440>*/ 			loadzone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut Link !\nComment avancent tes recherches ?\n\n\nMoi, comme je te l'ai déjà dit,\nj'ai l'impression de ne plus\nprogresser dans mon entraînement.\nJe ne comprends pas pourquoi...\nTu voudras bien revenir me voir la <r<nuit\n>>pour me donner des conseils ?")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\nGrâce à l'<y<Endurol >>que tu m'as donné,\nje m'entraîne dur toutes les <r<nuits>>.\n\n\x0E\x01\x09\x04\x10\x1B00Mais j'ai comme l'impression de ne plus\nprogresser. C'est bizarre...\n\n\nJe me demande si je pourrai devenir\naussi fort que toi...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Enfin, je ne baisserai pas les bras !\nTu ne voudrais pas revenir me voir la\n<r<nuit >>quand je m'entraîne, pour me\ndonner des conseils ?")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BBonjour, Link !\nMerci pour l'<y<Endurol>> !\n\n\nGrâce à ça, j'ai pu faire des centaines\nde pompes !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Un jour, je deviendrai aussi fort\nque toi, Link !")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh... Salut. Tu m'as vu sous un jour pas\ntrès flatteur, l'autre nuit...\n\n\nJe fais tout mon possible pour devenir\naussi fort que toi, mais ça ne marche\npas... Enfin, je ne vais pas abandonner\ncomme ça !")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 429), ('param3', 31)])
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (loadzone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05La nuit, je m'entraîne dur pour\ndevenir aussi fort que toi !")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xC08Tu es au courant pour l'île de la\nDéesse ? Comment est\x2010ce qu'elle\na pu disparaître ?\n\nZelda est introuvable, et Hergo est\nparti. Mais qu'est\x2010ce qui se passe, ici ?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Je suis convaincu que toi,\ntu peux retrouver Zelda !")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12\x0E\x03\x01\x00Link !\nTu n'as toujours pas retrouvé Nacia ?\n\n\n\x0E\x01\x09\x04\x00\xE10Tu es sûr que tu la cherches\nsérieusement ?\n\n\n\x0E\x01\x09\x04\x00\xC00Comment ? Tu l'as retrouvée ?\n\n\n\n\x0E\x01\x09\x04\x07\xA0BAh, quel soulagement !\nEt c'est grâce à toi, Link !\n\n\nJe savais qu'on pouvait compter\nsur toi !")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							loadzone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nVa vite voir sa mère ! Elle habite dans\nune maison au bord de la rivière.\nElle doit t'attendre !")
          					  case 1:
/*<309>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12\x0E\x03\x01\x00Link !\nTu n'as toujours pas retrouvé Nacia ?\n\n\n\x0E\x01\x09\x04\x00\xE10Tu es sûr que tu la cherches\nsérieusement ?\n\n\n\x0E\x01\x09\x04\x00\xC00Comment ? Tu l'as retrouvée ?\n\n\n\n\x0E\x01\x09\x04\x07\xA0BAh, quel soulagement !\nEt c'est grâce à toi, Link !\n\n\nJe savais qu'on pouvait compter\nsur toi !")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x801Ah, Link ! C'est affreux,\nl'île de la Déesse a disparu.\n\n\n\x0E\x01\x09\x04\x00\x800Et la petite Nacia aussi.\n\n\n\n\x0E\x01\x09\x04\x00\xE00Zelda est introuvable et Hergo a\ndisparu. Mais qu'est\x2010ce qui se passe ?\n\n\n\x0E\x01\x09\x04\x07\x800Je vais les chercher de mon côté, alors\nfais\x2010en autant, Link.")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12\x0E\x03\x01\x00Link !\nTu n'as toujours pas trouvé\nNacia ?\n\n\x0E\x01\x09\x04\x00\xE10Tu la cherches vraiment ?\nTu ne te dis pas que ça peut\nattendre plus tard, quand même ?\n\n\x0E\x01\x09\x04\x07\x200Je fais tout ce que je peux pour\nla retrouver, alors je compte\nsur toi pour en faire autant !")
          					  case 1:
/*<301>*/ 						switch (loadzone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1701Je vais chercher de mon côté !\nVa voir sur la grand\x2010place,\nLink !\n\n\x0E\x01\x09\x04\x08\x1700Le garçon qui jouait avec elle hier doit\nêtre là\x2010bas.")
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tiens, Link ! Tu penses\nque tu pourras bientôt retrouver\nZelda ?\n\n\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n Je vois. Courage !\nTu peux y arriver !\n\n\n\x0E\x01\x09\x04\x07\x200Au fait, tout à l'heure, j'ai vu la mère\nde Nacia se diriger vers le temple.\n\n\n\x0E\x01\x09\x04\x08\x1700Je me demande ce qu'elle avait...")
/*< 30>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04 \x508Comment ? Nacia a disparu ?!\n\n\n\n\x0E\x01\x09\x04\x07\x800Mais c'est affreux ! Moi aussi\nje vais la chercher ! \x0E\x03\x01\x00Link,\ninterroge tous les gens que tu\npeux pour retrouver sa trace !")
/*<302>*/ 							loadzone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x801Ah, Link ! C'est affreux,\nl'île de la Déesse a disparu.\n\n\n\x0E\x01\x09\x04\x00\x800Et la petite Nacia aussi.\n\n\n\n\x0E\x01\x09\x04\x00\xE00Zelda est introuvable et Hergo a\ndisparu. Mais qu'est\x2010ce qui se passe ?\n\n\n\x0E\x01\x09\x04\x07\x800Je vais les chercher de mon côté, alors\nfais\x2010en autant, Link.")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tiens, Link ! Tu penses\nque tu pourras bientôt retrouver\nZelda ?\n\n\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n Je vois... Bon courage !\n\n\n\nAu fait, j'ai vu la mère de Nacia\nse diriger vers l'entrée du temple.\nJe me demande ce qu'elle a.\n\n[1]Qui ça ?[2]Je sais !")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Tu sais bien, c'est cette femme qui vit\ndans une maison au bord de la rivière\navec sa fille et son mari.\n\n\x0E\x01\x09\x04\x07\x800Elle avait l'air très préoccupée.")
          				  case 1:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x806Vraiment ? Tu aurais pu me le dire\nplus tôt !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\nÇa fait longtemps que j'ai pas\nvu Hergo...\n\nJe me demande s'il est puni... Il a\npeut\x2010être fait une grosse bêtise, et\nil a plus le droit de sortir de l'école\nde chevalerie...")
          		  case 1:
/*<461>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\nLatruche m'a montré une <r<technique\nsecrète avec le filet à papillons >>!\n\nLe truc, c'est de bouger le filet à\nl'horizontale plutôt qu'à la verticale !\n\n\nEt puis il a dit aussi qu'il fallait\ns'approcher des insectes touuuuut\ndoucement et donner un coup sec\navec le filet !")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\n\n\n\nQuoi ? La<b< truie forte>>\x0E\x01\x06\x02\xFBCD...?\x0E\x01\x06\x02Í \x0E\x01\x04\x02\x14Qu'est\x2010ce que\ntu veux faire avec ça ?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hé, Link !\nRegarde la tour de lumière !\n\n\nY a un rayon laser qui en sort !\nC'est trop cool !")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\nC'est vrai qu'on peut attraper autre\nchose que des insectes avec un <r<filet\nà papillons>> ?\nC'est le monsieur de l'atelier de\nrénovation qu'a dit qu'on pouvait\nattraper des trucs pas banals.")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\n\n\n\nQuoi ? Les <r<paroles>> de la chanson que\nchantait Zelda ?\n\n\nC'est quoi les <r<paroles>> ? Ça se mange ?")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Moi aussi j'irai à la boutique de Terry\nacheter le filet à papillons !\n\n\nEt je le ferai agrandir à l'atelier\nde rénovation, ouais !")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ce monsieur, il est pas méchant !\n\n\n\nQuand ze suis presque tombée\nde la falaise, il m'a rattrapée !\n\n\nIl m'a appris que c'était danzereux\nde sortir dehors la nuit.\n\n\nDis à ma maman que ze rentrerai\nquand il fera zour !")
          	  case 1:
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Qu'est\x2010ce que tu as, Monsieur ?\nPourquoi tu fais zette tête ?\nIl y a eu quelque chose ?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01La nuit, je m'entraîne pour\ndevenir aussi fort que toi !\nC'est vraiment dur... Tu es tellement\nformidable, Link...")
          			flw_330:
/*<330>*/ 			loadzone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 415), ('param3', 31)])
/*<415>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\nTu as retrouvé la piste de Zelda ?\n\n\nEn fait... j'aimerais tellement devenir\ncomme toi que je me suis mis à\nm'entraîner <r<nuitamment>>...\n\n~~.~~.~~.\x0E\x01\x04\x02\n Oh ! \x0E\x01\x09\x04\x00\xA06Surtout, ne viens pas me voir\n<r<dans ma chambre>> la nuit, j'aurais\ntrop honte !")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut Link !\nTu as du nouveau à propos de Zelda ?\nJ'espère qu'elle reviendra bientôt !")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x811Ah, Link !\nLa tour de lumière émet un rayon\nlumineux ! C'est la première fois\nque je vois ça !")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BSalut Link !\n\n\n\n\x0E\x01\x09\x04\x00\xFF05<r<Deux grandes ailes>>...?\nLe vent souffle toujours très fort à\nCélesbourg alors il y a beaucoup de\nchoses qui ressemblent à des ailes.")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BSalut Link !\n\n\n\n\x0E\x01\x09\x04\x00\xFF08Comment ? Le <r<Chant de la Déesse>>...?\x0E\x01\x04\x02\x1E\nC'est la chanson que Zelda chantait\nsouvent, c'est ça ?\n\nJe ne connais pas les paroles mais\nje suis sûr que monsieur le directeur\ndevrait pouvoir t'aider.")
          						  case 1:
/*<314>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0B\x0E\x03\x01\x00Link ! Tu as vu comme la\nmère de Nacia était contente ?\nTout est bien qui finit bien !")
/*<499>*/ 							loadzone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Link !\n\x0E\x01\x04\x02\x1EQuoi ?! Le monsieur, il est devenu\nhumain ?!\n\n\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í\nMoi, ze le préférais quand\nil avait des ailes...")
          	  case 1:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ah, c'est toi, Link !\n\n\n\nLe monsieur de l'autre zour, il m'a\ndit qu'il cherchait plein de gratitude.\nZ'espère que ze pourrai bientôt zouer\navec lui !")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 90), ('param2', 0), ('next', 244), ('param3', 51)])
/*<244>*/ 		printf(/* textboxtype: 2, unk: 0 */ "")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 380), ('param3', 56)])
/*<380>*/ 			printf(/* textboxtype: 2, unk: 0 */ "")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          		  case 1:
/*<246>*/ 			printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'ai annulé l'ajout de cet objet\nà la liste des cibles à <pling>détecter.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Ouaaaah !\nMais c'est le vieux robot de Dorco !")
/*<189>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 87), ('param3', 33)])
/*< 87>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Ça alors...\n\n\n\n\x0E\x01\x04\x02\x14J'en crois pas mes yeux !\x0E\x01\x04\x02(\nC'est l'<r<hélice du moulin >>qui était\ntombée sous les nuages ?!\n\n\x0E\x01\x09\x04\x0C\xC00Alors c'était pas des bobards ce qu'il\nracontait, le grand\x2010père de Dorco ?\n\n\nC'est pas possible, il doit y avoir une\nembrouille quelque part. Enfin, peu\nimporte, je vais réparer ça...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Alors, ça, ça va là.\nJe fixe ça comme ça...")
/*<183>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 29), ('param2', 256), ('next', 184), ('param3', 15)])
/*<184>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 30), ('param2', 356), ('next', 209), ('param3', 15)])
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 190), ('param3', 6)])
/*<190>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 256), ('next', 185), ('param3', 13)])
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 89), ('param3', 6)])
/*< 89>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x10EFiou !")
/*<188>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 187), ('param3', 17)])
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xC00Et voilà, c'est réparé !\nSi tu as de quoi faire tourner l'hélice,\ntu pourras faire pivoter le moulin !")
/*<210>*/ 		printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCDCHÉRI !\nCHÉRI ?")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x05\x714Ah, j'avais oublié !\nMa femme m'a demandé de réparer\nles étagères à la maison !\n\nElle est toujours en train de chercher\nquelqu'un...")
/*< 91>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xC00Bon, ben quand faut y aller...\nAllez, Link, à plus !")
          			flw_192:
/*<192>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 191), ('param3', 17)])
/*<191>*/ 			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 31), ('param2', 0), ('next', 193), ('param3', 14)])
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<295>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x05\x714Ah, zut ! Je devrais être en train\nde chercher Nacia !")
/*<296>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\xC00Allez, Link, à plus !\nToi aussi aide\x2010nous à chercher Nacia !\nEt si tu la trouves, fais\x2010nous signe !")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Tout le monde sait qu'il y a rien\nsous les nuages ! Alors comment\non pourrait en ramener des trucs ?\n\nPourtant, <b<Dorco>> y croit dur comme\nfer et il garde précieusement la\ncarcasse de ce robot.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Salut, Link !\nMerci d'avoir retrouvé Nacia !\n\n\nIl fait beau aujourd'hui,\ntu trouves pas ?\n\n\nPar une si belle journée, j'irais bien\nprendre un verre à la Citrouille\nperchée.\n\nMais ma femme veut que je répare\nles étagères...\n\n\nAaah... J'ai pas envie...")
          			  case 1:
/*<292>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0ESalut, Link !\nNacia est toujours pas\nrentrée !\n\nMoi aussi, je commence\nà me faire un peu de souci !\n\n\nAide\x2010nous à la chercher !")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Aah... Elle est si belle !\nJe ferais n'importe quoi pour Fay...")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0 */ ".~~.~~.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Une présence inquiétante se\nfait sentir derrière la porte.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x701Reviens me voir au marché couvert\nsi tu en as l'occasion !\n\n\nJe te prédirai ton avenir à prix d'ami !")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x70DOoh...!\n\n\n\nMais oui, c'est ça !\nElle est absolument identique à mon\nancienne boule de cristal !")
/*<256>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 105), ('param3', 17)])
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x700Woooooh ! Je sens une grande vitalité\nenvahir tout mon corps !\n\n\nJe vais pouvoir reprendre mes\nprédictions !\n\n\nReviens me voir au marché couvert si\ntu en as l'occasion !\n\n\nJe te prédirai ton avenir à prix d'ami !")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 212), ('param3', 31)])
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1799), ('next', 103), ('param3', 13)])
/*<103>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Mais que fais\x2010tu ? Pars vite à\nla recherche de ma nouvelle\nboule de cristal !")
          				  case 1:
/*<214>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1799), ('next', 213), ('param3', 13)])
/*<213>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Mais que fais\x2010tu ? Pars vite à\nla recherche de ma nouvelle\nboule de cristal !")
/*<242>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 215), ('param3', 51)])
/*<215>*/ 					printf(/* textboxtype: 2, unk: 0 */ "La <r<boule de cristal >>que recherche\ncette personne ne figure pas parmi\nles cibles à <pling><r<détecter>>.\n\nVoulez\x2010vous rajouter la <r<boule de cristal\n>>à la liste des cibles à <pling><r<détecter>> ?\n[1]S'il te plaît[2-]Pas\nmaintenant")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 14), ('next', 383), ('param3', 56)])
/*<383>*/ 						printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nJ'ai réglé la <r<<pling>détection>> pour réagir à la\n<r<boule de cristal >>que recherche cette\npersonne.")
          						flw_241:
/*<241>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'ai annulé l'ajout de cet objet\nà la liste des cibles à <pling>détecter.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 31)])
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x100FNe te préoccupe plus de moi...\nLaisse\x2010moi à mon triste sort...\n\n\nMaintenant que ma boule de cristal\nest brisée, je ne peux plus prédire\nton avenir...\n\nJ'ai l'impression qu'à l'image de ma\nboule de cristal brisée, mes \x0E\x01\x06\x02\xFCCDgrands\nyeux ronds\x0E\x01\x06\x02Í sont troublés.\n\n\x0E\x01\x04\x02\x1EAah... Si seulement j'avais une nouvelle\nboule de cristal...")
/*<160>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1798), ('next', 159), ('param3', 13)])
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Mais dis\x2010moi. J'ai entendu dire que tu\navais retrouvé une partie du moulin qui\nétait tombée dans le monde d'en bas.\n\nCette boule à présent brisée vient aussi\nd'en bas. C'est le grand\x2010père du gérant\nde l'atelier de rénovation qui l'avait\ntrouvée avant de me la céder.\nIl y a peut\x2010être d'autres boules sous les\nnuages. Pourrais\x2010tu essayer de m'en\ntrouver une nouvelle ?\n[1]D'accord[2-]Non")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1802), ('next', 97), ('param3', 13)])
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ça me fait plaisir d'entendre ça !\nJe compte sur toi !\n\n\nLe robot de l'atelier de rénovation\naurait trouvé la boule de cristal\nsur un <r<bâtiment au sommet d'une\nmontagne>>.")
/*<123>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 124), ('param3', 51)])
/*<124>*/ 					printf(/* textboxtype: 2, unk: 0 */ "Je peux ajouter la <r<boule de cristal >>que\nrecherche cette personne à la liste des\ncibles que vous pouvez <r<<pling>détecter>>.\n\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nDois\x2010je régler la <r<détection>> pour réagir\nà la <r<boule de cristal>> ?\n[1]S'il te plaît[2-]Pas encore")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'ai enregistré la boule de cristal.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 14), ('next', 391), ('param3', 56)])
          						flw_391:
/*<391>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 390), ('param3', 36)])
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 392), ('param3', 16)])
/*<392>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x70BJeune homme, je compte sur toi !\nSans boule de cristal, je ne peux plus\nfaire de prédictions.\n\nEt je ne peux donc pas prédire\nton avenir.\n\n\nRamène\x2010moi vite une nouvelle boule\nde cristal !")
          					  case 1:
/*<467>*/ 						printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nSi vous souhaitez régler la détection,\nparlez à nouveau à cette personne.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009 Que ce monde est cruel\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (loadzone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 15), ('next', 480), ('param3', 13)])
/*<480>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Enfin tout de même, la statue de la\nDéesse qui disparaît... C'est vraiment\nimpensable...\n\nJe n'aurais jamais cru que je verrais ça\nun jour !\n\n\nMais le directeur m'a expliqué que\nc'était un mal nécessaire pour que\ntu puisses sauver Zelda.\n\nSon sort repose entre tes mains !")
          			  case 1:
          				flw_173:
/*<173>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 36), ('next', 509), ('param3', 32)])
/*<509>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 322), ('param3', 13)])
/*<322>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Tiens, Link !\nLe monde regorge encore de\nplantes inconnues. Je ne cesse\nd'être surpris.")
/*<174>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 36), ('next', 121), ('param3', 17)])
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x50APlus j'observe cette plante,\nplus je la trouve fascinante !\n\n\n\x0E\x01\x09\x04\x00\x500Où donc se trouve la frontière\nentre le végétal et l'animal ?")
/*<477>*/ 				loadzone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 274), ('param3', 31)])
/*<274>*/ 				switch (loadzone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Hahaha ! Je savais que tu pourrais\nm'aider, Link !\n\n\nJe compte sur toi !")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 268), ('param3', 32)])
/*<268>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 269), ('param3', 17)])
/*<269>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 230), ('param3', 6)])
/*<230>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 270), ('param3', 51)])
/*<270>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 231), ('param3', 50)])
/*<231>*/ 						printf(/* textboxtype: 2, unk: 0 */ "La <r<plante>> que recherche cette\npersonne ne figure pas parmi\nles cibles à <pling><r<détecter>>.\n\nVoulez\x2010vous la rajouter à la liste\ndes cibles à <pling><r<détecter>> ?\n[1]S'il te plaît[2-]Pas\nmaintenant")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 16), ('next', 395), ('param3', 56)])
/*<395>*/ 							printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nJ'ai réglé la <r<<pling>détection>> pour réagir à la\n<r<plante>> que recherche cette personne.")
          							flw_240:
/*<240>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          						  case 1:
/*<233>*/ 							printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'ai annulé l'ajout de cet objet\nà la liste des cibles à <pling>détecter.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Alors, est\x2010ce que tes recherches d'une\nnouvelle espèce de plante avancent ?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 321), ('param3', 31)])
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ah, Link ! Finalement, tu\nveux bien écouter ma requête ?\n\n\nJ'ai pour passe\x2010temps de collectionner\nles plantes rares.")
          						flw_118:
/*<118>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x00Mais il semble que ma collection\ncontienne désormais tous les types\nde plantes que recèle ce village...\n\nJe me demandais donc s'il ne serait\npas possible de découvrir de nouvelles\nplantes quelque part.\n\n\x0E\x01\x09\x04\x09\xA0FAlors ? Tu ne voudrais pas trouver\nune plante qui surprendrait tout le\nmonde ?\n\n[1]Je vais\nessayer[2-]Je n'ai pas\nle temps")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA03Oho ! Je savais que toi, tu écouterais\nma requête, Link !\n\n\nApporte\x2010moi une plante rare que\npersonne n'a jamais vue auparavant !")
/*<265>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 266), ('param3', 32)])
/*<266>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 271), ('param3', 17)])
/*<271>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 134), ('param3', 6)])
/*<134>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 272), ('param3', 51)])
/*<272>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 135), ('param3', 50)])
/*<135>*/ 							printf(/* textboxtype: 2, unk: 0 */ "Je peux ajouter la <r<plante>> que\nrecherche cette personne à la\nliste des cibles que vous pouvez\n<pling><r<détecter>>.\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nDois\x2010je régler la <r<détection>> pour réagir\nà la <r<plante>> ?\n[1]S'il te plaît[2-]Pas encore")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'ai enregistré la plante.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 16), ('next', 136), ('param3', 56)])
          								flw_136:
/*<136>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 119), ('param3', 36)])
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								loadzone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nSi vous souhaitez régler la détection,\nparlez à nouveau à cette personne.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xA09Hahaha ! Oui, tu as autre chose à faire.\nJe comprends.\n\n\nMais si tu cours toujours après la même\nchose, ça va te fatiguer.\n\n\nIl faut savoir souffler de temps en\ntemps. Ne l'oublie pas !")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 484), ('param3', 31)])
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 15), ('next', 482), ('param3', 13)])
/*<482>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Enfin tout de même, la statue de la\nDéesse qui disparaît... C'est vraiment\nimpensable...\n\nJe n'aurais jamais cru que je verrais ça\nun jour !\n\n\nMais le directeur m'a expliqué que\nc'était un mal nécessaire pour que\ntu puisses sauver Zelda.\n\nSon sort repose entre tes mains !")
          							flw_116:
/*<116>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13Ehem... Mais dis\x2010moi plutôt...\nVoudrais\x2010tu écouter ma requête ?\n\n\nComme tu le sais, je suis le plus\ngrand collectionneur de plantes\nde Célesbourg.\n\nEnfin, c'est moi\x2010même qui me suis\ndécerné ce titre...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tiens, Link !\nAlors, as\x2010tu pu parler avec le grand\nNarisha ?\n\nJe vois... Tu as vraiment quelque chose\nde différent des autres.\n\n\nToi et ton célestrier vermeil, vous\ndevriez pouvoir vous en sortir.\n\n\nLe chemin sera encore long et semé\nd'embûches, mais tu ne dois pas baisser\nles bras !")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link !\nAurais\x2010tu un peu de temps\npour écouter mes tourments ?\n[1]Qu'est\x2010ce\nqu'il y a ?[2-]Non,\ndésolé")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Non, je t'en parlerai une autre fois !\nLa mère de Nacia m'a demandé de\nchercher sa fille disparue.\n\nSi tu as un peu de temps, toi aussi,\ncherche\x2010la.")
          						  case 1:
/*<130>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Hahaha ! Allons, tu peux bien écouter\nce que j'ai à te dire !")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 15), ('next', 485), ('param3', 13)])
/*<485>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Enfin tout de même, la statue de la\nDéesse qui disparaît... C'est vraiment\nimpensable...\n\nJe n'aurais jamais cru que je verrais ça\nun jour !\n\n\nMais le directeur m'a expliqué que\nc'était un mal nécessaire pour que\ntu puisses sauver Zelda.\n\nSon sort repose entre tes mains !")
          						  case 1:
/*<316>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Tiens, Link !\nAlors, as\x2010tu pu parler avec le grand\nNarisha ?\n\nJe vois... Tu as vraiment quelque chose\nde différent des autres.\n\n\nToi et ton célestrier vermeil, vous\ndevriez pouvoir vous en sortir.\n\n\nLe chemin sera encore long et semé\nd'embûches, mais tu ne dois pas baisser\nles bras !")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Et voilà ! Livraison de l'<r<hélice du\nmoulin>> effectuée !")
/*<108>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 33)])
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Si t'as encore besoin de moi,\nn'hésite pas à m'appeler !\n\n\nPour Fay, j'irais jusqu'au bout\ndu monde !")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x11Rutabaga !\nQuand on me regarde fixement\ncomme ça, ça me fait rougir\ncomme une tomate !")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Et voilà ! Une belle boule de\ncristal scintillante, une !")
/*<127>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 126), ('param3', 33)])
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Si t'as encore besoin de moi,\nn'hésite pas à m'appeler !\n\n\nPour Fay, j'irais jusqu'au bout\ndu monde !")
/*<128>*/ 	loadzone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 13), ('param3', 32)])
/*< 13>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 21), ('next', 145), ('param3', 32)])
/*<145>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5386), ('param2', 3072), ('next', 16), ('param3', 13)])
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 8), ('next', 9), ('param3', 16)])
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1509\xD11Nacia ! Nacia !\nMais où est\x2010ce qu'elle est passée ?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5387), ('param2', 3328), ('next', 1), ('param3', 13)])
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0 */ "... Ah, je me demande vraiment où\nma petite Nacia a bien pu aller...\n\n\nQu'est\x2010ce que je vais faire si elle a\nvraiment été enlevée ?!")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 369), ('param3', 16)])
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x150E\xD11Ah ! \x0E\x03\x01\x00Link !")
/*<345>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 344), ('param3', 47)])
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 48), ('param2', 356), ('next', 341), ('param3', 15)])
/*<341>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 365), ('param3', 17)])
/*<365>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5390), ('param2', 3840), ('next', 346), ('param3', 13)])
/*<346>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 370), ('param3', 48)])
/*<370>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 48), ('param2', 100), ('next', 340), ('param3', 14)])
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (loadzone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Si t'as encore besoin de moi,\nn'hésite pas à m'appeler !")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Le drôle de Tikwi est arrivé\nà destination !")
/*<167>*/ 		loadzone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

