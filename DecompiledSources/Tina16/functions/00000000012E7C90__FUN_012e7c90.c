/* Ghidra address: 012e7c90 */
/* Ghidra symbol: FUN_012e7c90 */


void FUN_012e7c90(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_012e7e18,L"TINA.INI");
  plVar1 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  *(longlong **)(param_1 + 0x710) = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_28,L"ModelTest Settings",L"DE_SourceFolder",0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_28);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x10))
            (*(longlong **)(param_1 + 0x710),&local_30,L"ModelTest Settings",L"DE_TargetFolder",0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_30);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x10))
            (*(longlong **)(param_1 + 0x710),&local_38,L"ModelTest Settings",L"DE_TargetPrefix",
             &LAB_012e7f00);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_38);
  *(undefined1 *)(param_1 + 0x718) = 1;
  FUN_00414560(&local_38,4);
  return;
}

