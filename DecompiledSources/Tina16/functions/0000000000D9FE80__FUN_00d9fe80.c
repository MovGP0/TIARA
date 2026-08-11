/* Ghidra address: 00d9fe80 */
/* Ghidra symbol: FUN_00d9fe80 */


void FUN_00d9fe80(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = iVar1 * 2;
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  FUN_00d9fcd0(param_1,iVar1);
  return;
}

