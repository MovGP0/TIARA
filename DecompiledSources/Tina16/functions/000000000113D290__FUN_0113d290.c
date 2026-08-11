/* Ghidra address: 0113d290 */
/* Ghidra symbol: FUN_0113d290 */


void FUN_0113d290(longlong param_1,char param_2)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      if ((*(longlong *)(lVar4 + 0x20) != 0) &&
         (((param_2 == '\b' &&
           (sVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0xf8))
                              (*(longlong **)(lVar4 + 0x20)), sVar2 == 100)) ||
          ((param_2 == '\x04' &&
           ((sVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0xf8))
                               (*(longlong **)(lVar4 + 0x20)), sVar2 == 0x3e ||
            (sVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0xf8))
                               (*(longlong **)(lVar4 + 0x20)), sVar2 == 0x66)))))))) {
        (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x268))
                  (*(longlong **)(param_1 + 0x9d8),iVar5);
        FUN_0113d390(param_1,param_1);
        return;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

