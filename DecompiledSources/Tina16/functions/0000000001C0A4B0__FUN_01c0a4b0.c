/* Ghidra address: 01c0a4b0 */
/* Ghidra symbol: FUN_01c0a4b0 */


void FUN_01c0a4b0(longlong param_1)

{
  FUN_01bea650(param_1);
  *(ulonglong *)(param_1 + 0x32c) =
       CONCAT44(*(int *)(param_1 + 0x330) + 1,*(undefined4 *)(param_1 + 0x32c));
  return;
}

