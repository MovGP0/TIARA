/* Ghidra address: 010f6c40 */
/* Ghidra symbol: FUN_010f6c40 */


void FUN_010f6c40(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  
  FUN_00498350(local_28,0,0,*(int *)(*(longlong *)(param_1 + 0x8f0) + 0x98) + -1,
               *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x9c) + -1);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x8f0) + 0x310) + 0x80),
               0xffffff);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f0) + 0x310);
  (**(code **)(*plVar1 + 0xa8))(plVar1,local_28);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  FUN_010f6de0(param_1,local_48);
  if (*(char *)(*(longlong *)(param_1 + 0x7e0) + 0xa9) != '\0') {
    FUN_0064e700(*(longlong *)(param_1 + 0x7e0));
  }
  return;
}

