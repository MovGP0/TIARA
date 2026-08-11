/* Ghidra address: 00ea99b0 */
/* Ghidra symbol: FUN_00ea99b0 */


longlong * FUN_00ea99b0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043ea00(&local_10,*param_2);
  FUN_00414ad0(param_2,local_10);
  FUN_00414ad0(param_1,*param_2);
  uVar1 = FUN_004170c0(&LAB_00ea9aa4,*param_1,1);
  FUN_00416e20(param_2,1,uVar1);
  uVar2 = FUN_004170c0(&LAB_00ea9aa4,*param_1,1);
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + -4);
  }
  FUN_00416e20(param_1,uVar2,uVar1);
  FUN_00414480(&local_10);
  return param_1;
}

