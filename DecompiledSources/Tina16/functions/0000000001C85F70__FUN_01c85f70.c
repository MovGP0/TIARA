/* Ghidra address: 01c85f70 */
/* Ghidra symbol: FUN_01c85f70 */


void FUN_01c85f70(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
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
  undefined1 *local_40;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_40 = auStack_b8;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  puVar1 = auStack_b8;
  if (*(longlong *)(param_1 + 0x24b8) != 0) {
    local_30 = *(longlong **)(param_1 + 0x24b8);
    if (*(char *)(*(longlong *)(param_1 + 0xc90) + 0x80) == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      local_40 = auStack_b8;
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"AutoRepeat",local_28);
    if (*(char *)(*(longlong *)(param_1 + 0xcd8) + 0x80) == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"AutoReWire",local_28);
    if (*PTR_DAT_020045f0 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"AppendValueToLabel",local_28);
    if (*PTR_DAT_020050f8 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"AppendUnitToLabel",local_28);
    if (*PTR_DAT_020037e8 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"AppendToleranceToLabel",local_28)
    ;
    if (*PTR_DAT_02003038 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"ShowPCBPinNumbers",local_28);
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Schematic Editor",L"AutoSaveInterval",*(undefined4 *)PTR_DAT_02002718);
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Schematic Editor",L"AutoSaveHistoryDepth",*(undefined4 *)PTR_DAT_02003b90)
    ;
    (**(code **)(*local_30 + 0x38))(local_30,L"Schematic Editor",L"StartAsNew",*PTR_DAT_02003180);
    if (*PTR_DAT_020041d0 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"RenumberOnPaste",local_28);
    if (*PTR_DAT_02005c00 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"SaveReferenceOnly",local_28);
    if (*PTR_DAT_02001798 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"ShowLabels",local_28);
    if (*PTR_DAT_02003f60 == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"ShowGraphNumbers",local_28);
    (**(code **)(*local_30 + 0x38))(local_30,L"Schematic Editor",L"WireWidth",*PTR_DAT_02003960);
    (**(code **)(*local_30 + 0x18))
              (local_30,L"Schematic Editor",L"Param1",*(undefined8 *)PTR_DAT_020031c8);
    (**(code **)(*local_30 + 0x18))
              (local_30,L"Schematic Editor",L"Param2",*(undefined8 *)PTR_DAT_020034b8);
    (**(code **)(*local_30 + 0x18))
              (local_30,L"Schematic Editor",L"Param3",*(undefined8 *)PTR_DAT_02001ae0);
    (**(code **)(*local_30 + 0x18))
              (local_30,L"Schematic Editor",L"Param4",*(undefined8 *)PTR_DAT_02005330);
    FUN_0177d540(*(undefined8 *)(param_1 + 0x18f0),local_20);
    if (local_20[0] != 0) {
      FUN_0043e130(&local_48,local_20[0]);
      FUN_0043e130(&local_50,*(undefined8 *)PTR_DAT_02004278);
      iVar2 = FUN_00416db0(local_48,local_50);
      if (iVar2 != 0) {
        FUN_00414ad0(PTR_DAT_02004278,local_20[0]);
      }
    }
    FUN_004168e0(&local_60,*(undefined8 *)PTR_DAT_02004278);
    FUN_00b0cea0(&local_58,local_60,0xfde9);
    FUN_00416880(&local_68,local_58);
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"InitDir",local_68);
    if (*(char *)(*(longlong *)(param_1 + 0xfd8) + 0x80) == '\0') {
      FUN_00414b50(&local_28,&DAT_01c86fa0);
    }
    else {
      FUN_00414b50(&local_28,&DAT_01c86f90);
    }
    (**(code **)(*local_30 + 0x18))(local_30,L"Schematic Editor",L"DockNetlist",local_28);
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Schematic Editor",L"Default Precision",*PTR_DAT_02005310);
    (**(code **)(*local_30 + 0x18))
              (local_30,L"Schematic Editor",L"LanguageCode",*(undefined8 *)(param_1 + 0x2508));
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Schematic Editor",L"MouseWheelZooming",*PTR_DAT_02005700);
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Schematic Editor",L"CompressedTSCFormat",*PTR_DAT_02002038);
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Schematic Editor",L"SavePictureAsGIF",*PTR_DAT_020048d0);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Enable MC Debug",*PTR_DAT_020030c0);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Enable HDL Debug",PTR_DAT_020030c0[1]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Synth1 (generating a/m)",PTR_DAT_020030c0[2])
    ;
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Vhdl",L"Synth2 (ports only a/m)",PTR_DAT_020030c0[3] == '\0');
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Vhdl",L"Compiling (compile at startup)",PTR_DAT_020030c0[4]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Enable VHDL Mixed-mode",PTR_DAT_020030c0[6]);
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"Default model for VHDL macros",
               *(undefined4 *)(PTR_DAT_020030c0 + 8));
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Vhdl",L"Display digital node states",PTR_DAT_020030c0[5]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Use HEX file",PTR_DAT_020030c0[0xc]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Use MPASM",PTR_DAT_020030c0[0xd]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"Enable UART Terminal",PTR_DAT_020030c0[0xe]);
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"MCUWndWidth",*(undefined4 *)(PTR_DAT_020030c0 + 0x10));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"MCUWndHeight",*(undefined4 *)(PTR_DAT_020030c0 + 0x14));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"HDLWndWidth",*(undefined4 *)(PTR_DAT_020030c0 + 0x18));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"HDLWndHeight",*(undefined4 *)(PTR_DAT_020030c0 + 0x1c));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"HDLWndLeft",*(undefined4 *)(PTR_DAT_020030c0 + 0x20));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"HDLWndTop",*(undefined4 *)(PTR_DAT_020030c0 + 0x24));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"HDLWndAreaH",*(undefined4 *)(PTR_DAT_020030c0 + 0x28));
    (**(code **)(*local_30 + 0x18))
              (local_30,L"Vhdl",L"VAWndWH",*(undefined8 *)(PTR_DAT_020030c0 + 0x40));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"SpiceTiming",*(undefined4 *)(PTR_DAT_020030c0 + 0x2c));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"SpiceInputLevel",*(undefined4 *)(PTR_DAT_020030c0 + 0x30));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"SpiceOutputLevel",*(undefined4 *)(PTR_DAT_020030c0 + 0x34));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"XMCMathCordicMode",*(undefined4 *)(PTR_DAT_020030c0 + 0x38));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"EnableLogging",*(undefined4 *)(PTR_DAT_020030c0 + 0x58));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"ShowCompileProgress",*(undefined4 *)(PTR_DAT_020030c0 + 0x60));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"UseRollBack",*(undefined4 *)(PTR_DAT_020030c0 + 100));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"RollBackDiv",*(undefined4 *)(PTR_DAT_020030c0 + 0x68));
    (**(code **)(*local_30 + 0x28))
              (local_30,L"Vhdl",L"FastMCU",*(undefined4 *)(PTR_DAT_020030c0 + 0x6c));
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"ArduinoOpt",PTR_DAT_020030c0[0x5f]);
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Vhdl",L"ShowSimulationProgress",PTR_DAT_020030c0[0x5c]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"VecToWires",PTR_DAT_020030c0[0x3c]);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"OldDigitalEngine",PTR_DAT_020030c0[0x5d]);
    FUN_004168e0(&local_78,*(undefined8 *)(PTR_DAT_020030c0 + 0x48));
    FUN_00b0cea0(&local_70,local_78,0xfde9);
    FUN_00416880(&local_80,local_70);
    (**(code **)(*local_30 + 0x18))(local_30,L"Vhdl",L"ArduinoPath",local_80);
    FUN_004168e0(&local_90,*(undefined8 *)(PTR_DAT_020030c0 + 0x50));
    FUN_00b0cea0(&local_88,local_90,0xfde9);
    FUN_00416880(&local_98,local_88);
    (**(code **)(*local_30 + 0x18))(local_30,L"Vhdl",L"AtmelStudioPath",local_98);
    (**(code **)(*local_30 + 0x38))(local_30,L"Vhdl",L"EnableSystemC",PTR_DAT_020030c0[0x3d]);
    (**(code **)(*local_30 + 0x38))
              (local_30,L"Vhdl",L"DisableSchedulerClock",PTR_DAT_020030c0[0x5e]);
    (**(code **)(*local_30 + 0x38))
              (local_30,&DAT_01c87a60,L"Enable modifying component values",*PTR_DAT_02004aa8);
    (**(code **)(*local_30 + 0x38))
              (local_30,L"DesignTool",L"Keep cursor pos after run",*PTR_DAT_02004808);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00414480(&local_98);
  FUN_00414520(&local_90);
  FUN_004144d0(&local_88);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_004144d0(&local_58);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_28,2);
  return;
}

