/* Ghidra address: 00bff9a0 */
/* Ghidra symbol: FUN_00bff9a0 */


void FUN_00bff9a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined4 local_c;
  
  local_20 = auStack_48;
  cVar2 = FUN_00bd11e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x558));
  if (cVar2 == '\x15') {
    local_c = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x550) + 8);
    local_18 = FUN_00bd1120(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x558));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x550);
    *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(local_18 + 0x28);
    FUN_00bd1210(lVar1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x550) + 8) = local_c;
    FUN_00410f20(local_18);
    FUN_00c0ea50(*(undefined8 *)(param_1 + 0x60));
  }
  return;
}

