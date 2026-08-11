/* Ghidra address: 0065d610 */
/* Ghidra symbol: FUN_0065d610 */


void FUN_0065d610(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x31d)) {
    *(char *)(param_1 + 0x31d) = param_2;
    FUN_0064fca0(param_1,0xb03b,0,0);
  }
  return;
}

