/* Ghidra address: 01799940 */
/* Ghidra symbol: FUN_01799940 */


void FUN_01799940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0xc93) == '\0') {
    lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar5 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
        if (*(char *)(lVar2 + 0x21) != '\0') {
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
          FUN_004ae7e0(lVar1,uVar3);
          FUN_01795670(param_1,1);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (0 < *(int *)(lVar1 + 0x10)) {
      uVar3 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),lVar1,2);
      FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),uVar3);
    }
    iVar6 = *(int *)(lVar1 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar4 = (longlong *)FUN_004aeac0(lVar1,iVar5);
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x948) + 0x180))(*(longlong **)(param_1 + 0x948));
    FUN_00410f20(lVar1);
  }
  return;
}

