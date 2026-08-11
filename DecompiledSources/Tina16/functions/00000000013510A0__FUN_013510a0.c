/* Ghidra address: 013510a0 */
/* Ghidra symbol: FUN_013510a0 */


undefined8 FUN_013510a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414630(param_2);
  FUN_00414630(local_res18);
  FUN_00416880(&local_10,local_res10);
  iVar1 = FUN_004170c0(&LAB_013511b0,local_10,1);
  if (0 < iVar1) {
    uVar2 = 0;
    if (local_res10 != 0) {
      uVar2 = *(undefined4 *)(local_res10 + -4);
    }
    FUN_00415ad0(&local_18,local_res10,iVar1,uVar2);
    FUN_004156b0(param_1,local_res18,local_18);
  }
  FUN_004144d0(&local_18);
  FUN_00414480(&local_10);
  FUN_00414590(&local_res10,2);
  return param_1;
}

