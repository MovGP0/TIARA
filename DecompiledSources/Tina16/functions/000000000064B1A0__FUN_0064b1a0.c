/* Ghidra address: 0064b1a0 */
/* Ghidra symbol: FUN_0064b1a0 */


void FUN_0064b1a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_005ffb10(param_1,0);
    FUN_004afd50(DAT_02012350,param_1,1);
    thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}

