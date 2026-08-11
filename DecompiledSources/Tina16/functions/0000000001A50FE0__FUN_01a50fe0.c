/* Ghidra address: 01a50fe0 */
/* Ghidra symbol: FUN_01a50fe0 */


void FUN_01a50fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_68 [32];
  undefined *local_48;
  wchar_t *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414480(local_res18);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_48 = &DAT_01a511a8;
  local_40 = L"LLMLocalv3";
  FUN_00416cd0(&local_28,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,local_res10);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,&local_30,local_res10);
      FUN_00414ad0(local_res18,local_30);
    }
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_18);
  FUN_00414480(&local_res10);
  return;
}

