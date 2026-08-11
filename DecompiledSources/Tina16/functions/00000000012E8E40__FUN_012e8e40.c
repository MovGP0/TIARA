/* Ghidra address: 012e8e40 */
/* Ghidra symbol: FUN_012e8e40 */


void FUN_012e8e40(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_012e8f28,L"TINA.INI");
  plVar1 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  *(longlong **)(param_1 + 0x730) = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_28,L"ModelTest Settings",L"CT_SourceFolder",0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_28);
  FUN_00414560(&local_28,2);
  return;
}

