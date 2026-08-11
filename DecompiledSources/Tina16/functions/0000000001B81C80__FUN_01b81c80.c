/* Ghidra address: 01b81c80 */
/* Ghidra symbol: FUN_01b81c80 */


undefined8 FUN_01b81c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined8 local_res18;
  char *local_res20;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  *local_res20 = '\0';
  local_38 = (undefined *)CONCAT71(local_38._1_7_,1);
  FUN_00450070(&local_28,local_res18,&DAT_01b81dec,&DAT_01b81dfc);
  FUN_00414b50(&local_res18,local_28);
  FUN_00b8f030(local_res18);
  if (*local_res20 == '\0') {
    FUN_00414ad0(param_2,local_res18);
  }
  else {
    iVar1 = FUN_004170c0(&DAT_01b81e10,local_res18,1);
    if (iVar1 == 0) {
      local_38 = &DAT_01b81e20;
      FUN_00416cd0(param_2,3,&DAT_01b81e10,local_res18);
    }
    else {
      FUN_00414ad0(param_2,local_res18);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res18);
  return param_2;
}

