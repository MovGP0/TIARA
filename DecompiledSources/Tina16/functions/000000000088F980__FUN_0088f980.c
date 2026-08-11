/* Ghidra address: 0088f980 */
/* Ghidra symbol: FUN_0088f980 */


void FUN_0088f980(longlong param_1)

{
  longlong lVar1;
  
  while (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_0088f480(*(longlong *)(param_1 + 0x18));
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_0088f480(*(longlong *)(param_1 + 0x20));
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    FUN_0088f480(param_1);
    param_1 = lVar1;
  }
  return;
}

