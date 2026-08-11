/* Ghidra address: 00702c30 */
/* Ghidra symbol: FUN_00702c30 */


undefined1 FUN_00702c30(longlong param_1,undefined4 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x590) != 0) {
    (**(code **)(param_1 + 0x590))(*(undefined8 *)(param_1 + 0x598),param_1,param_2,local_19);
  }
  return local_19[0];
}

