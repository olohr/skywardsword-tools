          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2 */ "Tu es arrivé, Link !\nDonne tout ce que tu as !")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 16), ('param3', 40)])
/*< 16>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Maître Link, vous avez\néchoué dans votre collecte des <y<larmes>>.")
/*< 48>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2 */ "Les <r<gardiens>> qui vous attaquent et les\n<r<veilleurs>> qui traquent les intrus\npeuvent être de deux types, <r<terrestre\nou céleste>>.\nChacun a un comportement différent,\nfaites\x2010y très attention.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2 */ "Rassemblez toutes les <y<larmes>>.\nJ'attendrai votre retour.")
          										flw_49:
/*< 49>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 30), ('param3', 40)])
/*< 30>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2 */ "L'emplacement des <y<larmes>> que vous\navez déjà recueillies une fois est\n<r<indiqué sur votre carte>>. \n\nN'hésitez pas à y placer des balises.\nSi vous commencez par localiser\nles 15 larmes, vos chances de réussite\naugmenteront grandement.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2 */ "Il peut être préférable de <r<conserver les\n<y<larmes<r< faciles à atteindre >>pour vous\nsortir d'affaire si vous vous faites\nrepérer.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2 */ "La probabilité que vous ne soyez pas\nl'élu augmente, \x0E\x01\x12\x04\x00\x01Maître...\n\n\nToutes ces tentatives successives\nsemblent avoir troublé votre\nconcentration. Je vous recommande\nde faire une pause.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2 */ "Prenez garde aux <r<deux sortes de\nveilleurs >>qui patrouillent pour repérer\nles intrus.\n\nSi vous n'entrez pas dans la lumière\ndes <r<veilleurs qui volent>>, vous serez en\nsécurité.\n\nMais les <r<veilleurs qui sont au sol >>vous\npoursuivront si vous vous approchez\nd'eux. Il vous faudra être <r<très\nprudent>>.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2 */ "L'emplacement des <y<larmes>> que vous\navez déjà recueillies une fois est\n<r<indiqué sur votre carte>>.\n\nEssayez tout d'abord de repérer\nl'emplacement des 15 <y<larmes>>.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Tant que votre volonté ne plie pas, vous\npouvez retenter l'épreuve de la Déesse\nindéfiniment.\n\nÉvitez de recueillir les <y<larmes>> faciles\nà atteindre tout de suite. <r<Conservez\x2010les>>\nplutôt pour le cas où vous seriez\ndécouvert.\nUne fois que vous aurez rassemblé les\n15 <y<larmes>>, rejoignez\x2010moi dans le\nmonde extérieur.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Maître Link.")
/*< 46>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 18), ('param3', 40)])
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2 */ "Lorsque les 15 <y<larmes>> empliront le\n<y<réceptacle spirituel>>, votre âme\ns'épanouira et la Déesse vous octroiera\nun nouveau pouvoir.\nJ'attendrai votre retour dans le monde\nextérieur, \x0E\x01\x12\x04\x00\x02Maître.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x04Maître Link.")
/*<  4>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 2), ('param3', 40)])
/*<  2>*/ 			printf(/* textboxtype: 2, unk: 2 */ "Vous vous trouvez dans la <b<Psysalis de\nDin>> où vous allez subir la troisième\népreuve, celle qui éprouvera votre\n<r<force>>.\nPour trouver la troisième flamme qui\nrenforcera votre épée, votre âme doit\ngrandir une dernière fois.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 11), ('param3', 40)])
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 6), ('param3', 40)])
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 2 */ "Lorsque le <y<réceptacle spirituel>> sera\nrempli, votre âme s'épanouira et la\nDéesse vous octroiera un <r<nouveau\npouvoir>>.\nAvez\x2010vous des questions, \x0E\x01\x12\x04\x00\x02Maître ?\n[1]Oui[2-]Non")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2 */ "À quel sujet puis\x2010je vous renseigner ?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Ça ira,\nmerci")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître, je vais vous\nrépondre.\n\n\nPour remplir le <y<réceptacle spirituel>>,\nvous devez rassembler les <y<larmes de\nDin >>disséminées dans ce monde.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 56), ('param3', 40)])
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Voyez\x2010vous cet objet brillant, là\x2010bas ?")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2 */ "C'est une <y<larme de Din>>.\nIl vous faudra en rassembler <r<15>>.")
/*< 57>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 53), ('param3', 40)])
/*< 53>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 77), ('param3', 6)])
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Avez\x2010vous d'autres questions ?\n[1]Réceptacle\nspirituel[2]Gardiens[3]Dévoileur[4-]Non")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Si vous faites un pas hors du cercle où\nvous vous trouvez, des êtres appelés les\n<r<gardiens >>se mettront à votre poursuite.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Si vous subissez ne serait\x2010ce qu'un seul\ncoup des <r<gardiens>>, votre âme sera\nbrisée et vous aurez échoué à l'épreuve.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Rassemblez les <y<larmes>> sans subir une\nseule attaque pour remplir le\n<y<réceptacle spirituel>>.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Bien, Maître. Je vais vous répondre.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2 */ "Il existe dans ce monde des étendues\nd'un liquide qu'on appelle <r<dévoileur>>.\n\n\nSi vous le touchez, <r<les gardiens\nvous repéreront instantanément>>.\n\n\nFaites donc attention où vous mettez\nles pieds.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2 */ "\x0E\x01\x12\x04\x00\x05Très bien, Maître.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2 */ "J'attendrai votre retour dans le monde\nextérieur, \x0E\x01\x12\x04\x00\x02Maître.")
/*< 73>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 40)])
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

