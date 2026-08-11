/* Ghidra address: 014b1a40 */
/* Ghidra symbol: FUN_014b1a40 */


void FUN_014b1a40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x161) = 9;
  return;
}

