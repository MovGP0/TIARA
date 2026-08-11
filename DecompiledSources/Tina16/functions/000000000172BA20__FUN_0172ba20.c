/* Ghidra address: 0172ba20 */
/* Ghidra symbol: FUN_0172ba20 */


undefined8
FUN_0172ba20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_0172aaf0(param_1,&local_10,local_res18,local_res20,param_5);
  iVar1 = FUN_00416420(local_10,0);
  if (iVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00b0cf80(param_2,local_10,*(undefined4 *)(param_1 + 0x28));
  }
  FUN_00414520(&local_10);
  FUN_00414560(&local_res18,2);
  return param_2;
}

