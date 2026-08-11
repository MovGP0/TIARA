/* Ghidra address: 0131f600 */
/* Ghidra symbol: FUN_0131f600 */


undefined8 FUN_0131f600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  char local_51;
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined4 local_1c [3];
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00417580(local_50,&DAT_00e021a8);
  uVar2 = _get_digital_node_value(param_2,param_4,&local_51,local_1c,&local_20,0);
  if (local_51 == '\0') {
    local_20 = -1;
  }
  if (local_20 == 0) {
    FUN_00416760(&local_30,local_51);
    cVar1 = FUN_015f8ed0(local_1c[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_015f8f10(local_1c[0]);
      if (cVar1 == '\0') {
        cVar1 = FUN_015f8ef0(local_1c[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_015f8f00(local_1c[0]);
          if (cVar1 != '\0') {
            FUN_00414b50(&local_38,&DAT_0131f820);
          }
        }
        else {
          FUN_00414b50(&local_38,&DAT_0131f810);
          FUN_0043fba0(&local_30,uVar2,2);
        }
      }
      else {
        FUN_00414b50(&local_38,&DAT_0131f800);
        FUN_0043fba0(&local_30,uVar2,2);
      }
    }
    else {
      FUN_00414b50(&local_38,&DAT_0131f800);
    }
    FUN_015f4cb0(local_50,local_30,local_38);
    FUN_00417c40(param_1,local_50,&DAT_00e021a8);
  }
  else {
    FUN_015f4cb0(local_50,&LAB_0131f830,&DAT_0131f800);
    FUN_00417c40(param_1,local_50,&DAT_00e021a8);
  }
  FUN_00417740(local_50,&DAT_00e021a8);
  FUN_00414560(&local_38,3);
  return param_1;
}

