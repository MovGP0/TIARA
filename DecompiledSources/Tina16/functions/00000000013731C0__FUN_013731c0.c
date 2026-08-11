/* Ghidra address: 013731c0 */
/* Ghidra symbol: FUN_013731c0 */


void FUN_013731c0(longlong param_1,undefined1 param_2,char param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  undefined8 uVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 *in_stack_fffffffffffffd88;
  int local_244;
  double *local_240;
  undefined8 local_238;
  undefined8 local_230 [2];
  undefined8 uStack_220;
  double adStack_218 [9];
  double adStack_1d0 [10];
  int aiStack_17c [9];
  double adStack_158 [10];
  double adStack_108 [11];
  double local_b0 [10];
  char local_59;
  undefined1 local_58 [8];
  undefined8 local_50 [5];
  
  local_238 = 0;
  local_230[0] = 0;
  FUN_00414610(param_5);
  local_50[0] = 0x4415af1d78b58c40;
  for (local_244 = 3; local_244 <= *(short *)(param_1 + 0xda1); local_244 = local_244 + 1) {
    local_59 = '\0';
    iVar2 = 0;
    iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
    if (-1 < iVar8 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x468),iVar2);
        iVar6 = iVar2 + 1;
        adStack_108[iVar6] = *(double *)(lVar3 + 0xc);
        adStack_158[iVar6] = *(double *)(lVar3 + 0x14);
        adStack_1d0[iVar6] = *(double *)(lVar3 + 0xc);
        (&uStack_220)[iVar6] = *(undefined8 *)(lVar3 + 0x14);
        iVar2 = iVar2 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uStack_220._4_4_ = 1;
    *(undefined1 *)(param_1 + 0x1438) = 0;
    iVar8 = 1;
    pdVar4 = adStack_108;
    pdVar7 = local_b0;
    do {
      pdVar4 = pdVar4 + 1;
      *pdVar7 = *pdVar4;
      iVar8 = iVar8 + 1;
      pdVar7 = pdVar7 + 1;
    } while (iVar8 != 0xb);
    while (((local_59 == '\0' && (uStack_220._4_4_ < (int)(uint)*(ushort *)(param_1 + 0xd9f))) &&
           (*(char *)(param_1 + 0x49c) != '\x01'))) {
      if (1 < uStack_220._4_4_) {
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
        iVar2 = 0;
        if (-1 < iVar8 + -1) {
          do {
            lVar3 = (longlong)(iVar2 + 1);
            dVar10 = (adStack_158[lVar3] - adStack_108[lVar3]) / (double)local_244;
            if ((double)(&uStack_220)[lVar3] <= *(double *)(param_1 + lVar3 * 8 + 0x1390) + dVar10)
            {
              adStack_158[lVar3] = (double)(&uStack_220)[lVar3];
            }
            else {
              adStack_158[lVar3] =
                   *(double *)(param_1 + (longlong)(iVar2 + 1) * 8 + 0x1390) + dVar10;
            }
            dVar12 = *(double *)(param_1 + (longlong)(iVar2 + 1) * 8 + 0x1390) - dVar10;
            if (dVar12 < adStack_1d0[lVar3] || dVar12 == adStack_1d0[lVar3]) {
              adStack_108[lVar3] = adStack_1d0[lVar3];
            }
            else {
              adStack_108[lVar3] =
                   *(double *)(param_1 + (longlong)(iVar2 + 1) * 8 + 0x1390) - dVar10;
            }
            iVar2 = iVar2 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      iVar8 = 1;
      local_240 = (double *)aiStack_17c;
      do {
        local_240 = (double *)((longlong)local_240 + 4);
        *(int *)local_240 = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0xb);
      dVar12 = 1.0;
      dVar10 = (double)FUN_00c42670((double)(local_244 + 1),
                                    (double)*(int *)(*(longlong *)
                                                      (*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10
                                                    ));
      while ((dVar12 <= dVar10 && (*(char *)(param_1 + 0x49c) != '\x01'))) {
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
        if (0 < iVar8) {
          pdVar7 = adStack_108;
          pdVar4 = adStack_158;
          piVar9 = aiStack_17c;
          local_240 = local_b0;
          do {
            piVar9 = piVar9 + 1;
            pdVar4 = pdVar4 + 1;
            pdVar7 = pdVar7 + 1;
            in_stack_fffffffffffffd88 =
                 (undefined8 *)((ulonglong)in_stack_fffffffffffffd88 & 0xffffffffffffff00);
            dVar11 = (double)FUN_017c58f0(*pdVar7,*pdVar4,0,local_244,*piVar9,
                                          *(undefined1 *)(param_1 + 0xda5),in_stack_fffffffffffffd88
                                         );
            *local_240 = dVar11;
            local_240 = local_240 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        in_stack_fffffffffffffd88 = local_50;
        FUN_01373090(param_1,param_2,local_b0,param_3,param_4,param_5,in_stack_fffffffffffffd88);
        cVar1 = FUN_01371930(param_1,local_b0,&local_59,local_58);
        if (cVar1 != '\0') goto LAB_013736f6;
        iVar8 = 1;
        for (iVar2 = 1;
            iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10),
            iVar2 <= iVar6; iVar2 = iVar2 + 1) {
          if (aiStack_17c[iVar2] != local_244) break;
          aiStack_17c[iVar2] = 0;
          if (iVar2 <= iVar6 + -1) {
            iVar8 = iVar2 + 1;
          }
        }
        aiStack_17c[iVar8] = aiStack_17c[iVar8] + 1;
        dVar12 = dVar12 + 1.0;
      }
      uStack_220._4_4_ = uStack_220._4_4_ + 1;
      FUN_01af25d0(*(undefined8 *)(param_1 + 0xf10),4,1,(longlong)&uStack_220 + 4);
      FUN_01af25d0(*(undefined8 *)(param_1 + 0xf10),5,2,local_58);
    }
    if (local_59 == '\0') {
      if (param_3 == '\0') {
        FUN_01af2b10(*(undefined8 *)(param_1 + 0xf10));
        uVar5 = FUN_00b89270();
        FUN_00b8e520(uVar5,&local_238,0x14b);
        FUN_016fd940(local_238);
      }
      else {
        FUN_00de8980(local_230,0x14b,*(undefined8 *)(param_1 + 0x1310));
        FUN_01b05000(local_230[0],0);
      }
      goto code_r0x01373743;
    }
LAB_013736f6:
    if (*(char *)(param_1 + 0x1439) == '\0') break;
  }
  if (local_59 != '\0') {
    FUN_01371b20(param_1,param_1 + 0x1398,param_3,param_4,param_5);
  }
code_r0x01373743:
  FUN_00414560(&local_238,2);
  FUN_00414480(&param_5);
  return;
}

