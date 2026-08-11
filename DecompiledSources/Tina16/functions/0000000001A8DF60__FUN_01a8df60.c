/* Ghidra address: 01a8df60 */
/* Ghidra symbol: FUN_01a8df60 */


void FUN_01a8df60(undefined8 *param_1,undefined8 *param_2,double param_3,double param_4,int *param_5
                 ,int *param_6)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  
  uVar1 = *param_2;
  local_80 = (int)*param_1;
  dVar4 = (double)local_80;
  iStack_7c = (int)((ulonglong)*param_1 >> 0x20);
  dVar5 = (double)iStack_7c;
  local_88 = (int)uVar1;
  dVar6 = (double)local_88;
  iStack_84 = (int)((ulonglong)uVar1 >> 0x20);
  dVar7 = (double)iStack_84;
  dVar8 = (double)FUN_0040c760((dVar4 - dVar6) * (dVar4 - dVar6) + (dVar5 - dVar7) * (dVar5 - dVar7)
                              );
  dVar9 = (double)FUN_0040bcd0(param_3 * 0.017453292519943295);
  dVar8 = ((dVar4 - dVar6) * (dVar4 - dVar6) + (dVar5 - dVar7) * (dVar5 - dVar7) + param_4 * param_4
          ) - dVar8 * 2.0 * param_4 * dVar9;
  if (dVar4 - dVar6 == 0.0) {
    if (iStack_7c == iStack_84) {
      *(undefined8 *)param_5 = uVar1;
      *(undefined8 *)param_6 = uVar1;
    }
    else {
      dVar4 = (double)FUN_0040bdd0(param_3 * 0.017453292519943295);
      iVar2 = FUN_0040c770(param_4 * dVar4);
      *param_5 = local_88 - iVar2;
      dVar4 = (double)FUN_0040bdd0(param_3 * 0.017453292519943295);
      iVar2 = FUN_0040c770(param_4 * dVar4);
      *param_6 = local_88 + iVar2;
      uVar3 = iStack_7c - iStack_84 >> 0x1f;
      dVar4 = (double)FUN_0040bcd0(param_3 * 0.017453292519943295);
      iVar2 = FUN_0040c770(((double)(iStack_7c - iStack_84) /
                           (double)(int)((iStack_7c - iStack_84 ^ uVar3) - uVar3)) * param_4 * dVar4
                          );
      param_5[1] = iStack_84 + iVar2;
      param_6[1] = iStack_84 + iVar2;
    }
  }
  else {
    dVar9 = (dVar5 - dVar7) / (dVar6 - dVar4);
    dVar7 = (((((dVar6 * dVar6 + dVar7 * dVar7) - dVar4 * dVar4) - dVar5 * dVar5) + dVar8) -
            param_4 * param_4) / (dVar6 * 2.0 - dVar4 * 2.0);
    dVar6 = dVar9 * dVar9 + 1.0;
    dVar10 = (dVar4 - dVar7) * -2.0 * dVar9 - dVar5 * 2.0;
    dVar8 = ((dVar4 - dVar7) * (dVar4 - dVar7) + dVar5 * dVar5) - dVar8;
    dVar4 = (double)FUN_0040c760(dVar10 * dVar10 - dVar6 * 4.0 * dVar8);
    dVar5 = (-dVar10 + dVar4) / (dVar6 * 2.0);
    dVar4 = (double)FUN_0040c760(dVar10 * dVar10 - dVar6 * 4.0 * dVar8);
    dVar4 = (-dVar10 - dVar4) / (dVar6 * 2.0);
    iVar2 = FUN_0040c770(dVar9 * dVar5 + dVar7);
    *param_5 = iVar2;
    iVar2 = FUN_0040c770(dVar5);
    param_5[1] = iVar2;
    iVar2 = FUN_0040c770(dVar9 * dVar4 + dVar7);
    *param_6 = iVar2;
    iVar2 = FUN_0040c770(dVar4);
    param_6[1] = iVar2;
  }
  return;
}

