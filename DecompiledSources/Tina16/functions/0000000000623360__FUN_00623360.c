/* Ghidra address: 00623360 */
/* Ghidra symbol: FUN_00623360 */


longlong FUN_00623360(longlong param_1,char param_2,longlong *param_3,undefined8 param_4,
                     undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_b8;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_38 = (longlong *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*param_3 + 0x38))(param_3,&local_38);
  uVar4 = FUN_0041b800(local_res8 + 0x70);
  iVar2 = (**(code **)(*local_38 + 0x30))(local_38,param_5,uVar4);
  if (iVar2 != 0) {
    FUN_00410ae0(param_4,&local_50);
    local_48 = local_50;
    local_40 = 0x11;
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    uVar4 = FUN_0044d8d0(&PTR_FUN_00620870,1,PTR_PTR_02002040,&local_48);
    FUN_004134c0(uVar4);
  }
  local_98 = 0;
  local_90 = 0;
  uVar3 = (**(code **)(**(longlong **)(local_res8 + 0x70) + 0x60))
                    (*(longlong **)(local_res8 + 0x70),0xffffffff,local_20,&local_28);
  FUN_006245b0(uVar3);
  FUN_004168b0(&local_58,local_20[0]);
  FUN_004168b0(&local_60,local_28);
  local_98 = param_5;
  local_90 = local_58;
  local_88 = local_60;
  local_80 = param_6;
  local_78 = param_7;
  FUN_00622210(local_res8,0,param_3,param_4);
  FUN_00414560(&local_60,3);
  FUN_0041b800(&local_38);
  FUN_004145c0(&local_28,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

