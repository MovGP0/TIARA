/* Ghidra address: 016056c0 */
/* Ghidra symbol: FUN_016056c0 */


void FUN_016056c0(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 local_res8;
  int local_res10;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_20,*(undefined8 *)PTR_DAT_02002340);
  FUN_005ea670(local_10,0xffffffff80000001);
  FUN_01605430(&local_res8,0x22);
  cVar1 = FUN_005ea880(local_10,local_20,1);
  if (cVar1 != '\0') {
    if (local_res10 == 0) {
      FUN_005eb630(local_10,L"DAVE_TEST_PRJ",local_res8);
    }
    else {
      FUN_005eb630(local_10,L"DAVE_TEST_REPO",local_res8);
    }
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_res8);
  return;
}

