/* Ghidra address: 00af2a00 */
/* Ghidra symbol: FUN_00af2a00 */


undefined1 FUN_00af2a00(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 2000) != 0) {
    (**(code **)(param_1 + 2000))
              (*(undefined8 *)(param_1 + 0x7d8),param_1,*(undefined8 *)(param_1 + 0x940),local_19);
  }
  return local_19[0];
}

