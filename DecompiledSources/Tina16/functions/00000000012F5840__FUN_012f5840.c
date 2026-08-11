/* Ghidra address: 012f5840 */
/* Ghidra symbol: FUN_012f5840 */


undefined8 FUN_012f5840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_004170c0(&LAB_012f58f4,local_res18[0],1);
  FUN_00416dc0(&local_10,local_res18[0],1,iVar1 + -1);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

