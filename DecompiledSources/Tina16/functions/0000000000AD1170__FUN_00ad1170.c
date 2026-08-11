/* Ghidra address: 00ad1170 */
/* Ghidra symbol: FUN_00ad1170 */


void FUN_00ad1170(longlong param_1)

{
  bool bVar1;
  short sVar2;
  undefined1 auStack_48 [56];
  
  do {
    bVar1 = false;
    FUN_00ad06f0(auStack_48);
    if ((*(short *)(param_1 + 0x20) == 0x3c) && (*(char *)(param_1 + 0x82) == '\0')) {
      sVar2 = FUN_00ad04f0(param_1);
      if (sVar2 == 0x21) {
        FUN_00ad06f0(auStack_48);
        bVar1 = true;
        *(undefined1 *)(param_1 + 0x80) = 1;
        FUN_00ad06f0(auStack_48);
        if (*(short *)(param_1 + 0x20) == 0x2d) {
          FUN_00ad06f0(auStack_48);
          if (*(short *)(param_1 + 0x20) == 0x2d) {
            FUN_00ad06f0(auStack_48);
            if ((*(longlong *)(param_1 + 0x88) == 0) || (*(short *)(param_1 + 0x20) != 0x23)) {
              FUN_00ad0890(auStack_48);
            }
            else {
              FUN_00ad0e00(auStack_48);
            }
          }
          else {
            FUN_00ad0940(auStack_48);
          }
        }
        else {
          FUN_00ad0940(auStack_48);
        }
      }
      else if (sVar2 == 0x25) {
        FUN_00ad06f0(auStack_48);
        bVar1 = true;
        do {
          FUN_00ad06f0(auStack_48);
          if (*(short *)(param_1 + 0x20) == 0x25) {
            sVar2 = FUN_00ad04f0(param_1);
            if (sVar2 == 0x3e) break;
          }
        } while (*(short *)(param_1 + 0x20) != 0);
        FUN_00ad06f0(auStack_48);
      }
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}

