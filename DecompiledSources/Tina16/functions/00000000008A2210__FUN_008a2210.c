/* Ghidra address: 008a2210 */
/* Ghidra symbol: FUN_008a2210 */


undefined1 FUN_008a2210(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_19;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_19 = 0;
  FUN_00414b50(&local_10,param_2);
  FUN_008a1ef0(param_1,&local_18,&local_10,1,2);
  if (local_18 != 0) {
    if (local_10 != 0) {
      cVar1 = FUN_008752e0(local_10,1,1);
      if (cVar1 != '\0') {
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Day of Month");
        FUN_004134c0(uVar2);
      }
    }
    cVar1 = FUN_0043fc80(local_18,param_1 + 0x60);
    if (cVar1 != '\0') {
      if ((*(int *)(param_1 + 0x60) < 1) || (0x1f < *(int *)(param_1 + 0x60))) {
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Day of Month");
        FUN_004134c0(uVar2);
      }
      local_19 = 1;
    }
  }
  FUN_00414560(&local_18,2);
  return local_19;
}

