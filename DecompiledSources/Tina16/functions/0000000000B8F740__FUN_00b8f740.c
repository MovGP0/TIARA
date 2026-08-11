/* Ghidra address: 00b8f740 */
/* Ghidra symbol: FUN_00b8f740 */


int FUN_00b8f740(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8 [4];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  for (iVar2 = -5; iVar2 < 4; iVar2 = iVar2 + 1) {
    FUN_004169a0(local_20,&DAT_01e942cf + (longlong)iVar2 * 0x15);
    iVar1 = FUN_00416db0(local_20[0],local_res8[0]);
    if (iVar1 == 0) break;
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return iVar2 + 5;
}

