/* Ghidra address: 0078f5a0 */
/* Ghidra symbol: FUN_0078f5a0 */


void FUN_0078f5a0(longlong param_1)

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
  FUN_0078f3f0(param_1,iVar1);
  return;
}

