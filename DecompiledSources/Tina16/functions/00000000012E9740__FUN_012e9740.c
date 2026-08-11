/* Ghidra address: 012e9740 */
/* Ghidra symbol: FUN_012e9740 */


void FUN_012e9740(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_012e9878,L"TINA.INI");
  plVar2 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  *(longlong **)(param_1 + 0x6e0) = plVar2;
  uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,L"ModelTest Settings",L"Opt_Timeout",0);
  FUN_0043f750(&local_28,uVar1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_28);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x20))
                    (*(longlong **)(param_1 + 0x6e0),L"ModelTest Settings",L"Opt_CopyRefResults",1);
  uVar1 = FUN_01b218b0(uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))(*(longlong **)(param_1 + 0x6b0),uVar1);
  *(undefined1 *)(param_1 + 0x6e8) = 1;
  FUN_00414560(&local_28,2);
  return;
}

