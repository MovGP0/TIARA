/* Ghidra address: 0118bcf0 */
/* Ghidra symbol: FUN_0118bcf0 */


undefined8 FUN_0118bcf0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  int local_44;
  int local_40;
  
  iVar1 = *(int *)(*param_1 + 0x1fa0);
  iVar5 = (iVar1 + 1) / 2;
  local_44 = 0;
  iVar6 = iVar5;
  if (-1 < iVar5 + -1) {
    do {
      uVar7 = FUN_01190750(param_2,(double)local_44 * (6.2831853071796 / (double)iVar1));
      *(undefined8 *)(*param_2 + 0x33960 + (longlong)local_44 * 8) = uVar7;
      local_44 = local_44 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(*param_2 + 0xc);
  if (iVar6 == 1) {
    local_40 = 0;
    iVar6 = iVar5;
    if (-1 < iVar5 + -1) {
      do {
        iVar2 = iVar5 + -1;
        iVar4 = iVar2 - local_40;
        *(undefined8 *)(*param_1 + 0x50 + (longlong)iVar4 * 8) = *(undefined8 *)(*param_2 + 0x33960)
        ;
        local_44 = 1;
        if (0 < iVar2) {
          do {
            dVar8 = (double)FUN_0040bcd0((double)local_44 *
                                         (((double)local_40 * 6.2831853071796) / (double)iVar1));
            *(double *)(*param_1 + 0x50 + (longlong)iVar4 * 8) =
                 *(double *)(*param_1 + 0x50 + (longlong)iVar4 * 8) +
                 *(double *)(*param_2 + 0x33960 + (longlong)local_44 * 8) * 2.0 * dVar8;
            local_44 = local_44 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        lVar3 = (longlong)iVar4;
        *(double *)(*param_1 + 0x50 + lVar3 * 8) =
             *(double *)(*param_1 + 0x50 + lVar3 * 8) / (double)iVar1;
        *(undefined8 *)(*param_1 + 0x50 + (longlong)((iVar1 - iVar4) + -1) * 8) =
             *(undefined8 *)(*param_1 + 0x50 + lVar3 * 8);
        local_40 = local_40 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (((iVar6 != 2) && (iVar6 != 3)) && (iVar6 != 4)) {
    return 4;
  }
  return 0;
}

