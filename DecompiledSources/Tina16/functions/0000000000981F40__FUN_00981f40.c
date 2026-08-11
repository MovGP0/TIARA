/* Ghidra address: 00981f40 */
/* Ghidra symbol: FUN_00981f40 */


void FUN_00981f40(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_b8;
  local_38 = 0;
  iVar1 = FUN_00416420(param_2,0);
  if ((iVar1 != 0) && (param_1[0x10] != 0)) {
    (**(code **)(*param_1 + 0xb0))(param_1,&local_38);
    local_40 = (**(code **)(*param_1 + 0xa8))(param_1);
    local_98 = 0;
    local_90 = 0;
    local_88 = 1;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 1;
    local_58 = 0;
    local_50 = local_38;
    local_48 = 0;
    local_20 = FUN_0096f920(&PTR_FUN_0091cbd0,1,param_1,0);
    *(undefined1 *)(local_20 + 0x88) = param_3;
    FUN_00414b90(local_20 + 0x90,param_2);
    (**(code **)(*(longlong *)param_1[0x10] + 0x90))((longlong *)param_1[0x10],local_20);
    FUN_00410f20(local_20);
  }
  FUN_00414520(&local_38);
  return;
}

