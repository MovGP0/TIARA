/* Ghidra address: 01aab9a0 */
/* Ghidra symbol: FUN_01aab9a0 */


double FUN_01aab9a0(longlong param_1)

{
  double *pdVar1;
  short *psVar2;
  longlong lVar3;
  short sVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  short sVar11;
  char cVar12;
  int iVar13;
  double dVar14;
  double local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  dVar14 = DAT_01fce3e0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x198fa) = 0;
  sVar11 = *(short *)(param_1 + 0x10);
  sVar4 = 1;
  if (sVar11 != 0) {
    plVar10 = (longlong *)(param_1 + 0x18);
    do {
      lVar3 = *plVar10;
      uVar8 = 1;
      for (cVar12 = *(char *)(lVar3 + 1); cVar12 != '\0'; cVar12 = cVar12 + -1) {
        lVar9 = lVar3 + -0x1e0 + uVar8 * 0x788;
        cVar6 = (char)uVar8;
        if ((*(char *)(lVar9 + 1) != '\0') && (*(double *)(lVar9 + 8) <= dVar14)) {
          if (dVar14 < *(double *)(lVar9 + 8) || dVar14 == *(double *)(lVar9 + 8)) {
            if (99 < *(byte *)(param_1 + 0x198fa)) {
              uVar5 = FUN_00b89270();
              FUN_00b8e520(uVar5,local_20,0x508);
              FUN_00414ad0(DAT_02110a68,local_20[0]);
              FUN_01aa37d0(1,&DAT_02110a68);
              FUN_01aa36f0();
              dVar14 = local_30;
              goto LAB_01aabc30;
            }
            *(char *)(param_1 + 0x198fa) = *(char *)(param_1 + 0x198fa) + '\x01';
            psVar2 = (short *)(param_1 + 0x198f4 + (ulonglong)*(byte *)(param_1 + 0x198fa) * 8);
            *psVar2 = sVar4;
            *(char *)(psVar2 + 1) = cVar6;
            *(undefined1 *)((longlong)psVar2 + 3) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x198fa) = 1;
            *(short *)(param_1 + 0x198fc) = sVar4;
            *(char *)(param_1 + 0x198fe) = cVar6;
            *(undefined1 *)(param_1 + 0x198ff) = 0;
            dVar14 = *(double *)(lVar9 + 8);
          }
        }
        uVar8 = (ulonglong)(byte)(cVar6 + 1);
      }
      iVar13 = *(int *)(lVar3 + 0x28);
      iVar7 = 1;
      if (0 < iVar13) {
        do {
          lVar9 = (longlong)iVar7;
          if (*(double *)(lVar3 + 0x20 + lVar9 * 0x10) <= dVar14) {
            pdVar1 = (double *)(lVar3 + 0x20 + lVar9 * 0x10);
            if (dVar14 < *pdVar1 || dVar14 == *pdVar1) {
              if (99 < *(byte *)(param_1 + 0x198fa)) {
                uVar5 = FUN_00b89270();
                FUN_00b8e520(uVar5,&local_28,0x508);
                FUN_00414ad0(DAT_02110a68,local_28);
                FUN_01aa37d0(1,&DAT_02110a68);
                FUN_01aa36f0();
                dVar14 = local_30;
                goto LAB_01aabc30;
              }
              *(char *)(param_1 + 0x198fa) = *(char *)(param_1 + 0x198fa) + '\x01';
              psVar2 = (short *)(param_1 + 0x198f4 + (ulonglong)*(byte *)(param_1 + 0x198fa) * 8);
              *psVar2 = sVar4;
              *(undefined1 *)(psVar2 + 1) = 0;
              *(undefined1 *)((longlong)psVar2 + 3) = 1;
              *(int *)(psVar2 + 2) = iVar7;
            }
            else {
              *(undefined1 *)(param_1 + 0x198fa) = 1;
              *(short *)(param_1 + 0x198fc) = sVar4;
              *(undefined1 *)(param_1 + 0x198fe) = 0;
              *(undefined1 *)(param_1 + 0x198ff) = 1;
              *(int *)(param_1 + 0x19900) = iVar7;
              dVar14 = *(double *)(lVar3 + 0x20 + lVar9 * 0x10);
            }
          }
          iVar7 = iVar7 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      sVar4 = sVar4 + 1;
      plVar10 = plVar10 + 1;
      sVar11 = sVar11 + -1;
    } while (sVar11 != 0);
  }
LAB_01aabc30:
  local_30 = dVar14;
  FUN_00414560(&local_28,2);
  return local_30;
}

