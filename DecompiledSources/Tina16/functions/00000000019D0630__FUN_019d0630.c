/* Ghidra address: 019d0630 */
/* Ghidra symbol: FUN_019d0630 */


void FUN_019d0630(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0xb0 + (longlong)param_2 * 0x10) = param_3;
  *(undefined4 *)(param_1 + 0xb8 + (longlong)param_2 * 0x10) = param_4;
  return;
}

