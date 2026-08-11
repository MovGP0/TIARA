/* Ghidra address: 010693e0 */
/* Ghidra symbol: FUN_010693e0 */


void FUN_010693e0(longlong param_1)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x162) = 9;
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar4 = *(int *)(param_1 + 0x150) + 1;
  if (SCARRY4(*(int *)(param_1 + 0x150),1)) {
    lVar3 = FUN_00410ab0();
  }
  sVar2 = *(short *)(lVar3 + (longlong)iVar4 * 2);
  if (sVar2 == 0x2b) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 2;
    if (SCARRY4(iVar4,2)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0x13;
  }
  else if (sVar2 == 0x3d) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 2;
    if (SCARRY4(iVar4,2)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 1;
  }
  else {
    piVar1 = (int *)(param_1 + 0x150);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar4,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0;
  }
  return;
}

