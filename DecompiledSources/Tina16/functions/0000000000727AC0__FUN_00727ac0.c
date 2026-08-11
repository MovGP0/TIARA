/* Ghidra address: 00727ac0 */
/* Ghidra symbol: FUN_00727ac0 */


undefined1 FUN_00727ac0(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x110),param_1,local_19);
  }
  return local_19[0];
}

