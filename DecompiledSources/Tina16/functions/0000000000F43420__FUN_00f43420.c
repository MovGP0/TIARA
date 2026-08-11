/* Ghidra address: 00f43420 */
/* Ghidra symbol: FUN_00f43420 */


void FUN_00f43420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  double dVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar2 = FUN_0084e390(*(undefined8 *)(param_1 + 0x6d0),1,param_4);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0142bf08);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_0084e390(*(undefined8 *)(param_1 + 0x6d0),1,param_4);
    cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if ((cVar1 != '\0') && (*PTR_DAT_020039a8 == '\0')) {
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      goto LAB_00f434b7;
    }
  }
  uVar6 = 0;
LAB_00f434b7:
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))
            (*(longlong **)(param_1 + 0x6e0),uVar6 & 0xffffffff);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),uVar6 & 0xffffffff);
  if ((char)uVar6 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),0);
  }
  else {
    plVar3 = (longlong *)FUN_0084e390(*(undefined8 *)(param_1 + 0x6d0),1,param_4);
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_20);
    dVar7 = (double)FUN_00b8f030(local_20);
    if (dVar7 == 0.0) {
      *(undefined8 *)(param_1 + 0x750) = 0x3fb999999999999a;
    }
    else {
      *(double *)(param_1 + 0x750) = dVar7 / 100.0;
    }
    lVar5 = *(longlong *)(param_1 + 0x740);
    if (lVar5 != 0) {
      lVar4 = FUN_0084e390(*(undefined8 *)(param_1 + 0x6d0),1,param_4);
      lVar5 = FUN_01d07150(lVar5,*(undefined4 *)(lVar4 + 0x18));
      if (lVar5 == 0) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x710),&LAB_00f436c8);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x718),&LAB_00f436c8);
      }
      else {
        FUN_01d0a480(&local_28,*(undefined4 *)(lVar5 + 8));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_28);
        FUN_01d0a480(&local_30,*(undefined4 *)(lVar5 + 4));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_30);
        *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(lVar5 + 0x10);
      }
    }
    FUN_00b8fd60(&local_38,*(undefined8 *)(param_1 + 0x750),*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_38);
  }
  FUN_00414560(&local_38,4);
  return;
}

