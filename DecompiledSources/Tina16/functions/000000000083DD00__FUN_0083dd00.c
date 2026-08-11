/* Ghidra address: 0083dd00 */
/* Ghidra symbol: FUN_0083dd00 */


void FUN_0083dd00(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(uint *)(param_1[0xa1] + 0x4d4) & 0x800) != 0) {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
  }
  return;
}

