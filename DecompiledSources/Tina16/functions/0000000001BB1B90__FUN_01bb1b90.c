/* Ghidra address: 01bb1b90 */
/* Ghidra symbol: FUN_01bb1b90 */


undefined8 FUN_01bb1b90(undefined8 param_1)

{
  int iVar1;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_290 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00414480(param_1);
  FUN_00416cd0(&local_290,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Templates",L"\\*.tpt");
  iVar1 = FUN_00441230(local_290,0x20,local_288);
  if (iVar1 == 0) {
    FUN_00416cd0(param_1,4,*(undefined8 *)PTR_DAT_020049a0,L"\\Templates",&LAB_01bb1ce8,local_270);
    FUN_004412c0(local_288);
  }
  FUN_00414480(&local_290);
  FUN_00417740(local_288,&DAT_00432b90);
  return param_1;
}

