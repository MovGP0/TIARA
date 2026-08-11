/* Ghidra address: 00e8fd30 */
/* Ghidra symbol: FUN_00e8fd30 */


int FUN_00e8fd30(longlong param_1,undefined8 *param_2,uint param_3,longlong param_4,uint param_5,
                uint param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  uint local_64;
  
  local_64 = 0xff;
  if (param_6 < 0xff) {
    local_64 = param_6;
  }
  iVar11 = 0;
  if ((param_3 & 1) != 0) {
    iVar11 = 0;
    if ((param_3 & 0x800) == 0) {
      if (param_5 <= local_64) {
        uVar6 = 0xffffff00;
        if (0xffffff00 < ~param_6) {
          uVar6 = ~param_6;
        }
        uVar7 = (ulonglong)param_5 - 1;
        do {
          bVar1 = *(byte *)(*(longlong *)(param_4 + 8) + 1 + uVar7);
          uVar8 = (ulonglong)(bVar1 >> 3);
          *(byte *)(param_1 + uVar8) = *(byte *)(param_1 + uVar8) | (byte)(1 << (bVar1 & 7));
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_64);
        iVar11 = -uVar6 - param_5;
      }
    }
    else {
      param_3 = param_3 & 0xfffffffe;
      if (param_5 <= param_6) {
        iVar11 = 0;
        uVar6 = param_5;
        uVar5 = param_6;
        do {
          while( true ) {
            uVar7 = (ulonglong)
                    (byte)(&DAT_01ee2143)
                          [(ulonglong)
                           *(ushort *)
                            (&DAT_01ee59c0 +
                            ((longlong)((int)uVar6 % 0x80) +
                            (ulonglong)
                            (byte)(&DAT_01ee37c0)
                                  [(int)(((uint)((int)uVar6 >> 0x1f) >> 0x19) + uVar6) >> 7] * 0x80)
                            * 2) * 8];
            uVar3 = param_5;
            if (uVar7 == 0) break;
            uVar3 = *(uint *)(&DAT_01ee2000 + uVar7 * 4);
            if (uVar3 == 0xffffffff) {
              iVar2 = 0;
            }
            else {
              puVar15 = &DAT_01ee2000 + uVar7 * 4;
              iVar2 = 0;
              do {
                if (uVar3 == uVar6) {
                  lVar13 = 0;
                }
                else {
                  lVar9 = -0x100000000;
                  lVar14 = 0;
                  do {
                    lVar13 = lVar14;
                    lVar9 = lVar9 + 0x100000000;
                    lVar14 = lVar13 + 1;
                  } while ((int)(lVar13 + 1) + uVar3 == *(int *)(puVar15 + lVar13 * 4 + 4));
                  iVar4 = FUN_00e8fd30(param_1,param_2,param_3,param_4,uVar3,
                                       *(undefined4 *)(puVar15 + (lVar9 >> 0x1e)));
                  iVar2 = iVar2 + iVar4;
                }
                lVar14 = (lVar13 << 0x20) + 0x100000000 >> 0x1e;
                uVar3 = *(uint *)(puVar15 + lVar14);
                puVar15 = puVar15 + lVar14;
              } while (uVar3 != 0xffffffff);
            }
            uVar6 = uVar6 + 1;
LAB_00e9009d:
            iVar11 = iVar11 + iVar2;
            uVar3 = param_5;
joined_r0x00e8ff75:
            param_5 = uVar3;
            param_6 = uVar5;
            if (uVar5 < uVar6) goto LAB_00e900b7;
          }
          iVar2 = *(int *)(&DAT_01ee2144 +
                          (ulonglong)
                          *(ushort *)
                           (&DAT_01ee59c0 +
                           ((longlong)((int)uVar6 % 0x80) +
                           (ulonglong)
                           (byte)(&DAT_01ee37c0)
                                 [(int)(((uint)((int)uVar6 >> 0x1f) >> 0x19) + uVar6) >> 7] * 0x80)
                           * 2) * 8);
          if (iVar2 == 0) {
            uVar6 = uVar6 + 1;
            goto joined_r0x00e8ff75;
          }
          uVar12 = iVar2 + uVar6;
          param_6 = uVar12;
          while( true ) {
            uVar6 = uVar6 + 1;
            if ((uVar5 < uVar6) ||
               ((&DAT_01ee2143)
                [(ulonglong)
                 *(ushort *)
                  (&DAT_01ee59c0 +
                  ((longlong)((int)uVar6 % 0x80) +
                  (ulonglong)
                  (byte)(&DAT_01ee37c0)[(int)(((uint)((int)uVar6 >> 0x1f) >> 0x19) + uVar6) >> 7] *
                  0x80) * 2) * 8] != '\0')) goto LAB_00e8ff90;
            if (iVar2 + uVar6 !=
                *(int *)(&DAT_01ee2144 +
                        (ulonglong)
                        *(ushort *)
                         (&DAT_01ee59c0 +
                         ((longlong)((int)uVar6 % 0x80) +
                         (ulonglong)
                         (byte)(&DAT_01ee37c0)
                               [(int)(((uint)((int)uVar6 >> 0x1f) >> 0x19) + uVar6) >> 7] * 0x80) *
                         2) * 8) + uVar6) break;
            param_6 = param_6 + 1;
          }
          param_6 = iVar2 + -1 + uVar6;
LAB_00e8ff90:
          if (((param_5 <= uVar12) && (param_6 <= uVar5)) ||
             ((param_5 - 1 <= param_6 && (uVar3 = uVar12, uVar12 < param_5))))
          goto joined_r0x00e8ff75;
          if ((uVar5 + 1 < uVar12) || (param_6 <= uVar5)) {
            iVar2 = FUN_00e8fd30(param_1,param_2,param_3,param_4,uVar12,param_6);
            goto LAB_00e9009d;
          }
          if ((local_64 < param_6) && (local_64 = 0xff, param_6 < 0xff)) {
            local_64 = param_6;
          }
          uVar5 = param_6;
        } while (uVar6 <= param_6);
      }
    }
  }
LAB_00e900b7:
  uVar6 = 0xffff;
  if ((param_3 & 0x800) != 0) {
    uVar6 = param_6;
  }
  uVar5 = param_5;
  if (param_6 < 0x10000) {
    uVar6 = param_6;
  }
  for (; uVar5 <= local_64; uVar5 = uVar5 + 1) {
    *(byte *)(param_1 + (ulonglong)(uVar5 >> 3)) =
         *(byte *)(param_1 + (ulonglong)(uVar5 >> 3)) | (byte)(1 << ((byte)uVar5 & 7));
    iVar11 = iVar11 + 1;
  }
  uVar5 = 0x100;
  if (0x100 < param_5) {
    uVar5 = param_5;
  }
  if (uVar5 <= uVar6) {
    puVar10 = (undefined2 *)*param_2;
    if ((param_3 & 0x800) == 0) {
      if (uVar5 < uVar6) {
        *puVar10 = 2;
        puVar10[1] = (short)uVar5;
        puVar10[2] = (short)uVar6;
        puVar10 = puVar10 + 3;
      }
      else if (uVar5 == uVar6) {
        *puVar10 = 1;
        puVar10[1] = (short)uVar6;
        puVar10 = puVar10 + 2;
      }
    }
    else if (uVar5 < uVar6) {
      *puVar10 = 2;
      uVar5 = FUN_00ea1290(uVar5,puVar10 + 1);
      uVar6 = FUN_00ea1290(uVar6,puVar10 + (ulonglong)uVar5 + 1);
      puVar10 = puVar10 + (ulonglong)uVar5 + 1 + uVar6;
    }
    else if (uVar5 == uVar6) {
      *puVar10 = 1;
      uVar6 = FUN_00ea1290(uVar6,puVar10 + 1);
      puVar10 = puVar10 + (ulonglong)uVar6 + 1;
    }
    *param_2 = puVar10;
  }
  return iVar11;
}

