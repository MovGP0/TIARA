/* Ghidra address: 01bf8670 */
/* Ghidra symbol: FUN_01bf8670 */


bool FUN_01bf8670(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_2 + 0x88) != -1) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))(*(longlong **)(param_1 + 0x158));
    if (iVar3 != 0) {
      bVar2 = false;
      goto LAB_01bf86a2;
    }
  }
  bVar2 = true;
LAB_01bf86a2:
  if (bVar2 == false) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x48);
    iVar1 = *(int *)(param_2 + 0xa4);
    iVar6 = 0;
    while( true ) {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))
                        (*(longlong **)(param_1 + 0x158));
      if ((iVar4 <= iVar6) || (*(int *)(param_2 + 0x88) <= iVar6)) break;
      iVar6 = iVar6 + 1;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))(*(longlong **)(param_1 + 0x158));
    if (iVar6 == iVar4) {
      iVar6 = iVar6 + -1;
    }
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x30))
                      (*(longlong **)(param_1 + 0x158),iVar6);
    bVar2 = iVar3 - iVar1 < lVar5;
  }
  return bVar2;
}

