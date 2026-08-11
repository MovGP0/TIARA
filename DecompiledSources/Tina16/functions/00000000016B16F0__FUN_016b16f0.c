/* Ghidra address: 016b16f0 */
/* Ghidra symbol: FUN_016b16f0 */


void FUN_016b16f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  FUN_016b1740(param_1);
  FUN_016b16d0(param_1,*(undefined8 *)(param_1 + 0x40));
  return;
}

