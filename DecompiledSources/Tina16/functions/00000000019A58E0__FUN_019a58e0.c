/* Ghidra address: 019a58e0 */
/* Ghidra symbol: FUN_019a58e0 */


undefined8 FUN_019a58e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,param_3);
  if (-1 < param_4 + -1) {
    do {
      uVar1 = FUN_004170c0(&LAB_019a59a4,local_20[0],1);
      FUN_00416e20(local_20,1,uVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_019a5860(param_1,param_2,local_20);
  FUN_00414480(local_20);
  return param_2;
}

