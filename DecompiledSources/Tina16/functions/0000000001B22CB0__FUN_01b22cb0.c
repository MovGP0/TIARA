/* Ghidra address: 01b22cb0 */
/* Ghidra symbol: FUN_01b22cb0 */


bool FUN_01b22cb0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined8 local_220;
  undefined1 local_212 [522];
  
  local_220 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar2 = FUN_00416740(local_res8[0]);
  iVar1 = thunk_FUN_041b7910(uVar2,&DAT_01b22d78,0,local_212);
  if (0 < iVar1) {
    FUN_00416830(&local_220,local_212,0x105);
    FUN_004412f0(local_220);
  }
  FUN_00414480(&local_220);
  FUN_00414480(local_res8);
  return 0 < iVar1;
}

