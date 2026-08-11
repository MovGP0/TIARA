/* Ghidra address: 01c489a0 */
/* Ghidra symbol: FUN_01c489a0 */


void FUN_01c489a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6b0),2);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
  if (iVar2 <= iVar3) {
    iVar3 = (iVar3 - iVar2) + 1;
    do {
      plVar1 = (longlong *)FUN_0084e3c0(*(undefined8 *)(param_1 + 0x6b0),iVar2);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

