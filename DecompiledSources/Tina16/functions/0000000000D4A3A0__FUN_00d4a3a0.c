/* Ghidra address: 00d4a3a0 */
/* Ghidra symbol: FUN_00d4a3a0 */


void FUN_00d4a3a0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00788c10(param_1);
  *(longlong *)(param_2 + 0x10) = (longlong)iVar1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

