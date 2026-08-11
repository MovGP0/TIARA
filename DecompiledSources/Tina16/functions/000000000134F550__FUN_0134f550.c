/* Ghidra address: 0134f550 */
/* Ghidra symbol: FUN_0134f550 */


void FUN_0134f550(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = ((param_1 - DAT_021078bc) + 4) / 8;
  iVar4 = ((param_2 - DAT_021078c0) + 4) / 8;
  DAT_021078d0 = iVar3 + iVar4 * DAT_021078c4;
  DAT_021078dc = *(int *)(DAT_021078b0 + 0x10) + -1;
  if (DAT_021078b8 < DAT_021078dc) {
    do {
      FUN_004ae870(DAT_021078b0,DAT_021078dc);
      DAT_021078dc = DAT_021078dc + -1;
    } while (DAT_021078b8 < DAT_021078dc);
  }
  if ((((iVar3 < 0) || (iVar4 < 0)) || (DAT_021078c4 <= iVar3)) ||
     ((DAT_021078c8 <= iVar4 || (*(int *)(DAT_021078e0 + 4 + (longlong)DAT_021078d0 * 8) == -2)))) {
    if ((DAT_02108108 == param_1) || (DAT_0210810c == param_2)) {
      uVar1 = FUN_00b959a0(param_1,param_2);
      uVar2 = FUN_00b95a80(uVar1);
      FUN_004ae7e0(DAT_021078b0,uVar2);
    }
    else {
      uVar1 = FUN_00b959a0(param_1,DAT_0210810c);
      uVar2 = FUN_00b95a80(uVar1);
      FUN_004ae7e0(DAT_021078b0,uVar2);
      uVar1 = FUN_00b959a0(param_1,param_2);
      uVar2 = FUN_00b95a80(uVar1);
      FUN_004ae7e0(DAT_021078b0,uVar2);
    }
  }
  else {
    DAT_021078d4 = DAT_021078d0;
    DAT_02108104 = 0xff;
    do {
      DAT_02108105 = *(byte *)(DAT_021078e0 + 3 + (longlong)DAT_021078d4 * 8);
      if ((DAT_02108104 & DAT_02108105) != 0) {
        DAT_02108105 = DAT_02108105 & DAT_02108104;
      }
      if ((DAT_02108105 != DAT_02108104) && (DAT_021078d4 != DAT_021078cc)) {
        uVar1 = FUN_00b959a0((DAT_021078d4 % DAT_021078c4) * 8 + DAT_021078bc,
                             (DAT_021078d4 / DAT_021078c4) * 8 + DAT_021078c0);
        uVar2 = FUN_00b95a80(uVar1);
        FUN_004aec30(DAT_021078b0,DAT_021078b8 + 1,uVar2);
      }
      DAT_02108104 = 0;
      if ((DAT_02108105 & 1) == 0) {
        if ((DAT_02108105 & 2) == 0) {
          if ((DAT_02108105 & 4) == 0) {
            if ((DAT_02108105 & 8) != 0) {
              DAT_021078d4 = DAT_021078d4 + -1;
              DAT_02108104 = 8;
            }
          }
          else {
            DAT_021078d4 = DAT_021078d4 + DAT_021078c4;
            DAT_02108104 = 4;
          }
        }
        else {
          DAT_021078d4 = DAT_021078d4 + 1;
          DAT_02108104 = 2;
        }
      }
      else {
        DAT_021078d4 = DAT_021078d4 - DAT_021078c4;
        DAT_02108104 = 1;
      }
    } while (DAT_02108104 != 0);
  }
  return;
}

