/* Ghidra address: 0060a460 */
/* Ghidra symbol: FUN_0060a460 */


void FUN_0060a460(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_38;
  longlong lStack_30;
  
  local_50 = auStack_78;
  lVar1 = param_1[0xc];
  if (((*(longlong *)(lVar1 + 0x10) == 0) && (*(longlong *)(lVar1 + 0x28) == 0)) &&
     (*(longlong *)(lVar1 + 0x30) != 0)) {
    FUN_004b6dc0(*(undefined8 *)(lVar1 + 0x30),0);
    local_38 = param_1[3];
    lStack_30 = param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*param_1 + 0xc0))(param_1,*(undefined8 *)(param_1[0xc] + 0x30));
    param_1[3] = local_38;
    param_1[4] = lStack_30;
  }
  lVar1 = param_1[0xc];
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x28);
  }
  return;
}

