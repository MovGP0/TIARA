/* Ghidra address: 00682f20 */
/* Ghidra symbol: FUN_00682f20 */


void FUN_00682f20(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x4e3) == '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) & 0xfffffffffffffffd;
  }
  else {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
  }
  if (*(char *)((longlong)param_1 + 0x4e2) == '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) & 0xfffffffffffffffb;
  }
  return;
}

