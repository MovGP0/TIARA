/* Ghidra address: 01069870 */
/* Ghidra symbol: FUN_01069870 */


void FUN_01069870(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x162) = 9;
  *(undefined1 *)(param_1 + 0x163) = 0x28;
  return;
}

