/* Ghidra address: 005ffcb0 */
/* Ghidra symbol: FUN_005ffcb0 */


void FUN_005ffcb0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
  thunk_FUN_04190710(uVar4);
  uVar4 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
  thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),uVar4);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x38) == '\0') {
    uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_1 + 0x60),uVar2);
    thunk_FUN_03b994b9(*(undefined8 *)(param_1 + 0x60),2);
  }
  else {
    uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_1 + 0x60),~uVar3);
    thunk_FUN_03b994b9(*(undefined8 *)(param_1 + 0x60),1);
  }
  return;
}

