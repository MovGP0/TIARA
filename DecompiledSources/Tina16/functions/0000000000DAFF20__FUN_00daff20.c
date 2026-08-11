/* Ghidra address: 00daff20 */
/* Ghidra symbol: FUN_00daff20 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00daff20(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  double local_60 [8];
  
  iVar3 = 0;
  pdVar5 = local_60;
  do {
    dVar6 = (double)FUN_01b08a30(param_1,iVar3);
    *pdVar5 = dVar6 + _DAT_01ed4188;
    iVar3 = iVar3 + 1;
    pdVar5 = pdVar5 + 1;
  } while (iVar3 != 7);
  if (*(char *)(param_1 + 0x886) == '\x01') {
    if (*(char *)(param_1 + 0xb) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar2 = (longlong)iVar4;
          *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar4 * 8) +
               local_60[0] *
               ((*(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) -
                *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8)) / local_60[1]);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if (*(char *)(param_1 + 0xb) == '\x02') {
      iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          dVar6 = -local_60[0] / (local_60[1] * 2.0);
          lVar2 = (longlong)iVar4;
          *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
               *(double *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar4 * 8) +
               (dVar6 * ((*(double *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 8) -
                         *(double *)(*(longlong *)(param_1 + 0x248) + lVar2 * 8)) / local_60[2]) +
               (1.0 - dVar6) *
               ((*(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) -
                *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8)) / local_60[1])) *
               local_60[0];
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  else if (*(char *)(param_1 + 0x886) == '\x02') {
    bVar1 = *(byte *)(param_1 + 0xb);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar2 = (longlong)iVar4;
            *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
                 *(double *)(param_1 + 0x278) *
                 *(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) +
                 *(double *)(param_1 + 0x280) *
                 *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8) +
                 *(double *)(param_1 + 0x288) *
                 *(double *)(*(longlong *)(param_1 + 0x248) + lVar2 * 8) +
                 *(double *)(param_1 + 0x290) *
                 *(double *)(*(longlong *)(param_1 + 0x250) + lVar2 * 8) +
                 *(double *)(param_1 + 0x298) *
                 *(double *)(*(longlong *)(param_1 + 600) + (longlong)iVar4 * 8);
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (bVar1 == 1) {
        iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar2 = (longlong)iVar4;
            *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
                 *(double *)(param_1 + 0x278) *
                 *(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) +
                 *(double *)(param_1 + 0x280) *
                 *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8);
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (bVar1 == 2) {
        iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar2 = (longlong)iVar4;
            *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
                 *(double *)(param_1 + 0x278) *
                 *(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) +
                 *(double *)(param_1 + 0x280) *
                 *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8) +
                 *(double *)(param_1 + 0x288) *
                 *(double *)(*(longlong *)(param_1 + 0x248) + lVar2 * 8);
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else if (bVar1 == 3) {
        iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar2 = (longlong)iVar4;
            *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
                 *(double *)(param_1 + 0x278) *
                 *(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) +
                 *(double *)(param_1 + 0x280) *
                 *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8) +
                 *(double *)(param_1 + 0x288) *
                 *(double *)(*(longlong *)(param_1 + 0x248) + lVar2 * 8) +
                 *(double *)(param_1 + 0x290) *
                 *(double *)(*(longlong *)(param_1 + 0x250) + lVar2 * 8);
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else if (bVar1 == 5) {
      iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar2 = (longlong)iVar4;
          *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
               *(double *)(param_1 + 0x278) *
               *(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) +
               *(double *)(param_1 + 0x280) *
               *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8) +
               *(double *)(param_1 + 0x288) *
               *(double *)(*(longlong *)(param_1 + 0x248) + lVar2 * 8) +
               *(double *)(param_1 + 0x290) *
               *(double *)(*(longlong *)(param_1 + 0x250) + lVar2 * 8) +
               *(double *)(param_1 + 0x298) *
               *(double *)(*(longlong *)(param_1 + 600) + (longlong)iVar4 * 8) +
               *(double *)(param_1 + 0x2a0) *
               *(double *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar4 * 8);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if (bVar1 == 6) {
      iVar3 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
      iVar4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar2 = (longlong)iVar4;
          *(double *)(*(longlong *)(param_1 + 0x178) + lVar2 * 8) =
               *(double *)(param_1 + 0x278) *
               *(double *)(*(longlong *)(param_1 + 0x238) + lVar2 * 8) +
               *(double *)(param_1 + 0x280) *
               *(double *)(*(longlong *)(param_1 + 0x240) + lVar2 * 8) +
               *(double *)(param_1 + 0x288) *
               *(double *)(*(longlong *)(param_1 + 0x248) + lVar2 * 8) +
               *(double *)(param_1 + 0x290) *
               *(double *)(*(longlong *)(param_1 + 0x250) + lVar2 * 8) +
               *(double *)(param_1 + 0x298) *
               *(double *)(*(longlong *)(param_1 + 600) + (longlong)iVar4 * 8) +
               *(double *)(param_1 + 0x2a0) *
               *(double *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar4 * 8) +
               *(double *)(param_1 + 0x2a8) *
               *(double *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar4 * 8);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

