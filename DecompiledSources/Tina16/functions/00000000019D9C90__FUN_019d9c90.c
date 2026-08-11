/* Ghidra address: 019d9c90 */
/* Ghidra symbol: FUN_019d9c90 */


void FUN_019d9c90(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x810) = 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x830));
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*(undefined4 *)(param_1 + 0x808));
  FUN_013b7990(PTR_DAT_02004010,param_1 + 0x7f0,param_1 + 0x7f8,local_20);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
  (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(param_1 + 0x7f0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
  (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(param_1 + 0x7f8));
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x80c));
  FUN_019db970(param_1);
  FUN_00414480(local_20);
  return;
}

