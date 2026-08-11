/* Ghidra address: 0080f5c0 */
/* Ghidra symbol: FUN_0080f5c0 */


undefined1 FUN_0080f5c0(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    (**(code **)(param_1 + 0x1b0))(*(undefined8 *)(param_1 + 0x1b8),param_2,local_19);
  }
  return local_19[0];
}

