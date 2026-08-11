/* Ghidra address: 004d5c70 */
/* Ghidra symbol: FUN_004d5c70 */


void FUN_004d5c70(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1);
  }
  return;
}

