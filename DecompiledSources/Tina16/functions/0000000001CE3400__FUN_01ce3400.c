/* Ghidra address: 01ce3400 */
/* Ghidra symbol: FUN_01ce3400 */


int FUN_01ce3400(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                         (*(longlong **)(param_1 + 0x78),iVar5);
      cVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4;
}

