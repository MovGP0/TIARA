/* Ghidra address: 018a9880 */
/* Ghidra symbol: FUN_018a9880 */


void FUN_018a9880(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x528);
  *(int *)(param_1 + 0x528) = param_2;
  *(int *)(*(longlong *)(param_1 + 0x550) + 0x530) = param_2;
  *(int *)(*(longlong *)(param_1 + 0x540) + 0x530) = param_2;
  if (iVar1 != param_2) {
    FUN_018a5de0(*(undefined8 *)(param_1 + 0x550),1);
    FUN_018a5de0(*(undefined8 *)(param_1 + 0x540),1);
  }
  return;
}

