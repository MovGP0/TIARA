/* Ghidra address: 01a58420 */
/* Ghidra symbol: FUN_01a58420 */


bool FUN_01a58420(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res8 [4];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&LAB_01a58504,local_res8[0],1);
  if (0 < iVar1) {
    FUN_00416dc0(param_2,local_res8[0],1,iVar1 + -1);
    FUN_00416dc0(local_20,local_res8[0],iVar1 + 1,0xff);
    uVar2 = FUN_0043fc00(local_20[0]);
    *param_3 = uVar2;
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return 0 < iVar1;
}

