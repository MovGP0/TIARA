/* Ghidra address: 01b1f360 */
/* Ghidra symbol: FUN_01b1f360 */


undefined8 FUN_01b1f360(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_38 = 0;
  FUN_00414480(param_1);
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\tina.exe");
  FUN_00414e00(local_20);
  uVar2 = FUN_00416740(local_20[0]);
  local_24 = thunk_FUN_03d5a978(uVar2,&local_24);
  if (local_24 != 0) {
    uVar2 = FUN_00409570(local_24);
    uVar3 = FUN_00416740(local_20[0]);
    thunk_FUN_0412830f(uVar3,0,local_24,uVar2);
    iVar1 = thunk_FUN_03c93605(uVar2,L"StringFileInfo\\040904E4\\Comments",&local_30,local_28);
    if (iVar1 != 0) {
      FUN_004167d0(param_1,local_30);
    }
    FUN_004095f0(uVar2,local_24);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return param_1;
}

