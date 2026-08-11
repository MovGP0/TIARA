/* Ghidra address: 018936c0 */
/* Ghidra symbol: FUN_018936c0 */


void FUN_018936c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(short *)(param_2 + 8);
  if (lVar2 < 4) {
    if (lVar2 == 3) {
      FUN_018932d0(param_1,*(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x4a8));
    }
    else if (lVar2 == 0) {
      FUN_018932d0(param_1,*(int *)(param_1 + 0x4a0) - *(int *)(param_1 + 0x4ac));
    }
    else if (lVar2 == 1) {
      FUN_018932d0(param_1,*(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x4ac));
    }
    else if (lVar2 == 2) {
      FUN_018932d0(param_1,*(int *)(param_1 + 0x4a0) - *(int *)(param_1 + 0x4a8));
    }
  }
  else if (lVar2 - 4U < 2) {
    uVar1 = FUN_018931a0(param_1,(longlong)*(short *)(param_2 + 10),0);
    FUN_018932d0(param_1,uVar1);
  }
  else if (lVar2 == 6) {
    FUN_018932d0(param_1,0);
  }
  else if (lVar2 == 7) {
    FUN_018932d0(param_1,*(undefined4 *)(param_1 + 0x4a4));
  }
  return;
}

