/* Ghidra address: 007e5380 */
/* Ghidra symbol: FUN_007e5380 */


void FUN_007e5380(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x84)) {
    *(char *)((longlong)param_1 + 0x84) = param_2;
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

