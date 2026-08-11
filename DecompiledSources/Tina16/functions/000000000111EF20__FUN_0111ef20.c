/* Ghidra address: 0111ef20 */
/* Ghidra symbol: FUN_0111ef20 */


undefined1 FUN_0111ef20(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_29 = 0;
  FUN_00416dc0(&local_18,*(undefined8 *)(param_1 + 0x58),1,7);
  FUN_0043e130(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,L"#REGION");
  if (iVar1 == 0) {
    FUN_00be1b30(*(undefined8 *)(param_1 + 0x98),param_2 + 1,*(undefined4 *)PTR_DAT_02003d30,
                 0xffffffff);
    local_29 = 1;
  }
  else {
    FUN_00416dc0(&local_28,*(undefined8 *)(param_1 + 0x58),1,10);
    FUN_0043e130(&local_20,local_28);
    iVar1 = FUN_00416db0(local_20,L"#ENDREGION");
    if (iVar1 == 0) {
      FUN_00be1b60(*(undefined8 *)(param_1 + 0x98),param_2 + 1,*(undefined4 *)PTR_DAT_02003d30,
                   0xffffffff);
      local_29 = 1;
    }
  }
  FUN_00414560(&local_28,4);
  return local_29;
}

