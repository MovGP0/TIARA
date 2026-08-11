/* Ghidra address: 0143a7c0 */
/* Ghidra symbol: FUN_0143a7c0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0143a7c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58 [5];
  undefined1 local_29;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58[1] = 0;
  local_58[0] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  FUN_00848ac0(*(longlong *)(param_1 + 0x700),1,
               *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4b4));
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x660);
  lVar4 = FUN_00f03860(uVar7,0);
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,local_58 + 3,0x836);
  (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x18))(*(longlong **)(lVar4 + 0x20),local_58[3]);
  lVar4 = FUN_00f03860(uVar7,0);
  FUN_00f04400(*(undefined8 *)(lVar4 + 0x20),2);
  lVar4 = FUN_00f03860(uVar7,0);
  uVar5 = FUN_00f040f0(*(undefined8 *)(lVar4 + 0x20));
  FUN_005fce70(uVar5,1);
  uVar5 = FUN_00f03860(uVar7,0);
  FUN_00f03530(uVar5,2);
  lVar4 = FUN_00f03860(uVar7,1);
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,local_58 + 2,0x832);
  (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x18))(*(longlong **)(lVar4 + 0x20),local_58[2]);
  lVar4 = FUN_00f03860(uVar7,1);
  FUN_00f04400(*(undefined8 *)(lVar4 + 0x20),2);
  lVar4 = FUN_00f03860(uVar7,1);
  uVar5 = FUN_00f040f0(*(undefined8 *)(lVar4 + 0x20));
  FUN_005fce70(uVar5,1);
  uVar5 = FUN_00f03860(uVar7,1);
  FUN_00f03530(uVar5,2);
  lVar4 = FUN_00f03860(uVar7,2);
  (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x18))(*(longlong **)(lVar4 + 0x20),0);
  uVar5 = FUN_00f03860(uVar7,2);
  FUN_00f03530(uVar5,2);
  plVar6 = (longlong *)FUN_00f03860(uVar7,2);
  (**(code **)(*plVar6 + 0x60))(plVar6,1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x28))(*(longlong **)(param_1 + 0x708));
  if (iVar2 == 0) {
    FUN_00848a70(*(longlong *)(param_1 + 0x700),*(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0) + 1
                );
    FUN_0084e3e0(*(longlong *)(param_1 + 0x700),0,
                 *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4c0),0);
    FUN_0084e3e0(*(longlong *)(param_1 + 0x700),1,
                 *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4c0),0);
    FUN_0143d630(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4c0),1);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x700);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x28))(*(longlong **)(param_1 + 0x708));
    FUN_00848a70(lVar4,*(int *)(lVar4 + 0x4c0) + iVar2);
  }
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(longlong *)(param_1 + 0x738) != 0) {
    plVar1 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x738) + 0x28) + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 0x38))(plVar1,local_58);
    FUN_01b23780(local_58 + 1,local_58[0],plVar6);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x700);
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x708),&local_60,iVar8);
      FUN_0084e3e0(lVar4,0,*(int *)(lVar4 + 0x4c0) + iVar8,local_60);
      lVar4 = *(longlong *)(param_1 + 0x700);
      FUN_004b5390(*(undefined8 *)(param_1 + 0x708),&local_68,iVar8);
      FUN_0084e3e0(lVar4,1,*(int *)(lVar4 + 0x4c0) + iVar8,local_68);
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x708),&local_70,iVar8);
      iVar3 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_70);
      FUN_0143d630(param_1,*(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0) + iVar8,iVar3 == -1);
      if (iVar8 == 0) {
        FUN_0143b2e0(param_1,param_2,1,1,&local_29);
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar6);
  uVar7 = FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  *(undefined8 *)(param_1 + 0x720) = uVar7;
  uVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x730) = uVar7;
  lVar4 = FUN_019a4600();
  iVar2 = *(int *)(*(longlong *)(lVar4 + 0x470) + 0x10);
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_019a4600();
      uVar7 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x470),iVar8);
      uVar7 = FUN_01d0f4c0(uVar7);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x730),uVar7);
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0064cf60(param_1,0x4b2);
  uVar7 = FUN_00b06b00(&PTR_FUN_00b05560,1,param_1);
  *(undefined8 *)(param_1 + 0x748) = uVar7;
  FUN_00654980(*(undefined8 *)(param_1 + 0x700),uVar7);
  plVar6 = *(longlong **)(param_1 + 0x748);
  FUN_0064dbe0(plVar6,0);
  (**(code **)(*plVar6 + 0x50))(plVar6,L"FCheckBox");
  FUN_0064cc50(plVar6,0xe);
  FUN_0064cbf0(plVar6,0xe);
  plVar6[0x98] = param_1;
  plVar6[0x97] = (longlong)FUN_0143d660;
  uVar7 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x750) = uVar7;
  FUN_0060a8f0(uVar7,PTR_IMAGE_DOS_HEADER_0200c280,L"RXSTICK");
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x80))(*(longlong **)(param_1 + 0x750),1);
  uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x718) = uVar7;
  FUN_004b67b0(uVar7,1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x730) + 0x10);
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x730),iVar8);
      FUN_004169a0(&local_78,lVar4 + 0xc);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x78))
                (*(longlong **)(param_1 + 0x718),local_78);
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_78,8);
  return;
}

