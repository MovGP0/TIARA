/* Ghidra address: 012f4f80 */
/* Ghidra symbol: FUN_012f4f80 */


void FUN_012f4f80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined1 local_30;
  undefined1 *local_20;
  char local_11;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  iVar2 = FUN_004170c0(local_res20,local_res10,1);
  if (iVar2 < 1) {
    FUN_00416ba0(&local_10,local_res10,param_5);
  }
  else {
    local_38 = (wchar_t *)CONCAT71(local_38._1_7_,1);
    FUN_00450070(&local_10,local_res10,local_res20,param_5);
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x20))
                    (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"Opt_CopyRefResults",1);
  local_11 = FUN_01b218b0(uVar3);
  FUN_00b96df0(local_10);
  local_38 = L"*.tsc";
  local_30 = 0;
  cVar1 = FUN_012f4c00(local_res18,local_10,local_res20,param_5);
  if (cVar1 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"No TSC file in the source directory!");
    FUN_004134c0(uVar4);
  }
  local_38 = L"*.csv";
  local_30 = 1;
  cVar1 = FUN_012f4c00(local_res10,local_10,local_res20,param_5);
  if (cVar1 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"No CSV file in the source directory!");
    FUN_004134c0(uVar4);
  }
  local_38 = L"*.tsm";
  local_30 = 0;
  FUN_012f4c00(local_res18,local_10,local_res20,param_5);
  local_38 = L"*.mtb";
  local_30 = 1;
  cVar1 = FUN_012f4c00(local_res10,local_10,local_res20,param_5);
  if (cVar1 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"No MTB file in the source directory!");
    FUN_004134c0(uVar4);
  }
  if (local_11 != '\0') {
    local_38 = L"*.ac";
    local_30 = 0;
    FUN_012f4c00(local_res10,local_10,local_res20,param_5);
    local_38 = L"*.tr";
    local_30 = 0;
    FUN_012f4c00(local_res10,local_10,local_res20,param_5);
  }
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,4);
  return;
}

