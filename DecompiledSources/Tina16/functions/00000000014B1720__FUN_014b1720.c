/* Ghidra address: 014b1720 */
/* Ghidra symbol: FUN_014b1720 */


void FUN_014b1720(longlong param_1)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x150) == 0) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar4,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x161) = 0;
    while (((sVar2 = *(short *)(*(longlong *)(param_1 + 0x120) +
                               (longlong)*(int *)(param_1 + 0x150) * 2), sVar2 != 0 && (sVar2 != 10)
            ) && (sVar2 != 0xd))) {
      piVar1 = (int *)(param_1 + 0x150);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar4,1)) {
        FUN_00410ab0();
      }
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x150);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar4,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x161) = 5;
    lVar3 = *(longlong *)(param_1 + 0x120);
    iVar4 = *(int *)(param_1 + 0x150) + 1;
    if (SCARRY4(*(int *)(param_1 + 0x150),1)) {
      lVar3 = FUN_00410ab0();
    }
    if (*(short *)(lVar3 + (longlong)iVar4 * 2) == 0x2a) {
      piVar1 = (int *)(param_1 + 0x150);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar4,1)) {
        FUN_00410ab0();
      }
    }
  }
  return;
}

