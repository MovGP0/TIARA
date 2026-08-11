/* Ghidra address: 00c22ec0 */
/* Ghidra symbol: FUN_00c22ec0 */


void FUN_00c22ec0(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_00c22da0(param_1);
  FUN_00c22fb0(param_1,param_3);
  FUN_00c1a3e0(param_2,*(undefined8 *)(param_1 + 8),(ulonglong)param_3 * 3);
  *(uint *)(param_1 + 0x10) = param_3;
  return;
}

