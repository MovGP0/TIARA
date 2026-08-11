/* Ghidra address: 00b59c30 */
/* Ghidra symbol: FUN_00b59c30 */


void FUN_00b59c30(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  FUN_004ae870(*(undefined8 *)(param_1 + 8),param_2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      FUN_00b58a00(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

