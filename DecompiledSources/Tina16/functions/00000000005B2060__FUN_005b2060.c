/* Ghidra address: 005b2060 */
/* Ghidra symbol: FUN_005b2060 */


undefined8 FUN_005b2060(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = 0;
  if (local_res18[0] != 0) {
    iVar1 = *(int *)(local_res18[0] + -4);
  }
  if (iVar1 == 1) {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    FUN_00450070(&local_10,local_res18[0],&DAT_005b2134,0,1);
    FUN_0043e130(param_2,local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

