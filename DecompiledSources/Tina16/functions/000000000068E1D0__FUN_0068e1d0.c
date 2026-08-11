/* Ghidra address: 0068e1d0 */
/* Ghidra symbol: FUN_0068e1d0 */


undefined8 FUN_0068e1d0(longlong param_1,undefined4 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    (**(code **)(param_1 + 0x538))(*(undefined8 *)(param_1 + 0x540),param_1,param_2,local_20);
  }
  return local_20[0];
}

