/* Ghidra address: 01119940 */
/* Ghidra symbol: FUN_01119940 */


void FUN_01119940(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x161) = 3;
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  return;
}

