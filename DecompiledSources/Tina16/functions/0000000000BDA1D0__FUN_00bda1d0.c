/* Ghidra address: 00bda1d0 */
/* Ghidra symbol: FUN_00bda1d0 */


undefined8 * FUN_00bda1d0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_3 * 2);
  param_2[1] = uVar1;
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_3 * 2 + 1);
  *param_2 = uVar1;
  return param_2;
}

