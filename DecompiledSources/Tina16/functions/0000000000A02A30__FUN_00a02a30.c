/* Ghidra address: 00a02a30 */
/* Ghidra symbol: FUN_00a02a30 */


void FUN_00a02a30(longlong param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  iVar1 = FUN_00a02c10(param_1);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x10) + (longlong)iVar1;
  return;
}

