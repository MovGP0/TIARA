/* Ghidra address: 0041f190 */
/* Ghidra symbol: FUN_0041f190 */


undefined8 * FUN_0041f190(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  if (param_4 < 0) {
    param_4 = FUN_00414d00(uVar1);
  }
  FUN_004169f0(param_2,param_4);
  if (0 < param_4) {
    FUN_00409a70(uVar1,*param_2,(longlong)(param_4 * 2));
  }
  return param_2;
}

