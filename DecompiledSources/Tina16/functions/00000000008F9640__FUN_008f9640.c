/* Ghidra address: 008f9640 */
/* Ghidra symbol: FUN_008f9640 */


undefined8 * FUN_008f9640(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008f9b80(param_1);
  FUN_00416660(param_2,uVar1);
  FUN_00409a70(*(undefined8 *)(param_1 + 8),*param_2,(longlong)*(int *)(param_1 + 0x10));
  return param_2;
}

