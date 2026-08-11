/* Ghidra address: 016052c0 */
/* Ghidra symbol: FUN_016052c0 */


void FUN_016052c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = 0;
  local_20 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_20,*(undefined8 *)PTR_DAT_02002340);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_20,1);
  if (cVar1 != '\0') {
    FUN_005eba20(local_10,L"DAVE_TEST_WORKSPACE_IDX",param_1);
    FUN_005eba20(local_10,L"DAVE_TEST_PRJ_IDX",param_2);
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_20,2);
  return;
}

