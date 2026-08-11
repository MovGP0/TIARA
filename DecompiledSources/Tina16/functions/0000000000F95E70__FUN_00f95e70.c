/* Ghidra address: 00f95e70 */
/* Ghidra symbol: FUN_00f95e70 */


void FUN_00f95e70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x700));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 0x708));
  if (iVar2 < 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),iVar2);
  }
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_00f60d90(*(undefined4 *)(param_1 + 0x710),iVar4);
      FUN_00821790(*(undefined8 *)(param_1 + 0x6e8),iVar4,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

