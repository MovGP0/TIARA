/* Ghidra address: 01cdff10 */
/* Ghidra symbol: FUN_01cdff10 */


undefined8 FUN_01cdff10(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                         (*(longlong **)(param_1 + 0x80),iVar5 + -1);
      (**(code **)(*plVar3 + 0x50))(plVar3,0);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      iVar6 = iVar5 + -1;
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                         (*(longlong **)(param_1 + 0x80),iVar6);
      cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3);
      if (cVar1 == '\0') {
        uVar4 = 1;
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                           (*(longlong **)(param_1 + 0x80),iVar6);
        (**(code **)(*plVar3 + 0x50))(plVar3,1);
      }
      else {
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                           (*(longlong **)(param_1 + 0x80),iVar6);
        (**(code **)(*plVar3 + 0x50))(plVar3,0);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar4;
}

