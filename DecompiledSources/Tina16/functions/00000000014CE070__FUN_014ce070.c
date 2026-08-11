/* Ghidra address: 014ce070 */
/* Ghidra symbol: FUN_014ce070 */


void FUN_014ce070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  wchar_t *local_20 [2];
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_20[0] = (wchar_t *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_015fcd70(&local_48,*(undefined8 *)(param_1 + 0x1298));
  local_68 = L"sc_options.txt";
  FUN_00416cd0(&local_30,3,local_48,&DAT_014ce27c);
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 != '\0') {
    (**(code **)(*local_28 + 0xd8))(local_28,local_30);
    FUN_00414480(local_20);
    FUN_00448450(local_20,local_res18,PTR_DAT_02004830);
    local_68 = local_20[0];
    FUN_00416cd0(&local_50,3,local_res10,&LAB_014ce2b8);
    (**(code **)(*local_28 + 0x78))(local_28,local_50);
    FUN_00414480(local_20);
    (**(code **)(*local_28 + 0x100))(local_28,local_30);
  }
  FUN_00410f20(local_28);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  FUN_00414480(&local_res10);
  return;
}

