/* Ghidra address: 00960790 */
/* Ghidra symbol: FUN_00960790 */


longlong *
FUN_00960790(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined4 param_6,longlong param_7,char param_8,undefined8 param_9,undefined8 param_10
            ,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  
  local_30 = auStack_98;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_78 = (longlong *)param_5;
  local_70 = param_6;
  local_68 = param_7;
  local_60 = param_9;
  local_58 = param_10;
  local_50 = param_11;
  local_48 = param_12;
  local_40 = param_13;
  FUN_00960010(local_res8,0,param_3,param_4);
  uVar3 = FUN_00414480(local_res8 + 0x27);
  uVar4 = FUN_00414480(local_res8 + 0x25);
  local_78 = local_res8 + 0x26;
  cVar2 = FUN_00960fa0(local_res8,local_res8 + 0x24,uVar3,uVar4);
  *(bool *)((longlong)local_res8 + 0x121) = cVar2 == '\0';
  if (param_7 == 0) {
    FUN_00960cb0(local_res8,local_res8[0x25]);
  }
  if (param_8 == '\0') {
    plVar6 = local_res8 + 2;
    plVar7 = local_res8 + 10;
    for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar7 = *plVar6;
      plVar6 = plVar6 + 1;
      plVar7 = plVar7 + 1;
    }
  }
  (**(code **)(*local_res8 + 0x30))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

