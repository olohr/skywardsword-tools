          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Allora, che ne pensi?\x0E\x01\x04\x02\x1E\n[1]Ti dona![2]Mah...[3]È Carnevale?")
/*<  2>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Ooh... e com'è possibile?!\nNon è che si è perso???\nDove sarà mai finito?\x0E\x01\x04\x02\x1E \n[1]Vinco io![2]Riportamelo![3]Bel taglio!")
/*<  8>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 1 */ "Link, lascia che io creda\nfino in fondo a questo miracolo,\naffronta il tuo destino,\nti prego. \x0E\x01\x04\x02\x1E\n[1]Lo farò[2]Non voglio[3]È troppo")
/*<  5>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_71() {
/*< 12>*/ 	start()
/*< 13>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 14), ('param3', 58)])
/*< 14>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', 21), ('param3', 56)])
          	flw_21:
/*< 21>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_199_03() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x06\x02\xFECDDi che si tratterà mai? ~~~\nForse l'hai già capito...\x0E\x01\x04\x02\x1E \n\n\n[1]Non saprei[2]Non mi piace[3]Forse sì")
/*< 11>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_72() {
/*< 15>*/ 	start()
/*< 16>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 17), ('param3', 58)])
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 21), ('param3', 56)])
          	goto flw_21
          }

          void entrypoint_199_73() {
/*< 18>*/ 	start()
/*< 19>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 20), ('param3', 58)])
/*< 20>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 8), ('next', 21), ('param3', 56)])
          	goto flw_21
          }

