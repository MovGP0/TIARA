/* Ghidra address: 014b8310 */
/* Ghidra symbol: FUN_014b8310 */


void FUN_014b8310(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = 1;
  while ((iVar1 <= param_2 &&
         (*(longlong *)(*(longlong *)(param_1 + -8 + (longlong)iVar1 * 8) + 0x128) != param_3))) {
    iVar1 = iVar1 + 1;
  }
  return;
}

