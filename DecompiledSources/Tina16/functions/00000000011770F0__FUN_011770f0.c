/* Ghidra address: 011770f0 */
/* Ghidra symbol: FUN_011770f0 */


undefined8 FUN_011770f0(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong local_20;
  
  *(undefined8 *)(*param_2 + 0x1618) = *(undefined8 *)*param_1;
  *(undefined4 *)(*param_2 + 0x1650) = *(undefined4 *)(*param_1 + 0xcc);
  if (param_3 == 0) {
    *(undefined8 *)(*param_2 + 0x1620) = *(undefined8 *)(*param_1 + 8);
    iVar6 = *(int *)(*param_2 + 0x1650);
    iVar3 = 0;
    puVar4 = (undefined8 *)PTR_DAT_020046f8;
    puVar5 = (undefined8 *)PTR_DAT_020048c0;
    if (iVar6 - 1U < 0x80000000) {
      do {
        *puVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 8) + (longlong)iVar3 * 8);
        *puVar5 = *(undefined8 *)(*(longlong *)(*param_1 + 0x10) + (longlong)iVar3 * 8);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(*param_2 + 0x1650);
    iVar3 = 0;
    puVar4 = (undefined8 *)PTR_DAT_02002310;
    puVar5 = (undefined8 *)PTR_DAT_02002690;
    if (-1 < iVar6 + -1) {
      do {
        *puVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x18) + (longlong)iVar3 * 8);
        *puVar5 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + (longlong)iVar3 * 8);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 != 0);
    }
    if (*(int *)(*param_1 + 0xd4) == 0) {
      *(undefined8 *)(*param_2 + 0x1630) = 0;
      *(undefined8 *)(*param_2 + 0x1638) = param_4;
    }
    else {
      if (*(int *)(*param_1 + 0xd4) != 1) {
        return 4;
      }
      *(undefined8 *)(*param_2 + 0x1630) = 0x3ff0000000000000;
      *(undefined8 *)(*param_2 + 0x1638) = 0;
    }
  }
  else {
    if (param_3 != 1) {
      return 4;
    }
    *(undefined8 *)(*param_2 + 0x1628) = *(undefined8 *)(*param_1 + 0x10);
    if (DAT_02041c60 == '\0') {
      *(undefined8 *)(*param_2 + 0x1640) = 0x4066800000000000;
      *(undefined8 *)(*param_2 + 0x1648) = 0xc066800000000000;
    }
    else {
      local_20 = *param_2 + 0x1618;
      FUN_01176a10(&local_20);
      *(undefined8 *)(*param_2 + 0x1640) = 0xc0c5180000000000;
      iVar6 = *(int *)(*param_2 + 0x1650);
      iVar3 = 0;
      if (-1 < iVar6 + -1) {
        do {
          dVar2 = *(double *)(*(longlong *)(*param_2 + 0x1628) + (longlong)iVar3 * 8);
          if (*(double *)(*param_2 + 0x1640) <= dVar2 && dVar2 != *(double *)(*param_2 + 0x1640)) {
            *(undefined8 *)(*param_2 + 0x1640) =
                 *(undefined8 *)(*(longlong *)(*param_2 + 0x1628) + (longlong)iVar3 * 8);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined8 *)(*param_2 + 0x1648) = 0x40c5180000000000;
      iVar6 = *(int *)(*param_2 + 0x1650);
      iVar3 = 0;
      if (-1 < iVar6 + -1) {
        do {
          pdVar1 = (double *)(*(longlong *)(*param_2 + 0x1628) + (longlong)iVar3 * 8);
          if (*pdVar1 <= *(double *)(*param_2 + 0x1648) && *(double *)(*param_2 + 0x1648) != *pdVar1
             ) {
            *(undefined8 *)(*param_2 + 0x1648) =
                 *(undefined8 *)(*(longlong *)(*param_2 + 0x1628) + (longlong)iVar3 * 8);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      DAT_02041c68 = 0.0;
      while (0.0 < *(double *)(*param_2 + 0x1640)) {
        *(double *)(*param_2 + 0x1640) = *(double *)(*param_2 + 0x1640) - 360.0;
        *(double *)(*param_2 + 0x1648) = *(double *)(*param_2 + 0x1648) - 360.0;
        DAT_02041c68 = DAT_02041c68 - 360.0;
      }
      if (DAT_02041c68 != 0.0) {
        iVar6 = *(int *)(*param_2 + 0x1650);
        iVar3 = 0;
        if (-1 < iVar6 + -1) {
          do {
            *(double *)(*(longlong *)(*param_2 + 0x1628) + (longlong)iVar3 * 8) =
                 *(double *)(*(longlong *)(*param_2 + 0x1628) + (longlong)iVar3 * 8) + DAT_02041c68;
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      DAT_02041c68 = 0.0;
    }
  }
  *(undefined4 *)(*param_2 + 0x1650) = *(undefined4 *)(*param_1 + 0xcc);
  return 0;
}

