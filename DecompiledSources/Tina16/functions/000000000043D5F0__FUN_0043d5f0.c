/* Ghidra address: 0043d5f0 */
/* Ghidra symbol: FUN_0043d5f0 */


undefined8 FUN_0043d5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined1 *local_30;
  undefined4 local_1c;
  longlong local_18;
  longlong local_10;
  
  local_30 = auStack_68;
  FUN_00414480(param_2);
  if (DAT_0200c650 == (code *)0x0) {
    uVar1 = FUN_00427be0(L"NTDLL.DLL");
    DAT_0200c650 = (code *)FUN_00427c10(uVar1,L"NtQueryObject");
  }
  if (DAT_0200c650 != (code *)0x0) {
    local_48 = &local_1c;
    local_18 = (*DAT_0200c650)(param_3,1,0,0);
    if (local_18 == 0xc0000004) {
      local_10 = FUN_004095c0(local_1c);
      local_48 = &local_1c;
      local_18 = (*DAT_0200c650)(param_3,1,local_10,local_1c);
      if (local_18 == 0) {
        FUN_004167d0(param_2,*(undefined8 *)(local_10 + 8));
      }
      FUN_004095f0(local_10);
    }
  }
  return param_2;
}

