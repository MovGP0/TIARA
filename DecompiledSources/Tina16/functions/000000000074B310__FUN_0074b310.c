/* Ghidra address: 0074b310 */
/* Ghidra symbol: FUN_0074b310 */


void FUN_0074b310(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))(*(longlong **)(param_1 + 0x4a0));
    if (iVar1 <= *(int *)(param_1 + 0x4a8)) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))
                        (*(longlong **)(param_1 + 0x4a0));
      *(int *)(param_1 + 0x4a8) = iVar1 + -1;
    }
    FUN_0074b570(param_1);
  }
  return;
}

