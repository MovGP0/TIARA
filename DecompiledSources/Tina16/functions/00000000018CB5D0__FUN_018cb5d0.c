/* Ghidra address: 018cb5d0 */
/* Ghidra symbol: FUN_018cb5d0 */


void FUN_018cb5d0(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  
  bVar12 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x120) == 0;
  if (bVar12) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80);
    uVar5 = (**(code **)(*plVar10 + 0x30))(plVar10);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x198) = uVar5;
    uVar7 = FUN_01967910(&PTR_FUN_01933ed0,1,0);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x120) = uVar7;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x88);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x90);
  dVar2 = *(double *)(*(longlong *)(param_1 + 0xa0) + 0x130);
  *(undefined4 *)(param_1 + 0x7c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38) + 0xc);
  iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80) + 0x30))();
  iVar11 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80);
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,iVar11);
      cVar4 = FUN_004113d0(uVar8,&PTR_FUN_0192bd20);
      if ((((cVar4 != '\0') &&
           (plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80),
           lVar9 = (**(code **)(*plVar10 + 0x20))(plVar10,iVar11), *(char *)(lVar9 + 0xc5) != '\0'))
          && (*(char *)(lVar9 + 0x2b0) != '\0')) && (bVar12)) {
        *(double *)(*(longlong *)(param_1 + 0xa0) + 0x130) = dVar2 + *(double *)(lVar9 + 0x98);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x88) = *(undefined8 *)(lVar9 + 0x98);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x90) = *(undefined8 *)(lVar9 + 0xa0);
        uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0xf0);
        FUN_018c9eb0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(lVar9 + 0x2a8));
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38) + 0xc) =
             *(undefined4 *)(param_1 + 0x7c);
        *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0xf0) = uVar3;
      }
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x88) = uVar7;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x90) = uVar1;
  *(double *)(*(longlong *)(param_1 + 0xa0) + 0x130) = dVar2;
  if (bVar12) {
    lVar9 = FUN_01951400(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x120));
    iVar6 = *(int *)(lVar9 + 0x10);
    iVar11 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar10 = (longlong *)FUN_004aeac0(lVar9,iVar11);
        cVar4 = FUN_004113d0(plVar10,&PTR_FUN_01921f40);
        if ((cVar4 != '\0') && (cVar4 = FUN_004113d0(plVar10,&PTR_FUN_0192bd20), cVar4 == '\0')) {
          uVar7 = FUN_019508b0(plVar10);
          (**(code **)(*plVar10 + 200))(plVar10,uVar7);
          uVar7 = FUN_01950860(plVar10);
          (**(code **)(*plVar10 + 0xd0))(plVar10,uVar7);
          (**(code **)(*plVar10 + 0xf0))(plVar10,0);
          (**(code **)(*plVar10 + 0xc0))(plVar10,*(undefined8 *)(param_1 + 0xa8));
          if (*(char *)(param_1 + 0x7b) == '\0') {
            (**(code **)(*plVar10 + 0x50))(plVar10,0);
          }
        }
        cVar4 = FUN_004113d0(plVar10,&PTR_FUN_01923c30);
        if (cVar4 != '\0') {
          *(undefined1 *)(plVar10 + 0x55) = 0;
        }
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x120));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x120) = 0;
  }
  return;
}

