/* Ghidra address: 014d2fb0 */
/* Ghidra symbol: FUN_014d2fb0 */


void FUN_014d2fb0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double unaff_XMM6_Qa;
  ulonglong in_stack_ffffffffffffff20;
  int local_7c [4];
  byte local_6a;
  undefined1 local_69;
  double local_68;
  double local_60;
  undefined8 local_58;
  double local_50 [5];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) && ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
          iVar3 = 1;
          for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2 + -1)),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2)),0);
            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + (longlong)iVar3 * 8) = uVar8;
            iVar3 = iVar3 + 1;
          }
          local_50[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                             param_1[0xd],0);
          iVar3 = 1;
          uVar6 = (uint)(byte)param_1[0x18];
          if (uVar6 != 0) {
            piVar5 = local_7c;
            do {
              lVar4 = (longlong)iVar3;
              if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8) != 0.0) {
                iVar2 = FUN_014cfd80(param_2,param_3,
                                     *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + lVar4 * 8)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8),
                                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8)
                                     ,param_1[2] + (char)iVar3);
                *piVar5 = iVar2;
              }
              iVar3 = iVar3 + 1;
              piVar5 = piVar5 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else {
          iVar3 = 1;
          for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + (longlong)iVar3 * 8) = 0;
            iVar3 = iVar3 + 1;
          }
          local_50[0] = *(double *)(param_1 + 0x90);
          iVar3 = 1;
          uVar6 = (uint)(byte)param_1[0x18];
          if (uVar6 != 0) {
            piVar5 = local_7c;
            do {
              if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar3 * 8) != 0.0) {
                iVar2 = FUN_014cfd10(param_2,param_3,0,local_6a,param_1[2] + (char)iVar3);
                *piVar5 = iVar2;
              }
              iVar3 = iVar3 + 1;
              piVar5 = piVar5 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
      }
      else {
        iVar3 = 1;
        for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)
                                (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2 + -1)),
                               *(undefined1 *)
                                (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2)),0);
          *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + (longlong)iVar3 * 8) = uVar8;
          iVar3 = iVar3 + 1;
        }
        local_50[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                           param_1[0xd],0);
        iVar3 = 1;
        uVar6 = (uint)(byte)param_1[0x18];
        if (uVar6 != 0) {
          piVar5 = local_7c;
          do {
            lVar4 = (longlong)iVar3;
            if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8) != 0.0) {
              iVar2 = FUN_014cfc00(param_2,param_3,
                                   *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + lVar4 * 8),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8),
                                   param_1[2] + (char)iVar3);
              *piVar5 = iVar2;
            }
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      iVar3 = 1;
      uVar6 = (uint)(byte)param_1[0x18];
      if (uVar6 != 0) {
        piVar5 = local_7c;
        do {
          lVar4 = (longlong)iVar3;
          if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8) == 0.0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8);
          }
          else if (*piVar5 == 0) {
            *(double *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8) =
                 *(double *)(*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8) +
                 *(double *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar3 * 8);
          }
          else {
            *(double *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8) =
                 *(double *)(*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8) -
                 *(double *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar3 * 8);
          }
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      dVar11 = *(double *)(param_1 + 0x58) / *(double *)(param_1 + 0x68) -
               *(double *)(param_1 + 0x48);
      dVar9 = *(double *)(param_1 + 0x50) / *(double *)(param_1 + 0x68) -
              *(double *)(param_1 + 0x48);
      cVar1 = param_1[0xa9];
      if (cVar1 == '\0') {
        dVar9 = (double)FUN_014cfeb0(param_1[0xa8],0x3ff0000000000000,dVar11,dVar9,param_1[0x18],
                                     *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8)
                                     ,param_1 + 0xb8);
        unaff_XMM6_Qa = dVar9 + *(double *)(param_1 + 0x48);
      }
      else if (cVar1 == '\x01') {
        dVar9 = (double)FUN_014d00d0(param_1[0xa8],0x3ff0000000000000,dVar11,dVar9,param_1[0x18],
                                     *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8)
                                     ,param_1 + 0xb8);
        unaff_XMM6_Qa = dVar9 + *(double *)(param_1 + 0x48);
      }
      else if (cVar1 == '\x02') {
        dVar9 = (double)FUN_014d0310(param_1[0xa8],0x3ff0000000000000,dVar11,dVar9,param_1[0x18],
                                     *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8)
                                     ,param_1 + 0xb8);
        unaff_XMM6_Qa = dVar9 + *(double *)(param_1 + 0x48);
      }
      else if (cVar1 == '\x03') {
        dVar9 = (double)FUN_014d0570(param_1[0xa8],0x3ff0000000000000,dVar11,dVar9,param_1[0x18],
                                     *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8)
                                     ,param_1 + 0xb8);
        unaff_XMM6_Qa = dVar9 + *(double *)(param_1 + 0x48);
      }
      dVar9 = *(double *)(param_1 + 0x68);
      *(double *)(param_1 + 0x70) = unaff_XMM6_Qa * dVar9;
      if ((param_1[0xa8] == '\0') ||
         (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x38) <= 0.0)) {
        param_1[0x98] = '\0';
        param_1[0x99] = '\0';
        param_1[0x9a] = '\0';
        param_1[0x9b] = '\0';
        param_1[0x9c] = '\0';
        param_1[0x9d] = '\0';
        param_1[0x9e] = -0x10;
        param_1[0x9f] = '?';
        local_58 = *(undefined8 *)(param_1 + 0x70);
      }
      else {
        FUN_00daa090(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x88),
                     *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
                     (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x58)) * 0.01,
                     param_1 + 0x70,param_1 + 0x98,&local_58,&local_69);
        FUN_016e9f80(param_2,param_3,local_69,0xd);
      }
      *(undefined8 *)(param_1 + 0x88) = local_58;
      *(double *)(param_1 + 0x98) = *(double *)(param_1 + 0x98) * dVar9;
      dVar9 = (double)FUN_0040c850(*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x38));
      dVar9 = dVar9 * 0.01;
      if (dVar9 < 0.01) {
        dVar9 = 0.01;
      }
      uVar8 = FUN_0040c850(*(double *)(param_1 + 0x50) / dVar9);
      uVar10 = FUN_0040c850(*(double *)(param_1 + 0x58) / dVar9);
      uVar8 = FUN_00b90620(uVar8,uVar10);
      FUN_00daa3d0(local_50[0],*(undefined8 *)(param_1 + 0x90),
                   *(double *)(param_1 + 0x30) - dVar9 * 0.9,0,dVar9,0,uVar8,param_1 + 0x78,
                   &local_60,local_50,&local_69);
      FUN_016e9f80(param_2,param_3,local_69,0xe);
      FUN_00daa3d0(local_50[0],*(undefined8 *)(param_1 + 0x90),
                   *(double *)(param_1 + 0x38) + dVar9 * 0.9,0,dVar9,uVar8,0,param_1 + 0x80,
                   &local_68,local_50,&local_69);
      *(double *)(param_1 + 0x90) = local_50[0];
      FUN_016e9f80(param_2,param_3,local_69,0xf);
      *(double *)(param_1 + 0xa0) = local_60 + local_68;
      *(double *)(param_1 + 0x78) = *(double *)(param_1 + 0x78) + *(double *)(param_1 + 0x80);
      dVar9 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x78)) +
              *(double *)(param_1 + 0xa0) * local_50[0];
      iVar3 = 1;
      for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
        lVar4 = (longlong)iVar3;
        *(double *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8) =
             *(double *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8) *
             *(double *)(param_1 + 0x98);
        FUN_016ed220(param_2,*param_1 + (char)iVar3 + '\x01',
                     *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8),0);
        dVar9 = dVar9 - *(double *)(*(longlong *)(param_1 + 0xb8) + -8 + lVar4 * 8) *
                        *(double *)(*(longlong *)(param_1 + 0xb0) + -8 + lVar4 * 8);
        iVar3 = iVar3 + 1;
      }
      FUN_016ed320(param_2,*param_1 + '\x01',dVar9,
                   *(double *)(param_1 + 0x60) + *(double *)(param_1 + 0xa0),0);
    }
    else {
      iVar3 = 1;
      uVar6 = (uint)(byte)param_1[0x18];
      if (uVar6 != 0) {
        piVar5 = local_7c;
        do {
          lVar4 = (longlong)iVar3;
          if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8) != 0.0) {
            uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2 + -1)),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar3 * 2)),0);
            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + lVar4 * 8) = uVar8;
            in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
            iVar2 = FUN_014cfb80(param_2,param_3,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + -8 + lVar4 * 8),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + lVar4 * 8),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar4 * 8),
                                 in_stack_ffffffffffffff20,&local_6a,param_1[2] + (char)iVar3);
            *piVar5 = iVar2;
          }
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}

