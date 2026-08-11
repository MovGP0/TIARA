/* Ghidra address: 00723d10 */
/* Ghidra symbol: FUN_00723d10 */


undefined1 FUN_00723d10(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined8 *)(param_1 + 0x158),param_1,local_19);
  }
  return local_19[0];
}

