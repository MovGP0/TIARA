/* Ghidra address: 006f3240 */
/* Ghidra symbol: FUN_006f3240 */


void FUN_006f3240(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x559) != param_2) {
    *(char *)(param_1 + 0x559) = param_2;
    FUN_006f2db0();
  }
  return;
}

