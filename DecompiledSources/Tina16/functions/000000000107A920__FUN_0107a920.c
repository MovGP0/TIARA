/* Ghidra address: 0107a920 */
/* Ghidra symbol: FUN_0107a920 */


undefined8 FUN_0107a920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e130(&local_18,local_res18[0]);
  FUN_005b8820(&local_10,local_18,3);
  iVar1 = FUN_00416db0(local_10,&DAT_0107aa7c);
  if (iVar1 == 0) {
    FUN_00450070(&local_20,local_res18[0],&DAT_0107aa7c,0,1);
    FUN_00414b50(local_res18,local_20);
    FUN_00450070(&local_28,local_res18[0],&DAT_0107aa94,&LAB_0107aaa4,1);
    FUN_00414b50(local_res18,local_28);
  }
  FUN_0043e1a0(param_2,local_res18[0]);
  FUN_00414560(&local_28,4);
  FUN_00414480(local_res18);
  return param_2;
}

