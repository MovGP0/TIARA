/* Ghidra address: 019f0510 */
/* Ghidra symbol: FUN_019f0510 */


undefined8 FUN_019f0510(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar2 = 0;
  if (local_res18[0] != 0) {
    uVar2 = *(undefined4 *)(local_res18[0] + -4);
  }
  FUN_00416e20(local_res18,uVar2,1);
  iVar1 = FUN_004170c0(&LAB_019f05f4,local_res18[0],1);
  if (iVar1 < 1) {
    FUN_00414480(param_2);
  }
  else {
    iVar1 = FUN_004413f0(&LAB_019f05f4,local_res18[0]);
    uVar2 = 0;
    if (local_res18[0] != 0) {
      uVar2 = *(undefined4 *)(local_res18[0] + -4);
    }
    FUN_00416e20(local_res18,iVar1 + 1,uVar2);
    FUN_00414ad0(param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return param_2;
}

