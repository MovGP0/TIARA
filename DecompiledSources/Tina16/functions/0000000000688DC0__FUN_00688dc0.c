/* Ghidra address: 00688dc0 */
/* Ghidra symbol: FUN_00688dc0 */


void FUN_00688dc0(longlong *param_1)

{
  FUN_00651da0(param_1);
  FUN_00688540(param_1);
  (**(code **)(*param_1 + 0x278))(param_1);
  if (*(char *)((longlong)param_1 + 0x4fc) == '\x01') {
    FUN_00688cc0(param_1);
  }
  return;
}

