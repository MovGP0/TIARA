/* Ghidra address: 00f8ec20 */
/* Ghidra symbol: FUN_00f8ec20 */


void FUN_00f8ec20(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_1 + 0x33f0,local_res18[0]);
  if (param_2 == 0) {
    FUN_00f8edf0(param_1,param_1);
  }
  else if (param_2 == 1) {
    FUN_00f8f2b0(param_1,param_1,0,1);
  }
  else if (param_2 == 2) {
    FUN_00f8f2b0(param_1,param_1,1,0);
  }
  else if (param_2 == 4) {
    uVar1 = FUN_00f7cf20(&DAT_00f7c290,1,local_res18[0]);
    *(undefined8 *)(param_1 + 0x3548) = uVar1;
    FUN_00f7d420(uVar1,1);
  }
  FUN_00414480(local_res18);
  return;
}

