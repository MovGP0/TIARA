/* Ghidra address: 010942c0 */
/* Ghidra symbol: FUN_010942c0 */


void FUN_010942c0(longlong param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x161) = 6;
  iVar3 = *(int *)(param_1 + 0x150);
  lVar4 = *(longlong *)(param_1 + 0x120);
  iVar5 = iVar3 + 1;
  if (SCARRY4(iVar3,1)) {
    iVar3 = FUN_00410ab0();
  }
  if (*(short *)(lVar4 + (longlong)iVar5 * 2) == 0x22) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    iVar5 = iVar3 + 2;
    if (SCARRY4(iVar3,2)) {
      iVar5 = FUN_00410ab0();
    }
    if (*(short *)(lVar4 + (longlong)iVar5 * 2) == 0x22) {
      piVar1 = (int *)(param_1 + 0x150);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 2;
      if (SCARRY4(iVar3,2)) {
        FUN_00410ab0();
      }
    }
  }
  do {
    iVar3 = *(int *)(param_1 + 0x150);
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 2);
    if (((sVar2 == 0) || (sVar2 == 10)) || (sVar2 == 0xd)) break;
    if (sVar2 == 0x5c) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      iVar5 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        iVar5 = FUN_00410ab0();
      }
      if (*(short *)(lVar4 + (longlong)iVar5 * 2) == 10) {
        piVar1 = (int *)(param_1 + 0x150);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 1;
        if (SCARRY4(iVar3,1)) {
          FUN_00410ab0();
        }
      }
    }
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      FUN_00410ab0();
    }
  } while (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2) !=
           0x22);
  if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2) != 0) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      FUN_00410ab0();
    }
  }
  return;
}

