/* Ghidra address: 010adf80 */
/* Ghidra symbol: FUN_010adf80 */


undefined1 FUN_010adf80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_11 = 0;
  FUN_00414480(local_res10);
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_48 = L"_Config";
  FUN_00416cd0(&local_28,3,L"\\Software\\Atmel\\AtmelStudio\\",local_res8);
  cVar1 = FUN_005ea880(local_10,local_28,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,L"InstallDir");
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,&local_30,L"InstallDir");
      FUN_00414ad0(local_res10,local_30);
      local_11 = 1;
    }
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_res8);
  return local_11;
}

