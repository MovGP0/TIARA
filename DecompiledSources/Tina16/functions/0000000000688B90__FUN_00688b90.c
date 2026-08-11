/* Ghidra address: 00688b90 */
/* Ghidra symbol: FUN_00688b90 */


void FUN_00688b90(longlong *param_1)

{
  FUN_00655080(param_1);
  *(char *)(param_1 + 0x93) = (char)param_1[0x95];
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    FUN_00688540(param_1);
    (**(code **)(*param_1 + 0x278))(param_1);
    if (*(char *)((longlong)param_1 + 0x4fc) == '\x01') {
      FUN_00688cc0(param_1);
    }
  }
  return;
}

