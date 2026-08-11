/* Ghidra address: 01b23050 */
/* Ghidra symbol: FUN_01b23050 */


void FUN_01b23050(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00416cd0(&local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01b23164,L"TINA.INI");
  plVar3 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20);
  uVar1 = (**(code **)(*plVar3 + 0x20))
                    (plVar3,L"Schematic Editor",L"RealScreenDPI",
                     *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_00410f20(plVar3);
  uVar2 = thunk_FUN_03f3ed25(param_1,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),uVar1);
  *param_3 = uVar2;
  uVar1 = thunk_FUN_03f3ed25(param_2,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),uVar1);
  *param_4 = uVar1;
  FUN_00414480(&local_20);
  return;
}

