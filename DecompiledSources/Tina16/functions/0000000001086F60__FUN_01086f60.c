/* Ghidra address: 01086f60 */
/* Ghidra symbol: FUN_01086f60 */


undefined1 FUN_01086f60(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_29 = 1;
  if (*(char *)(param_1 + 0x4c35) == '\0') {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02003d60);
    FUN_00b8e650(uVar1,local_20,L"HDLStrings.Msg_StopTheDebugger",local_28);
    FUN_016fd940(local_20[0]);
    local_29 = 0;
  }
  else {
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x4c80),0x123e,0,0);
    if (*(char *)(param_1 + 0x4c34) == '\0') {
      *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) = 0;
    }
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

