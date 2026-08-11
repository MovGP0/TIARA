/* Ghidra address: 01aecd80 */
/* Ghidra symbol: FUN_01aecd80 */


void FUN_01aecd80(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3 + -1);
      FUN_004095f0(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (0 < (int)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

