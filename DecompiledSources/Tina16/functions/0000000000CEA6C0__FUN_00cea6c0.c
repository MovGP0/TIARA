/* Ghidra address: 00cea6c0 */
/* Ghidra symbol: FUN_00cea6c0 */


undefined1 FUN_00cea6c0(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1,param_2,local_19);
  }
  return local_19[0];
}

