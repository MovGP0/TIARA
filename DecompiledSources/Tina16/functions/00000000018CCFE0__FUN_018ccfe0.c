/* Ghidra address: 018ccfe0 */
/* Ghidra symbol: FUN_018ccfe0 */


void FUN_018ccfe0(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  
  dVar9 = 0.0;
  lVar10 = param_1[0x1d];
  if (lVar10 != 0) {
    dVar9 = *(double *)(lVar10 + 0xb0);
    cVar2 = FUN_004113d0(lVar10,&PTR_FUN_019317f0);
    if (cVar2 != '\0') {
      dVar9 = *(double *)(param_1[0x15] + 0xb0);
    }
  }
  if (param_1[0x1d] != 0) {
    dVar6 = (double)(**(code **)(*param_1 + 0x20))(param_1);
    dVar7 = (double)(**(code **)(*param_1 + 0x98))(param_1);
    dVar8 = (double)(**(code **)(*param_1 + 0x90))(param_1,0);
    if ((dVar6 - dVar7) - dVar8 < ((double)param_1[0x12] - (double)param_1[0x1f]) + dVar9) {
      *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
      (**(code **)(*(longlong *)param_1[0x13] + 0x48))((longlong *)param_1[0x13]);
      lVar10 = param_1[0x1d];
      cVar2 = FUN_004113d0(lVar10,&PTR_FUN_019317f0);
      if (cVar2 != '\0') {
        FUN_018cb4f0(param_1,lVar10);
        FUN_018cb3b0(param_1,param_1[0x1d]);
      }
    }
  }
  uVar5 = 0;
  if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
    if (((char)param_1[0x1e] != '\0') && (*(char *)((longlong)param_1 + 0xf2) == '\0')) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x30))((longlong *)param_1[0x13],param_1[0x1d]);
    }
    (**(code **)(*(longlong *)param_1[7] + 0x68))((longlong *)param_1[7],(int)param_1[0x22]);
    dVar9 = (double)(**(code **)(*(longlong *)param_1[7] + 0xe0))((longlong *)param_1[7],0);
    dVar9 = (double)FUN_0040c850(dVar9 - (double)param_1[0x12]);
    if (0.0001 <= dVar9) {
      cVar2 = FUN_004113d0(param_1[0x15],&PTR_FUN_0192d4e8);
      if ((cVar2 != '\0') && (*(char *)(param_1[0x15] + 0x272) != '\0')) {
        uVar5 = *(undefined8 *)(param_1[0x15] + 0x210);
      }
    }
    FUN_018cb4f0(param_1,uVar5);
  }
  param_1[0x16] = param_1[0x15];
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(char *)(param_1[0x25] + 0x1a1) != '\0') {
    puVar1 = (undefined8 *)param_1[7];
    iVar3 = (**(code **)*puVar1)(puVar1);
    lVar10 = param_1[0x25];
    FUN_018b9fb0(puVar1,iVar3 + -1,
                 (double)param_1[6] / *(double *)PTR_DAT_02002c30 + *(double *)(lVar10 + 0x1a8) +
                 *(double *)(lVar10 + 0x1c8),
                 (double)param_1[0x12] / *(double *)PTR_DAT_02002c30 + *(double *)(lVar10 + 0x1e0) +
                 *(double *)(lVar10 + 0x178),*(undefined1 *)(lVar10 + 0x1b1));
  }
  FUN_018cc280(param_1);
  param_1[0x16] = 0;
  if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
    (**(code **)(*(longlong *)param_1[0x13] + 0x48))((longlong *)param_1[0x13]);
    param_1[0x2c] = param_1[0x12];
    (**(code **)(*(longlong *)param_1[7] + 0xa0))((longlong *)param_1[7],0,param_1[0x12]);
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_1[7] + 0xc);
    uVar4 = FUN_0040c770(param_1[0x12]);
    (**(code **)(**(longlong **)(param_1[7] + 0x18) + 0x58))
              (*(longlong **)(param_1[7] + 0x18),param_1[0x21],uVar4);
    uVar4 = FUN_0040c770(param_1[0x12]);
    (**(code **)(*(longlong *)param_1[7] + 0xa8))
              ((longlong *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x114),uVar4);
    lVar10 = (**(code **)(*(longlong *)param_1[7] + 0xe0))((longlong *)param_1[7],0);
    param_1[0x12] = lVar10;
    if (((char)param_1[0x1e] != '\0') && (*(char *)((longlong)param_1 + 0xf2) == '\0')) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x18))((longlong *)param_1[0x13],param_1[0x1d],0);
    }
    FUN_018cb3b0(param_1,uVar5);
  }
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf2) = 0;
  param_1[0x1f] = 0;
  FUN_018cf510(param_1);
  return;
}

