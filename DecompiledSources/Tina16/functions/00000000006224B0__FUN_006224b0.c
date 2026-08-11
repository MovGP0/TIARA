/* Ghidra address: 006224b0 */
/* Ghidra symbol: FUN_006224b0 */


undefined8 FUN_006224b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10),local_20);
    FUN_00416cd0(param_2,3,local_20[0],&LAB_00622554,*(undefined8 *)(param_1 + 0x30));
  }
  FUN_00414480(local_20);
  return param_2;
}

