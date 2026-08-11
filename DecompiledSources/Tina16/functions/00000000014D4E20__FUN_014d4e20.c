/* Ghidra address: 014d4e20 */
/* Ghidra symbol: FUN_014d4e20 */


void FUN_014d4e20(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  double dVar9;
  ulonglong in_stack_ffffffffffffff70;
  undefined1 local_49;
  int local_48 [4];
  double local_38;
  double local_30;
  
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
          iVar4 = 1;
          for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar4 * 2 + -1)),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar4 * 2)),0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + (longlong)iVar4 * 8) = uVar8;
            iVar4 = iVar4 + 1;
          }
          iVar4 = 1;
          uVar6 = (uint)(byte)param_1[0x18];
          if (uVar6 != 0) {
            piVar3 = local_48;
            do {
              lVar5 = (longlong)iVar4;
              if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8) != 0.0) {
                iVar2 = FUN_014cfd80(param_2,param_3,
                                     *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar5 * 8)
                                     ,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x20) + -8 + lVar5 * 8),
                                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8)
                                     ,param_1[2] + (char)iVar4);
                *piVar3 = iVar2;
              }
              iVar4 = iVar4 + 1;
              piVar3 = piVar3 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else {
          iVar4 = 1;
          for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + (longlong)iVar4 * 8) = 0;
            iVar4 = iVar4 + 1;
          }
          iVar4 = 1;
          uVar6 = (uint)(byte)param_1[0x18];
          if (uVar6 != 0) {
            piVar3 = local_48;
            do {
              if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar4 * 8) != 0.0) {
                iVar2 = FUN_014cfd10(param_2,param_3,0,local_49,param_1[2] + (char)iVar4);
                *piVar3 = iVar2;
              }
              iVar4 = iVar4 + 1;
              piVar3 = piVar3 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
      }
      else {
        iVar4 = 1;
        for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                               *(undefined1 *)
                                (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar4 * 2 + -1)),
                               *(undefined1 *)
                                (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar4 * 2)),0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + (longlong)iVar4 * 8) = uVar8;
          iVar4 = iVar4 + 1;
        }
        iVar4 = 1;
        uVar6 = (uint)(byte)param_1[0x18];
        if (uVar6 != 0) {
          piVar3 = local_48;
          do {
            lVar5 = (longlong)iVar4;
            if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8) != 0.0) {
              iVar2 = FUN_014cfc00(param_2,param_3,
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar5 * 8),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + lVar5 * 8),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8),
                                   param_1[2] + (char)iVar4);
              *piVar3 = iVar2;
            }
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      iVar4 = 1;
      uVar6 = (uint)(byte)param_1[0x18];
      if (uVar6 != 0) {
        piVar3 = local_48;
        do {
          lVar5 = (longlong)iVar4;
          if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8) == 0.0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + lVar5 * 8);
          }
          else if (*piVar3 == 0) {
            *(double *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8) =
                 *(double *)(*(longlong *)(param_1 + 0x20) + -8 + lVar5 * 8) +
                 *(double *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar4 * 8);
          }
          else {
            *(double *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8) =
                 *(double *)(*(longlong *)(param_1 + 0x20) + -8 + lVar5 * 8) -
                 *(double *)(*(longlong *)(param_1 + 0x28) + -8 + (longlong)iVar4 * 8);
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      cVar1 = param_1[0x61];
      if (cVar1 == '\0') {
        dVar9 = (double)FUN_014cfeb0(param_1[0x60],*(undefined8 *)(param_1 + 0x50),
                                     *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x48),
                                     *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x48),
                                     param_1[0x18],*(undefined8 *)(param_1 + 0x68),
                                     *(undefined8 *)(param_1 + 0x70),param_1 + 0x70);
        local_30 = dVar9 + *(double *)(param_1 + 0x48);
      }
      else if (cVar1 == '\x01') {
        dVar9 = (double)FUN_014d00d0(param_1[0x60],*(undefined8 *)(param_1 + 0x50),
                                     *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x48),
                                     *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x48),
                                     param_1[0x18],*(undefined8 *)(param_1 + 0x68),
                                     *(undefined8 *)(param_1 + 0x70),param_1 + 0x70);
        local_30 = dVar9 + *(double *)(param_1 + 0x48);
      }
      else if (cVar1 == '\x02') {
        dVar9 = (double)FUN_014d0310(param_1[0x60],*(undefined8 *)(param_1 + 0x50),
                                     *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x48),
                                     *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x48),
                                     param_1[0x18],*(undefined8 *)(param_1 + 0x68),
                                     *(undefined8 *)(param_1 + 0x70),param_1 + 0x70);
        local_30 = dVar9 + *(double *)(param_1 + 0x48);
      }
      else if (cVar1 == '\x03') {
        dVar9 = (double)FUN_014d0570(param_1[0x60],*(undefined8 *)(param_1 + 0x50),
                                     *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x48),
                                     *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x48),
                                     param_1[0x18],*(undefined8 *)(param_1 + 0x68),
                                     *(undefined8 *)(param_1 + 0x70),param_1 + 0x70);
        local_30 = dVar9 + *(double *)(param_1 + 0x48);
      }
      if ((param_1[0x60] == '\0') ||
         (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x38) <= 0.0)) {
        local_38 = 1.0;
      }
      else {
        FUN_00da9f70(local_30,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
                     (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x38)) / 100.0,&local_30,
                     &local_38);
      }
      iVar4 = 1;
      for (uVar6 = (uint)(byte)param_1[0x18]; uVar6 != 0; uVar6 = uVar6 - 1) {
        lVar5 = (longlong)iVar4;
        *(double *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8) =
             *(double *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8) * local_38;
        FUN_016ed220(param_2,*param_1 + (char)iVar4 + '\x01',
                     *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8),0);
        local_30 = local_30 -
                   *(double *)(*(longlong *)(param_1 + 0x70) + -8 + lVar5 * 8) *
                   *(double *)(*(longlong *)(param_1 + 0x68) + -8 + lVar5 * 8);
        iVar4 = iVar4 + 1;
      }
      FUN_016ed320(param_2,*param_1 + '\x01',local_30,*(undefined8 *)(param_1 + 0x58),0);
    }
    else {
      iVar4 = 1;
      uVar6 = (uint)(byte)param_1[0x18];
      if (uVar6 != 0) {
        piVar3 = local_48;
        do {
          lVar5 = (longlong)iVar4;
          if (*(double *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8) != 0.0) {
            uVar8 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar4 * 2 + -1)),
                                 *(undefined1 *)
                                  (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar4 * 2)),0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar5 * 8) = uVar8;
            in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffffffffffff00;
            iVar2 = FUN_014cfb80(param_2,param_3,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar5 * 8),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8 + lVar5 * 8),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar5 * 8),
                                 in_stack_ffffffffffffff70,&local_49,param_1[2] + (char)iVar4);
            *piVar3 = iVar2;
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}

