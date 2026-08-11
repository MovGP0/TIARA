/* Ghidra address: 00bfdcb0 */
/* Ghidra symbol: FUN_00bfdcb0 */


void FUN_00bfdcb0(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x81;
  if (*(char *)((longlong)param_1 + 0x5f7) != '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
  }
  if (*(char *)((longlong)param_1 + 0x5f6) != '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 4;
  }
  return;
}

