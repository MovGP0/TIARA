/* Ghidra address: 0078d740 */
/* Ghidra symbol: FUN_0078d740 */


void FUN_0078d740(longlong param_1)

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
  FUN_0078d590(param_1,iVar1);
  return;
}

