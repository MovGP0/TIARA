/* Ghidra address: 01b75360 */
/* Ghidra symbol: FUN_01b75360 */


void FUN_01b75360(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(longlong *)(param_1 + 0x748) != 0) {
    uVar5 = 0xffffff;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4ac);
    if (-1 < iVar4) {
      iVar4 = FUN_0084e390(*(longlong *)(param_1 + 0x700),1,iVar4);
      if (iVar4 / 1000 == 1) {
        iVar4 = FUN_0084e390(*(longlong *)(param_1 + 0x700),1,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4ac));
        uVar5 = *(undefined4 *)
                 (*(longlong *)(param_1 + 0x748) + 0x104 + (longlong)(iVar4 + -1000) * 4);
      }
      else if (iVar4 / 1000 == 3) {
        iVar4 = FUN_0084e390(*(longlong *)(param_1 + 0x700),1,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4ac));
        uVar5 = *(undefined4 *)
                 (*(longlong *)(param_1 + 0x748) + 0x174 + (longlong)(iVar4 + -3000) * 8);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x728);
    *(undefined4 *)(plVar1 + 0x1a) = uVar5;
    cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar3 != '\0') {
      uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0xd0);
      lVar2 = *(longlong *)(param_1 + 0x700);
      if (-1 < *(int *)(lVar2 + 0x4ac)) {
        iVar4 = FUN_0084e390(lVar2,1,*(int *)(lVar2 + 0x4ac));
        if (iVar4 / 1000 == 1) {
          iVar4 = FUN_0084e390(lVar2,1,*(undefined4 *)(lVar2 + 0x4ac));
          *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x104 + (longlong)(iVar4 + -1000) * 4) =
               uVar5;
        }
        else if (iVar4 / 1000 == 3) {
          iVar4 = FUN_0084e390(lVar2,1,*(undefined4 *)(lVar2 + 0x4ac));
          *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x174 + (longlong)(iVar4 + -3000) * 8) =
               uVar5;
        }
      }
      FUN_0064e770(lVar2);
      FUN_01b75500(param_1);
    }
  }
  return;
}

