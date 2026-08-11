/* Ghidra address: 0181bd40 */
/* Ghidra symbol: FUN_0181bd40 */


void FUN_0181bd40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x6c0);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(lVar1 + 0x20);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(lVar1 + 0x24);
  FUN_00452320(*(longlong *)(param_2 + 0x80) + 0x6c0);
  if (*(int *)(param_2 + 0x5c) == 0x2e0) {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_2 + 0x80));
    thunk_FUN_041b2403(uVar2,0x2e0,(longlong)*(int *)(param_2 + 0x4c),param_2 + 0x3c);
  }
  return;
}

