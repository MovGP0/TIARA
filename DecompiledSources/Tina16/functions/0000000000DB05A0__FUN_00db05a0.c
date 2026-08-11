/* Ghidra address: 00db05a0 */
/* Ghidra symbol: FUN_00db05a0 */


double FUN_00db05a0(undefined8 param_1,longlong param_2,int param_3,longlong param_4,char param_5)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double unaff_XMM6_Qa;
  double dVar10;
  
  if (param_5 != '\0') {
    if (param_4 == 0) {
      param_3 = FUN_01b057d0(param_1,param_3);
    }
    else {
      param_3 = FUN_01b057d0(param_4,param_3);
    }
  }
  if (*(char *)(param_2 + 0x886) == '\x01') {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      lVar2 = (longlong)param_3;
      dVar3 = (double)FUN_01b08a30(param_2,1);
      dVar5 = *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8);
      dVar6 = *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8);
      dVar4 = (double)FUN_01b08a30(param_2,0);
      unaff_XMM6_Qa =
           *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8) +
           dVar4 * ((dVar5 - dVar6) / dVar3);
    }
    else if (*(char *)(param_2 + 0xb) == '\x02') {
      dVar5 = (double)FUN_01b08a30(param_2,0);
      dVar6 = (double)FUN_01b08a30(param_2,1);
      dVar10 = -dVar5 / (dVar6 * 2.0);
      lVar2 = (longlong)param_3;
      dVar7 = (double)FUN_01b08a30(param_2,1);
      dVar5 = *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8);
      dVar6 = *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8);
      dVar8 = (double)FUN_01b08a30(param_2,2);
      dVar3 = *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8);
      dVar4 = *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar2 * 8);
      dVar9 = (double)FUN_01b08a30(param_2,0);
      unaff_XMM6_Qa =
           *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8) +
           (dVar10 * ((dVar3 - dVar4) / dVar8) + (1.0 - dVar10) * ((dVar5 - dVar6) / dVar7)) * dVar9
      ;
    }
  }
  else if (*(char *)(param_2 + 0x886) == '\x02') {
    bVar1 = *(byte *)(param_2 + 0xb);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        lVar2 = (longlong)param_3;
        unaff_XMM6_Qa =
             *(double *)(param_2 + 0x278) * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8)
             + *(double *)(param_2 + 0x280) *
               *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8) +
             *(double *)(param_2 + 0x288) * *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar2 * 8)
             + *(double *)(param_2 + 0x290) *
               *(double *)(*(longlong *)(param_2 + 0x1d8) + lVar2 * 8) +
             *(double *)(param_2 + 0x298) *
             *(double *)(*(longlong *)(param_2 + 0x1e0) + (longlong)param_3 * 8);
      }
      else if (bVar1 == 1) {
        unaff_XMM6_Qa =
             *(double *)(param_2 + 0x278) *
             *(double *)(*(longlong *)(param_2 + 0x1c0) + (longlong)param_3 * 8) +
             *(double *)(param_2 + 0x280) *
             *(double *)(*(longlong *)(param_2 + 0x1c8) + (longlong)param_3 * 8);
      }
      else if (bVar1 == 2) {
        lVar2 = (longlong)param_3;
        unaff_XMM6_Qa =
             *(double *)(param_2 + 0x278) * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8)
             + *(double *)(param_2 + 0x280) *
               *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8) +
             *(double *)(param_2 + 0x288) * *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar2 * 8);
      }
      else if (bVar1 == 3) {
        lVar2 = (longlong)param_3;
        unaff_XMM6_Qa =
             *(double *)(param_2 + 0x278) * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8)
             + *(double *)(param_2 + 0x280) *
               *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8) +
             *(double *)(param_2 + 0x288) * *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar2 * 8)
             + *(double *)(param_2 + 0x290) *
               *(double *)(*(longlong *)(param_2 + 0x1d8) + lVar2 * 8);
      }
    }
    else if (bVar1 == 5) {
      lVar2 = (longlong)param_3;
      unaff_XMM6_Qa =
           *(double *)(param_2 + 0x278) * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8) +
           *(double *)(param_2 + 0x280) * *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8) +
           *(double *)(param_2 + 0x288) * *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar2 * 8) +
           *(double *)(param_2 + 0x290) * *(double *)(*(longlong *)(param_2 + 0x1d8) + lVar2 * 8) +
           *(double *)(param_2 + 0x298) *
           *(double *)(*(longlong *)(param_2 + 0x1e0) + (longlong)param_3 * 8) +
           *(double *)(param_2 + 0x2a0) *
           *(double *)(*(longlong *)(param_2 + 0x1e8) + (longlong)param_3 * 8);
    }
    else if (bVar1 == 6) {
      lVar2 = (longlong)param_3;
      unaff_XMM6_Qa =
           *(double *)(param_2 + 0x278) * *(double *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8) +
           *(double *)(param_2 + 0x280) * *(double *)(*(longlong *)(param_2 + 0x1c8) + lVar2 * 8) +
           *(double *)(param_2 + 0x288) * *(double *)(*(longlong *)(param_2 + 0x1d0) + lVar2 * 8) +
           *(double *)(param_2 + 0x290) * *(double *)(*(longlong *)(param_2 + 0x1d8) + lVar2 * 8) +
           *(double *)(param_2 + 0x298) *
           *(double *)(*(longlong *)(param_2 + 0x1e0) + (longlong)param_3 * 8) +
           *(double *)(param_2 + 0x2a0) *
           *(double *)(*(longlong *)(param_2 + 0x1e8) + (longlong)param_3 * 8) +
           *(double *)(param_2 + 0x2a8) *
           *(double *)(*(longlong *)(param_2 + 0x1f0) + (longlong)param_3 * 8);
    }
  }
  return unaff_XMM6_Qa;
}

