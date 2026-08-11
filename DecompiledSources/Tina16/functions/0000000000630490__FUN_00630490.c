/* Ghidra address: 00630490 */
/* Ghidra symbol: FUN_00630490 */


undefined8 FUN_00630490(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return 0xfffffffe;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if (*plVar1 != param_1) {
    return 0xfffffffe;
  }
  iVar3 = (int)plVar1[1];
  if (0x1f < iVar3 - 0x3f34U) {
    return 0xfffffffe;
  }
  if ((int)plVar1[2] == 0) {
    plVar8 = plVar1;
    if (iVar3 == 0x3f3e) goto LAB_00630512;
  }
  else {
    if (iVar3 != 0x3f3e) {
      return 0xfffffffe;
    }
LAB_00630512:
    uVar2 = FUN_006347b0(0,0,0);
    iVar3 = FUN_006347b0(uVar2,param_2,param_3);
    if (iVar3 != (int)plVar1[4]) {
      return 0xfffffffd;
    }
    plVar8 = *(longlong **)(param_1 + 0x28);
  }
  lVar4 = plVar8[8];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),1 << (*(byte *)(plVar8 + 6) & 0x1f),1);
    plVar8[8] = lVar4;
    if (lVar4 == 0) {
      *(undefined4 *)(plVar1 + 1) = 0x3f52;
      return 0xfffffffc;
    }
  }
  uVar6 = *(uint *)((longlong)plVar8 + 0x34);
  if (uVar6 == 0) {
    uVar6 = 1 << (*(byte *)(plVar8 + 6) & 0x1f);
    *(uint *)((longlong)plVar8 + 0x34) = uVar6;
    plVar8[7] = 0;
  }
  if (param_3 < uVar6) {
    uVar6 = uVar6 - *(uint *)((longlong)plVar8 + 0x3c);
    if (param_3 < uVar6) {
      uVar6 = param_3;
    }
    FUN_00626670(lVar4 + (ulonglong)*(uint *)((longlong)plVar8 + 0x3c),param_2,uVar6);
    uVar7 = param_3 - uVar6;
    if (uVar7 != 0) {
      FUN_00626670(plVar8[8],((ulonglong)param_3 + param_2) - (ulonglong)uVar7);
      *(uint *)((longlong)plVar8 + 0x3c) = uVar7;
      goto LAB_006305f6;
    }
    uVar5 = *(int *)((longlong)plVar8 + 0x3c) + uVar6;
    uVar7 = 0;
    if (uVar5 != *(uint *)((longlong)plVar8 + 0x34)) {
      uVar7 = uVar5;
    }
    *(uint *)((longlong)plVar8 + 0x3c) = uVar7;
    if (*(uint *)((longlong)plVar8 + 0x34) <= *(uint *)(plVar8 + 7)) goto LAB_00630600;
    iVar3 = *(uint *)(plVar8 + 7) + uVar6;
  }
  else {
    FUN_00626670(lVar4,((ulonglong)param_3 + param_2) - (ulonglong)uVar6);
    *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
LAB_006305f6:
    iVar3 = *(int *)((longlong)plVar8 + 0x34);
  }
  *(int *)(plVar8 + 7) = iVar3;
LAB_00630600:
  *(undefined4 *)((longlong)plVar1 + 0x14) = 1;
  return 0;
}

