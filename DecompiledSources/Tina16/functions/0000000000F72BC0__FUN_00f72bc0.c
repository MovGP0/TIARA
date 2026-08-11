/* Ghidra address: 00f72bc0 */
/* Ghidra symbol: FUN_00f72bc0 */


void FUN_00f72bc0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c [3];
  
  local_30 = 0;
  local_28 = 0;
  FUN_00f6fbc0(param_1,param_2);
  FUN_004b84c0(param_2,param_1 + 0x24,4);
  FUN_004b84c0(param_2,(longlong)param_1 + 0x126,1);
  FUN_004b84c0(param_2,(longlong)param_1 + 0x125,1);
  FUN_00f60970(param_2,param_1 + 0x22,(int)param_1[1]);
  if (100 < DAT_0202eed4) {
    FUN_00f60970(param_2,param_1 + 0x23,(int)param_1[1]);
    FUN_004b84c0(param_2,(longlong)param_1 + 0x124,1);
    if ((DAT_0202eed4 < 0x6a) && ((char)param_1[6] == '\x04')) {
      FUN_01d43440(&local_30,(int)param_1[0x24]);
      FUN_00414ad0(param_1 + 0x23,local_30);
      *(undefined1 *)((longlong)param_1 + 0x124) = 0;
    }
  }
  if ((char)param_1[6] == '\v') {
    FUN_004b84c0(param_2,param_1 + 0x25,1);
    FUN_004b84c0(param_2,(longlong)param_1 + 0x129,1);
    FUN_00f60970(param_2,param_1 + 0x26,(int)param_1[1]);
    if (0x6a < DAT_0202eed4) {
      if ((DAT_0202eed4 < 0x6e) ||
         ((0x6d < DAT_0202eed4 && (*(int *)((longlong)param_1 + 0x14) == 1)))) {
        if (((DAT_0202eed4 < 0x6e) || (*(char *)((longlong)param_1 + 0x129) != '\x01')) &&
           ((0x6d < DAT_0202eed4 || (*(char *)((longlong)param_1 + 0x129) != '\x01')))) {
          if (((DAT_0202eed4 < 0x6e) || (*(char *)((longlong)param_1 + 0x129) != '\x04')) &&
             ((0x6d < DAT_0202eed4 || (*(char *)((longlong)param_1 + 0x129) != '\x02')))) {
            if ((DAT_0202eed4 < 0x6e) ||
               (((cVar1 = *(char *)((longlong)param_1 + 0x129), cVar1 != '\x05' && (cVar1 != '\r'))
                && (cVar1 != '\f')))) {
              if ((DAT_0202eed4 < 0x6e) || (*(char *)((longlong)param_1 + 0x129) != '\x02')) {
                if ((DAT_0202eed4 < 0x6e) || (*(char *)((longlong)param_1 + 0x129) != '\x0e')) {
                  if ((DAT_0202eed4 < 0x6e) ||
                     ((*(char *)((longlong)param_1 + 0x129) != '\v' &&
                      (*(char *)((longlong)param_1 + 0x129) != '\x1f')))) {
                    if ((DAT_0202eed4 < 0x6e) || (*(char *)((longlong)param_1 + 0x129) != '\x03')) {
                      cVar1 = *(char *)((longlong)param_1 + 0x129);
                      if (cVar1 == '\x0f') {
                        FUN_004b84c0(param_2,(longlong)param_1 + 0x1ec,0x78);
                      }
                      else if (cVar1 == '\x10') {
                        FUN_004b84c0(param_2,(longlong)param_1 + 0x264,0x78);
                      }
                      else if (cVar1 == '\x11') {
                        FUN_004b84c0(param_2,(longlong)param_1 + 0x2dc,0x78);
                      }
                      else if ((DAT_0202eed4 < 0x6e) ||
                              (*(char *)((longlong)param_1 + 0x129) != '\x06')) {
                        if ((0x6d < DAT_0202eed4) && (*(char *)((longlong)param_1 + 0x129) == '\a'))
                        {
                          FUN_004b84c0(param_2,param_1 + 0x70,0x60);
                        }
                      }
                      else {
                        FUN_004b84c0(param_2,param_1 + 0x70,0x60);
                      }
                    }
                    else {
                      FUN_004b84c0(param_2,(longlong)param_1 + 0x1ac,0x40);
                    }
                  }
                  else {
                    FUN_004b84c0(param_2,(longlong)param_1 + 0x1ac,0x40);
                    FUN_004b84c0(param_2,(longlong)param_1 + 0x17c,0x30);
                    FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
                    if ((char)param_1[0x35] != '\0') {
                      FUN_004b84c0(param_2,param_1 + 0x7c,0xc);
                    }
                  }
                }
                else {
                  FUN_004b84c0(param_2,(longlong)param_1 + 0x17c,0x30);
                  FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
                  if ((char)param_1[0x35] != '\0') {
                    FUN_004b84c0(param_2,param_1 + 0x7c,0xc);
                  }
                }
              }
              else {
                FUN_004b84c0(param_2,(longlong)param_1 + 0x17c,0x30);
                if ((char)param_1[0x35] != '\0') {
                  FUN_004b84c0(param_2,param_1 + 0x7c,0xc);
                }
              }
            }
            else {
              FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
            }
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x129) = 4;
            FUN_004b84c0(param_2,param_1 + 0x6b,0x28);
          }
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x129) = 1;
          FUN_004b84c0(param_2,param_1 + 0x2e,4);
          FUN_004b84c0(param_2,(longlong)param_1 + 0x174,1);
          FUN_004b84c0(param_2,param_1 + 0x2f,4);
        }
      }
      else if (*(int *)((longlong)param_1 + 0x14) == 8) {
        bVar2 = *(byte *)((longlong)param_1 + 0x129) & 0x7f;
        if (bVar2 == 1) {
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
        }
        else if (bVar2 == 4) {
          FUN_004b84c0(param_2,param_1 + 0x6b,0x28);
        }
        else if (((bVar2 == 5) || (bVar2 == 0xd)) || (bVar2 == 0xc)) {
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
        }
        else if (bVar2 == 8) {
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
        }
        else if (bVar2 == 9) {
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
        }
        else if (bVar2 == 10) {
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
        }
        else if (bVar2 == 2) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x17c,0x30);
          if ((char)param_1[0x35] != '\0') {
            FUN_004b84c0(param_2,param_1 + 0x7c,0xc);
          }
        }
        else if (bVar2 == 0xe) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x17c,0x30);
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
          if ((char)param_1[0x35] != '\0') {
            FUN_004b84c0(param_2,param_1 + 0x7c,0xc);
          }
        }
        else if ((bVar2 == 0xb) || (bVar2 == 0x1f)) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x1ac,0x40);
          FUN_004b84c0(param_2,(longlong)param_1 + 0x17c,0x30);
          FUN_004b84c0(param_2,param_1 + 0x2e,0xc);
          if ((char)param_1[0x35] != '\0') {
            FUN_004b84c0(param_2,param_1 + 0x7c,0xc);
          }
        }
        else if (bVar2 == 3) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x1ac,0x40);
        }
        else if (bVar2 == 0xf) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x1ec,0x78);
        }
        else if (bVar2 == 0x10) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x264,0x78);
        }
        else if (bVar2 == 0x11) {
          FUN_004b84c0(param_2,(longlong)param_1 + 0x2dc,0x78);
        }
        else if (bVar2 == 6) {
          FUN_004b84c0(param_2,param_1 + 0x70,0x60);
        }
        else if (bVar2 == 7) {
          FUN_004b84c0(param_2,param_1 + 0x70,0x60);
        }
      }
      if ((0x6d < DAT_0202eed4) && (*(int *)((longlong)param_1 + 0x14) == 4)) {
        cVar1 = *(char *)((longlong)param_1 + 0x129);
        if (cVar1 == '\t') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x01') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x02') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x11') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x12') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x13') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x14') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x15') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\x16') {
          FUN_004b84c0(param_2,param_1 + 0x7e,8);
        }
        else if (cVar1 == '\b') {
          FUN_004b84c0(param_2,param_1 + 0x7f,0x38);
        }
        else if (cVar1 == '\x06') {
          FUN_004b84c0(param_2,param_1 + 0x7f,0x38);
        }
        else if (cVar1 == '\a') {
          FUN_004b84c0(param_2,param_1 + 0x7f,0x38);
        }
        else if (cVar1 == '\x05') {
          FUN_004b84c0(param_2,param_1 + 0x7f,0x38);
        }
        else if (cVar1 == '\x04') {
          FUN_004b84c0(param_2,param_1 + 0x86,0x1c);
        }
        else if (cVar1 == '\x03') {
          FUN_004b84c0(param_2,param_1 + 0x86,0x1c);
        }
        else if (cVar1 == '#') {
          FUN_004b84c0(param_2,param_1 + 0x8a,0x30);
        }
        else if (cVar1 == '\v') {
          FUN_004b84c0(param_2,param_1 + 0x90,0x68);
        }
        else if (cVar1 == '\r') {
          FUN_004b84c0(param_2,param_1 + 0x90,0x68);
        }
      }
      if ((0x6d < DAT_0202eed4) && (*(int *)((longlong)param_1 + 0x14) == 2)) {
        cVar1 = *(char *)((longlong)param_1 + 0x129);
        if (cVar1 == '\x01') {
          FUN_004b84c0(param_2,param_1 + 0x9d,0x10);
        }
        else if (cVar1 == '\x02') {
          FUN_004b84c0(param_2,param_1 + 0x9d,0x10);
        }
        else if (cVar1 == '\x06') {
          FUN_004b84c0(param_2,param_1 + 0x9d,0x10);
        }
        else if (cVar1 == '\x05') {
          FUN_004b84c0(param_2,param_1 + 0x9f,0x10);
        }
        else if (cVar1 == '\x04') {
          FUN_004b84c0(param_2,param_1 + 0xa1,0x14);
        }
        else if (cVar1 == '\x03') {
          FUN_004b84c0(param_2,param_1 + 0xa1,0x14);
        }
        else if (cVar1 == '\a') {
          FUN_004b84c0(param_2,param_1 + 0xa4,0x30);
        }
        else if (cVar1 == '\b') {
          FUN_004b84c0(param_2,param_1 + 0xaa,0x68);
          FUN_004b84c0(param_2,param_1 + 0x9f,0x10);
          FUN_004b84c0(param_2,param_1 + 0xa1,0x14);
        }
        else if (cVar1 == '\t') {
          FUN_004b84c0(param_2,param_1 + 0xaa,0x68);
          FUN_004b84c0(param_2,param_1 + 0x9f,0x10);
          FUN_004b84c0(param_2,param_1 + 0xa1,0x14);
        }
      }
    }
  }
  else if (((char)param_1[6] == '\f') && (FUN_004b84c0(param_2,local_1c,4), -1 < local_1c[0] + -1))
  {
    do {
      FUN_00f60970(param_2,&local_28,(int)param_1[1]);
      (**(code **)(*(longlong *)param_1[0xb8] + 0x78))((longlong *)param_1[0xb8],local_28);
      local_1c[0] = local_1c[0] + -1;
    } while (local_1c[0] != 0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00414560(&local_30,2);
  return;
}

