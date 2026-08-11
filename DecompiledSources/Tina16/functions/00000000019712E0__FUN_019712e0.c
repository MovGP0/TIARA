/* Ghidra address: 019712e0 */
/* Ghidra symbol: FUN_019712e0 */


void FUN_019712e0(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int local_34;
  
  bVar1 = false;
  bVar2 = false;
  lVar6 = FUN_01951400(param_1);
  iVar12 = *(int *)(lVar6 + 0x10);
  local_34 = 0;
  bVar3 = false;
  bVar4 = false;
  if (-1 < iVar12 + -1) {
    do {
      bVar2 = bVar4;
      bVar1 = bVar3;
      uVar7 = FUN_004aeac0(lVar6,local_34);
      cVar5 = FUN_004113d0(uVar7,&PTR_FUN_01936f68);
      if (cVar5 != '\0') {
        bVar1 = true;
      }
      cVar5 = FUN_004113d0(uVar7,&PTR_FUN_0191bda0);
      if (cVar5 != '\0') {
        bVar2 = true;
      }
      local_34 = local_34 + 1;
      iVar12 = iVar12 + -1;
      bVar3 = bVar1;
      bVar4 = bVar2;
    } while (iVar12 != 0);
  }
  if (!bVar1) {
    plVar8 = (longlong *)FUN_0196c260(&PTR_FUN_01936f68,1,param_1);
    lVar9 = (**(code **)(*param_1 + 0x1e8))(param_1,L"Data");
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x50))(plVar8,L"Data");
    }
    else {
      FUN_01951630(plVar8,0);
    }
    plVar10 = (longlong *)param_1[0x10];
    iVar12 = (**(code **)(*plVar10 + 0x30))(plVar10);
    FUN_004ae870(plVar10,iVar12 + -1);
    FUN_004aec30(param_1[0x10],0,plVar8);
    if (bVar2) {
      iVar11 = 0x3c;
      iVar12 = *(int *)(lVar6 + 0x10);
      local_34 = 0;
      if (-1 < iVar12 + -1) {
        do {
          plVar10 = (longlong *)FUN_004aeac0(lVar6,local_34);
          cVar5 = FUN_004113d0(plVar10,&PTR_FUN_0191bda0);
          if (cVar5 != '\0') {
            (**(code **)(*plVar10 + 0xc0))(plVar10,plVar8);
            (**(code **)(*plVar10 + 200))(plVar10,(double)iVar11);
            (**(code **)(*plVar10 + 0xd0))(plVar10,0x4034000000000000);
            iVar11 = iVar11 + 0x40;
          }
          local_34 = local_34 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
  }
  return;
}

