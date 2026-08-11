/* Ghidra address: 004be380 */
/* Ghidra symbol: FUN_004be380 */


undefined1 FUN_004be380(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 200),param_1,param_2,local_19);
  }
  return local_19[0];
}

