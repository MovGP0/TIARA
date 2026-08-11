/* Ghidra address: 011199f0 */
/* Ghidra symbol: FUN_011199f0 */


void FUN_011199f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x160) = 1;
  *(undefined1 *)(param_1 + 0x161) = 0;
  return;
}

