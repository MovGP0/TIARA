/* Ghidra address: 01b36de0 */
/* Ghidra symbol: FUN_01b36de0 */


void FUN_01b36de0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_1 != 0) {
    uVar1 = FUN_0040f200(param_3,local_res10[0]);
    FUN_0040d060(uVar1);
    FUN_00409900();
  }
  FUN_00414480(local_res10);
  return;
}

