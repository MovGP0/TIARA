/* Ghidra address: 01d471a0 */
/* Ghidra symbol: FUN_01d471a0 */


undefined8 FUN_01d471a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  if ((param_3 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))(*(longlong **)(param_1 + 0x68),local_20);
  }
  else {
    FUN_00414b50(local_20,param_3);
  }
  if ((local_20[0] == 0) && (DAT_03567ba8 != (longlong *)0x0)) {
    (**(code **)(*DAT_03567ba8 + 0x40))(DAT_03567ba8,local_20);
  }
  if (DAT_03567ba8 != (longlong *)0x0) {
    (**(code **)(*DAT_03567ba8 + 0x38))(DAT_03567ba8,local_30);
    FUN_00416cd0(local_20,3,local_30[0],&LAB_01d472d4,local_20[0]);
  }
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return param_2;
}

