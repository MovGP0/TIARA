/* Ghidra address: 0068f460 */
/* Ghidra symbol: FUN_0068f460 */


void FUN_0068f460(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x492) != param_2) {
    *(char *)(param_1 + 0x492) = param_2;
    FUN_00655b90();
  }
  return;
}

