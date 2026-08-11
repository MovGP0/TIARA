/* Ghidra address: 00441c30 */
/* Ghidra symbol: FUN_00441c30 */


undefined8 FUN_00441c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong local_10;
  
  local_10 = 0;
  FUN_00441640(param_2,param_3);
  FUN_00441820(&local_10,param_3);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = *(undefined4 *)(local_10 + -4);
  }
  FUN_00416e20(param_2,1,uVar1);
  FUN_00414480(&local_10);
  return param_2;
}

