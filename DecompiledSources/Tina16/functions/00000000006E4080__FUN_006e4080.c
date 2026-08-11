/* Ghidra address: 006e4080 */
/* Ghidra symbol: FUN_006e4080 */


undefined1 FUN_006e4080(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    (**(code **)(param_1 + 0x5f8))(*(undefined8 *)(param_1 + 0x600),param_1,param_2,local_19);
  }
  return local_19[0];
}

