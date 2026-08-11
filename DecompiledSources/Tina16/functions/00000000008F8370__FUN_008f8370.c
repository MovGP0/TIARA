/* Ghidra address: 008f8370 */
/* Ghidra symbol: FUN_008f8370 */


undefined8 * FUN_008f8370(longlong param_1,undefined8 *param_2)

{
  FUN_00416660(param_2,*(undefined4 *)(param_1 + 8));
  FUN_00409a70(*(undefined8 *)(param_1 + 0x10),*param_2,(longlong)(*(int *)(param_1 + 8) * 2));
  return param_2;
}

