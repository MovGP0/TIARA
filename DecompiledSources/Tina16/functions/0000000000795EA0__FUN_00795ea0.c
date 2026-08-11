/* Ghidra address: 00795ea0 */
/* Ghidra symbol: FUN_00795ea0 */


void FUN_00795ea0(longlong param_1)

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
  FUN_00795ce0(param_1,iVar1);
  return;
}

