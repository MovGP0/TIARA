/* Ghidra address: 01ad9e30 */
/* Ghidra symbol: FUN_01ad9e30 */


void FUN_01ad9e30(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar8 = 1;
  if (0 < iVar2) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar8 + -1);
      iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x28))(*(longlong **)(lVar4 + 0x70));
      iVar9 = 1;
      if (0 < iVar3) {
        do {
          plVar5 = (longlong *)
                   (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                             (*(longlong **)(lVar4 + 0x70),iVar9 + -1);
          cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5);
          if (cVar1 != '\0') {
            uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                              (*(longlong **)(lVar4 + 0x70),iVar9 + -1);
            FUN_01ad99c0(param_1,uVar6);
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x28))(*(longlong **)(lVar4 + 0x78));
      iVar9 = 1;
      if (0 < iVar3) {
        do {
          iVar10 = iVar9 + -1;
          plVar5 = (longlong *)
                   (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                             (*(longlong **)(lVar4 + 0x78),iVar10);
          cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5);
          if (cVar1 != '\0') {
            uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),iVar10);
            FUN_01ad99c0(param_1,uVar6);
            lVar7 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),iVar10);
            if (*(longlong *)(lVar7 + 0x118) != 0) {
              lVar7 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                                (*(longlong **)(lVar4 + 0x78),iVar10);
              FUN_01ad99c0(param_1,*(undefined8 *)(lVar7 + 0x118));
            }
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_01ce27e0(lVar4);
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 != '\0') {
    FUN_01acfc60(param_1);
    FUN_01aceb90(param_1,1);
  }
  return;
}

