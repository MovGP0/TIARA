/* Ghidra address: 00e0ab90 */
/* Ghidra symbol: FUN_00e0ab90 */


undefined8 FUN_00e0ab90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong local_10;
  
  local_10 = 0;
  FUN_004167d0(&local_10,param_2);
  FUN_00416e20(&local_10,1,1);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = *(undefined4 *)(local_10 + -4);
  }
  FUN_00416e20(&local_10,uVar1,1);
  FUN_00414ad0(param_1,local_10);
  FUN_00442c30(param_2);
  FUN_00414480(&local_10);
  return param_1;
}

