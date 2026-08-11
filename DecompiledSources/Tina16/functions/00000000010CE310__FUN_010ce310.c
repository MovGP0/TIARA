/* Ghidra address: 010ce310 */
/* Ghidra symbol: FUN_010ce310 */


undefined8 FUN_010ce310(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043ea00(param_2,local_res18[0]);
  iVar1 = FUN_004170c0(&LAB_010ce3d4,local_res18[0],1);
  if (iVar1 == 1) {
    FUN_00416e20(local_res18,1,3);
    uVar2 = 0;
    if (local_res18[0] != 0) {
      uVar2 = *(undefined4 *)(local_res18[0] + -4);
    }
    FUN_00416e20(local_res18,uVar2,1);
    FUN_0043ea00(param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return param_2;
}

