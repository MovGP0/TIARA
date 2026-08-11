/* Ghidra address: 00bae180 */
/* Ghidra symbol: FUN_00bae180 */


longlong * FUN_00bae180(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_3 + 0x40))(param_3,local_20);
  FUN_00bae050(param_1,param_2,local_20[0]);
  if (*param_2 == 0) {
    FUN_00bade30(param_1,param_3);
  }
  else {
    uVar1 = FUN_00badf10(param_1,*param_2);
    FUN_00bade90(param_1,uVar1,param_3);
  }
  FUN_00414480(local_20);
  return param_2;
}

