/* Ghidra address: 015b63e0 */
/* Ghidra symbol: FUN_015b63e0 */


void FUN_015b63e0(void)

{
  int iVar1;
  
  DAT_0210f724 = DAT_0210f724 + -1;
  if (DAT_0210f724 == -1) {
    DAT_0210f73c = thunk_FUN_040d222c();
    DAT_0210f728 = (ushort *)FUN_00409570(2);
    DAT_0210f730 = (ushort *)FUN_00409570(2);
    if (DAT_0210f73c == 0x41f) {
      DAT_0210f738 = 0;
      do {
        *(undefined2 *)(&DAT_0210f524 + (ulonglong)DAT_0210f738 * 2) = (&DAT_01f6f760)[DAT_0210f738]
        ;
        DAT_0210f738 = DAT_0210f738 + 1;
      } while (DAT_0210f738 != 0);
    }
    else {
      DAT_0210f738 = 0;
      do {
        DAT_0210f73a = 0;
        *DAT_0210f728 = (ushort)DAT_0210f738;
        DAT_0210f739 = 0;
        do {
          *DAT_0210f730 = (ushort)DAT_0210f739;
          iVar1 = FUN_0043e7a0(DAT_0210f730,DAT_0210f728,1);
          if (iVar1 < 0) {
            DAT_0210f73a = DAT_0210f73a + 1;
          }
          DAT_0210f739 = DAT_0210f739 + 1;
        } while (DAT_0210f739 != 0);
        *(ushort *)(&DAT_0210f524 + (ulonglong)DAT_0210f738 * 2) = (ushort)DAT_0210f73a;
        DAT_0210f738 = DAT_0210f738 + 1;
      } while (DAT_0210f738 != 0);
    }
    DAT_0210f738 = 0;
    do {
      *(ushort *)(&DAT_0210f324 + (ulonglong)(byte)(&DAT_0210f524)[(ulonglong)DAT_0210f738 * 2] * 2)
           = (ushort)DAT_0210f738;
      DAT_0210f738 = DAT_0210f738 + 1;
    } while (DAT_0210f738 != 0);
    DAT_0210f738 = 0;
    do {
      DAT_0210f73b = '\0';
      DAT_0210f739 = 0;
      do {
        if (*(ushort *)(&DAT_0210f524 + (ulonglong)DAT_0210f739 * 2) == (ushort)DAT_0210f738) {
          DAT_0210f73b = '\x01';
          break;
        }
        DAT_0210f739 = DAT_0210f739 + 1;
      } while (DAT_0210f739 != 0);
    } while ((DAT_0210f73b != '\0') && (DAT_0210f738 = DAT_0210f738 + 1, DAT_0210f738 != 0));
    if (DAT_0210f73b == '\0') {
      FUN_015b6110(&DAT_0210ef24);
      thunk_FUN_03c44029(&DAT_0210ef24,&DAT_0210f324,0x100);
      thunk_FUN_041aafaf(&DAT_0210ef24,&DAT_0210f524,0x100);
      FUN_015b6110(&DAT_0210f124);
      thunk_FUN_04153e20(&DAT_0210ef24,0x100);
      thunk_FUN_0418bfc2(&DAT_0210f124,0x100);
    }
    else {
      DAT_0210f738 = 0;
      do {
        *DAT_0210f728 = (ushort)DAT_0210f738;
        if (DAT_0210f73c == 0x41f) {
          *DAT_0210f728 = *(ushort *)(&DAT_01f6f960 + (ulonglong)(byte)*DAT_0210f728 * 2);
        }
        else {
          thunk_FUN_0407424e(DAT_0210f728,1);
        }
        *(undefined2 *)
         (&DAT_0210ef24 + (ulonglong)(byte)(&DAT_0210f524)[(ulonglong)DAT_0210f738 * 2] * 2) =
             *(undefined2 *)(&DAT_0210f524 + (ulonglong)(byte)*DAT_0210f728 * 2);
        *DAT_0210f728 = (ushort)DAT_0210f738;
        if (DAT_0210f73c == 0x41f) {
          *DAT_0210f728 = *(ushort *)(&DAT_01f6fb60 + (ulonglong)(byte)*DAT_0210f728 * 2);
        }
        else {
          thunk_FUN_03e5c312(DAT_0210f728,1);
        }
        *(undefined2 *)
         (&DAT_0210f124 + (ulonglong)(byte)(&DAT_0210f524)[(ulonglong)DAT_0210f738 * 2] * 2) =
             *(undefined2 *)(&DAT_0210f524 + (ulonglong)(byte)*DAT_0210f728 * 2);
        DAT_0210f738 = DAT_0210f738 + 1;
      } while (DAT_0210f738 != 0);
    }
    FUN_004095f0(DAT_0210f728);
    FUN_004095f0(DAT_0210f730);
  }
  return;
}

