/* Ghidra address: 00e864e0 */
/* Ghidra symbol: FUN_00e864e0 */


undefined8 FUN_00e864e0(ushort *param_1,uint param_2,longlong param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  
  uVar7 = (ulonglong)*param_1;
  puVar10 = param_1;
  do {
    do {
      do {
        pbVar1 = &DAT_01ee1510 + uVar7;
        uVar3 = param_1[*pbVar1];
        uVar7 = (ulonglong)uVar3;
        uVar5 = (uint)uVar3;
        param_1 = param_1 + *pbVar1;
      } while ((ushort)(uVar3 - 0x8d) < 5);
    } while (uVar3 == 0x76);
    if (uVar3 == 0x87) {
      uVar3 = param_1[2];
      param_1 = param_1 + 2;
      if (uVar3 == 0x76) {
        uVar3 = param_1[DAT_01ee1586];
        param_1 = param_1 + DAT_01ee1586;
      }
      uVar5 = uVar3 - 0x8d & 0xffff;
      if ((uVar5 < 0x11) && ((0x1001fUL >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) {
        return 0;
      }
      iVar6 = FUN_00e864e0(param_1,param_2,param_3,param_4,1);
      if (iVar6 == 0) {
        return 0;
      }
      do {
        puVar2 = param_1 + param_1[1];
        param_1 = param_1 + param_1[1];
      } while (*puVar2 == 0x77);
      param_1 = param_1 + 2;
      while( true ) {
        uVar5 = (uint)*param_1;
        uVar8 = uVar5 - 0x76 & 0xffff;
        if ((0x1b < uVar8) || ((0xf800001UL >> ((ulonglong)uVar8 & 0x3f) & 1) == 0)) break;
        param_1 = param_1 + (byte)(&DAT_01ee1510)[*param_1];
      }
    }
    uVar9 = uVar5 - 0x7d;
    iVar6 = param_5;
    uVar8 = param_2;
    if ((uVar9 & 0xffff) < 0xf) {
      iVar4 = param_4;
      if ((0x18c0U >> (uVar9 & 0x1f) & 1) == 0) {
        if ((0x6300U >> (uVar9 & 0x1f) & 1) == 0) {
          if ((short)uVar9 != 0) goto LAB_00e866a9;
          iVar6 = 1;
        }
        else {
          uVar5 = 1 << ((byte)param_1[2] & 0x1f);
          if (0x1f < param_1[2]) {
            uVar5 = 1;
          }
          uVar8 = uVar5 | param_2;
        }
      }
LAB_00e8667c:
      iVar6 = FUN_00e864e0(param_1,uVar8,param_3,iVar4,iVar6);
      if (iVar6 == 0) {
        return 0;
      }
    }
    else {
LAB_00e866a9:
      iVar4 = param_4 + 1;
      if ((uVar5 - 0x81 & 0xffff) < 2) goto LAB_00e8667c;
      if (((uVar5 - 0x55 & 0xffff) < 10) && ((0x203U >> (uVar5 - 0x55 & 0x1f) & 1) != 0)) {
        if (param_1[1] != 0xc) {
          return 0;
        }
        if (0 < param_4) {
          return 0;
        }
        if ((*(uint *)(param_3 + 0x80) & param_2) != 0) {
          return 0;
        }
        if (*(int *)(param_3 + 0xa0) != 0 || param_5 != 0) {
          return 0;
        }
      }
      else if (1 < (uVar5 - 0x1b & 0xffff)) {
        return 0;
      }
    }
    puVar2 = puVar10 + puVar10[1];
    param_1 = puVar10 + puVar10[1];
    uVar7 = 0x77;
    puVar10 = param_1;
    if (*puVar2 != 0x77) {
      return 1;
    }
  } while( true );
}

