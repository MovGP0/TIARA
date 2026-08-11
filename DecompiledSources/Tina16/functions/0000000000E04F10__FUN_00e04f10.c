/* Ghidra address: 00e04f10 */
/* Ghidra symbol: FUN_00e04f10 */


void FUN_00e04f10(void)

{
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_a8;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_88 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_00e05704);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  DAT_0202e058 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Enable MC Debug",0);
  DAT_0202e059 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Enable HDL Debug",0);
  DAT_0202e05a = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Synth1 (generating a/m)",0);
  (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Synth2 (ports only a/m)",0);
  DAT_0202e05b = 0;
  DAT_0202e05c = (**(code **)(*local_20 + 0x30))
                           (local_20,L"Vhdl",L"Compiling (compile at startup)",0);
  DAT_0202e05e = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Enable VHDL Mixed-mode",1);
  DAT_0202e060 = (**(code **)(*local_20 + 0x20))
                           (local_20,L"Vhdl",L"Default model for VHDL macros",0);
  DAT_0202e05d = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Display digital node states",1);
  DAT_0202e064 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Use HEX file",0);
  DAT_0202e065 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Use MPASM",0);
  DAT_0202e066 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"Enable UART Terminal",0);
  DAT_0202e068 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"MCUWndWidth",0);
  DAT_0202e06c = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"MCUWndHeight",0);
  DAT_0202e070 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"HDLWndWidth",0);
  DAT_0202e074 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"HDLWndHeight",0);
  DAT_0202e078 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"HDLWndLeft",0);
  DAT_0202e07c = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"HDLWndTop",0);
  DAT_0202e080 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"HDLWndAreaH",0);
  local_88 = (wchar_t *)0x0;
  (**(code **)(*local_20 + 0x10))(local_20,&local_40,L"Vhdl",L"VAWndWH");
  FUN_00414ad0(&DAT_0202e098,local_40);
  DAT_0202e084 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"SpiceTiming",1);
  DAT_0202e088 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"SpiceInputLevel",0);
  DAT_0202e08c = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"SpiceOutputLevel",0);
  DAT_0202e090 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"XMCMathCordicMode",0);
  DAT_0202e0b0 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"EnableLogging",0);
  DAT_0202e0b8 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"ShowCompileProgress",0);
  DAT_0202e0bc = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"UseRollBack",2);
  DAT_0202e0c0 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"RollBackDiv",1);
  DAT_0202e0c4 = (**(code **)(*local_20 + 0x20))(local_20,L"Vhdl",L"FastMCU",1);
  DAT_0202e0b4 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"ShowSimulationProgress",0);
  DAT_0202e094 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"VecToWires",0);
  DAT_0202e0b5 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"OldDigitalEngine",0);
  local_88 = (wchar_t *)0x0;
  (**(code **)(*local_20 + 0x10))(local_20,&local_50,L"Vhdl",L"ArduinoPath");
  FUN_00415dd0(&local_58,local_50,0);
  FUN_00b0d000(&local_48,local_58,0xfde9);
  FUN_004168b0(&DAT_0202e0a0,local_48);
  local_88 = (wchar_t *)0x0;
  (**(code **)(*local_20 + 0x10))(local_20,&local_68,L"Vhdl",L"AtmelStudioPath");
  FUN_00415dd0(&local_70,local_68,0);
  FUN_00b0d000(&local_60,local_70,0xfde9);
  FUN_004168b0(&DAT_0202e0a8,local_60);
  DAT_0202e095 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"EnableSystemc",0);
  DAT_0202e0b6 = (**(code **)(*local_20 + 0x30))(local_20,L"Vhdl",L"DisableSchedulerClock",0);
  DAT_0202e111 = DAT_0202e0b6;
  FUN_00410f20(local_20);
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_004144d0(&local_58);
  FUN_00414480(&local_50);
  FUN_00414520(&local_48);
  FUN_00414560(&local_40,2);
  return;
}

