/* Ghidra address: 006f3220 */
/* Ghidra symbol: FUN_006f3220 */


void FUN_006f3220(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x55e) != param_2) {
    *(char *)(param_1 + 0x55e) = param_2;
    FUN_006f2db0();
  }
  return;
}

