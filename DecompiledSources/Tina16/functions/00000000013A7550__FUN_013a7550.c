/* Ghidra address: 013a7550 */
/* Ghidra symbol: FUN_013a7550 */


void FUN_013a7550(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  undefined8 local_38;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_a8;
  local_60 = 0;
  local_78 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_88 = local_res20;
  FUN_00416cd0(&local_30,3,local_res18,&DAT_013a7968);
  FUN_00414480(&local_38);
  local_40 = 0;
  if (local_30 != 0) {
    local_40 = *(int *)(local_30 + -4);
  }
  local_24 = 1;
  iVar3 = local_40;
  if (0 < local_40) {
    do {
      sVar1 = *(short *)(local_30 + -2 + (longlong)local_24 * 2);
      if ((sVar1 != 0x20) && (sVar1 != 9)) {
        FUN_00416780(&local_58,sVar1);
        FUN_00416ad0(&local_38,local_58);
      }
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b4b10(local_20,local_38);
  (**(code **)(*param_1 + 0x78))(param_1,L"library ieee;");
  (**(code **)(*param_1 + 0x78))(param_1,L"use ieee.std_logic_1164.all;");
  (**(code **)(*param_1 + 0x78))(param_1,0);
  (**(code **)(*param_1 + 0x78))(param_1,L"ENTITY %s is port(");
  (**(code **)(*param_1 + 0x78))(param_1,L" %s: in std_logic;");
  (**(code **)(*param_1 + 0x78))(param_1,L" %s: out std_logic);");
  (**(code **)(*param_1 + 0x78))(param_1,L"END %s;");
  (**(code **)(*param_1 + 0x78))(param_1,0);
  (**(code **)(*param_1 + 0x78))(param_1,L"ARCHITECTURE behv of %s is");
  (**(code **)(*param_1 + 0x78))(param_1,L"BEGIN");
  if (*(char *)(param_2 + 0x10) != '\0') {
    iVar3 = (**(code **)(*local_20 + 0x28))(local_20);
    if (iVar3 == 0) {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Missing ports");
      FUN_004134c0(uVar2);
    }
    (**(code **)(*param_1 + 0x78))(param_1,L" SC_model: process");
    (**(code **)(*param_1 + 0x78))(param_1,L" begin");
    (**(code **)(*local_20 + 0x18))(local_20,&local_78,0);
    local_70 = local_78;
    local_68 = 0x11;
    FUN_00442f70(&local_60,L"  _SC_class( %s );",&local_70,0);
    (**(code **)(*param_1 + 0x78))(param_1,local_60);
    (**(code **)(*param_1 + 0x78))(param_1,L" end process;");
  }
  (**(code **)(*param_1 + 0x78))(param_1,L"END behv;");
  FUN_00410f20(local_20);
  FUN_00414480(&local_78);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res18,2);
  return;
}

