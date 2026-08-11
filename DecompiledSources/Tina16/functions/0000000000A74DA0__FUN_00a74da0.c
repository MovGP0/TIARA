/* Ghidra address: 00a74da0 */
/* Ghidra symbol: FUN_00a74da0 */


int FUN_00a74da0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x18) + -8);
  }
  return iVar1 + -1;
}

