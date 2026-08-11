/* Ghidra address: 00a33f70 */
/* Ghidra symbol: FUN_00a33f70 */


void FUN_00a33f70(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_00a33eb0(param_1,*(undefined4 *)(param_2 + 0x10));
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00409a70(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10))
    ;
  }
  return;
}

