/* Ghidra address: 00f60f70 */
/* Ghidra symbol: FUN_00f60f70 */


undefined4 FUN_00f60f70(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_res8 [4];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(local_20,local_res8[0]);
  FUN_00414b50(local_res8,local_20[0]);
  uVar2 = 0;
  if (local_res8[0] != 0) {
    uVar2 = *(undefined4 *)(local_res8[0] + -4);
  }
  cVar1 = FUN_00f60e10(local_res8[0]);
  if (cVar1 == '\0') {
    uVar2 = FUN_0043fc00(local_res8[0]);
  }
  else {
    FUN_00416e20(local_res8,uVar2,1);
    uVar2 = FUN_01aa1170(local_res8[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return uVar2;
}

