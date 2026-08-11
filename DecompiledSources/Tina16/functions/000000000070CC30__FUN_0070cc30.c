/* Ghidra address: 0070cc30 */
/* Ghidra symbol: FUN_0070cc30 */


void FUN_0070cc30(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

