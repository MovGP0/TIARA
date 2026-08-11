/* Ghidra address: 017f2120 */
/* Ghidra symbol: FUN_017f2120 */


undefined1 FUN_017f2120(short *param_1)

{
  undefined1 uVar1;
  int iVar2;
  short *local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_017f20b0(local_res8);
  iVar2 = 0;
  if (local_res8[0] != (short *)0x0) {
    iVar2 = *(int *)(local_res8[0] + -2);
  }
  if (((iVar2 < 1) || (*local_res8[0] != 0x5c)) || (local_res8[0][1] != 100)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(local_res8);
  return uVar1;
}

