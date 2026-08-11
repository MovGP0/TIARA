/* Ghidra address: 015f4e60 */
/* Ghidra symbol: FUN_015f4e60 */


undefined8 FUN_015f4e60(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_20 [24];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_00417580(local_20,&DAT_00e021a8);
  cVar1 = FUN_015f8ed0(param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_015f8ef0(param_3);
    if (cVar1 == '\0') {
      FUN_0043fba0(&local_50,param_4,2);
      FUN_015f8e60(&local_58,param_3);
      FUN_015f4cb0(local_20,local_50,local_58);
    }
    else {
      FUN_0043fba0(&local_40,param_4,2);
      FUN_015f8e60(&local_48,param_3);
      FUN_015f4cb0(local_20,local_40,local_48);
    }
  }
  else {
    FUN_00416760(local_30,param_2);
    FUN_015f8e60(&local_38,param_3);
    FUN_015f4cb0(local_20,local_30[0],local_38);
  }
  FUN_00417c40(param_1,local_20,&DAT_00e021a8);
  FUN_00414560(&local_58,6);
  FUN_00417740(local_20,&DAT_00e021a8);
  return param_1;
}

