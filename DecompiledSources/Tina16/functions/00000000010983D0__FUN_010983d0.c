/* Ghidra address: 010983d0 */
/* Ghidra symbol: FUN_010983d0 */


void FUN_010983d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x161) = 4;
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  return;
}

