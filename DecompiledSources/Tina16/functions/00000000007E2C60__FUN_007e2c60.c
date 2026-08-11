/* Ghidra address: 007e2c60 */
/* Ghidra symbol: FUN_007e2c60 */


void FUN_007e2c60(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_1[0xf],param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0xf,param_2);
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return;
}

