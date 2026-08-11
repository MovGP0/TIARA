/* Ghidra address: 0185ed40 */
/* Ghidra symbol: FUN_0185ed40 */


void FUN_0185ed40(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_0185e8f0(param_1);
  FUN_0185eaa0(param_1);
  plVar2 = *(longlong **)(param_1 + 0x48);
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x10));
  FUN_0185e9d0(param_1,*(undefined4 *)((longlong)plVar2 + 0x9014));
  uVar4 = FUN_0185f1c0(param_1);
  FUN_0185e9d0(param_1,uVar4);
  uVar8 = 0;
  *(undefined4 *)((longlong)plVar2 + 0x904c) = 1;
  while (*(int *)((longlong)plVar2 + 0x904c) <= *(int *)(*plVar2 + 0x38)) {
    *(undefined4 *)(plVar2 + 0x1202) = 0;
    uVar5 = FUN_0185f1c0(param_1);
    FUN_0185ecd0(param_1,uVar5);
    bVar1 = *(byte *)(plVar2 + 0x1002);
    *(uint *)((longlong)plVar2 + (longlong)(int)plVar2[0x1209] * 4 + 0x10) = uVar4;
    uVar7 = (uint)bVar1;
    *(uint *)((longlong)plVar2 + (longlong)(int)plVar2[0x1209] * 4 + 0x4010) = uVar7;
    *(int *)(plVar2 + 0x1209) = (int)plVar2[0x1209] + 1;
    if ((int)plVar2[0x1209] < 0x1000) {
      if (1 << (*(byte *)(plVar2 + 0x1204) & 0x1f) < (int)plVar2[0x1209]) {
        *(int *)(plVar2 + 0x1204) = (int)plVar2[0x1204] + 1;
      }
    }
    else {
      *(undefined1 *)((longlong)plVar2 + 0x9034) = 1;
    }
    bVar3 = true;
    while ((bVar3 && (*(int *)((longlong)plVar2 + 0x904c) <= *(int *)(*plVar2 + 0x38)))) {
      uVar5 = FUN_0185f1c0(param_1);
      FUN_0185ecd0(param_1,uVar5);
      iVar6 = *(int *)((longlong)plVar2 + 0x9044);
      if (iVar6 <= (int)uVar7) {
        iVar6 = uVar7 + 1;
      }
      bVar3 = false;
      for (; (!bVar3 && (iVar6 < (int)plVar2[0x1209])); iVar6 = iVar6 + 1) {
        if ((*(uint *)((longlong)plVar2 + (longlong)iVar6 * 4 + 0x10) == uVar7) &&
           (*(uint *)((longlong)plVar2 + (longlong)iVar6 * 4 + 0x4010) ==
            (uint)*(byte *)((longlong)plVar2 + (longlong)((int)plVar2[0x1202] + -1) + 0x8010))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      if (bVar3) {
        uVar7 = iVar6 - 1;
        uVar8 = uVar7;
      }
    }
    uVar4 = uVar8;
    if (!bVar3) {
      *(undefined1 *)((longlong)plVar2 + 0x9054) = 1;
      *(uint *)(plVar2 + 0x120a) =
           (uint)*(byte *)((longlong)plVar2 + (longlong)((int)plVar2[0x1202] + -1) + 0x8010);
      *(int *)(plVar2 + 0x1202) = (int)plVar2[0x1202] + -1;
      uVar4 = uVar7;
    }
    FUN_0185e9d0(param_1,uVar4);
    if ((*(char *)((longlong)plVar2 + 0x9034) != '\0') &&
       (*(int *)((longlong)plVar2 + 0x904c) <= *(int *)(*plVar2 + 0x38))) {
      FUN_0185e9d0(param_1,*(undefined4 *)((longlong)plVar2 + 0x9014));
      FUN_0185eaa0(param_1);
      uVar4 = FUN_0185f1c0(param_1);
      FUN_0185e9d0(param_1,uVar4);
    }
  }
  FUN_0185e9d0(param_1,(int)plVar2[0x1203]);
  FUN_0185e970(param_1);
  FUN_0185ea70(param_1);
  return;
}

