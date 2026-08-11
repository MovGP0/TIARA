/* Ghidra address: 007e5e60 */
/* Ghidra symbol: FUN_007e5e60 */


void FUN_007e5e60(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  code *local_48;
  longlong local_40;
  uint local_38;
  undefined2 local_34 [10];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_60 = 0;
  local_20 = 0;
  DAT_01e13908 = 0;
  local_34[0] = 0;
  thunk_FUN_041d7709(local_34);
  local_18 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_18,0xffffffff80000002);
  FUN_00416830(&local_60,local_34,10);
  FUN_00416ba0(&local_58,L"\\SYSTEM\\CurrentControlSet\\Control\\Keyboard Layouts\\",local_60);
  cVar1 = FUN_005eaa60(local_18,local_58);
  if (cVar1 != '\0') {
    FUN_005eb6d0(local_18,&local_20,L"Layout File");
    local_10 = FUN_00452dc0(local_20,0x8000);
    if (local_10 != 0) {
      local_48 = (code *)FUN_00427c10(local_10,L"KbdLayerDescriptor");
      if (local_48 != (code *)0x0) {
        local_40 = (*local_48)();
        if (local_40 != 0) {
          iVar2 = FUN_007e5dd0(param_1);
          if (iVar2 == 0) {
            local_38 = *(uint *)(local_40 + 0x50);
          }
          else {
            local_38 = *(uint *)(local_40 + 0x50);
          }
          DAT_01e13908 = (local_38 & 1) == 1;
        }
      }
      thunk_FUN_041c8c2f(local_10);
    }
  }
  FUN_00410f20(local_18);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_20);
  return;
}

