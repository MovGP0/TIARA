/* Ghidra address: 01ae24a0 */
/* Ghidra symbol: FUN_01ae24a0 */


void FUN_01ae24a0(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_2 == '\0') {
    lVar6 = *(longlong *)(param_1 + 0xf8);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xf0);
  }
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x58) != 0)) {
    uVar3 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01cb9c30);
    if (cVar1 == '\0') {
      FUN_01ac1cf0(lVar6,*(undefined8 *)(param_1 + 0x80),1);
      uVar3 = FUN_01abdb70(*(undefined8 *)(lVar6 + 0x58));
      uVar3 = FUN_00b90620(param_3,uVar3);
      uVar7 = FUN_01abdbd0(*(undefined8 *)(lVar6 + 0x58));
      uVar3 = FUN_00b90650(uVar3,uVar7);
      FUN_01abfb40(lVar6,uVar3);
      lVar4 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
      if (*(longlong *)PTR_DAT_02005620 == lVar4) {
        lVar4 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
        if (*(longlong *)PTR_DAT_020041f8 != lVar4) goto LAB_01ae2578;
      }
      else {
LAB_01ae2578:
        plVar5 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
        uVar3 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
        (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,1);
        uVar3 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
        *(undefined8 *)PTR_DAT_02005620 = uVar3;
        uVar3 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
        *(undefined8 *)PTR_DAT_020041f8 = uVar3;
      }
      plVar5 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
      uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,*(undefined8 *)(lVar6 + 0x78));
      *(undefined8 *)(lVar6 + 0x80) = uVar3;
      (**(code **)(**(longlong **)(lVar6 + 0x58) + 0xf0))
                (*(longlong **)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x78),
                 *(undefined8 *)(lVar6 + 0x80),lVar6 + 100,lVar6 + 0x68);
      FUN_01ac31e0(lVar6);
      FUN_01ac1cf0(lVar6,*(undefined8 *)(param_1 + 0x80),0);
      goto LAB_01ae2875;
    }
  }
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x58) != 0)) {
    uVar3 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01cb9c30);
    if (cVar1 != '\0') {
      FUN_01ac1cf0(lVar6,*(undefined8 *)(param_1 + 0x80),1);
      plVar5 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
      uVar3 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
      uVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,uVar3);
      uVar8 = FUN_00b90650(param_3,uVar3);
      uVar3 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
      uVar7 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
      uVar3 = FUN_01cc92d0(uVar3,uVar7);
      uVar3 = FUN_00b90620(uVar8,uVar3);
      *(undefined8 *)(lVar6 + 0x70) = uVar3;
      lVar4 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
      if (*(longlong *)PTR_DAT_02005620 == lVar4) {
        lVar4 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
        if (*(longlong *)PTR_DAT_020041f8 != lVar4) goto LAB_01ae2705;
      }
      else {
LAB_01ae2705:
        plVar5 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
        uVar3 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
        (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,1);
        uVar3 = FUN_01abdb20(*(undefined8 *)(lVar6 + 0x58));
        *(undefined8 *)PTR_DAT_02005620 = uVar3;
        uVar3 = FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
        *(undefined8 *)PTR_DAT_020041f8 = uVar3;
      }
      plVar5 = (longlong *)FUN_01abda80(*(undefined8 *)(lVar6 + 0x58));
      (**(code **)(*plVar5 + 0x90))(plVar5,*(undefined8 *)(lVar6 + 0x70),lVar6 + 0x78,lVar6 + 0x80);
      (**(code **)(**(longlong **)(lVar6 + 0x58) + 0xf0))
                (*(longlong **)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x78),
                 *(undefined8 *)(lVar6 + 0x80),lVar6 + 100,lVar6 + 0x68);
      FUN_01ac31e0(lVar6);
      FUN_01ac1cf0(lVar6,*(undefined8 *)(param_1 + 0x80),0);
      goto LAB_01ae2875;
    }
  }
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x50) != 0)) {
    FUN_01ac1cf0(lVar6,*(undefined8 *)(param_1 + 0x80),1);
    plVar5 = *(longlong **)(*(longlong *)(lVar6 + 0x50) + 0x70);
    lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
    uVar3 = FUN_00b90620(param_3,*(undefined8 *)(lVar4 + 200));
    plVar5 = *(longlong **)(*(longlong *)(lVar6 + 0x50) + 0x70);
    lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
    uVar3 = FUN_00b90650(uVar3,*(undefined8 *)(lVar4 + 0xd0));
    *(undefined8 *)(lVar6 + 0x78) = uVar3;
    plVar5 = *(longlong **)(*(longlong *)(lVar6 + 0x50) + 0x70);
    uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
    uVar2 = FUN_01cd60f0(uVar3,*(undefined8 *)(lVar6 + 0x78));
    *(undefined4 *)(lVar6 + 100) = uVar2;
    FUN_01ac31e0(lVar6);
    FUN_01ac1cf0(lVar6,*(undefined8 *)(param_1 + 0x80),0);
  }
LAB_01ae2875:
  FUN_01ad1740(param_1);
  FUN_01ad31e0(param_1,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
  return;
}

