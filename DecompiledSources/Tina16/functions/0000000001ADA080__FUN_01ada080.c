/* Ghidra address: 01ada080 */
/* Ghidra symbol: FUN_01ada080 */


undefined1 FUN_01ada080(void)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ada134,L"TINA.INI");
  plVar2 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,L"Diagram Page Setup",L"ManualScale",0);
  FUN_00410f20(plVar2);
  FUN_00414480(local_20);
  return uVar1;
}

