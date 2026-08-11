/* Ghidra address: 010e2ca0 */
/* Ghidra symbol: FUN_010e2ca0 */


bool FUN_010e2ca0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x7ed) != '\0') {
    if (param_1[0xf8] != 0) {
      FUN_0082a6c0(param_1[0xf8],1);
    }
    (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
  }
  return *(char *)((longlong)param_1 + 0x7ed) == '\0';
}

