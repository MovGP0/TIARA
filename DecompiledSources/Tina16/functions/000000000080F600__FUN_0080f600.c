/* Ghidra address: 0080f600 */
/* Ghidra symbol: FUN_0080f600 */


undefined1 FUN_0080f600(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),param_2,local_19);
  }
  return local_19[0];
}

