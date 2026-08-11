/* Ghidra address: 012f7e30 */
/* Ghidra symbol: FUN_012f7e30 */


void FUN_012f7e30(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = FUN_006decb0();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar6);
      if ((*(uint *)(*(longlong *)(lVar4 + 0x18) + 4) & 0x20) == 0x20) {
        FUN_012fb490(param_1,lVar4);
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x800) + 0x260))
                          (*(longlong **)(param_1 + 0x800));
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))
                            (*(longlong **)(param_1 + 0x808));
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x260))
                              (*(longlong **)(param_1 + 0x810));
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x260))
                                (*(longlong **)(param_1 + 0x810));
              if (cVar1 != '\0') {
                iVar3 = FUN_006dd6f0(lVar4);
                uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
                FUN_012e5850(uVar5,3);
              }
            }
            else {
              iVar3 = FUN_006dd6f0(lVar4);
              uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
              FUN_012e5850(uVar5,2);
            }
          }
          else {
            iVar3 = FUN_006dd6f0(lVar4);
            uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
            FUN_012e5850(uVar5,1);
          }
        }
        else {
          iVar3 = FUN_006dd6f0(lVar4);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
          FUN_012e5850(uVar5,0);
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

