/* Ghidra address: 01604ed0 */
/* Ghidra symbol: FUN_01604ed0 */


void FUN_01604ed0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  *param_3 = 0;
  *param_4 = 0;
  FUN_00414480(param_1);
  FUN_00414480(param_2);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_20,*(undefined8 *)PTR_DAT_02002340);
  FUN_00416ba0(&local_28,L"HKEY_CURRENT_USER\\",local_20);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_20,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_48,local_28,L": not found");
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_00414b50(&local_18,L"DAVE_TEST_REPO");
    cVar1 = FUN_005ebec0(local_10,local_18);
    if (cVar1 == '\0') {
      FUN_005eb630(local_10,local_18,0);
    }
    else {
      FUN_005eb6d0(local_10,&local_38,local_18);
      FUN_00414ad0(param_1,local_38);
    }
    FUN_00414b50(&local_18,L"DAVE_TEST_PRJ");
    cVar1 = FUN_005ebec0(local_10,local_18);
    if (cVar1 == '\0') {
      FUN_005eb630(local_10,local_18,0);
    }
    else {
      FUN_005eb6d0(local_10,&local_40,local_18);
      FUN_00414ad0(param_2,local_40);
    }
    FUN_00414b50(&local_18,L"DAVE_TEST_WORKSPACE_IDX");
    cVar1 = FUN_005ebec0(local_10,local_18);
    if (cVar1 == '\0') {
      FUN_005eba20(local_10,local_18,0);
    }
    else {
      uVar2 = FUN_005eba50(local_10,local_18);
      *param_3 = uVar2;
    }
    FUN_00414b50(&local_18,L"DAVE_TEST_PRJ_IDX");
    cVar1 = FUN_005ebec0(local_10,local_18);
    if (cVar1 == '\0') {
      FUN_005eba20(local_10,local_18,0);
    }
    else {
      uVar2 = FUN_005eba50(local_10,local_18);
      *param_4 = uVar2;
    }
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_48,3);
  FUN_00414560(&local_28,3);
  return;
}

