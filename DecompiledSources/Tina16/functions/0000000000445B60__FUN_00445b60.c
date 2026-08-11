/* Ghidra address: 00445b60 */
/* Ghidra symbol: FUN_00445b60 */


void FUN_00445b60(longlong param_1)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc0) < 0x12) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc0);
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0x11;
  }
  iVar3 = (int)*(short *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x54) < 1) {
    FUN_00445a20(param_1,DAT_01dc04d8);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(char *)(param_1 + 0xb0) != '\x02') {
      *(int *)(param_1 + 0x48) = (iVar3 + -1) % 3 + 1;
    }
    do {
      uVar2 = FUN_00445b30(param_1);
      FUN_00445a20(param_1,uVar2);
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      if ((*(int *)(param_1 + 0x48) == 0) && (0 < iVar3)) {
        *(undefined4 *)(param_1 + 0x48) = 3;
        sVar1 = *(short *)(*(longlong *)(param_1 + 200) + 0x178);
        if (sVar1 != 0) {
          FUN_00445a20(param_1,sVar1);
        }
      }
    } while (iVar3 != 0);
    iVar3 = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    sVar1 = *(short *)(*(longlong *)(param_1 + 200) + 0x17a);
    if (sVar1 != 0) {
      FUN_00445a20(param_1,sVar1);
    }
    if (iVar3 < 0) {
      do {
        FUN_00445a20(param_1,DAT_01dc04d8);
        iVar3 = iVar3 + 1;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        if (iVar3 == 0) break;
      } while (*(int *)(param_1 + 0x4c) != 0);
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    while (0 < iVar3) {
      uVar2 = FUN_00445b30(param_1);
      FUN_00445a20(param_1,uVar2);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      iVar3 = *(int *)(param_1 + 0x4c);
    }
  }
  return;
}

