/* Ghidra address: 00b13f40 */
/* Ghidra symbol: FUN_00b13f40 */


undefined1 FUN_00b13f40(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    (**(code **)(param_1 + 0x4b8))(*(undefined8 *)(param_1 + 0x4c0),param_1,local_19);
  }
  return local_19[0];
}

