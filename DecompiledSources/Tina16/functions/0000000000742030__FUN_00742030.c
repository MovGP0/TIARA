/* Ghidra address: 00742030 */
/* Ghidra symbol: FUN_00742030 */


void FUN_00742030(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x340)) {
    *(char *)(param_1 + 0x340) = param_2;
    FUN_007420c0(param_1,param_1);
  }
  return;
}

