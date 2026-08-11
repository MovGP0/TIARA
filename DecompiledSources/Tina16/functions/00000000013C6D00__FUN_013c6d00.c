/* Ghidra address: 013c6d00 */
/* Ghidra symbol: FUN_013c6d00 */


undefined1 FUN_013c6d00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_50;
  undefined8 local_40 [2];
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_23;
  undefined1 local_21;
  
  local_50 = auStack_98;
  local_40[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0xa7) == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Python environment not found!");
    FUN_004134c0(uVar3);
  }
  local_23 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 200);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_013bb8f0(*(undefined8 *)(param_1 + 0xb0));
  local_78 = 60000;
  local_70 = 0;
  local_68 = 0;
  local_28 = FUN_01054cd0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 200),local_res10,
                          *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x108),1);
  if (local_28 == 0x102) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 200);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"Timeout received");
  }
  else {
    local_21 = FUN_013bbba0(*(undefined8 *)(param_1 + 0xb0),0,5);
  }
  cVar2 = FUN_01b22620(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 200),L"Python error message",
                       local_2c,0);
  if (cVar2 == '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x11c) == 0) {
      FUN_00414ad0(local_res18,L"Error in the python code!");
      local_23 = 1;
    }
  }
  else {
    FUN_00414ad0(local_res18,L"Selected curve not found!");
    local_23 = 1;
  }
  local_21 = local_23;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 200);
  (**(code **)(*plVar1 + 0x38))(plVar1,local_40);
  FUN_00414480(local_40);
  FUN_00414480(&local_res10);
  return local_21;
}

