/* Ghidra address: 0040b760 */
/* Ghidra symbol: FUN_0040b760 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040b760(double param_1,double *param_2,double *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [40];
  double local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  double local_30 [3];
  
  uVar3 = 0;
  *param_2 = param_1;
  *param_3 = 0.0;
  local_50 = (double)FUN_0040c850(param_1);
  if (0.7853981633974483 < local_50) {
    if (3.9269908169872414 < local_50) {
      if (DAT_01dbab08 <= local_50) {
        uVar1 = FUN_0040a160(&local_50,3);
        local_40 = DAT_01dbaae0;
        local_38 = DAT_01dbaad8;
        local_30[0] = DAT_01dbaad0;
        *param_2 = local_50;
        *param_3 = 0.0;
        local_48 = 0;
        for (iVar5 = (uVar1 >> 4 & 0x7ff) - 0x3ff; 2 < iVar5; iVar5 = iVar5 + -1) {
          FUN_0040a1a0(local_30,(longlong)(iVar5 + 0x3ff));
          if (local_30[0] < *param_2) {
            FUN_0040b3d0(auStack_78,iVar5);
          }
        }
        uVar4 = 0;
        for (; -1 < iVar5; iVar5 = iVar5 + -1) {
          FUN_0040a1a0(local_30,(longlong)(iVar5 + 0x3ff));
          if (local_30[0] < *param_2) {
            uVar4 = uVar4 | (uint)(1 << ((byte)iVar5 & 0x1f));
            FUN_0040b3d0(auStack_78,iVar5);
          }
        }
        if (0.7853981633974483 < *param_2) {
          uVar4 = uVar4 + 1;
          FUN_0040b3d0(auStack_78,0);
        }
        if (param_1 < 0.0) {
          *param_2 = -*param_2;
          *param_3 = -*param_3;
          uVar4 = -uVar4;
        }
      }
      else {
        lVar2 = FUN_0040c840((local_50 - 0.7853981633974483) * _DAT_01dbab00);
        uVar4 = lVar2 + 1;
        if (param_1 < 0.0) {
          uVar4 = -uVar4;
        }
        dVar8 = (double)(longlong)uVar4 * _DAT_01dbaaf0;
        dVar9 = (double)(longlong)uVar4 * _DAT_01dbaaf8;
        param_1 = param_1 + (double)(longlong)uVar4 * _DAT_01dbaae8;
        dVar6 = dVar8 + param_1;
        dVar7 = (dVar8 - (dVar6 - (dVar6 - dVar8))) + (param_1 - (dVar6 - dVar8));
        dVar10 = dVar6 + dVar7;
        dVar8 = dVar9 + dVar10;
        dVar6 = (dVar9 - (dVar8 - (dVar8 - dVar9))) + (dVar10 - (dVar8 - dVar9)) +
                (dVar7 - (dVar10 - dVar6));
        dVar7 = dVar8 + dVar6;
        *param_2 = dVar7;
        *param_3 = dVar6 - (dVar7 - dVar8);
      }
    }
    else {
      if (2.356194490192345 < local_50) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      if (param_1 < 0.0) {
        uVar4 = -uVar4;
      }
      dVar6 = (double)(longlong)uVar4 * DAT_01dbaad8;
      dVar8 = (double)(longlong)uVar4 * DAT_01dbaae0;
      param_1 = param_1 - (double)(longlong)uVar4 * DAT_01dbaad0;
      *param_2 = param_1 - dVar6;
      *param_3 = -dVar6 - (*param_2 - param_1);
      *param_3 = *param_3 - dVar8;
    }
    uVar3 = (uint)uVar4 & 3;
  }
  return uVar3;
}

