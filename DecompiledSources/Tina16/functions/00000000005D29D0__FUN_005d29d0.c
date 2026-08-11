/* Ghidra address: 005d29d0 */
/* Ghidra symbol: FUN_005d29d0 */


bool FUN_005d29d0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  bool local_39;
  undefined8 local_38;
  longlong local_30 [2];
  undefined1 local_19 [9];
  
  local_38 = 0;
  local_30[0] = 0;
  local_39 = true;
  FUN_0043ea00(local_30,param_1);
  if (local_30[0] != 0) {
    iVar2 = FUN_005d27e0(param_1,local_19);
    cVar1 = FUN_005d2b20(param_1);
    if (cVar1 != '\0') {
      iVar2 = iVar2 + 2;
    }
    FUN_00416780(&local_38,DAT_02011f46);
    iVar2 = FUN_004170c0(local_38,param_1,iVar2);
    local_39 = iVar2 == 0;
  }
  FUN_00414560(&local_38,2);
  return local_39;
}

