/* Ghidra address: 0146c750 */
/* Ghidra symbol: FUN_0146c750 */


void FUN_0146c750(longlong param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0043e130(&local_10,*(undefined8 *)PTR_DAT_02001f18);
  iVar1 = FUN_00416db0(local_10,&DAT_0146c848);
  if (iVar1 != 0) {
    FUN_0043e130(&local_18,*(undefined8 *)PTR_DAT_02001f18);
    iVar1 = FUN_00416db0(local_18,&PTR_DAT_0146c85c);
    if (iVar1 != 0) {
      FUN_0043e130(&local_20,*(undefined8 *)PTR_DAT_02001f18);
      iVar1 = FUN_00416db0(local_20,&LAB_0146c870);
      if (iVar1 != 0) goto code_r0x0146c7fd;
    }
  }
  FUN_00680480(*(undefined8 *)(param_1 + 0x6e8),1);
code_r0x0146c7fd:
  FUN_00414560(&local_20,3);
  return;
}

