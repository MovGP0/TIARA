/* Ghidra address: 010ebaa0 */
/* Ghidra symbol: FUN_010ebaa0 */


void FUN_010ebaa0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                 longlong param_5,int param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,longlong *param_14,longlong *param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  *param_15 = 0;
  if (*param_14 == 0) {
    return;
  }
  lVar5 = 0;
  lVar6 = 0;
  if ((*(char *)(*param_14 + 0x58) != '\0') || (param_4 == 0)) goto LAB_010ebf82;
  if (param_5 != 0) {
    uVar4 = FUN_010e7720(param_1,param_5);
    lVar6 = FUN_004113f0(uVar4,&PTR_FUN_010fe770);
    if (lVar6 != 0) {
      plVar1 = *(longlong **)(*param_14 + 0x80);
      uVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,lVar6);
      (**(code **)(*plVar1 + 0x98))(plVar1,uVar3);
      if (*(longlong *)(lVar6 + 0x188) != 0) {
        FUN_00410f20(*(longlong *)(lVar6 + 0x188));
      }
      *(undefined8 *)(lVar6 + 0x188) = 0;
      FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xf8),lVar6);
      FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar6 + 0xf8) + 0xf8));
      FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar6 + 0x100) + 0xf8),lVar6);
      FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar6 + 0x100) + 0xf8));
    }
  }
  lVar5 = FUN_01101370(&PTR_FUN_010fe770,1);
  *(longlong *)(lVar5 + 0x188) = lVar6;
  FUN_01ab28d0(lVar5,param_18);
  *(longlong *)(lVar5 + 0x78) = *param_14;
  *(undefined8 *)(lVar5 + 0x198) = param_16;
  *(undefined8 *)(lVar5 + 400) = param_17;
  FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x60),
               *(undefined4 *)(PTR_DAT_02003c00 + (longlong)((param_6 + 1) % 0xb) * 4));
  FUN_005fd6d0(*(undefined8 *)(lVar5 + 0x60),param_7);
  *(longlong **)(lVar5 + 200) = param_2;
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 == '\v') {
LAB_010ebcb5:
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_010ff460);
    if (cVar2 != '\0') {
      lVar6 = FUN_004113f0(param_2,&PTR_FUN_010ff460);
      *(longlong *)(lVar6 + 0x80) = lVar5;
    }
  }
  else if (cVar2 == '\f') {
LAB_010ebce0:
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_010ff630);
    if (cVar2 != '\0') {
      lVar6 = FUN_004113f0(param_2,&PTR_FUN_010ff630);
      *(longlong *)(lVar6 + 0x80) = lVar5;
    }
  }
  else {
    if (cVar2 == '\r') goto LAB_010ebcb5;
    if (cVar2 == '\x0f') goto LAB_010ebce0;
  }
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 == '\v') {
    *(undefined1 *)(lVar5 + 0x138) = 0;
  }
  else if (cVar2 == '\f') {
LAB_010ebd45:
    *(undefined1 *)(lVar5 + 0x138) = 1;
  }
  else if (cVar2 == '\r') {
    *(undefined1 *)(lVar5 + 0x138) = 2;
  }
  else if (cVar2 == '\x0f') goto LAB_010ebd45;
  FUN_01cc8360(param_2);
  *(undefined8 *)(lVar5 + 0xd0) = param_3;
  *(longlong *)(lVar5 + 0xe0) = param_4;
  *(undefined8 *)(lVar5 + 0x148) = param_10;
  *(undefined8 *)(lVar5 + 0x140) = param_11;
  *(undefined8 *)(lVar5 + 0x158) = param_12;
  *(undefined8 *)(lVar5 + 0x150) = param_13;
  uVar4 = (**(code **)(*param_2 + 0x58))(param_2,param_4);
  *(undefined8 *)(lVar5 + 0x80) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x60))(param_2,param_4);
  *(undefined8 *)(lVar5 + 0x88) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x68))(param_2,param_4);
  *(undefined8 *)(lVar5 + 0x90) = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x70))(param_2,param_4);
  *(undefined8 *)(lVar5 + 0x98) = uVar4;
  if (*(longlong *)(lVar5 + 0x188) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x188) + 200);
    uVar4 = FUN_01ab2a60(lVar5);
    uVar7 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,*(undefined8 *)(*(longlong *)(lVar5 + 0x188) + 0xe0));
    uVar4 = FUN_00b90620(uVar4,uVar7);
    *(undefined8 *)(lVar5 + 0x88) = uVar4;
    uVar4 = (**(code **)(*plVar1 + 0x68))
                      (plVar1,*(undefined8 *)(*(longlong *)(lVar5 + 0x188) + 0xe0));
    uVar4 = FUN_00b90650(*(undefined8 *)(lVar5 + 0x90),uVar4);
    *(undefined8 *)(lVar5 + 0x90) = uVar4;
    uVar4 = (**(code **)(*plVar1 + 0x70))
                      (plVar1,*(undefined8 *)(*(longlong *)(lVar5 + 0x188) + 0xe0));
    uVar4 = FUN_00b90620(*(undefined8 *)(lVar5 + 0x98),uVar4);
    *(undefined8 *)(lVar5 + 0x98) = uVar4;
  }
  *(undefined1 *)(lVar5 + 0x181) = 0;
  uVar4 = (**(code **)(**(longlong **)(*param_14 + 0x70) + 0x30))
                    (*(longlong **)(*param_14 + 0x70),0);
  uVar4 = FUN_004113f0(uVar4,&DAT_01ccbf00);
  *(undefined8 *)(lVar5 + 0xf8) = uVar4;
  uVar4 = (**(code **)(**(longlong **)(*param_14 + 0x78) + 0x30))
                    (*(longlong **)(*param_14 + 0x78),0);
  uVar4 = FUN_004113f0(uVar4,&DAT_01ccbf00);
  *(undefined8 *)(lVar5 + 0x100) = uVar4;
  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(lVar5 + 0xf8) + 0xf8),lVar5);
  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(lVar5 + 0x100) + 0xf8),lVar5);
  (**(code **)(**(longlong **)(*param_14 + 0x80) + 0x80))
            (*(longlong **)(*param_14 + 0x80),L"Curve",lVar5);
LAB_010ebf82:
  *param_15 = lVar5;
  return;
}

