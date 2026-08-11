/* Ghidra address: 012ed9f0 */
/* Ghidra symbol: FUN_012ed9f0 */


undefined8
FUN_012ed9f0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            )

{
  undefined4 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  param_3 = param_3 + -1;
  if (0 < param_3) {
    do {
      uVar1 = FUN_004170c0(param_5,local_res20,1);
      FUN_00416e20(&local_res20,1,uVar1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414ad0(param_2,local_res20);
  FUN_00414560(&local_res20,2);
  return param_2;
}

