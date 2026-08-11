/* Ghidra address: 01d2de80 */
/* Ghidra symbol: FUN_01d2de80 */


void FUN_01d2de80(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_00498350(local_38,0,0,0,0);
    iVar3 = thunk_FUN_03b7fa88(param_1 + 0x14,local_38);
    if (iVar3 == 0) {
      local_40 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      cVar2 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
      if (cVar2 == '\0') {
        return;
      }
    }
    plVar5 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    plVar6 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2[0x10]);
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2[0xf]);
    uVar7 = FUN_0040c770(((double)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) / 400.0) *
                         (double)*(int *)(param_1 + 0x5c));
    uVar8 = FUN_0040c770(((double)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) / 250.0) *
                         (double)*(int *)(param_1 + 0x5c));
    if ((longlong)uVar8 < (longlong)uVar7) {
      uVar8 = uVar7;
    }
    if ((int)uVar8 < 3) {
      uVar8 = 2;
    }
    uVar4 = FUN_01a90ee0(0xffffff);
    FUN_005fd4e0(param_2[0xf],uVar4);
    FUN_005fdcb0(param_2[0x10],0);
    uVar4 = FUN_01a90ee0(0xffffff);
    FUN_005fdab0(param_2[0x10],uVar4);
    uVar9 = (int)uVar8 >> 0x1f;
    iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
    (**(code **)(*param_2 + 0xf8))
              (param_2,(*(int *)(param_1 + 0x54) - iVar3) + -1,
               (*(int *)(param_1 + 0x58) - iVar3) + -1,*(int *)(param_1 + 0x54) + iVar3 + 1,
               *(int *)(param_1 + 0x58) + iVar3 + 1);
    uVar4 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x48));
    FUN_005fdab0(param_2[0x10],uVar4);
    FUN_005fdcb0(param_2[0x10],1);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x48));
    uVar4 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x48));
    uVar4 = FUN_01a90ee0(uVar4);
    FUN_005fd4e0(param_2[0xf],uVar4);
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar4 = FUN_01a90ee0(0xff);
      FUN_005fd4e0(param_2[0xf],uVar4);
    }
    if ((*PTR_DAT_02002c80 != '\0') && (DAT_01ff3f85 != '\0')) {
      uVar4 = FUN_01a90ee0(0);
      FUN_005fd4e0(param_2[0xf],uVar4);
    }
    bVar1 = *(byte *)(param_1 + 0x50);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar3);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar3);
      }
      else if (bVar1 == 1) {
        iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
        (**(code **)(*param_2 + 0xa0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar3,*(int *)(param_1 + 0x58) - iVar3,
                   *(int *)(param_1 + 0x54) + iVar3,*(int *)(param_1 + 0x58) + iVar3);
      }
      else if (bVar1 == 2) {
        iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar3);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) + iVar3,*(int *)(param_1 + 0x58) + iVar3);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar3,*(int *)(param_1 + 0x58) + iVar3);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar3);
      }
      else if (bVar1 == 3) {
        iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
        (**(code **)(*param_2 + 0xf8))
                  (param_2,*(int *)(param_1 + 0x54) - iVar3,*(int *)(param_1 + 0x58) - iVar3,
                   *(int *)(param_1 + 0x54) + iVar3,*(int *)(param_1 + 0x58) + iVar3);
      }
    }
    else if (bVar1 == 5) {
      iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) - iVar3,*(int *)(param_1 + 0x58) - iVar3);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar3,*(int *)(param_1 + 0x58) + iVar3);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) + iVar3,*(int *)(param_1 + 0x58) - iVar3);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) - iVar3,*(int *)(param_1 + 0x58) + iVar3);
    }
    else if (bVar1 == 6) {
      iVar3 = (int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) / 2);
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar3);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar3);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) - iVar3,*(undefined4 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar3,*(undefined4 *)(param_1 + 0x58));
    }
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar5);
    FUN_00410f20(plVar5);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar6);
    FUN_00410f20(plVar6);
  }
  return;
}

