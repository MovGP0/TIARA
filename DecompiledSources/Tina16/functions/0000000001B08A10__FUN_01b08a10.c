/* Ghidra address: 01b08a10 */
/* Ghidra symbol: FUN_01b08a10 */


void FUN_01b08a10(longlong param_1,int param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18 + (longlong)param_2 * 8) = param_3;
  FUN_01b0f850(*(undefined8 *)(param_1 + 0x1378));
  return;
}

