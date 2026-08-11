/* Ghidra address: 01b08a40 */
/* Ghidra symbol: FUN_01b08a40 */


void FUN_01b08a40(longlong param_1,int param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50 + (longlong)param_2 * 8) = param_3;
  FUN_01b0f840(*(undefined8 *)(param_1 + 0x1378));
  return;
}

