/* Ghidra address: 010b0330 */
/* Ghidra symbol: FUN_010b0330 */


void FUN_010b0330(longlong param_1)

{
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [3];
  longlong *local_38;
  undefined8 local_20;
  
  local_70 = auStack_98;
  local_50[1] = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_38 = *(longlong **)(param_1 + 0x20);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_010aff20(param_1,&local_58,1);
  FUN_010aff20(param_1,&local_60,0);
  FUN_00414b50(local_50,local_58);
  if (local_60 != 0) {
    if (local_50[0] != 0) {
      FUN_00416ad0(local_50,&DAT_010b04b8);
    }
    FUN_00416ad0(local_50,local_60);
  }
  if (local_50[0] != 0) {
    (**(code **)(*local_38 + 0x90))(local_38);
    (**(code **)(*local_38 + 0x78))(local_38,L"VER1");
    (**(code **)(*local_38 + 0x78))(local_38,L"Block1");
    (**(code **)(*local_38 + 0x78))(local_38,local_50[0]);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,4);
  return;
}

