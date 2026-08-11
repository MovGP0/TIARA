/* Ghidra address: 0137a210 */
/* Ghidra symbol: FUN_0137a210 */


void FUN_0137a210(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00e19860(param_2,param_3);
  *(byte *)(param_1 + 0xcd) = (byte)param_3;
  *(undefined8 *)(param_1 + 0xd8 + (ulonglong)(byte)param_3 * 8) = param_2;
  return;
}

