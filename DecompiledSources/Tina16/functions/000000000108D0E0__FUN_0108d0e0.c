/* Ghidra address: 0108d0e0 */
/* Ghidra symbol: FUN_0108d0e0 */


void FUN_0108d0e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  wchar_t *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_60 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  *(undefined1 *)(param_1 + 0xb57) = 1;
  FUN_00414b50(&local_28,*(undefined8 *)PTR_DAT_02002340);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_28,0);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_20,L"InitAddDir");
    cVar1 = FUN_005ebec0(local_10,local_20);
    if (cVar1 == '\0') {
      FUN_00414480(param_1 + 0xb18);
    }
    else {
      FUN_005eb6d0(local_10,&local_68,local_20);
      FUN_00414ad0(param_1 + 0xb18,local_68);
    }
    FUN_00414b50(&local_20,L"DebuggerOptions");
    cVar1 = FUN_005ebec0(local_10,local_20);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xaa8) = 1;
    }
    else {
      uVar2 = FUN_005eba50(local_10,local_20);
      *(undefined4 *)(param_1 + 0xaa8) = uVar2;
    }
  }
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    uVar3 = FUN_00442620(param_1 + 0xc08,*(undefined8 *)(param_1 + 0xb38));
    local_3c = _Dbg_XMC_NameToDev(uVar3);
    FUN_0160b130(&local_30,local_3c);
    FUN_00414480(param_1 + 0xb10);
    cVar1 = FUN_005ea880(local_10,local_28,0);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_20,L"Debug_Periph",local_30);
      cVar1 = FUN_005ebec0(local_10,local_20);
      if (cVar1 == '\0') {
        FUN_00414480(param_1 + 0xb10);
      }
      else {
        FUN_005eb6d0(local_10,&local_70,local_20);
        FUN_00414ad0(param_1 + 0xb10,local_70);
      }
    }
  }
  local_88 = &DAT_0108d61c;
  local_80 = L"Arduino";
  FUN_00416cd0(&local_28,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_20,L"UseArduinoCLI");
    cVar1 = FUN_005ebec0(local_10,local_20);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xaac) = 0;
    }
    else {
      uVar2 = FUN_005eba50(local_10,local_20);
      *(undefined4 *)(param_1 + 0xaac) = uVar2;
    }
  }
  FUN_00410f20(local_10);
  FUN_0108cdc0(param_1,&local_18);
  if (local_18 == 0) {
    FUN_00414ad0(param_1 + 0xb10,0);
  }
  else {
    local_48 = *(longlong *)(param_1 + 0xb10);
    local_4c = 0;
    if (local_48 != 0) {
      local_4c = *(int *)(local_48 + -4);
    }
    local_34 = local_4c;
    local_50 = 0;
    if (local_18 != 0) {
      local_50 = *(int *)(local_18 + -4);
    }
    local_38 = local_50;
    if (local_4c != local_50) {
      FUN_00414ad0(param_1 + 0xb10,local_18);
    }
  }
  FUN_0108ce80(param_1);
  *(bool *)(param_1 + 0xb58) = (*(uint *)(param_1 + 0xaa8) & 2) != 0;
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_30,4);
  return;
}

