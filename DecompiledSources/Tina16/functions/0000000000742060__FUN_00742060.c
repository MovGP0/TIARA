/* Ghidra address: 00742060 */
/* Ghidra symbol: FUN_00742060 */


void FUN_00742060(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x343)) {
    *(char *)(param_1 + 0x343) = param_2;
    FUN_007420c0(param_1,param_1);
  }
  return;
}

