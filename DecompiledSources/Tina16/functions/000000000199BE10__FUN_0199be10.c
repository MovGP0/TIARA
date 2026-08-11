/* Ghidra address: 0199be10 */
/* Ghidra symbol: FUN_0199be10 */


void FUN_0199be10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar6 = (longlong *)FUN_00b94e60(param_2,iVar7);
      if ((((plVar6 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar6 + 0x118))(plVar6), cVar2 != '\0')) &&
          (cVar2 = FUN_0198a580(plVar6), cVar2 == '\x04')) &&
         ((cVar2 = FUN_01d04d40(plVar6), cVar2 != '\0' && (*(longlong *)(plVar6[0x35] + 8) != 0))))
      {
        uVar3 = FUN_01d04dd0(plVar6);
        iVar4 = FUN_0199bdc0(param_1,uVar3);
        if (0 < iVar4) {
          iVar5 = FUN_01d04dd0(plVar6);
          FUN_01d04e00(plVar6,iVar5 - iVar4);
        }
        uVar3 = FUN_019954d0(*(undefined8 *)(plVar6[0x35] + 8));
        iVar4 = FUN_0199bdc0(param_1,uVar3);
        if (0 < iVar4) {
          uVar1 = *(undefined8 *)(plVar6[0x35] + 8);
          iVar5 = FUN_019954d0(uVar1);
          FUN_019954b0(uVar1,iVar5 - iVar4);
        }
        FUN_0199be10(param_1,*(undefined8 *)(plVar6[0x35] + 8));
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

