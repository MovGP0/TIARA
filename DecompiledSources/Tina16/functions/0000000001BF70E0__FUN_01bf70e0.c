/* Ghidra address: 01bf70e0 */
/* Ghidra symbol: FUN_01bf70e0 */


undefined8 FUN_01bf70e0(longlong param_1)

{
  code *local_28;
  longlong local_20;
  
  *(undefined8 *)(param_1 + 0x110) = 0;
  local_28 = FUN_01bf70a0;
  local_20 = param_1;
  FUN_01bfa3f0(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe0),&local_28);
  return *(undefined8 *)(param_1 + 0x110);
}

