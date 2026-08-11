/* Ghidra address: 00f96d90 */
/* Ghidra symbol: FUN_00f96d90 */


void FUN_00f96d90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  
  local_30 = auStack_c8;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_38,uVar3);
  FUN_00414ad0(param_1 + 0x700,local_38);
  uVar3 = FUN_00f97330(param_1);
  *(undefined4 *)(param_1 + 0x714) = uVar3;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_40);
  cVar2 = FUN_00f60aa0(local_40);
  if (cVar2 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_48);
    cVar2 = FUN_00f60e10(local_48);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x718) = 0;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_50);
      FUN_00414ad0(param_1 + 0x708,local_50);
      goto code_r0x00f970c1;
    }
  }
  *(undefined1 *)(param_1 + 0x718) = 1;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_58);
  uVar4 = FUN_00f60f70(local_58);
  *(uint *)(param_1 + 0x710) = uVar4 & *(uint *)(param_1 + 0x714);
  if ((*(int *)(param_1 + 0x710) < 0) || (0xff < *(int *)(param_1 + 0x710))) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_68);
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_78,PTR_PTR_02004000);
    FUN_00b8e650(uVar5,&local_70,L"HDLStrings.Msg_FC_InvValue",local_78);
    local_a8 = local_70;
    FUN_00416cd0(&local_60,3,local_68,&DAT_00f971a4);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60);
    FUN_004134c0(uVar5);
  }
code_r0x00f970c1:
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_38);
  return;
}

