/* Ghidra address: 00a02c10 */
/* Ghidra symbol: FUN_00a02c10 */


int FUN_00a02c10(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  return iVar1 + -2;
}

