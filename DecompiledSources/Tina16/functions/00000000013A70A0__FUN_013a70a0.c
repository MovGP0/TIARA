/* Ghidra address: 013a70a0 */
/* Ghidra symbol: FUN_013a70a0 */


void FUN_013a70a0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_48 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0xd8))(local_20,local_res8[0]);
  cVar1 = FUN_01b22620(local_20,L"<SC_HOME>",&local_24,0);
  if (cVar1 != '\0') {
    local_58 = DAT_02108380;
    local_50 = 0x11;
    FUN_00442f70(&local_48,L"    <SC_HOME>%s</SC_HOME>",&local_58,0);
    (**(code **)(*local_20 + 0x40))(local_20,local_24,local_48);
  }
  cVar1 = FUN_01b22620(local_20,L"<VERILATOR>",&local_24,0);
  if (cVar1 != '\0') {
    local_58 = DAT_02108370;
    local_50 = 0x11;
    FUN_00442f70(&local_60,L"    <VERILATOR>%s</VERILATOR>",&local_58,0);
    (**(code **)(*local_20 + 0x40))(local_20,local_24,local_60);
  }
  (**(code **)(*local_20 + 0x100))(local_20,local_res8[0]);
  FUN_00410f20(local_20);
  FUN_00414480(&local_60);
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  FUN_00414480(local_res8);
  return;
}

