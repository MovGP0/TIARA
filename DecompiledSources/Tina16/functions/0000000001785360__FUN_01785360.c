/* Ghidra address: 01785360 */
/* Ghidra symbol: FUN_01785360 */


undefined8 FUN_01785360(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong local_res18 [2];
  undefined8 local_20;
  
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  iVar1 = 0;
  if (local_res18[0] != 0) {
    iVar1 = *(int *)(local_res18[0] + -4);
  }
  iVar2 = 0;
  if (*(short *)(local_res18[0] + -2 + (longlong)iVar1 * 2) != 0x2c) {
    FUN_00416ad0(local_res18,&LAB_01785484);
    iVar2 = 0;
  }
  while ((iVar2 < param_4 && (local_res18[0] != 0))) {
    iVar1 = FUN_004170c0(&LAB_01785484,local_res18[0],1);
    if (iVar2 == param_4 + -1) {
      FUN_00416dc0(&local_20,local_res18[0],1,iVar1 + -1);
      FUN_0043ea00(param_2,local_20);
    }
    FUN_00416e20(local_res18,1,iVar1);
    iVar2 = iVar2 + 1;
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return param_2;
}

