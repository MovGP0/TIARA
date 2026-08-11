/* Ghidra address: 010e7820 */
/* Ghidra symbol: FUN_010e7820 */


void FUN_010e7820(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01aae560);
  if (cVar2 != '\0') {
    lVar3 = FUN_004113f0(param_2,&PTR_FUN_01aae560);
    plVar1 = *(longlong **)(lVar3 + 200);
    uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(lVar3 + 0xe0));
    *(undefined8 *)(lVar3 + 0x80) = uVar4;
    uVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(lVar3 + 0xe0));
    *(undefined8 *)(lVar3 + 0x88) = uVar4;
    uVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)(lVar3 + 0xe0));
    *(undefined8 *)(lVar3 + 0x90) = uVar4;
    uVar4 = (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(lVar3 + 0xe0));
    *(undefined8 *)(lVar3 + 0x98) = uVar4;
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_010fe770);
    if (cVar2 != '\0') {
      lVar3 = FUN_004113f0(param_2,&PTR_FUN_010fe770);
      if (*(longlong *)(lVar3 + 0x188) != 0) {
        lVar3 = FUN_004113f0(param_2,&PTR_FUN_010fe770);
        plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x188) + 200);
        uVar4 = FUN_01ab2a60(lVar3);
        uVar5 = (**(code **)(*plVar1 + 0x60))
                          (plVar1,*(undefined8 *)(*(longlong *)(lVar3 + 0x188) + 0xe0));
        uVar4 = FUN_00b90620(uVar4,uVar5);
        *(undefined8 *)(lVar3 + 0x88) = uVar4;
        uVar4 = (**(code **)(*plVar1 + 0x68))
                          (plVar1,*(undefined8 *)(*(longlong *)(lVar3 + 0x188) + 0xe0));
        uVar4 = FUN_00b90650(*(undefined8 *)(lVar3 + 0x90),uVar4);
        *(undefined8 *)(lVar3 + 0x90) = uVar4;
        uVar4 = (**(code **)(*plVar1 + 0x70))
                          (plVar1,*(undefined8 *)(*(longlong *)(lVar3 + 0x188) + 0xe0));
        uVar4 = FUN_00b90620(*(undefined8 *)(lVar3 + 0x98),uVar4);
        *(undefined8 *)(lVar3 + 0x98) = uVar4;
      }
    }
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01aaff18);
  if (cVar2 != '\0') {
    lVar3 = FUN_004113f0(param_2,&PTR_FUN_01aaff18);
    plVar1 = *(longlong **)(lVar3 + 0x80);
    uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(lVar3 + 0x98));
    *(undefined8 *)(lVar3 + 0xb8) = uVar4;
    uVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(lVar3 + 0x98));
    *(undefined8 *)(lVar3 + 0xc0) = uVar4;
  }
  return;
}

