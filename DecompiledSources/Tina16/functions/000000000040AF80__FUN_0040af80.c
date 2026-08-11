/* Ghidra address: 0040af80 */
/* Ghidra symbol: FUN_0040af80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040af80(double param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ushort uStackX_e;
  double local_30;
  
  uStackX_e = (ushort)((ulonglong)param_1 >> 0x30);
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    return DAT_01dbaa50;
  }
  if ((longlong)param_1 < 0) {
    uVar3 = 0xc0874910d52d3051;
    if (0xffef < uStackX_e) goto LAB_0040b0ca;
    if ((uStackX_e < 0xc090) && ((ulonglong)param_1 < 0xc0874910d52d3052)) {
      dVar4 = param_1 * DAT_01dbaa20;
      iVar2 = (int)(dVar4 - DAT_01dba9f0);
      dVar6 = (double)iVar2;
      if (-0x3ff < iVar2) goto LAB_0040b117;
      if (DAT_01dbaa40 < dVar4) {
        if (DAT_01dbaa48 < dVar4) {
          local_30 = (double)(0x10000000000000 >> (2U - (char)iVar2 & 0x3f));
        }
        else {
          local_30 = 4.94065645841247e-324;
          dVar6 = DAT_01dbaa48;
        }
        goto LAB_0040b127;
      }
    }
LAB_0040b0ec:
    dVar6 = 0.0;
  }
  else {
    uVar3 = 0x40862e42fefa39ef;
    if (uStackX_e < 0x7ff0) {
      if ((uStackX_e < 0x4087) && ((ulonglong)param_1 < 0x40862e42fefa39f0)) {
        iVar2 = (int)(param_1 * DAT_01dbaa20 + DAT_01dba9f0);
        dVar6 = (double)iVar2;
        if (0x3ff < iVar2) {
          local_30 = 1.2711610061536464e+308;
          dVar6 = DAT_01dbaa38;
          goto LAB_0040b127;
        }
LAB_0040b117:
        local_30 = (double)((longlong)(iVar2 + 0x3ff) << 0x34);
LAB_0040b127:
        param_1 = param_1 - dVar6 * _DAT_01dbaa28;
        dVar6 = dVar6 * _DAT_01dbaa30;
        dVar4 = param_1 + dVar6;
        iVar2 = (int)(dVar4 * _DAT_01dba9e8 +
                     (double)((ulonglong)DAT_01dba9f0 | (ulonglong)dVar4 & _DAT_01dbaa60));
        lVar1 = (longlong)iVar2 * 0x10;
        param_1 = param_1 - (double)iVar2 * DAT_01dba9f8;
        dVar4 = param_1 + dVar6;
        dVar5 = dVar4 * dVar4;
        dVar6 = dVar6 + dVar5 * (DAT_01dba9f0 +
                                dVar4 * (DAT_01dbaa00 + DAT_01dbaa10 * dVar5 +
                                        (DAT_01dbaa08 + DAT_01dbaa18 * dVar5) * dVar4));
        dVar4 = *(double *)(&DAT_01dba5d8 + lVar1) + DAT_01dbaa50;
        dVar5 = (*(double *)(&DAT_01dba5d8 + lVar1) - (dVar4 - DAT_01dbaa50)) +
                *(double *)(&DAT_01dba5e0 + lVar1);
        dVar7 = dVar4 + dVar5;
        dVar5 = dVar5 - (dVar7 - dVar4);
        return local_30 *
               (dVar6 * dVar5 + param_1 * dVar5 + dVar5 + dVar6 * dVar7 + param_1 * dVar7 + dVar7);
      }
    }
    else {
LAB_0040b0ca:
      if (param_1 != INFINITY) {
        if (param_1 != -INFINITY) {
          return param_1;
        }
        goto LAB_0040b0ec;
      }
    }
    FUN_00409f50(8,CONCAT71((int7)((ulonglong)uVar3 >> 8),1));
    dVar6 = DAT_01dbaa58;
  }
  return dVar6;
}

