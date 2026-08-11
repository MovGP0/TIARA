/* Ghidra address: 0123ebe0 */
/* Ghidra symbol: FUN_0123ebe0 */


void FUN_0123ebe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  thunk_FUN_041a9b5c(0,*(undefined8 *)(param_2 + 0x108));
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x140) + 0x58) + 0x10);
  *(undefined4 *)(param_2 + 0x100) = 0;
  if (*(int *)(param_2 + 0x100) <= iVar3 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_2 + 0x140) + 0x58),
                           *(undefined4 *)(param_2 + 0x100));
      FUN_00410f20(uVar2);
      *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x140) + 0x58);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x140) + 0x60) + 0x10);
  *(undefined4 *)(param_2 + 0x100) = 0;
  if (*(int *)(param_2 + 0x100) <= iVar3 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_2 + 0x140) + 0x60),
                           *(undefined4 *)(param_2 + 0x100));
      FUN_00410f20(uVar2);
      *(int *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x140) + 0x60);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}

