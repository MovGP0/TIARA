/* Ghidra address: 00e06220 */
/* Ghidra symbol: FUN_00e06220 */


void FUN_00e06220(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 local_1c58 [32];
  wchar_t *local_1c38;
  undefined8 local_1c20 [253];
  undefined8 local_1438;
  undefined8 local_12e8 [210];
  undefined1 local_c58;
  undefined8 local_b08;
  undefined8 local_9b0 [277];
  undefined1 local_107 [143];
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_43;
  undefined2 local_42;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c58 = 0;
  local_1c58[0] = 0;
  puVar2 = local_1c20;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_12e8;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_9b0;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_78 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_70 = local_1c58;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_1c38 = L"vhdl_95_local.ini";
  FUN_00416cd0(&local_78,3,local_res10,&DAT_00e06854);
  local_40 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_78);
  local_42 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  (**(code **)(*local_40 + 0x28))(local_40,L"Developer",L"UseLog",DAT_0202e0ec);
  (**(code **)(*local_40 + 0x38))(local_40,L"Developer",L"UseMessageWindow",DAT_0202e0f0);
  (**(code **)(*local_40 + 0x28))(local_40,L"Developer",L"CompileProgress",DAT_0202e0f4);
  (**(code **)(*local_40 + 0x28))(local_40,L"Developer",L"UseRollBack",DAT_0202e0f8);
  (**(code **)(*local_40 + 0x28))(local_40,L"Developer",L"FastMCU",DAT_0202e0fc);
  (**(code **)(*local_40 + 0x38))(local_40,L"Developer",L"Use MPASM",DAT_0202e0ea);
  if (param_1 == 0) {
    FUN_00414480(&local_30);
    FUN_00448450(&local_30,0xbff0000000000000,PTR_DAT_02004830);
    (**(code **)(*local_40 + 0x18))(local_40,L"Developer",L"IntTranSimTimeUnit",local_30);
    FUN_00414480(&local_30);
    FUN_00414480(&local_38);
    FUN_00448450(&local_38,0x3ff0000000000000,PTR_DAT_02004830);
    (**(code **)(*local_40 + 0x18))(local_40,L"Developer",L"IntTranAnimTimeUnit",local_38);
    FUN_00414480(&local_38);
  }
  else {
    FUN_00e061f0(local_1c58,local_9b0);
    local_43 = FUN_015fc230(local_107);
    FUN_00414480(&local_20);
    FUN_00e061f0(local_1c58,local_12e8);
    local_58 = local_b08;
    FUN_00448450(&local_20,local_b08,PTR_DAT_02004830);
    (**(code **)(*local_40 + 0x18))(local_40,L"Developer",L"IntTranSimTimeUnit",local_20);
    FUN_00414480(&local_20);
    FUN_00414480(&local_28);
    FUN_00e061f0(local_1c58,local_1c20);
    local_60 = local_1438;
    FUN_00448450(&local_28,local_1438,PTR_DAT_02004830);
    (**(code **)(*local_40 + 0x18))(local_40,L"Developer",L"IntTranAnimTimeUnit",local_28);
    FUN_00414480(&local_28);
    (**(code **)(*local_40 + 0x38))(local_40,L"Developer",L"ArduinoOpt",local_43);
    local_50 = param_1;
    if (local_res18 == 0) {
      (**(code **)(*local_40 + 0x18))
                (local_40,L"Developer",L"HDLSearchLibs",
                 *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x20));
    }
    else {
      (**(code **)(*local_40 + 0x18))(local_40,L"Developer",L"HDLSearchLibs",local_res18);
    }
  }
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_42;
  FUN_00410f20(local_40);
  FUN_00417840(local_1c20,&DAT_01d0d0b8,3);
  FUN_00414480(&local_78);
  FUN_00414560(&local_38,4);
  FUN_00414560(&local_res10,2);
  return;
}

