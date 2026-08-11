/* Ghidra address: 006eed70 */
/* Ghidra symbol: FUN_006eed70 */


void FUN_006eed70(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    lVar1 = FUN_006eed60(param_1);
    if (param_1 != *(longlong *)(lVar1 + 0x590)) {
      FUN_00410f20(param_1);
    }
  }
  return;
}

