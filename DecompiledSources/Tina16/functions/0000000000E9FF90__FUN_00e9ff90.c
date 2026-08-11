/* Ghidra address: 00e9ff90 */
/* Ghidra symbol: FUN_00e9ff90 */


ulonglong FUN_00e9ff90(int param_1,ushort *param_2,int param_3,longlong param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  
  uVar5 = 0xffffffff;
  if (-1 < param_3) {
    puVar13 = (ushort *)
              ((longlong)*(int *)(*(longlong *)(param_4 + 0x10) + (longlong)param_1 * 4) * 2 +
              *(longlong *)(param_4 + 0x98));
    puVar6 = param_2;
    if (param_5 == 0) {
      if (0 < param_3) {
        param_3 = param_3 + 1;
        do {
          if (*(ushort **)(param_4 + 0xa0) <= puVar6) {
            return 0xfffffffe;
          }
          if (*puVar13 != *puVar6) {
            return 0xffffffff;
          }
          puVar6 = puVar6 + 1;
          puVar13 = puVar13 + 1;
          param_3 = param_3 + -1;
        } while (1 < param_3);
      }
    }
    else if (*(int *)(param_4 + 0x68) == 0) {
      if (0 < param_3) {
        param_3 = param_3 + 1;
        do {
          if (*(ushort **)(param_4 + 0xa0) <= puVar6) {
            return 0xfffffffe;
          }
          uVar4 = *puVar6;
          uVar10 = *puVar13;
          if ((ulonglong)uVar10 < 0x100) {
            bVar3 = *(byte *)(*(longlong *)(param_4 + 0x48) + (ulonglong)uVar10);
            uVar10 = (ushort)bVar3;
            uVar11 = (ushort)bVar3;
            if (0xff < uVar4) goto LAB_00ea01a6;
LAB_00ea01b8:
            if (uVar10 != *(byte *)(*(longlong *)(param_4 + 0x48) + (ulonglong)uVar4)) {
              return 0xffffffff;
            }
          }
          else {
            uVar11 = uVar10;
            if (uVar4 < 0x100) goto LAB_00ea01b8;
LAB_00ea01a6:
            if (uVar11 != uVar4) {
              return 0xffffffff;
            }
          }
          puVar13 = puVar13 + 1;
          puVar6 = puVar6 + 1;
          param_3 = param_3 + -1;
        } while (1 < param_3);
      }
    }
    else if (0 < param_3) {
      puVar2 = puVar13 + param_3;
      do {
        if (*(ushort **)(param_4 + 0xa0) <= puVar6) {
          return 0xfffffffe;
        }
        uVar4 = *puVar6;
        uVar12 = (uint)uVar4;
        if ((uVar12 & 0xfc00) == 0xd800) {
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 2;
          uVar12 = (uVar4 & 0x3ff) * 0x400 + 0x10000 + (*puVar1 & 0x3ff);
        }
        else {
          puVar6 = puVar6 + 1;
        }
        uVar4 = *puVar13;
        uVar7 = (uint)uVar4;
        if ((uVar7 & 0xfc00) == 0xd800) {
          puVar1 = puVar13 + 1;
          puVar13 = puVar13 + 2;
          uVar7 = (uVar4 & 0x3ff) * 0x400 + 0x10000 + (*puVar1 & 0x3ff);
        }
        else {
          puVar13 = puVar13 + 1;
        }
        if ((uVar12 != uVar7) &&
           (uVar12 != uVar7 + *(int *)(&DAT_01ee2144 +
                                      (ulonglong)
                                      *(ushort *)
                                       (&DAT_01ee59c0 +
                                       ((longlong)(int)(uVar7 % 0x80) +
                                       (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar7 >> 7] * 0x80) * 2
                                       ) * 8))) {
          uVar9 = *(uint *)(&DAT_01ee2000 +
                           (ulonglong)
                           (byte)(&DAT_01ee2143)
                                 [(ulonglong)
                                  *(ushort *)
                                   (&DAT_01ee59c0 +
                                   ((longlong)(int)(uVar7 % 0x80) +
                                   (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar7 >> 7] * 0x80) * 2) *
                                  8] * 4);
          if (uVar12 < uVar9) {
            return 0xffffffff;
          }
          puVar8 = (uint *)(&DAT_01ee2004 +
                           (ulonglong)
                           (byte)(&DAT_01ee2143)
                                 [(ulonglong)
                                  *(ushort *)
                                   (&DAT_01ee59c0 +
                                   ((longlong)(int)(uVar7 % 0x80) +
                                   (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar7 >> 7] * 0x80) * 2) *
                                  8] * 4);
          while (uVar12 != uVar9) {
            uVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            if (uVar12 < uVar9) {
              return 0xffffffff;
            }
          }
        }
      } while (puVar13 < puVar2);
    }
    uVar5 = (ulonglong)((longlong)puVar6 - (longlong)param_2) >> 1 & 0xffffffff;
  }
  return uVar5;
}

