/* Ghidra address: 014b1020 */
/* Ghidra symbol: FUN_014b1020 */


void FUN_014b1020(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x161) = 7;
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2) == 10) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      FUN_00410ab0();
    }
  }
  return;
}

