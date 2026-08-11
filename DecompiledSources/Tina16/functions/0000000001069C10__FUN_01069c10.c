/* Ghidra address: 01069c10 */
/* Ghidra symbol: FUN_01069c10 */


void FUN_01069c10(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x162) = 9;
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar3 = *(int *)(param_1 + 0x150) + 1;
  if (SCARRY4(*(int *)(param_1 + 0x150),1)) {
    lVar2 = FUN_00410ab0();
  }
  if (*(short *)(lVar2 + (longlong)iVar3 * 2) == 0x3d) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 2;
    if (SCARRY4(iVar3,2)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0x2e;
  }
  else {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0x2d;
  }
  return;
}

