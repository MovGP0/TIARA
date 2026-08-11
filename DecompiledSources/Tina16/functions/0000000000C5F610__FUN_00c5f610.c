/* Ghidra address: 00c5f610 */
/* Ghidra symbol: FUN_00c5f610 */


void FUN_00c5f610(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar6);
      (**(code **)(*plVar4 + 0xa0))
                (plVar4,*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x948) + 0x310));
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar6);
      iVar2 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd10),uVar5);
      if (iVar2 == -1) {
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar6);
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd10),uVar5);
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar6);
        FUN_004ae7e0(lVar3,uVar5);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (0 < *(int *)(lVar3 + 0x10)) {
    uVar5 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd10),
                         lVar3,0);
    FUN_00c5c790(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd50),uVar5);
  }
  FUN_00410f20(lVar3);
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xc90);
  FUN_00c5f0b0(param_1);
  FUN_01795670(lVar3,uVar1);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10)) {
      FUN_01795670(lVar3,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
  }
  FUN_0064e770(*(undefined8 *)(lVar3 + 0x948));
  return;
}

