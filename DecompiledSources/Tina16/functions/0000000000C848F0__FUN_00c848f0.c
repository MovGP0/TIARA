/* Ghidra address: 00c848f0 */
/* Ghidra symbol: FUN_00c848f0 */


undefined8 FUN_00c848f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00c84390(param_1,&local_10,local_res18,local_res20,&local_14);
  iVar1 = FUN_00416420(local_10,0);
  if (iVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00b0cf80(param_2,local_10,local_14);
  }
  FUN_00414520(&local_10);
  FUN_00414560(&local_res18,2);
  return param_2;
}

