/* Ghidra address: 01513140 */
/* Ghidra symbol: FUN_01513140 */


void FUN_01513140(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_39;
  
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x880));
  }
  uVar5 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,0,0);
  *(undefined8 *)(param_1 + 0x880) = uVar5;
  FUN_01cc6020(uVar5);
  local_50 = -1;
  uVar5 = *(undefined8 *)(param_1 + 0x880);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x880) + 8);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  local_54 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,local_54);
      plVar7 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01106728);
      uVar6 = FUN_01cc34d0(uVar1,plVar7[1],0,2);
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar6);
      local_50 = local_50 + 1;
      lVar2 = plVar7[0x29];
      local_4c = 0;
      if (-1 < *(int *)(lVar2 + 0x10)) {
        iVar9 = *(int *)(lVar2 + 0x10) + 1;
        do {
          if (local_4c < *(int *)(lVar2 + 0x10)) {
            lVar8 = FUN_00b94e60(lVar2,local_4c);
            dVar11 = *(double *)(lVar8 + 8);
            lVar8 = FUN_00b94e60(lVar2,local_4c);
            local_39 = *(undefined1 *)(lVar8 + 0x10);
          }
          else {
            dVar11 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                                       (*(longlong **)(param_1 + 0xee0));
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe8))
                              (*(longlong **)(param_1 + 0xee0));
            dVar11 = dVar11 * (double)iVar4;
            lVar8 = FUN_00b94e60(lVar2,local_4c + -1);
            local_39 = *(undefined1 *)(lVar8 + 0x10);
          }
          if (*(char *)(param_1 + 0xec2) == '\0') {
            dVar10 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                                       (*(longlong **)(param_1 + 0xee0));
            lVar8 = FUN_0040c770(dVar11 / dVar10);
            dVar11 = (double)lVar8;
          }
          FUN_01cc56d0(uVar5,local_50,dVar11,local_39);
          local_4c = local_4c + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_54 = local_54 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

