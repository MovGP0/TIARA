/* Ghidra address: 006a0660 */
/* Ghidra symbol: FUN_006a0660 */


void FUN_006a0660(longlong param_1)

{
  FUN_007fb610(param_1);
  if (*(char *)(param_1 + 0x6c0) == '\x01') {
    *(int *)(param_1 + 0x6b8) =
         *(int *)(param_1 + 0x6b8) + (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x6b4));
  }
  else if (*(char *)(param_1 + 0x6c0) == '\x02') {
    *(int *)(param_1 + 0x6bc) =
         *(int *)(param_1 + 0x6bc) + (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x6b0));
  }
  return;
}

