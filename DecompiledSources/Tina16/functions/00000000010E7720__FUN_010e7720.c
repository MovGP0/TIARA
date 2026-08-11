/* Ghidra address: 010e7720 */
/* Ghidra symbol: FUN_010e7720 */


undefined8 FUN_010e7720(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int unaff_R13D;
  
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    bVar3 = false;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    lVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
    iVar8 = 0;
    while( true ) {
      iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))(*(longlong **)(lVar5 + 0x80));
      if ((iVar4 + -1 < iVar8) || (bVar3)) break;
      cVar1 = *(char *)(lVar5 + 0x58);
      if (cVar1 == '\0') {
LAB_010e777d:
        lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                          (*(longlong **)(lVar5 + 0x80),iVar8);
        if (*(longlong *)(lVar6 + 0xe0) == param_2) {
          bVar3 = true;
          unaff_R13D = iVar8;
        }
      }
      else if (cVar1 == '\x01') {
        lVar6 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                          (*(longlong **)(lVar5 + 0x80),iVar8);
        if (*(longlong *)(lVar6 + 0x98) == param_2) {
          bVar3 = true;
          unaff_R13D = iVar8;
        }
      }
      else if ((byte)(cVar1 - 5U) < 2) goto LAB_010e777d;
      iVar8 = iVar8 + 1;
    }
    if (bVar3) {
      uVar7 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                        (*(longlong **)(lVar5 + 0x80),unaff_R13D);
      *(int *)(param_1 + 0x24) = unaff_R13D;
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}

