/* Ghidra address: 01b86c30 */
/* Ghidra symbol: FUN_01b86c30 */


longlong * FUN_01b86c30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_60[0] = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_70 = (longlong *)0x0;
  FUN_00416cd0(local_30,4,*(undefined8 *)PTR_DAT_020049a0,L"\\Macrolib\\",local_res10[0],L".tsm");
  cVar1 = FUN_00440a20(local_30[0],1);
  if (cVar1 != '\0') {
    local_70 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
    FUN_01d38290(local_70,1);
    lVar3 = FUN_017708f0(local_30[0]);
    plVar4 = (longlong *)(**(code **)(lVar3 + 0x20))(lVar3,1,local_70);
    local_70[0x35] = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4,local_30[0],1,*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(local_70 + 0x34) = *(undefined1 *)(local_70[0x35] + 0x70);
    (**(code **)(*local_70 + 0x128))(local_70,&local_68);
    FUN_019a44e0(*(undefined8 *)(param_1 + 0x10),local_60,local_68,local_70);
    FUN_00414ad0(local_70 + 0x13,local_60[0]);
    uVar5 = FUN_0176a290(local_70[0x35]);
    local_4c._0_4_ = (undefined4)uVar5;
    *(undefined4 *)(local_70 + 0x14) = (undefined4)local_4c;
    local_4c._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)((longlong)local_70 + 0xa4) = local_4c._4_4_;
    local_4c = uVar5;
    FUN_01d07850(local_70);
    uVar2 = FUN_01b80970(*(undefined8 *)(param_1 + 8),&local_31);
    FUN_01b82500(param_1,&local_44,0);
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    local_3c = (int)uVar5;
    iStack_38 = (int)((ulonglong)uVar5 >> 0x20);
    local_44 = local_3c + *(int *)(param_1 + 0x378) + local_44;
    local_40 = iStack_38 + *(int *)(param_1 + 0x37c) + local_40;
    _local_3c = CONCAT44(local_40,local_44);
    *(int *)((longlong)local_70 + 0xc) = local_44;
    *(int *)(local_70 + 2) = local_40;
    *(undefined1 *)((longlong)local_70 + 0xd1) = uVar2;
    *(undefined1 *)((longlong)local_70 + 0xd3) = local_31;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),local_70);
    FUN_01b87ac0(param_1,L"THERMAL_MODE",&DAT_01b86fd8);
    FUN_01b87ac0(param_1,L"TR_MODE",&DAT_01b86fd8);
    FUN_01b87ac0(param_1,L"SW_MODE_START_TIME",&DAT_01b87038);
    FUN_01b87ac0(param_1,L"SW_MODE_AFTER_STARTUP",&DAT_01b87038);
    FUN_01b87ac0(param_1,L"I_step",&DAT_01b86fd8);
    FUN_01b87ac0(param_1,L"I_step_SR",L"100n");
    FUN_01b87ac0(param_1,L"I_DC",L"500m");
    FUN_01b87ac0(param_1,L"Vstep",&DAT_01b8711c);
    FUN_01b87ac0(param_1,L"Line_Iload",&DAT_01b86fd8);
  }
  FUN_00414560(&local_68,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_70;
}

