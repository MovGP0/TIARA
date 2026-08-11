/* Ghidra address: 005b3350 */
/* Ghidra symbol: FUN_005b3350 */


undefined1 FUN_005b3350(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120),param_2,local_19);
  }
  return local_19[0];
}

