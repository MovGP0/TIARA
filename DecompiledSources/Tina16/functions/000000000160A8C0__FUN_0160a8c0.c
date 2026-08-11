/* Ghidra address: 0160a8c0 */
/* Ghidra symbol: FUN_0160a8c0 */


bool FUN_0160a8c0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  FUN_00416880(&local_10,local_res8[0]);
  iVar1 = FUN_004170c0(L"AM3358",local_10,1);
  if (iVar1 == 1) {
    *param_2 = 0xb0;
    *param_3 = 0x40;
  }
  FUN_00414480(&local_10);
  FUN_004144d0(local_res8);
  return iVar1 == 1;
}

