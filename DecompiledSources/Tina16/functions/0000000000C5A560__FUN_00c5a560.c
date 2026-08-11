/* Ghidra address: 00c5a560 */
/* Ghidra symbol: FUN_00c5a560 */


void FUN_00c5a560(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x49e) != '\0') && ((*(uint *)(param_1 + 0xa4) & 1) == 0)) {
    FUN_00680ad0(param_1);
  }
  FUN_00681fb0(param_1,param_2);
  return;
}

