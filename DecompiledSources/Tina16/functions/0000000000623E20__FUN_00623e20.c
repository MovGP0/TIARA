/* Ghidra address: 00623e20 */
/* Ghidra symbol: FUN_00623e20 */


longlong *
FUN_00623e20(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
            undefined1 param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *local_res8;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30 [2];
  
  local_40 = auStack_b8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_98 = param_5;
  local_90 = param_6;
  local_88 = param_7;
  FUN_00623360(local_res8,0,param_3,param_4);
  FUN_00623650(local_res8,&local_48,1);
  FUN_0041b840(local_res8 + 0xf,local_48);
  if (local_res8[0xf] == 0) {
    FUN_00410ae0(param_4,&local_60);
    local_58 = local_60;
    local_50 = 0x11;
    local_98 = local_98 & 0xffffffff00000000;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00620870,1,PTR_PTR_02004b48,&local_58);
    FUN_004134c0(uVar3);
  }
  uVar2 = (**(code **)(*(longlong *)local_res8[0xf] + 0x18))((longlong *)local_res8[0xf],local_30);
  FUN_006245b0(uVar2);
  lVar4 = (**(code **)(*local_res8 + 0x30))(local_res8,local_30[0]);
  local_res8[0x10] = lVar4;
  (**(code **)(*(longlong *)local_res8[0xf] + 0x98))((longlong *)local_res8[0xf],local_30[0]);
  if (local_res8[0x10] == 0) {
    FUN_00410ae0(param_4,&local_68);
    local_58 = local_68;
    local_50 = 0x11;
    local_98 = local_98 & 0xffffffff00000000;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00620870,1,PTR_PTR_02003b00,&local_58);
    FUN_004134c0(uVar3);
  }
  local_res8[8] = *(longlong *)local_res8[0x10];
  local_res8[9] = ((longlong *)local_res8[0x10])[1];
  FUN_00623650(local_res8,&local_70,3);
  FUN_0041b840(local_res8 + 0x13,local_70);
  if (local_res8[0x13] != 0) {
    uVar2 = (**(code **)(*(longlong *)local_res8[0x13] + 0x18))
                      ((longlong *)local_res8[0x13],local_30);
    FUN_006245b0(uVar2);
    local_res8[0x11] = *local_30[0];
    local_res8[0x12] = local_30[0][1];
    (**(code **)(*(longlong *)local_res8[0x13] + 0x98))((longlong *)local_res8[0x13],local_30[0]);
  }
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,2);
  FUN_0041b800(&local_48);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

