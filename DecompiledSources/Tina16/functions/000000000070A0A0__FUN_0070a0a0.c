/* Ghidra address: 0070a0a0 */
/* Ghidra symbol: FUN_0070a0a0 */


void FUN_0070a0a0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x28));
  *(longlong *)(param_2 + 0x10) = (longlong)iVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

