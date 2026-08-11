/* Ghidra address: 00793b80 */
/* Ghidra symbol: FUN_00793b80 */


void FUN_00793b80(longlong param_1)

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
  FUN_007939d0(param_1,iVar1);
  return;
}

