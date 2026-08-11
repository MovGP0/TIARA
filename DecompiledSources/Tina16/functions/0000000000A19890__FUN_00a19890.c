/* Ghidra address: 00a19890 */
/* Ghidra symbol: FUN_00a19890 */


void FUN_00a19890(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  short sVar11;
  int local_78;
  int local_74;
  int local_6c;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_4c;
  int local_44;
  int local_3c;
  
  piVar7 = &local_78;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  piVar4 = *(int **)(param_2 + 0x58);
  psVar10 = (short *)(param_3 + 0x70);
  uVar3 = 8;
  do {
    sVar11 = psVar10[-0x20];
    if (psVar10[-0x30] == 0 && sVar11 == 0) {
      if ((psVar10[-0x10] != 0) || (*psVar10 != 0)) {
        sVar11 = 0;
        goto LAB_00a1990d;
      }
      iVar8 = (int)psVar10[-0x38] * *piVar4 * 4;
      *piVar7 = iVar8;
    }
    else {
LAB_00a1990d:
      iVar9 = (int)psVar10[-0x38] * *piVar4 * 0x8000;
      iVar8 = (int)psVar10[-0x30] * piVar4[8] * 0x73fc +
              (int)sVar11 * piVar4[0x18] * -0x28ba +
              (int)psVar10[-0x10] * piVar4[0x28] * 0x1b37 + (int)*psVar10 * piVar4[0x38] * -0x1712;
      *piVar7 = iVar9 + 0x1000 + iVar8 >> 0xd;
      iVar8 = (iVar9 + 0x1000) - iVar8 >> 0xd;
    }
    piVar7[8] = iVar8;
    if (uVar3 < 2) {
      uVar5 = (ulonglong)param_5;
      lVar2 = *param_4;
      if (((local_74 == 0 && local_6c == 0) && (local_6c = 0, local_64 == 0)) && (local_5c == 0)) {
        uVar6 = *(undefined1 *)(lVar1 + 0x80 + (ulonglong)(local_78 + 0x10U >> 5 & 0x3ff));
        *(undefined1 *)(lVar2 + uVar5) = uVar6;
      }
      else {
        iVar8 = local_74 * 0x73fc + local_5c * -0x1712 + local_64 * 0x1b37 + local_6c * -0x28ba;
        *(undefined1 *)(lVar2 + uVar5) =
             *(undefined1 *)
              (lVar1 + 0x80 +
              (ulonglong)((uint)(local_78 * 0x8000 + 0x80000 + iVar8) >> 0x14 & 0x3ff));
        uVar6 = *(undefined1 *)
                 (lVar1 + 0x80 +
                 (ulonglong)((uint)((local_78 * 0x8000 + 0x80000) - iVar8) >> 0x14 & 0x3ff));
      }
      *(undefined1 *)(lVar2 + 1 + uVar5) = uVar6;
      lVar2 = param_4[1];
      if (((local_54 == 0 && local_4c == 0) && (local_4c = 0, local_44 == 0)) && (local_3c == 0)) {
        uVar6 = *(undefined1 *)(lVar1 + 0x80 + (ulonglong)(local_58 + 0x10U >> 5 & 0x3ff));
        *(undefined1 *)(lVar2 + uVar5) = uVar6;
      }
      else {
        iVar8 = local_54 * 0x73fc + local_3c * -0x1712 + local_44 * 0x1b37 + local_4c * -0x28ba;
        *(undefined1 *)(lVar2 + uVar5) =
             *(undefined1 *)
              (lVar1 + 0x80 +
              (ulonglong)((uint)(local_58 * 0x8000 + 0x80000 + iVar8) >> 0x14 & 0x3ff));
        uVar6 = *(undefined1 *)
                 (lVar1 + 0x80 +
                 (ulonglong)((uint)((local_58 * 0x8000 + 0x80000) - iVar8) >> 0x14 & 0x3ff));
      }
      *(undefined1 *)(lVar2 + 1 + uVar5) = uVar6;
      return;
    }
    do {
      piVar7 = piVar7 + 1;
      piVar4 = piVar4 + 1;
      uVar3 = uVar3 - 1;
      psVar10 = psVar10 + 1;
      if (6 < uVar3) break;
    } while ((0x54U >> (uVar3 & 0x1f) & 1) != 0);
  } while( true );
}

