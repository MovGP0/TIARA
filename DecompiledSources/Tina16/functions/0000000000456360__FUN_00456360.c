/* Ghidra address: 00456360 */
/* Ghidra symbol: FUN_00456360 */


undefined8 * FUN_00456360(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_004169f0(param_1,param_3 + 1);
  uVar1 = FUN_00416740(*param_1);
  FUN_00409a70(param_2,uVar1,(longlong)((param_3 + 1) * 2));
  return param_1;
}

