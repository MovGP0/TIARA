/* Ghidra address: 01068650 */
/* Ghidra symbol: FUN_01068650 */


void FUN_01068650(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x162) = 9;
  *(undefined1 *)(param_1 + 0x163) = 0x1f;
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  return;
}

