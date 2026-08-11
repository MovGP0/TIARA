/* Ghidra address: 019aeb50 */
/* Ghidra symbol: FUN_019aeb50 */


void FUN_019aeb50(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_3c [3];
  
  iVar6 = *(int *)(param_1[0x83] + 0x10);
  iVar7 = 0;
  if (-1 < iVar6 + -1) {
    do {
      puVar4 = (undefined4 *)FUN_004aeac0(param_1[0x83],iVar7);
      cVar2 = FUN_019b3c10(param_1[0x1bd],*puVar4,local_3c);
      if (cVar2 == '\0') {
        puVar4 = (undefined4 *)FUN_004aeac0(param_1[0x83],iVar7);
        *puVar4 = 0xffffffff;
      }
      else {
        piVar5 = (int *)FUN_004aeac0(param_1[0x83],iVar7);
        *piVar5 = local_3c[0];
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((((undefined **)*param_1 == &PTR_FUN_014db5f8) || ((undefined1 *)*param_1 == &LAB_014db6c8))
     && (lVar1 = param_1[0x1ce], lVar1 != 0)) {
    iVar6 = (**(code **)(**(longlong **)(lVar1 + 0xa50) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(lVar1 + 0xa50) + 0x30))
                          (*(longlong **)(lVar1 + 0xa50),iVar7);
        cVar2 = FUN_019b3c10(param_1[0x1bd],uVar3,local_3c);
        if (cVar2 == '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0xa50) + 0x48))
                    (*(longlong **)(lVar1 + 0xa50),iVar7,0xffffffffffffffff);
        }
        else {
          (**(code **)(**(longlong **)(lVar1 + 0xa50) + 0x48))
                    (*(longlong **)(lVar1 + 0xa50),iVar7,(longlong)local_3c[0]);
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

