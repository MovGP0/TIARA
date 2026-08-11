/* Ghidra address: 00742090 */
/* Ghidra symbol: FUN_00742090 */


void FUN_00742090(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x345) != param_2) {
    *(char *)(param_1 + 0x345) = param_2;
    FUN_007420c0(param_1,param_1);
  }
  return;
}

