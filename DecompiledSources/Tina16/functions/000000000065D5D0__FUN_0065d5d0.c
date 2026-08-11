/* Ghidra address: 0065d5d0 */
/* Ghidra symbol: FUN_0065d5d0 */


void FUN_0065d5d0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x31a)) {
    *(char *)(param_1 + 0x31a) = param_2;
    FUN_0064fca0(param_1,0xb03b,0,0);
  }
  return;
}

