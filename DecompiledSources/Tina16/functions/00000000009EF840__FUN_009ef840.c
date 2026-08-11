/* Ghidra address: 009ef840 */
/* Ghidra symbol: FUN_009ef840 */


ulonglong FUN_009ef840(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined7 uVar6;
  byte bVar7;
  undefined8 unaff_RDI;
  undefined6 uVar9;
  ulonglong uVar8;
  undefined7 uVar10;
  undefined1 auStack_48 [40];
  
  param_3 = param_3 & 0xffffffff;
  bVar3 = (byte)(param_2 & 0xffffffff);
  bVar7 = (byte)param_3;
  if ((byte)(bVar3 + 0x7f) < 0x20) {
    iVar5 = FUN_009ef7e0(auStack_48,0xbe,param_2 & 0xff,bVar7);
    uVar8 = (ulonglong)*(ushort *)(PTR_DAT_020044b0 + (longlong)iVar5 * 2);
  }
  else {
    uVar9 = (undefined6)((ulonglong)unaff_RDI >> 0x10);
    uVar10 = (undefined7)(param_3 >> 8);
    if (bVar3 == 0xa1) {
      if (bVar7 == 0xa4) {
        uVar8 = CONCAT62(uVar9,0xb7);
      }
      else if (bVar7 == 0xaa) {
        uVar8 = CONCAT62(uVar9,0x2014);
      }
      else {
        uVar4 = FUN_009ef750(param_1,CONCAT71((int7)((param_2 & 0xffffffff) >> 8),
                                              (char)(param_2 & 0xffffffff) + -0x80),
                             CONCAT71(uVar10,bVar7 + 0x80));
        uVar8 = (ulonglong)uVar4;
      }
    }
    else {
      uVar6 = (undefined7)((param_2 & 0xffffffff) >> 8);
      if (bVar3 == 0xa2) {
        if ((byte)(bVar7 + 0x5f) < 10) {
          uVar8 = CONCAT62(uVar9,bVar7 + 0x20cf);
        }
        else {
          uVar4 = FUN_009ef750(param_1,CONCAT71(uVar6,0x22),CONCAT71(uVar10,bVar7 + 0x80));
          uVar8 = (ulonglong)uVar4;
        }
      }
      else {
        uVar4 = FUN_009ef750(param_1,CONCAT71(uVar6,bVar3 + 0x80),CONCAT71(uVar10,bVar7 + 0x80));
        uVar8 = (ulonglong)uVar4;
      }
    }
    if ((short)uVar8 == -3) {
      if ((bVar3 == 0xa6) || (bVar3 == 0xa8)) {
        iVar5 = FUN_009ef7e0(auStack_48,0xbe,param_2 & 0xff,bVar7);
        if (iVar5 - 0x1c15U < 0x16) {
          uVar8 = (ulonglong)*(ushort *)(PTR_DAT_02001910 + (longlong)(iVar5 + -0x1c15) * 2);
        }
        else if (iVar5 - 0x1d6cU < 6) {
          uVar8 = (ulonglong)*(ushort *)(PTR_DAT_02001c38 + (longlong)(iVar5 + -0x1d6c) * 2);
        }
        if ((short)uVar8 != -3) goto LAB_009efa9c;
      }
      if ((byte)(bVar3 + 0x58) < 0x57) {
        iVar5 = FUN_009ef7e0(auStack_48,0x60,param_2 & 0xff,bVar7);
        if (iVar5 - 0xea0U < 0x2050) {
          uVar8 = (ulonglong)*(ushort *)(PTR_DAT_02004758 + (longlong)(iVar5 + -0xea0) * 2);
        }
        if ((short)uVar8 != -3) goto LAB_009efa9c;
      }
      uVar9 = (undefined6)(uVar8 >> 0x10);
      uVar1 = (ushort)param_3;
      if ((byte)(bVar3 + 0x5f) < 2) {
        if ((byte)(bVar7 - 0x40) < 0x3f) {
          lVar2 = (ulonglong)(uint)((int)CONCAT62(uVar9,bVar3 - 0x81) << 5) * 3;
          uVar8 = CONCAT62((int6)((ulonglong)lVar2 >> 0x10),(short)lVar2 + (uVar1 & 0xff) + -0x1b7a)
          ;
        }
        else if ((byte)(bVar7 + 0x80) < 0x21) {
          lVar2 = (ulonglong)(uint)((int)CONCAT62(uVar9,bVar3 - 0xa1) << 5) * 3;
          uVar8 = CONCAT62((int6)((ulonglong)lVar2 >> 0x10),(short)lVar2 + (uVar1 & 0xff) + -0x1b7b)
          ;
        }
      }
      else if (((byte)(bVar3 + 0x56) < 6) || ((byte)(bVar3 + 8) < 7)) {
        if ((byte)(bVar7 + 0x5f) < 0x57) {
          uVar8 = CONCAT62(uVar9,(bVar3 - 0xaa) * 0x5e + (uVar1 & 0xff) + -0x20a1);
        }
        else if ((byte)(bVar7 + 8) < 7) {
          uVar8 = CONCAT62(uVar9,(bVar3 - 0xf2) * 0x5e + (uVar1 & 0xff) + -0x20a1);
        }
      }
    }
  }
LAB_009efa9c:
  return uVar8 & 0xffffffff;
}

