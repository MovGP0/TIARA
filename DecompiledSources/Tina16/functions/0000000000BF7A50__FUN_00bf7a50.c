/* Ghidra address: 00bf7a50 */
/* Ghidra symbol: FUN_00bf7a50 */


void FUN_00bf7a50(longlong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  
  iVar7 = *(int *)(param_1 + 200) + 1;
  iVar6 = *(int *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x150) <= iVar7) {
    iVar6 = iVar7;
  }
  iVar8 = *(int *)(param_1 + 200) + *(int *)(param_1 + 0xc0) + 1;
  iVar7 = *(int *)(param_1 + 0x158);
  if (iVar8 <= *(int *)(param_1 + 0x158)) {
    iVar7 = iVar8;
  }
  if (*(char *)(param_1 + 0x87) == '\0') {
    bVar2 = false;
    uVar9 = (ulonglong)*(byte *)(param_1 + 0x7b);
    bVar3 = false;
    bVar4 = false;
  }
  else {
    bVar2 = iVar6 < *(int *)(param_1 + 0x80);
    if ((iVar6 < *(int *)(param_1 + 0x7c)) && (*(int *)(param_1 + 0x80) <= iVar7)) {
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    }
    else {
      uVar9 = 0;
    }
    bVar3 = *(int *)(param_1 + 0x7c) <= iVar7;
    if (((char)uVar9 == '\0') || (!bVar2 && !bVar3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    if (*(char *)(param_1 + 0x7a) == '\0') {
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xe0);
    }
    if ((*(char *)(param_1 + 0x7a) != '\0') &&
       ((*(uint *)(*(longlong *)(param_1 + 0x130) + 0x63a) & 0x800000) != 0)) {
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xe0);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined1 *)(param_1 + 0xe8));
    if (bVar4) {
      if (bVar2) {
        FUN_00bf7270(param_1,0);
        uVar5 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x80));
        *(undefined4 *)(param_1 + 0x9c) = uVar5;
        FUN_00bf7350(param_1,*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xc0),
                     *(undefined4 *)(param_1 + 200),iVar6,*(undefined4 *)(param_1 + 0x80));
      }
      FUN_00bf7270(param_1,1);
      if (iVar6 < *(int *)(param_1 + 0x80)) {
        iVar6 = *(int *)(param_1 + 0x80);
      }
      iVar8 = iVar7;
      if (*(int *)(param_1 + 0x7c) < iVar7) {
        iVar8 = *(int *)(param_1 + 0x7c);
      }
      uVar5 = FUN_00bf7320(param_1,iVar8);
      *(undefined4 *)(param_1 + 0x9c) = uVar5;
      FUN_00bf7350(param_1,*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xc0),
                   *(undefined4 *)(param_1 + 200),iVar6,iVar8);
      if (bVar3) {
        FUN_00bf7270(param_1,0);
        uVar5 = FUN_00bf7320(param_1,iVar7);
        *(undefined4 *)(param_1 + 0x9c) = uVar5;
        FUN_00bf7350(param_1,*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xc0),
                     *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x7c),iVar7);
      }
    }
    else {
      FUN_00bf7270(param_1,uVar9 & 0xffffffff);
      uVar5 = FUN_00bf7320(param_1,iVar7);
      *(undefined4 *)(param_1 + 0x9c) = uVar5;
      FUN_00bf7350(param_1,*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xc0),
                   *(undefined4 *)(param_1 + 200),iVar6,iVar7);
    }
  }
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x70))) {
    if (*(char *)(param_1 + 0x7a) == '\0') {
      uVar5 = FUN_00bf7050(param_1);
      *(undefined4 *)(param_1 + 0xb8) = uVar5;
    }
    if (*(char *)(param_1 + 0x87) == '\0') {
      FUN_00bf7270(param_1,*(undefined1 *)(param_1 + 0x7b));
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x70);
      if ((0 < *(int *)(param_1 + 0xc0)) && (*(char *)(param_1 + 0xe8) != '\0')) {
        FUN_00bf78f0(param_1);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_1 + 0x94);
    }
    else {
      iVar6 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x80));
      iVar7 = FUN_00bf7320(param_1,*(undefined4 *)(param_1 + 0x7c));
      if (*(int *)(param_1 + 0x94) < iVar6) {
        FUN_00bf7270(param_1,0);
        *(int *)(param_1 + 0x9c) = iVar6;
        if ((0 < *(int *)(param_1 + 0xc0)) && (*(char *)(param_1 + 0xe8) != '\0')) {
          FUN_00bf78f0(param_1);
        }
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
        (**(code **)(*plVar1 + 0xa8))(plVar1,param_1 + 0x94);
        *(int *)(param_1 + 0x94) = iVar6;
      }
      if (*(int *)(param_1 + 0x94) < iVar7) {
        FUN_00bf7270(param_1,1);
        *(int *)(param_1 + 0x9c) = iVar7;
        if ((0 < *(int *)(param_1 + 0xc0)) && (*(char *)(param_1 + 0xe8) != '\0')) {
          FUN_00bf78f0(param_1);
        }
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
        (**(code **)(*plVar1 + 0xa8))(plVar1,param_1 + 0x94);
        *(int *)(param_1 + 0x94) = iVar7;
      }
      if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x70)) {
        FUN_00bf7270(param_1,0);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x70);
        if ((0 < *(int *)(param_1 + 0xc0)) && (*(char *)(param_1 + 0xe8) != '\0')) {
          FUN_00bf78f0(param_1);
        }
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x490);
        (**(code **)(*plVar1 + 0xa8))(plVar1,param_1 + 0x94);
      }
    }
  }
  return;
}

