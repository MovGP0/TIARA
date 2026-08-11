/* Ghidra address: 01a97cf0 */
/* Ghidra symbol: FUN_01a97cf0 */


void FUN_01a97cf0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x140) != param_2) {
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x98));
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x118));
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x120));
    *(longlong *)(param_1 + 0x140) = param_2;
    iVar2 = thunk_FUN_041de4d6(*(undefined8 *)(param_1 + 0x140));
    if (iVar2 != 0) {
      uVar1 = thunk_FUN_040ef593(*(undefined8 *)(param_1 + 0x140));
      *(undefined8 *)(param_1 + 0x148) = uVar1;
      thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
      uVar1 = thunk_FUN_041a15ee(param_1 + 0xa0);
      uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      uVar1 = thunk_FUN_041d21bb(0,1,0x808080);
      uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
      *(undefined8 *)(param_1 + 0x118) = uVar1;
      uVar1 = thunk_FUN_0412d81c(0);
      uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
      *(undefined8 *)(param_1 + 0x120) = uVar1;
    }
  }
  return;
}

