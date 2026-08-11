/* Ghidra address: 0137c1f0 */
/* Ghidra symbol: FUN_0137c1f0 */


void FUN_0137c1f0(longlong param_1,undefined8 param_2,byte param_3)

{
  *(undefined8 *)(param_1 + 0xd8 + (ulonglong)param_3 * 8) = param_2;
  *(byte *)(param_1 + 0xcd) = param_3;
  return;
}

