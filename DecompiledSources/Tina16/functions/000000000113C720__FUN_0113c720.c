/* Ghidra address: 0113c720 */
/* Ghidra symbol: FUN_0113c720 */


void FUN_0113c720(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  char local_7a;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  while (cVar4 = FUN_010e2d90(param_1), cVar4 == '\0') {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  thunk_FUN_0413a234(L"FormShow");
  *(undefined1 *)(*(longlong *)(param_1 + 0xa18) + 0x20) = 1;
  FUN_0113cec0(param_1);
  if (PTR_DAT_02004010[0x7c6] != '\0') {
    FUN_0153b3a0(param_1 + 0xa40,param_1 + 0xa38,param_1 + 0xa58,&local_29,0);
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
              (*(longlong **)(param_1 + 0xa18),param_1 + 0xa40);
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
              (*(longlong **)(param_1 + 0xa18),param_1 + 0xa38);
    FUN_0153b700(&local_38,&local_40,&local_54,&local_70,&local_48,&local_50,&local_58,&local_78,0);
    FUN_010c04f0(&local_70);
    FUN_010c04f0(&local_78);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x60))(*(longlong **)(param_1 + 0xa18));
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
    uVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,uVar6);
    lVar9 = FUN_004113f0(uVar8,&PTR_FUN_01105d80);
    cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0) + 0x28))();
    local_7a = '\0';
    do {
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x58))
                (*(longlong **)(param_1 + 0xa18),local_7a);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
      uVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,local_7a);
      lVar10 = FUN_004113f0(uVar8,&PTR_FUN_01105d80);
      *(longlong *)(param_1 + 0xa10) = lVar10;
      FUN_00414b50(&local_60,*(undefined8 *)(lVar10 + 8));
      FUN_010c04f0(&local_60);
      iVar7 = FUN_00416db0(local_60,*(undefined8 *)PTR_PTR_02004640);
      if ((((iVar7 == 0) ||
           (iVar7 = FUN_00416db0(local_60,*(undefined8 *)(PTR_PTR_02004640 + 0x38)), iVar7 == 0)) ||
          (iVar7 = FUN_00416db0(local_60,*(undefined8 *)(PTR_PTR_02004640 + 0x48)), iVar7 == 0)) &&
         (*(char *)(param_1 + 0xa20) == '\x01')) {
        lVar10 = *(longlong *)(param_1 + 0xa10);
        *(undefined8 *)(lVar10 + 0x150) = *(undefined8 *)(param_1 + 0xa40);
        *(undefined8 *)(lVar10 + 0x158) = *(undefined8 *)(param_1 + 0xa38);
        *(undefined4 *)(lVar10 + 0x160) = *(undefined4 *)(param_1 + 0xa58);
        cVar1 = *(char *)(*(longlong *)(param_1 + 0xa00) + 0x328);
        local_29 = *(char *)(*(longlong *)(param_1 + 0x998) + 0x328) == '\0';
        uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x990) + 0x328);
        FUN_0113c550(param_1,param_1);
        FUN_01138e40(param_1,param_1 + 0xa40,param_1 + 0xa38,param_1 + 0xa50,param_1 + 0xa58,
                     cVar1 == '\0',local_29,uVar2);
      }
      iVar7 = FUN_00416db0(local_60,local_70);
      if (iVar7 == 0) {
        lVar10 = *(longlong *)(param_1 + 0xa10);
        *(undefined8 *)(lVar10 + 0x168) = local_38;
        *(undefined8 *)(lVar10 + 0x170) = local_40;
        *(undefined4 *)(lVar10 + 0x178) = local_54;
        cVar1 = *(char *)(*(longlong *)(param_1 + 0xa00) + 0x328);
        local_29 = *(char *)(*(longlong *)(param_1 + 0x998) + 0x328) == '\0';
        uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x990) + 0x328);
        FUN_0113c550(param_1,param_1);
        FUN_01138e40(param_1,&local_38,&local_40,param_1 + 0xa50,&local_54,cVar1 == '\0',local_29,
                     uVar2);
      }
      iVar7 = FUN_00416db0(local_60,local_78);
      if (iVar7 == 0) {
        lVar10 = *(longlong *)(param_1 + 0xa10);
        *(undefined8 *)(lVar10 + 0x168) = local_48;
        *(undefined8 *)(lVar10 + 0x170) = local_50;
        *(undefined4 *)(lVar10 + 0x178) = local_58;
        cVar1 = *(char *)(*(longlong *)(param_1 + 0xa00) + 0x328);
        local_29 = *(char *)(*(longlong *)(param_1 + 0x998) + 0x328) == '\0';
        uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x990) + 0x328);
        FUN_0113c550(param_1,param_1);
        FUN_01138e40(param_1,&local_48,&local_50,param_1 + 0xa50,&local_58,cVar1 == '\0',local_29,
                     uVar2);
      }
      local_7a = local_7a + '\x01';
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x58))(*(longlong **)(param_1 + 0xa18),uVar6);
    *(longlong *)(param_1 + 0xa10) = lVar9;
    *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(lVar9 + 0x168);
    *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x170);
    *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(*(longlong *)(param_1 + 0xa10) + 0x178);
    *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x168);
    FUN_0113a9b0();
  }
  lVar9 = *(longlong *)(param_1 + 0xa10);
  plVar3 = *(longlong **)(lVar9 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    sVar5 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (sVar5 == 100) {
      FUN_0064de00(param_1,L"Network Analyzer Internal Source");
    }
    else {
      sVar5 = (**(code **)(**(longlong **)(lVar9 + 0x20) + 0xf8))(*(longlong **)(lVar9 + 0x20));
      if ((sVar5 == 0x3e) ||
         (sVar5 = (**(code **)(**(longlong **)(lVar9 + 0x20) + 0xf8))(*(longlong **)(lVar9 + 0x20)),
         sVar5 == 0x66)) {
        FUN_0064de00(param_1,L"Signal Analyzer Output");
      }
      else {
        FUN_0064de00(param_1,*(undefined8 *)(param_1 + 0xa98));
      }
    }
    *(undefined1 *)(lVar9 + 0x11) = 1;
  }
  FUN_010e2340(param_1,param_2);
  FUN_00414560(&local_78,4);
  return;
}

