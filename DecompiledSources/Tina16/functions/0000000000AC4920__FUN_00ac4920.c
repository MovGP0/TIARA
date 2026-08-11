/* Ghidra address: 00ac4920 */
/* Ghidra symbol: FUN_00ac4920 */


void FUN_00ac4920(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = auStack_68;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    local_30 = *(undefined8 *)(lVar1 + 0x310);
    local_31 = *(undefined1 *)(lVar1 + 0x30a);
    local_32 = *(undefined1 *)(lVar1 + 0x309);
    local_28 = *(undefined8 *)(lVar1 + 0x68);
    uVar2 = FUN_00610ca0(&PTR_FUN_00a90138,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68) = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x440))
              (*(longlong **)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1b0));
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68));
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(lVar1 + 0x68) = local_28;
    *(undefined8 *)(lVar1 + 0x310) = local_30;
    *(undefined1 *)(lVar1 + 0x30a) = local_31;
    *(undefined1 *)(lVar1 + 0x309) = local_32;
  }
  return;
}

