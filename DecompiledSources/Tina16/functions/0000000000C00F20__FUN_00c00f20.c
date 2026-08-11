/* Ghidra address: 00c00f20 */
/* Ghidra symbol: FUN_00c00f20 */


void FUN_00c00f20(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined4 local_c;
  
  local_20 = auStack_48;
  cVar1 = FUN_00bd11e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x550));
  if (cVar1 == '\x15') {
    local_c = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x558) + 8);
    local_18 = FUN_00bd1120(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x550));
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x558) + 8) =
         *(undefined4 *)(local_18 + 0x28);
    FUN_00410f20(local_18);
    FUN_00bd1210(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x558));
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x558) + 8) = local_c;
  }
  return;
}

