/* Ghidra address: 00702ce0 */
/* Ghidra symbol: FUN_00702ce0 */


void FUN_00702ce0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x648) != param_2) {
    *(char *)(param_1 + 0x648) = param_2;
    FUN_00655b90();
  }
  return;
}

