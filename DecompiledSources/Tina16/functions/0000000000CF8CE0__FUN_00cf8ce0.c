/* Ghidra address: 00cf8ce0 */
/* Ghidra symbol: FUN_00cf8ce0 */


undefined8 * FUN_00cf8ce0(undefined8 *param_1,char param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 *local_res8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  int local_58;
  undefined1 local_50;
  int local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_a8;
  local_28 = 0;
  local_70 = 0;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (param_3 == 0) {
    FUN_0044d490(local_res8,0,param_4);
  }
  else {
    FUN_0041ddd0(&local_28,PTR_PTR_02001e90);
    local_60 = 0x11;
    local_50 = 0;
    local_40 = 0;
    local_68 = param_4;
    local_58 = param_3;
    local_48 = param_3;
    FUN_00cf80c0(*local_res8,&local_70,param_3);
    local_38 = local_70;
    local_30 = 0x11;
    local_88 = 3;
    FUN_0044d530(local_res8,0,local_28,&local_68);
  }
  FUN_00414480(&local_70);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

