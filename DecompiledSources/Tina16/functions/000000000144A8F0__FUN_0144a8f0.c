/* Ghidra address: 0144a8f0 */
/* Ghidra symbol: FUN_0144a8f0 */


void FUN_0144a8f0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  int local_30;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
    iVar2 = FUN_0040c770(*(undefined8 *)(param_1 + 0xd8));
    DAT_0210e778 = 0.0;
    local_30 = 1;
    if (0 < iVar2) {
      do {
        FUN_019b7940(param_1);
        bVar1 = false;
        iVar3 = FUN_0040c770(DAT_0210e778);
        if (0 < iVar3) {
          pdVar5 = (double *)&DAT_0210e788;
          iVar6 = iVar3;
          bVar1 = false;
          do {
            dVar7 = (double)FUN_0040c850(*pdVar5 - *(double *)
                                                    (param_1 + 0xd8 + (longlong)local_30 * 8));
            if ((dVar7 < 1e-100) &&
               (dVar7 = (double)FUN_0040c850(pdVar5[1] +
                                             *(double *)(param_1 + 0x220 + (longlong)local_30 * 8)),
               dVar7 < 1e-100)) {
              bVar1 = true;
            }
            pdVar5 = pdVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (!bVar1) {
          DAT_0210e778 = (double)(iVar3 + 1);
          lVar4 = FUN_0040c770(DAT_0210e778);
          (&DAT_0210e778)[lVar4 * 2] =
               (double)*(undefined8 *)(param_1 + 0xd8 + (longlong)local_30 * 8);
          lVar4 = FUN_0040c770(DAT_0210e778);
          *(undefined8 *)(&DAT_0210e780 + lVar4 * 0x10) =
               *(undefined8 *)(param_1 + 0x220 + (longlong)local_30 * 8);
        }
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

