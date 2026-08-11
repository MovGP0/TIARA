/* Ghidra address: 01bc3c00 */
/* Ghidra symbol: FUN_01bc3c00 */


void FUN_01bc3c00(longlong param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *local_a0;
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
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_40 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_50);
  local_a8 = local_50;
  FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0x768),&DAT_01bc40fc);
  sVar2 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_48);
  local_30 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,(longlong)sVar2);
  uVar3 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  local_38 = FUN_0198b200(0,&PTR_FUN_01984d18,0,uVar3);
  FUN_019a3a90(local_38,local_30);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_60);
  local_a8 = local_60;
  FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0x768),&DAT_01bc40fc);
  sVar2 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_58);
  uVar3 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,(longlong)sVar2);
  local_30 = FUN_00c3f320(uVar3);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_70);
  local_a8 = local_70;
  local_a0 = L".tsm";
  FUN_00416cd0(&local_68,4,*(undefined8 *)PTR_DAT_02005010,L"\\MacroLib\\");
  FUN_00724380(*(undefined8 *)(param_1 + 0x780),local_68);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0xa8))(*(longlong **)(param_1 + 0x780));
  if (cVar1 != '\0') {
    local_28 = (undefined8 *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
    *(undefined1 *)(local_28 + 0x34) = 1;
    local_20 = (longlong *)FUN_0176a5d0(&PTR_FUN_017611c0,1,local_28);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_78);
    (**(code **)*local_20)(local_20,local_78);
    FUN_01768da0(local_20,local_30);
    FUN_00724270(*(undefined8 *)(param_1 + 0x780),&local_80);
    FUN_0176a870(local_20,local_80,local_38,0);
    FUN_00414480(local_20 + 10);
    (**(code **)(*local_20 + 0x10))(local_20,0);
    FUN_00724270(*(undefined8 *)(param_1 + 0x780),&local_88);
    (**(code **)(*local_20 + 0x30))(local_20,local_88,0,*PTR_DAT_02002038);
    *(undefined4 *)(param_1 + 0x508) = 1;
    FUN_00410f20(local_20);
    uVar3 = (**(code **)*local_28)(local_28);
    FUN_00418590(uVar3,&DAT_01cf1390);
    FUN_00724270(*(undefined8 *)(param_1 + 0x780),&local_90);
    FUN_01bc3070(param_1,local_90);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_90,3);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  return;
}

