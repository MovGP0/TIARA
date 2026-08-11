/* Ghidra address: 01472580 */
/* Ghidra symbol: FUN_01472580 */


void FUN_01472580(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  iVar3 = *(int *)(lVar1 + 0x4e0) + -1;
  if (*(int *)(lVar1 + 0x4c0) <= iVar3) {
    plVar2 = (longlong *)FUN_0084e3c0(lVar1,iVar3);
    (**(code **)(*plVar2 + 0x90))(plVar2);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0) + -1;
    if (iVar3 < 3) {
      iVar3 = 2;
    }
    FUN_00848a70(*(longlong *)(param_1 + 0x6b0),iVar3);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),0);
  }
  return;
}

