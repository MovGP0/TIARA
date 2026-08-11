/* Ghidra address: 00663ae0 */
/* Ghidra symbol: FUN_00663ae0 */


void FUN_00663ae0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x90))) &&
     (*(char *)(*(longlong *)(param_2 + 0x28) + 0x20) == *(char *)(param_1 + 0x68))) {
    iVar1 = FUN_00660cd0(param_2);
    *(int *)(param_2 + 0x40) = iVar1 + *(int *)(param_1 + 0x6c);
  }
  return;
}

