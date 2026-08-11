/* Ghidra address: 01997840 */
/* Ghidra symbol: FUN_01997840 */


void FUN_01997840(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  for (uVar4 = 0;
      (!bVar5 &&
      ((int)uVar4 <
       *(int *)(*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xd0) + 0x408
                 ) + 0x10))); uVar4 = uVar4 + 1) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xd0) + 0x408);
    if (*(uint *)(lVar1 + 0x10) <= uVar4) {
      FUN_00594f90();
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
    iVar3 = (**(code **)(*plVar2 + 0x210))(plVar2,0);
    bVar5 = iVar3 == param_2;
  }
  return;
}

