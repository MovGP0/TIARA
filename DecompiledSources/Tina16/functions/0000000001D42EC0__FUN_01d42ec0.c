/* Ghidra address: 01d42ec0 */
/* Ghidra symbol: FUN_01d42ec0 */


void FUN_01d42ec0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  int local_a0 [2];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_d8;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  puVar1 = auStack_d8;
  if (DAT_01ffced6 != '\0') {
    FUN_00416ba0(&local_78,*(undefined8 *)PTR_DAT_02005010,L"\\tina.log");
    local_40 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_78);
    if (DAT_01ffcf88 == 0) {
      (**(code **)(*local_40 + 0xb8))(local_40,L"ExitLog");
      (**(code **)(*local_40 + 0x18))(local_40,L"ExitLog",L"TINA Version",DAT_03567b38);
      FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_80);
      (**(code **)(*local_40 + 0x18))(local_40,L"ExitLog",L"Path",local_80);
      FUN_00414480(local_20);
      FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_88);
      uVar2 = FUN_00440970(local_88);
      local_58 = FUN_00442290(uVar2);
      FUN_0044a350(local_20,local_58,PTR_DAT_02004830);
      (**(code **)(*local_40 + 0x18))(local_40,L"ExitLog",L"TINA.EXE Date Stamp",local_20[0]);
      FUN_00414480(local_20);
      FUN_00414480(&local_28);
      local_60 = FUN_00448ed0();
      FUN_0044a350(&local_28,local_60,PTR_DAT_02004830);
      (**(code **)(*local_40 + 0x18))(local_40,L"ExitLog",L"Log Date",local_28);
      FUN_00414480(&local_28);
      FUN_01d42710(&local_90);
      (**(code **)(*local_40 + 0x18))(local_40,L"ExitLog",L"Windows Version",local_90);
    }
    local_30 = 0;
    local_a0[0] = DAT_01ffcf88;
    local_98 = 0;
    FUN_00442f70(&local_30,L"%.5d",local_a0,0);
    FUN_00414480(&local_38);
    local_68 = FUN_00448ed0();
    FUN_0044a350(&local_38,local_68,PTR_DAT_02004830);
    local_b8 = local_38;
    FUN_00416cd0(&local_a8,3,param_1,&DAT_01d43438);
    (**(code **)(*local_40 + 0x18))(local_40,L"ExitLog",local_30,local_a8);
    FUN_00414480(&local_30);
    FUN_00414480(&local_38);
    DAT_01ffcf88 = DAT_01ffcf88 + 1;
    FUN_00410f20(local_40);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  FUN_00414480(&local_a8);
  FUN_00414560(&local_90,4);
  FUN_00414480(&local_38);
  FUN_00414560(&local_28,2);
  return;
}

