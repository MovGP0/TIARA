/* Ghidra address: 01b1e1c0 */
/* Ghidra symbol: FUN_01b1e1c0 */


void FUN_01b1e1c0(void)

{
  int iVar1;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_298 = 0;
  local_290 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_290,*(undefined8 *)PTR_DAT_020030c8,L"\\T4W*.*");
  iVar1 = FUN_00441230(local_290,0x20,local_288);
  while (iVar1 == 0) {
    FUN_00416cd0(&local_298,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01b1e2ec,local_270);
    FUN_004412f0(local_298);
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_298,2);
  FUN_00417740(local_288,&DAT_00432b90);
  return;
}

