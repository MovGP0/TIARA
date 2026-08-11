/* Ghidra address: 004d5bf0 */
/* Ghidra symbol: FUN_004d5bf0 */


void FUN_004d5bf0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x90),param_1);
  }
  return;
}

