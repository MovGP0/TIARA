/* Ghidra address: 0070a0d0 */
/* Ghidra symbol: FUN_0070a0d0 */


void FUN_0070a0d0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x1c));
  *(longlong *)(param_2 + 0x10) = (longlong)iVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

