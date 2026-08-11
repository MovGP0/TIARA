/* Ghidra address: 01101d50 */
/* Ghidra symbol: FUN_01101d50 */


void FUN_01101d50(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  int local_a0;
  int local_9c;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60 [6];
  
  lVar3 = param_1[0x33];
  param_1[0x33] = param_2;
  iVar12 = 0;
  local_a0 = -0x80000000;
  local_9c = -0x80000000;
  if (((param_1[0x19] != 0) && (param_1[0x1f] != 0)) && (param_1[0x20] != 0)) {
    iVar1 = *(int *)(param_1[0x1f] + 0xe8);
    iVar2 = *(int *)(param_1[0x20] + 0xec);
    iVar8 = *(int *)(param_1[0x1f] + 0xec);
    iVar11 = *(int *)(param_1[0x20] + 0xe8);
    FUN_00498350(local_88,iVar1,iVar2,iVar8,iVar11);
    (**(code **)(*param_1 + 0xb0))(param_1,local_88);
    dVar13 = (double)(iVar8 - iVar1) /
             (*(double *)(param_1[0x1f] + 0xc0) - *(double *)(param_1[0x1f] + 0xb8));
    dVar14 = (double)(iVar11 - iVar2) / ((double)param_1[0x28] - (double)param_1[0x29]);
    uVar5 = FUN_010bfa10(-(double)param_1[0x2b] * dVar14);
    *(undefined4 *)(param_1 + 0x22) = uVar5;
    *(undefined8 *)PTR_DAT_02005620 = 0;
    if (1 < *(int *)(param_1[0x1c] + 0x2c)) {
      (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))
                (*(longlong **)(param_2 + 0x78),param_1[0xc]);
      if ((char)param_1[2] != '\0') {
        FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xff);
      }
      FUN_005fd640(*(undefined8 *)(param_2 + 0x78),DAT_02030108);
      local_60[0] = -1e+30;
      if ((((char)param_1[0x27] == '\0') && (*(char *)((longlong)param_1 + 0x181) != '\0')) &&
         (param_1[0x2e] != 0)) {
        FUN_01cc80c0(param_1[0x19],param_1[0x2e]);
        iVar8 = (int)param_1[0x2c];
      }
      else {
        if ((char)param_1[0x27] == '\0') {
          (**(code **)(*(longlong *)param_1[0x19] + 0x18))
                    ((longlong *)param_1[0x19],param_1[0x1c],*(undefined8 *)(param_1[0x1f] + 0xb8),1
                    );
        }
        else {
          (**(code **)(*(longlong *)param_1[0x19] + 0x10))
                    ((longlong *)param_1[0x19],param_1[0x1c],1);
        }
        (**(code **)(*param_1 + 0x68))(param_1);
        *(undefined1 *)((longlong)param_1 + 0x181) = 1;
        *(undefined1 *)(param_1 + 0x30) = 1;
        param_1[0x2d] = -0x39d6c1a6c65f7316;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        param_1[0x2e] = 0;
        iVar8 = iVar1;
      }
      cVar4 = (char)param_1[0x27];
      iVar11 = iVar8;
      if (cVar4 == '\0') {
        while ((cVar4 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                                  ((longlong *)param_1[0x19],local_60,&local_68,0), cVar4 != '\0' &&
               (iVar12 < 100000))) {
          if (*(double *)(param_1[0x1f] + 0xb8) <= local_60[0]) {
            iVar6 = FUN_010bfa10((local_60[0] - *(double *)(param_1[0x1f] + 0xb8)) * dVar13 +
                                 (double)iVar1);
            iVar7 = FUN_010bfa10(((double)param_1[0x28] - local_68) * dVar14 + (double)iVar2);
            if ((local_a0 != iVar6) || (local_9c != iVar7)) {
              FUN_01d2c460(param_1,iVar6,iVar7 + (int)param_1[0x22]);
              iVar12 = iVar12 + 1;
              iVar8 = FUN_00b905e0(iVar8,iVar6);
              local_a0 = iVar6;
              local_9c = iVar7;
            }
            if (iVar11 < iVar8) {
              if (param_1[0x31] != 0) {
                FUN_01102830(param_1[0x31],iVar11,iVar8);
              }
              FUN_01102830(param_1,iVar11,iVar8);
              param_1[0x2d] = (longlong)local_60[0];
              *(int *)(param_1 + 0x2c) = iVar6;
              iVar11 = iVar8;
            }
          }
        }
      }
      else if (cVar4 == '\x01') {
        lVar10 = param_1[0x2c];
        while( true ) {
          plVar9 = (longlong *)FUN_004113f0(param_1[0x19],&PTR_FUN_01cb9c30);
          cVar4 = (**(code **)(*plVar9 + 0x88))(plVar9,local_60,&local_78);
          if ((cVar4 == '\0') || (99999 < iVar12)) break;
          if (-*(double *)(param_1[0x1f] + 0x138) <= local_60[0]) {
            uVar5 = FUN_010bfa10((local_78 - *(double *)(param_1[0x1f] + 0xb8)) * dVar13 +
                                 (double)iVar1);
            iVar8 = FUN_010bfa10(((double)param_1[0x28] - local_70) * dVar14 + (double)iVar2);
            FUN_01d2c460(param_1,uVar5,iVar8 + (int)param_1[0x22]);
            param_1[0x2d] = (longlong)local_60[0];
            *(int *)(param_1 + 0x2c) = (int)param_1[9];
            iVar12 = iVar12 + 1;
          }
        }
        if ((int)lVar10 != (int)param_1[0x2c]) {
          FUN_01102bd0(param_1,(int)lVar10,(int)param_1[0x2c]);
        }
      }
      else if (cVar4 == '\x02') {
        lVar10 = param_1[0x2c];
        for (; (cVar4 = (**(code **)(*(longlong *)param_1[0x19] + 0x30))
                                  ((longlong *)param_1[0x19],local_60,&local_68,0), cVar4 != '\0' &&
               (iVar12 < 100000)); iVar12 = iVar12 + 1) {
          uVar5 = FUN_010bfa10((local_60[0] - *(double *)(param_1[0x1f] + 0xb8)) * dVar13 +
                               (double)iVar1);
          iVar8 = FUN_010bfa10(((double)param_1[0x28] - local_68) * dVar14 + (double)iVar2);
          FUN_01d2c460(param_1,uVar5,iVar8 + (int)param_1[0x22]);
          param_1[0x2d] = (longlong)local_60[0];
          *(int *)(param_1 + 0x2c) = (int)param_1[9];
        }
        FUN_01102bd0(param_1,(int)lVar10,(int)param_1[0x2c]);
      }
      lVar10 = FUN_01cc80a0(param_1[0x19]);
      param_1[0x2e] = lVar10;
      dVar14 = (double)FUN_01ab2a30();
      uVar5 = FUN_010bfa10((dVar14 - *(double *)(param_1[0x1f] + 0xb8)) * dVar13 + (double)iVar1);
      *(undefined4 *)(param_1 + 0x2f) = uVar5;
      dVar14 = (double)FUN_01ab2a60();
      uVar5 = FUN_010bfa10((dVar14 - *(double *)(param_1[0x1f] + 0xb8)) * dVar13 + (double)iVar1);
      *(undefined4 *)((longlong)param_1 + 0x17c) = uVar5;
    }
    param_1[0x33] = lVar3;
  }
  return;
}

