          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Current Session Play Time: \x0E\x00\x03\x02\x01<r<\x0E\x02\x03\x06\x00\x00\x2CD\x0E\x00\x03\x02\x01\xFF1A<r<\x0E\x02\x03\x06\x00\x01\x2CD\x0E\x00\x03\x02\x01\n>>Total Play Time: \x0E\x00\x03\x02\x01<r<\x0E\x02\x03\x06\x00\x02\x2CD\x0E\x00\x03\x02\x01\xFF1A<r<\x0E\x02\x03\x06\x00\x03\x2CD\x0E\x00\x03\x02\x01>>\nNo further information.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\nYou called for me, Master?\n[1]\x0E\x02\x02\x04\x00\x00[2]\x0E\x02\x02\x04\x00\x01[3]\x0E\x02\x02\x04\x00\x02[4-]\x0E\x02\x02\x04\x00\x03")
/*<  4>*/ 	switch (choice(4)) {
          	  case 0:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 1 */ "\x0E\x01\x12\x04\x00\nYes, Master. What information do\nyou seek?\n[1]\x0E\x02\x02\x04\x00\x00[2]\x0E\x02\x02\x04\x00\x01[3]\x0E\x02\x02\x04\x00\x02[4-]\x0E\x02\x02\x04\x00\x03")
/*<  7>*/ 		switch (choice(4)) {
          		  case 0:
          			flw_8:
/*<  8>*/ 			entrypoint_-01_-1();
          		  case 1:
          			goto flw_8
          		  case 2:
          			goto flw_8
          		  case 3:
          		}
          	  case 1:
          		flw_5:
/*<  5>*/ 		entrypoint_-01_-1();
          	  case 2:
          		goto flw_5
          	  case 3:
          	}
          }

