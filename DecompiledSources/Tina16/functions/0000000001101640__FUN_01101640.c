/* Ghidra address: 01101640 */
/* Ghidra symbol: FUN_01101640 */


void FUN_01101640(longlong *param_1,longlong param_2,undefined8 param_3,char param_4,char param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  int local_a0;
  int local_9c;
  int local_98;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60 [6];
  
  lVar1 = param_1[0x33];
  param_1[0x33] = param_2;
  local_98 = 0;
  local_a0 = -0x80000000;
  local_9c = -0x80000000;
  iVar3 = 0;
  iVar9 = *(int *)(param_1[0x21] + 0x10);
  if (-1 < iVar9 + -1) {
    do {
      plVar7 = (longlong *)FUN_004aeac0(param_1[0x21],iVar3);
      (**(code **)(*plVar7 + 0x120))(plVar7,param_3,param_2);
      iVar3 = iVar3 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (((param_1[0x19] != 0) && (param_1[0x1f] != 0)) && (param_1[0x20] != 0)) {
    iVar9 = *(int *)(param_1[0x1f] + 0xe8);
    iVar3 = *(int *)(param_1[0x20] + 0xec);
    iVar6 = *(int *)(param_1[0x1f] + 0xec);
    iVar5 = *(int *)(param_1[0x20] + 0xe8);
    FUN_00498350(local_88,iVar9,iVar3,iVar6,iVar5);
    (**(code **)(*param_1 + 0xb0))(param_1,local_88);
    local_60[0] = -1e+30;
    dVar10 = (double)(iVar6 - iVar9) /
             (*(double *)(param_1[0x1f] + 0xc0) - *(double *)(param_1[0x1f] + 0xb8));
    dVar11 = (double)(iVar5 - iVar3) / ((double)param_1[0x28] - (double)param_1[0x29]);
    uVar4 = FUN_010bfa10(-(double)param_1[0x2b] * dVar11);
    *(undefined4 *)(param_1 + 0x22) = uVar4;
    *(undefined8 *)PTR_DAT_02005620 = 0;
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0x68))(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (1 < *(int *)(param_1[0x1c] + 0x2c)) {
      if ((param_4 == '\0') || (param_1[0x2e] == 0)) {
        if ((char)param_1[0x27] == '\0') {
          (**(code **)(*(longlong *)param_1[0x19] + 0x18))
                    ((longlong *)param_1[0x19],param_1[0x1c],*(undefined8 *)(param_1[0x1f] + 0xb8),1
                    );
        }
        else {
          (**(code **)(*(longlong *)param_1[0x19] + 0x10))
                    ((longlong *)param_1[0x19],param_1[0x1c],1);
        }
      }
      else {
        FUN_01cc80c0(param_1[0x19],param_1[0x2e]);
      }
      cVar2 = (char)param_1[0x27];
      if (cVar2 == '\0') {
        while ((cVar2 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                                  ((longlong *)param_1[0x19],local_60,&local_68,0), cVar2 != '\0' &&
               (local_98 < 100000))) {
          iVar6 = FUN_010bfa10((local_60[0] - *(double *)(param_1[0x1f] + 0xb8)) * dVar10 +
                               (double)iVar9);
          iVar5 = FUN_010bfa10(((double)param_1[0x28] - local_68) * dVar11 + (double)iVar3);
          if ((local_a0 != iVar6) || (local_9c != iVar5)) {
            FUN_01d2c460(param_1,iVar6,iVar5 + (int)param_1[0x22]);
            param_1[0x2d] = (longlong)local_60[0];
            *(int *)(param_1 + 0x2c) = iVar6;
            local_98 = local_98 + 1;
            local_a0 = iVar6;
            local_9c = iVar5;
          }
        }
      }
      else if (cVar2 == '\x01') {
        while( true ) {
          plVar7 = (longlong *)FUN_004113f0(param_1[0x19],&PTR_FUN_01cb9c30);
          cVar2 = (**(code **)(*plVar7 + 0x88))(plVar7,local_60,&local_78);
          if ((cVar2 == '\0') || (99999 < local_98)) break;
          uVar4 = FUN_010bfa10((local_78 - *(double *)(param_1[0x1f] + 0xb8)) * dVar10 +
                               (double)iVar9);
          iVar6 = FUN_010bfa10(((double)param_1[0x28] - local_70) * dVar11 + (double)iVar3);
          FUN_01d2c460(param_1,uVar4,iVar6 + (int)param_1[0x22]);
          param_1[0x2d] = (longlong)local_60[0];
          *(int *)(param_1 + 0x2c) = (int)param_1[9];
          local_98 = local_98 + 1;
        }
      }
      else if (cVar2 == '\x02') {
        for (; (cVar2 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                                  ((longlong *)param_1[0x19],local_60,&local_68,0), cVar2 != '\0' &&
               (local_98 < 100000)); local_98 = local_98 + 1) {
          uVar4 = FUN_010bfa10((local_60[0] - *(double *)(param_1[0x1f] + 0xb8)) * dVar10 +
                               (double)iVar9);
          iVar6 = FUN_010bfa10(((double)param_1[0x28] - local_68) * dVar11 + (double)iVar3);
          FUN_01d2c460(param_1,uVar4,iVar6 + (int)param_1[0x22]);
          param_1[0x2d] = (longlong)local_60[0];
          *(int *)(param_1 + 0x2c) = (int)param_1[9];
        }
      }
      lVar8 = FUN_01cc80a0(param_1[0x19]);
      param_1[0x2e] = lVar8;
    }
    lVar8 = param_1[0x31];
    if (lVar8 != 0) {
      *(longlong *)(lVar8 + 0x168) = param_1[0x2d];
      *(int *)(lVar8 + 0x160) = (int)param_1[0x2c];
      lVar8 = param_1[0x31];
      FUN_01101640(lVar8,param_2,param_3,0,1);
      *(undefined1 *)(lVar8 + 0x180) = 0;
    }
    dVar11 = (double)FUN_01ab2a30(param_1);
    uVar4 = FUN_010bfa10((dVar11 - *(double *)(param_1[0x1f] + 0xb8)) * dVar10 + (double)iVar9);
    *(undefined4 *)(param_1 + 0x2f) = uVar4;
    dVar11 = (double)FUN_01ab2a60();
    uVar4 = FUN_010bfa10((dVar11 - *(double *)(param_1[0x1f] + 0xb8)) * dVar10 + (double)iVar9);
    *(undefined4 *)((longlong)param_1 + 0x17c) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x181) = 1;
    *(undefined1 *)(param_1 + 0x30) = 0;
    iVar3 = 0;
    iVar9 = *(int *)(param_1[0x21] + 0x10);
    if (-1 < iVar9 + -1) {
      do {
        plVar7 = (longlong *)FUN_004aeac0(param_1[0x21],iVar3);
        (**(code **)(*plVar7 + 0x118))(plVar7);
        (**(code **)(*plVar7 + 0x128))(plVar7,param_3,param_2);
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    param_1[0x33] = lVar1;
  }
  return;
}

