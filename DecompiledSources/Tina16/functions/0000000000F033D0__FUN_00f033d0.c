/* Ghidra address: 00f033d0 */
/* Ghidra symbol: FUN_00f033d0 */


void FUN_00f033d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 *local_40;
  longlong local_38;
  longlong lStack_30;
  
  local_40 = auStack_68;
  if ((*(ushort *)(param_1 + 0x4f) & 4) == 0) {
    local_48 = *(longlong **)(param_1 + 0x28);
    local_38 = local_48[1];
    lStack_30 = local_48[2];
    local_48[1] = 0;
    local_48[2] = 0;
    uVar2 = FUN_00f02f00(param_1);
    (**(code **)(*local_48 + 0x10))(local_48,uVar2);
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(lVar1 + 8) = local_38;
    *(longlong *)(lVar1 + 0x10) = lStack_30;
  }
  return;
}

