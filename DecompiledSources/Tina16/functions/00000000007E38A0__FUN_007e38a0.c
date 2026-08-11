/* Ghidra address: 007e38a0 */
/* Ghidra symbol: FUN_007e38a0 */


void FUN_007e38a0(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x85) != param_2) {
    *(char *)((longlong)param_1 + 0x85) = param_2;
    if (((char)param_1[0x10] != '\0') && (*(char *)((longlong)param_1 + 0x85) != '\0')) {
      FUN_007e2ca0(param_1);
    }
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

