/* Ghidra address: 00cbaf10 */
/* Ghidra symbol: FUN_00cbaf10 */


void FUN_00cbaf10(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0043f750(local_20,param_2);
  (**(code **)(*param_1 + 0x98))(param_1,local_20[0],param_3);
  FUN_00414480(local_20);
  return;
}

