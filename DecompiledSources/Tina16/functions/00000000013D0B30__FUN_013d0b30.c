/* Ghidra address: 013d0b30 */
/* Ghidra symbol: FUN_013d0b30 */


undefined1 FUN_013d0b30(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_50;
  longlong local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined1 local_23;
  undefined1 local_21;
  
  local_50 = auStack_98;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  if (*(char *)(param_1 + 0x8e8) == '\0') {
    FUN_013d08e0();
  }
  else {
    local_23 = 0;
    local_40 = *(longlong *)(param_1 + 0x8e0);
    FUN_013bb8d0(local_40,param_2);
    (**(code **)(**(longlong **)(local_40 + 200) + 0x90))(*(longlong **)(local_40 + 200));
    FUN_013bb8f0(local_40);
    local_78 = 60000;
    local_70 = 0;
    local_68 = 0;
    local_34 = FUN_01054cd0(*(undefined8 *)(local_40 + 200),local_res18,
                            *(undefined8 *)(local_40 + 0x108),1);
    if (local_34 == 0x102) {
      (**(code **)(**(longlong **)(local_40 + 200) + 0x78))
                (*(longlong **)(local_40 + 200),L"Timeout received");
    }
    else {
      FUN_013ba1e0(local_40);
      FUN_013bbba0(local_40,0,6);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(local_40 + 200));
    FUN_013d0870(param_1);
    cVar2 = FUN_01b22620(*(undefined8 *)(local_40 + 200),L"Python error message",local_38,0);
    if (cVar2 == '\0') {
      if (*(int *)(*(longlong *)(param_1 + 0x8e0) + 0x11c) == 0) {
        FUN_00414ad0(local_res20,L"Error in the python code!");
        local_23 = 1;
      }
    }
    else {
      FUN_00414ad0(local_res20,L"Selected curve not found!");
      local_23 = 1;
    }
    local_21 = local_23;
    cVar2 = FUN_013b2e80(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0xc0));
    if (cVar2 != '\0') {
      FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
    }
  }
  FUN_00414480(&local_res18);
  return local_21;
}

