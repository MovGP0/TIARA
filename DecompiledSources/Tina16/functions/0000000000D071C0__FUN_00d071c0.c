/* Ghidra address: 00d071c0 */
/* Ghidra symbol: FUN_00d071c0 */


void FUN_00d071c0(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
  local_20 = auStack_48;
  local_28 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x18);
  local_18 = *(undefined8 *)(local_28 + 0x118);
  *(undefined8 *)(local_28 + 0x118) = 0;
  FUN_00d03810(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10),local_28);
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x18) + 0x118) = local_18;
  return;
}

