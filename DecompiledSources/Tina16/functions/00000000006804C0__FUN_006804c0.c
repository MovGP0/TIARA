/* Ghidra address: 006804c0 */
/* Ghidra symbol: FUN_006804c0 */


void FUN_006804c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x498) != param_2) {
    *(char *)(param_1 + 0x498) = param_2;
    FUN_00681940(param_1);
    FUN_00655b90(param_1);
  }
  return;
}

