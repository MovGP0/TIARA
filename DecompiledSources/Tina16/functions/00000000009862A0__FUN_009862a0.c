/* Ghidra address: 009862a0 */
/* Ghidra symbol: FUN_009862a0 */


longlong * FUN_009862a0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined1 local_68;
  undefined1 *local_60;
  longlong local_48;
  int local_3c;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_b8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  puVar1 = auStack_b8;
  if (*(int *)(param_4 + 0x10) != 1) {
    local_70 = &PTR_DAT_009866f8;
    local_68 = 0x11;
    local_98 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Arguments mismatch error in %s().",&local_70);
    FUN_004134c0(uVar4);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  if (param_1 == (longlong *)0x0) {
    local_70 = &PTR_DAT_009866f8;
    local_68 = 0x11;
    local_98 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,L"Context node not specified for %s().",&local_70);
    FUN_004134c0(uVar4);
  }
  lVar5 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar5 == 0) {
    local_70 = &PTR_DAT_009866f8;
    local_68 = 0x11;
    local_98 = 0;
    uVar4 = FUN_0044d530(&PTR_FUN_00901df0,1,
                         L"Context node with no owner document specified for %s().",&local_70);
    FUN_004134c0(uVar4);
  }
  local_28 = (longlong *)0x0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_00594f90();
  }
  local_30 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(param_4 + 8) + 0x40))
                       ((longlong *)**(undefined8 **)(param_4 + 8),param_1,param_2,param_3);
  local_28 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
  *(undefined1 *)(local_28 + 2) = 0;
  FUN_008f9470(local_28,1);
  cVar2 = FUN_004113d0(local_30,&PTR_FUN_00926660);
  if (cVar2 == '\0') {
    (**(code **)(*local_30 + 0x108))(local_30,&local_80);
    FUN_00986130(auStack_b8,local_28,local_80);
  }
  else {
    iVar3 = (**(code **)(*local_30 + 0x118))();
    local_3c = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar6 = (longlong *)(**(code **)(*local_30 + 0x110))(local_30,local_3c);
        (**(code **)(*plVar6 + 0x198))(plVar6,&local_78);
        FUN_00986130(auStack_b8,local_28,local_78);
        local_3c = local_3c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  local_20 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  uVar4 = (**(code **)(*param_1 + 0x118))(param_1);
  local_38 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_0090f580);
  iVar3 = (**(code **)(*local_28 + 0x38))();
  local_3c = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_28 + 0x28))(local_28,&local_88,local_3c);
      local_48 = (**(code **)(*local_38 + 0x328))(local_38,local_88);
      if (local_48 != 0) {
        (**(code **)(*local_20 + 0x140))(local_20,local_48);
      }
      local_3c = local_3c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_20 + 0x168))(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_004145c0(&local_88,3);
  return local_20;
}

