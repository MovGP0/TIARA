/* Ghidra address: 016e77a0 */
/* Ghidra symbol: FUN_016e77a0 */


void FUN_016e77a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  double *pdVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar9;
  int local_60;
  int local_5c;
  undefined1 local_49 [33];
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  lVar5 = param_1;
  if (*(int *)(param_1 + 0x3c) < -1) {
    iVar4 = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
    *(int *)(param_1 + 0x3c) = iVar4;
    lVar5 = (longlong)(iVar4 + 1);
    *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + lVar5 * 8) = *(undefined8 *)(param_1 + 0x10);
  }
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if (param_5 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (param_5 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    if ((*(byte *)(lVar2 + 0x88) & 0x20) != 0) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 0xb0);
      return;
    }
    if ((*(byte *)(lVar2 + 0x88) & 0x40) == 0) {
      if (((*(byte *)(lVar2 + 0x88) & 2) == 0) && ((*(byte *)(lVar2 + 0x88) & 4) == 0)) {
        if ((*(byte *)(lVar2 + 0x88) & 0x80) == 0) {
          *(undefined8 *)(param_1 + 0xb0) =
               *(undefined8 *)
                (*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8);
        }
        else {
          *(undefined8 *)(param_1 + 0xb0) =
               *(undefined8 *)
                (*(longlong *)(lVar2 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8)
             = *(undefined8 *)(param_1 + 0xb0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
           *(undefined8 *)(param_1 + 0xb0);
    }
    bVar7 = false;
    lVar5 = *(longlong *)(param_1 + 0x50);
    local_5c = 0;
    iVar4 = *(int *)(lVar5 + 0x54);
    local_60 = 0;
    bVar3 = false;
    if (iVar4 - 1U < 0x80000000) {
      do {
        bVar7 = bVar3;
        if ((*(char *)(param_1 + 0xa0) == '\0') ||
           (*(char *)(*(longlong *)(param_1 + 0x78) + (longlong)local_5c) != '\0')) {
          in_stack_ffffffffffffff40 = 0;
          uVar8 = FUN_016586b0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                               *(undefined8 *)
                                (*(longlong *)(lVar5 + 0x60) + (longlong)local_60 * 0x10),0,param_4,
                               0,param_5,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)local_5c * 8) = uVar8;
        }
        if ((*(char *)(param_1 + 0xa0) == '\0') ||
           (*(char *)(*(longlong *)(param_1 + 0x78) + (longlong)(local_5c + 1)) != '\0')) {
          in_stack_ffffffffffffff40 = 0;
          uVar8 = FUN_016586b0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                               *(undefined8 *)
                                (*(longlong *)(lVar5 + 0x60) + 8 + (longlong)local_60 * 0x10),0,
                               param_4,0,param_5,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)(local_5c + 1) * 8) = uVar8;
        }
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
        if (local_60 == 0) {
          unaff_XMM6_Qa = *(double *)(*(longlong *)(param_1 + 0x68) + (longlong)local_5c * 8);
          unaff_XMM7_Qa = *(double *)(*(longlong *)(param_1 + 0x68) + (longlong)local_5c * 8);
        }
        else {
          lVar6 = (longlong)local_5c;
          pdVar1 = (double *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8);
          if (*pdVar1 <= unaff_XMM6_Qa && unaff_XMM6_Qa != *pdVar1) {
            bVar7 = true;
            unaff_XMM6_Qa = *(double *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8);
          }
          if (*(double *)(*(longlong *)(param_1 + 0x68) + (longlong)local_5c * 8) < unaff_XMM7_Qa) {
            pdVar1 = (double *)(*(longlong *)(param_1 + 0x68) + (longlong)local_5c * 8);
            if (*pdVar1 <= unaff_XMM7_Qa && unaff_XMM7_Qa != *pdVar1) {
              bVar7 = true;
            }
          }
          else {
            unaff_XMM7_Qa = *(double *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8);
          }
        }
        local_5c = local_5c + 2;
        local_60 = local_60 + 1;
        iVar4 = iVar4 + -1;
        bVar3 = bVar7;
      } while (iVar4 != 0);
    }
    FUN_00409a70(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                 (longlong)(*(int *)(lVar5 + 0x54) << 4));
    FUN_00409a70(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                 (longlong)(*(int *)(lVar5 + 0x54) * 2));
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_00409a70(*(longlong *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                   (longlong)(*(int *)(param_1 + 0x40) * 2 * *(int *)(lVar5 + 0x54) * 8));
    }
    if (bVar7) {
      FUN_016e8860(param_1,0,*(int *)(lVar5 + 0x54) + -1);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
    }
    uVar8 = FUN_00dac110(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xb0),
                         *(undefined8 *)(param_1 + 0x70),CONCAT44(uVar9,*(int *)(lVar5 + 0x54) * 2),
                         *(undefined8 *)(param_1 + 0x60),0,*(char *)(param_1 + 0x44) == '\x02',
                         param_1 + 0x20,param_1 + 0xb8,param_1 + 0xa4,local_49,
                         *(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) =
         *(undefined8 *)(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}

