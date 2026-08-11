/* Ghidra address: 01068580 */
/* Ghidra symbol: FUN_01068580 */


void FUN_01068580(longlong param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x162) = 9;
  iVar3 = *(int *)(param_1 + 0x150);
  lVar4 = *(longlong *)(param_1 + 0x120);
  iVar5 = iVar3 + 1;
  if (SCARRY4(iVar3,1)) {
    iVar3 = FUN_00410ab0();
  }
  sVar2 = *(short *)(lVar4 + (longlong)iVar5 * 2);
  if (sVar2 == 0x3d) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 2;
    if (SCARRY4(iVar3,2)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0x10;
  }
  else if (sVar2 == 0x3e) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    iVar5 = iVar3 + 2;
    if (SCARRY4(iVar3,2)) {
      iVar5 = FUN_00410ab0();
    }
    if (*(short *)(lVar4 + (longlong)iVar5 * 2) == 0x3d) {
      piVar1 = (int *)(param_1 + 0x150);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 3;
      if (SCARRY4(iVar3,3)) {
        FUN_00410ab0();
      }
      *(undefined1 *)(param_1 + 0x163) = 0x27;
    }
    else {
      piVar1 = (int *)(param_1 + 0x150);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 2;
      if (SCARRY4(iVar3,2)) {
        FUN_00410ab0();
      }
      *(undefined1 *)(param_1 + 0x163) = 0x26;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0xf;
  }
  return;
}

