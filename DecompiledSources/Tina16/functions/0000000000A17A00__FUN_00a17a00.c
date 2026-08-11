/* Ghidra address: 00a17a00 */
/* Ghidra symbol: FUN_00a17a00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a17a00(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  undefined1 auVar56 [14];
  undefined1 auVar57 [14];
  undefined1 auVar58 [14];
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  undefined1 auVar61 [14];
  undefined1 auVar62 [14];
  undefined1 auVar63 [14];
  undefined1 auVar64 [14];
  undefined1 auVar65 [14];
  undefined1 auVar66 [12];
  undefined1 auVar67 [14];
  undefined1 auVar68 [12];
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  undefined8 *puVar78;
  longlong lVar79;
  longlong lVar80;
  int iVar81;
  longlong lVar82;
  code *pcVar83;
  code *pcVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined2 uVar111;
  
  iVar76 = iRam0000000001e6f87c;
  iVar75 = iRam0000000001e6f878;
  iVar74 = iRam0000000001e6f874;
  iVar73 = _DAT_01e6f870;
  dVar72 = dRam0000000001e6f868;
  dVar71 = _DAT_01e6f860;
  dVar70 = dRam0000000001e6f858;
  dVar69 = _DAT_01e6f850;
  if (0 < (int)param_1[7]) {
    lVar8 = param_1[0x4b];
    lVar80 = param_1[0x26];
    lVar82 = 0;
    iVar81 = 0;
    pcVar83 = (code *)0x0;
    do {
      uVar7 = *(undefined4 *)(lVar80 + 0x24);
      pcVar84 = (code *)&LAB_00a19af0;
      iVar77 = 0;
      switch(uVar7) {
      case 1:
        break;
      case 2:
        pcVar84 = FUN_00a19890;
        iVar77 = 0;
        break;
      default:
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 7;
        *(undefined4 *)(lVar9 + 0x2c) = uVar7;
        puVar78 = (undefined8 *)*param_1;
LAB_00a17b34:
        (*(code *)*puVar78)(param_1);
        pcVar84 = pcVar83;
        iVar77 = iVar81;
        break;
      case 4:
        pcVar84 = FUN_00a19570;
        iVar77 = 0;
        break;
      case 8:
        if ((int)param_1[0xc] == 1) {
          pcVar84 = FUN_00a19190;
          iVar77 = 1;
        }
        else {
          if ((int)param_1[0xc] != 2) {
            puVar78 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar78 + 5) = 0x30;
            goto LAB_00a17b34;
          }
          pcVar84 = FUN_00a18c70;
          iVar77 = 2;
        }
      }
      iVar81 = iVar77;
      *(code **)(lVar8 + 8 + lVar82 * 8) = pcVar84;
      if (((*(int *)(lVar80 + 0x30) != 0) && (*(int *)(lVar8 + 0x58 + lVar82 * 4) != iVar81)) &&
         (puVar10 = *(ulonglong **)(lVar80 + 0x50), puVar10 != (ulonglong *)0x0)) {
        *(int *)(lVar8 + 0x58 + lVar82 * 4) = iVar81;
        if (iVar81 == 2) {
          lVar9 = *(longlong *)(lVar80 + 0x58);
          lVar79 = 0;
          do {
            dVar3 = *(double *)((longlong)&DAT_01e6f900 + lVar79);
            uVar5 = *(ushort *)((longlong)puVar10 + lVar79 * 2 + 4);
            uVar6 = *(ushort *)((longlong)puVar10 + lVar79 * 2 + 6);
            puVar78 = (undefined8 *)(lVar9 + lVar79 * 4);
            *puVar78 = CONCAT44((float)(DAT_01e6f840 *
                                       (double)*(ushort *)((longlong)puVar10 + lVar79 * 2 + 2) *
                                       dVar3),
                                (float)((double)*(ushort *)((longlong)puVar10 + lVar79 * 2) * dVar3)
                               );
            puVar78[1] = CONCAT44((float)((double)uVar6 * dVar3 * dVar70),
                                  (float)((double)uVar5 * dVar3 * dVar69));
            auVar101._12_4_ =
                 (float)((double)*(ushort *)((longlong)puVar10 + lVar79 * 2 + 0xe) * dVar3 * dVar72)
            ;
            auVar101._8_4_ =
                 (float)((double)*(ushort *)((longlong)puVar10 + lVar79 * 2 + 0xc) * dVar3 * dVar71)
            ;
            auVar101._0_4_ =
                 (float)((double)*(ushort *)((longlong)puVar10 + lVar79 * 2 + 8) * dVar3);
            auVar101._4_4_ =
                 (float)(DAT_01e6f848 *
                        (double)*(ushort *)((longlong)puVar10 + lVar79 * 2 + 10) * dVar3);
            *(undefined1 (*) [16])(lVar9 + 0x10 + lVar79 * 4) = auVar101;
            lVar79 = lVar79 + 8;
          } while (lVar79 != 0x40);
        }
        else if (iVar81 == 1) {
          lVar9 = *(longlong *)(lVar80 + 0x58);
          lVar79 = 0;
          do {
            uVar2 = *(ulonglong *)((longlong)puVar10 + lVar79 * 2);
            auVar28._8_4_ = 0;
            auVar28._0_8_ = uVar2;
            auVar28._12_2_ = (short)(uVar2 >> 0x30);
            auVar46._8_2_ = (short)(uVar2 >> 0x20);
            auVar46._0_8_ = uVar2;
            auVar46._10_4_ = auVar28._10_4_;
            auVar65._6_8_ = 0;
            auVar65._0_6_ = auVar46._8_6_;
            uVar4 = *(ulonglong *)((longlong)&DAT_01e6f880 + lVar79 * 2);
            uVar111 = (undefined2)(uVar4 >> 0x30);
            auVar104._8_4_ = 0;
            auVar104._0_8_ = uVar4;
            auVar104._12_2_ = uVar111;
            auVar104._14_2_ = uVar111;
            uVar111 = (undefined2)(uVar4 >> 0x20);
            auVar103._12_4_ = auVar104._12_4_;
            auVar103._8_2_ = 0;
            auVar103._0_8_ = uVar4;
            auVar103._10_2_ = uVar111;
            auVar102._10_6_ = auVar103._10_6_;
            auVar102._8_2_ = uVar111;
            auVar102._0_8_ = uVar4;
            uVar111 = (undefined2)(uVar4 >> 0x10);
            auVar66._4_8_ = auVar102._8_8_;
            auVar66._2_2_ = uVar111;
            auVar66._0_2_ = uVar111;
            auVar105._0_4_ = (uint)(short)uVar4;
            auVar105._4_4_ = auVar66._0_4_ >> 0x10;
            auVar105._8_4_ = auVar102._8_4_ >> 0x10;
            auVar105._12_4_ = auVar103._12_4_ >> 0x10;
            piVar1 = (int *)(lVar9 + lVar79 * 4);
            *piVar1 = (int)((ulonglong)auVar105._0_4_ * (uVar2 & 0xffff)) + iVar73 >> 0xc;
            piVar1[1] = (int)CONCAT82(SUB148(auVar65 << 0x40,6),(short)(uVar2 >> 0x10)) *
                        auVar105._4_4_ + iVar74 >> 0xc;
            piVar1[2] = (int)((auVar105._8_8_ & 0xffffffff) *
                             ((ulonglong)auVar46._8_6_ & 0xffffffff)) + iVar75 >> 0xc;
            piVar1[3] = (int)((auVar28._10_4_ >> 0x10) * auVar105._12_4_ + iVar76) >> 0xc;
            uVar2 = *(ulonglong *)((longlong)puVar10 + lVar79 * 2 + 8);
            auVar29._8_4_ = 0;
            auVar29._0_8_ = uVar2;
            auVar29._12_2_ = (short)(uVar2 >> 0x30);
            auVar47._8_2_ = (short)(uVar2 >> 0x20);
            auVar47._0_8_ = uVar2;
            auVar47._10_4_ = auVar29._10_4_;
            auVar67._6_8_ = 0;
            auVar67._0_6_ = auVar47._8_6_;
            uVar4 = *(ulonglong *)((longlong)&DAT_01e6f888 + lVar79 * 2);
            uVar111 = (undefined2)(uVar4 >> 0x30);
            auVar108._8_4_ = 0;
            auVar108._0_8_ = uVar4;
            auVar108._12_2_ = uVar111;
            auVar108._14_2_ = uVar111;
            uVar111 = (undefined2)(uVar4 >> 0x20);
            auVar107._12_4_ = auVar108._12_4_;
            auVar107._8_2_ = 0;
            auVar107._0_8_ = uVar4;
            auVar107._10_2_ = uVar111;
            auVar106._10_6_ = auVar107._10_6_;
            auVar106._8_2_ = uVar111;
            auVar106._0_8_ = uVar4;
            uVar111 = (undefined2)(uVar4 >> 0x10);
            auVar68._4_8_ = auVar106._8_8_;
            auVar68._2_2_ = uVar111;
            auVar68._0_2_ = uVar111;
            auVar109._0_4_ = (uint)(short)uVar4;
            auVar109._4_4_ = auVar68._0_4_ >> 0x10;
            auVar109._8_4_ = auVar106._8_4_ >> 0x10;
            auVar109._12_4_ = auVar107._12_4_ >> 0x10;
            auVar110._0_4_ = (int)((ulonglong)auVar109._0_4_ * (uVar2 & 0xffff)) + iVar73 >> 0xc;
            auVar110._4_4_ =
                 (int)CONCAT82(SUB148(auVar67 << 0x40,6),(short)(uVar2 >> 0x10)) * auVar109._4_4_ +
                 iVar74 >> 0xc;
            auVar110._8_4_ =
                 (int)((auVar109._8_8_ & 0xffffffff) * ((ulonglong)auVar47._8_6_ & 0xffffffff)) +
                 iVar75 >> 0xc;
            auVar110._12_4_ = (int)((auVar29._10_4_ >> 0x10) * auVar109._12_4_ + iVar76) >> 0xc;
            *(undefined1 (*) [16])(lVar9 + 0x10 + lVar79 * 4) = auVar110;
            lVar79 = lVar79 + 8;
          } while (lVar79 != 0x40);
        }
        else if (iVar81 == 0) {
          pauVar11 = *(undefined1 (**) [16])(lVar80 + 0x58);
          uVar2 = *puVar10;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar2;
          auVar12._12_2_ = (short)(uVar2 >> 0x30);
          auVar30._8_2_ = (short)(uVar2 >> 0x20);
          auVar30._0_8_ = uVar2;
          auVar30._10_4_ = auVar12._10_4_;
          auVar49._6_8_ = 0;
          auVar49._0_6_ = auVar30._8_6_;
          auVar85._6_8_ = SUB148(auVar49 << 0x40,6);
          auVar85._4_2_ = (short)(uVar2 >> 0x10);
          auVar85._0_2_ = (ushort)uVar2;
          auVar85._2_2_ = 0;
          auVar85._14_2_ = 0;
          *pauVar11 = auVar85;
          uVar2 = puVar10[1];
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar2;
          auVar13._12_2_ = (short)(uVar2 >> 0x30);
          auVar31._8_2_ = (short)(uVar2 >> 0x20);
          auVar31._0_8_ = uVar2;
          auVar31._10_4_ = auVar13._10_4_;
          auVar50._6_8_ = 0;
          auVar50._0_6_ = auVar31._8_6_;
          auVar48._4_2_ = (short)(uVar2 >> 0x10);
          auVar48._0_4_ = (uint)uVar2;
          auVar48._6_8_ = SUB148(auVar50 << 0x40,6);
          auVar86._0_4_ = (uint)uVar2 & 0xffff;
          auVar86._4_10_ = auVar48._4_10_;
          auVar86._14_2_ = 0;
          pauVar11[1] = auVar86;
          uVar2 = puVar10[2];
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar2;
          auVar14._12_2_ = (short)(uVar2 >> 0x30);
          auVar32._8_2_ = (short)(uVar2 >> 0x20);
          auVar32._0_8_ = uVar2;
          auVar32._10_4_ = auVar14._10_4_;
          auVar51._6_8_ = 0;
          auVar51._0_6_ = auVar32._8_6_;
          auVar87._6_8_ = SUB148(auVar51 << 0x40,6);
          auVar87._4_2_ = (short)(uVar2 >> 0x10);
          auVar87._0_2_ = (ushort)uVar2;
          auVar87._2_2_ = 0;
          auVar87._14_2_ = 0;
          pauVar11[2] = auVar87;
          uVar2 = puVar10[3];
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar2;
          auVar15._12_2_ = (short)(uVar2 >> 0x30);
          auVar33._8_2_ = (short)(uVar2 >> 0x20);
          auVar33._0_8_ = uVar2;
          auVar33._10_4_ = auVar15._10_4_;
          auVar52._6_8_ = 0;
          auVar52._0_6_ = auVar33._8_6_;
          auVar88._6_8_ = SUB148(auVar52 << 0x40,6);
          auVar88._4_2_ = (short)(uVar2 >> 0x10);
          auVar88._0_2_ = (ushort)uVar2;
          auVar88._2_2_ = 0;
          auVar88._14_2_ = 0;
          pauVar11[3] = auVar88;
          uVar2 = puVar10[4];
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar2;
          auVar16._12_2_ = (short)(uVar2 >> 0x30);
          auVar34._8_2_ = (short)(uVar2 >> 0x20);
          auVar34._0_8_ = uVar2;
          auVar34._10_4_ = auVar16._10_4_;
          auVar53._6_8_ = 0;
          auVar53._0_6_ = auVar34._8_6_;
          auVar89._6_8_ = SUB148(auVar53 << 0x40,6);
          auVar89._4_2_ = (short)(uVar2 >> 0x10);
          auVar89._0_2_ = (ushort)uVar2;
          auVar89._2_2_ = 0;
          auVar89._14_2_ = 0;
          pauVar11[4] = auVar89;
          uVar2 = puVar10[5];
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar2;
          auVar17._12_2_ = (short)(uVar2 >> 0x30);
          auVar35._8_2_ = (short)(uVar2 >> 0x20);
          auVar35._0_8_ = uVar2;
          auVar35._10_4_ = auVar17._10_4_;
          auVar54._6_8_ = 0;
          auVar54._0_6_ = auVar35._8_6_;
          auVar90._6_8_ = SUB148(auVar54 << 0x40,6);
          auVar90._4_2_ = (short)(uVar2 >> 0x10);
          auVar90._0_2_ = (ushort)uVar2;
          auVar90._2_2_ = 0;
          auVar90._14_2_ = 0;
          pauVar11[5] = auVar90;
          uVar2 = puVar10[6];
          auVar18._8_4_ = 0;
          auVar18._0_8_ = uVar2;
          auVar18._12_2_ = (short)(uVar2 >> 0x30);
          auVar36._8_2_ = (short)(uVar2 >> 0x20);
          auVar36._0_8_ = uVar2;
          auVar36._10_4_ = auVar18._10_4_;
          auVar55._6_8_ = 0;
          auVar55._0_6_ = auVar36._8_6_;
          auVar91._6_8_ = SUB148(auVar55 << 0x40,6);
          auVar91._4_2_ = (short)(uVar2 >> 0x10);
          auVar91._0_2_ = (ushort)uVar2;
          auVar91._2_2_ = 0;
          auVar91._14_2_ = 0;
          pauVar11[6] = auVar91;
          uVar2 = puVar10[7];
          auVar19._8_4_ = 0;
          auVar19._0_8_ = uVar2;
          auVar19._12_2_ = (short)(uVar2 >> 0x30);
          auVar37._8_2_ = (short)(uVar2 >> 0x20);
          auVar37._0_8_ = uVar2;
          auVar37._10_4_ = auVar19._10_4_;
          auVar56._6_8_ = 0;
          auVar56._0_6_ = auVar37._8_6_;
          auVar92._6_8_ = SUB148(auVar56 << 0x40,6);
          auVar92._4_2_ = (short)(uVar2 >> 0x10);
          auVar92._0_2_ = (ushort)uVar2;
          auVar92._2_2_ = 0;
          auVar92._14_2_ = 0;
          pauVar11[7] = auVar92;
          uVar2 = puVar10[8];
          auVar20._8_4_ = 0;
          auVar20._0_8_ = uVar2;
          auVar20._12_2_ = (short)(uVar2 >> 0x30);
          auVar38._8_2_ = (short)(uVar2 >> 0x20);
          auVar38._0_8_ = uVar2;
          auVar38._10_4_ = auVar20._10_4_;
          auVar57._6_8_ = 0;
          auVar57._0_6_ = auVar38._8_6_;
          auVar93._6_8_ = SUB148(auVar57 << 0x40,6);
          auVar93._4_2_ = (short)(uVar2 >> 0x10);
          auVar93._0_2_ = (ushort)uVar2;
          auVar93._2_2_ = 0;
          auVar93._14_2_ = 0;
          pauVar11[8] = auVar93;
          uVar2 = puVar10[9];
          auVar21._8_4_ = 0;
          auVar21._0_8_ = uVar2;
          auVar21._12_2_ = (short)(uVar2 >> 0x30);
          auVar39._8_2_ = (short)(uVar2 >> 0x20);
          auVar39._0_8_ = uVar2;
          auVar39._10_4_ = auVar21._10_4_;
          auVar58._6_8_ = 0;
          auVar58._0_6_ = auVar39._8_6_;
          auVar94._6_8_ = SUB148(auVar58 << 0x40,6);
          auVar94._4_2_ = (short)(uVar2 >> 0x10);
          auVar94._0_2_ = (ushort)uVar2;
          auVar94._2_2_ = 0;
          auVar94._14_2_ = 0;
          pauVar11[9] = auVar94;
          uVar2 = puVar10[10];
          auVar22._8_4_ = 0;
          auVar22._0_8_ = uVar2;
          auVar22._12_2_ = (short)(uVar2 >> 0x30);
          auVar40._8_2_ = (short)(uVar2 >> 0x20);
          auVar40._0_8_ = uVar2;
          auVar40._10_4_ = auVar22._10_4_;
          auVar59._6_8_ = 0;
          auVar59._0_6_ = auVar40._8_6_;
          auVar95._6_8_ = SUB148(auVar59 << 0x40,6);
          auVar95._4_2_ = (short)(uVar2 >> 0x10);
          auVar95._0_2_ = (ushort)uVar2;
          auVar95._2_2_ = 0;
          auVar95._14_2_ = 0;
          pauVar11[10] = auVar95;
          uVar2 = puVar10[0xb];
          auVar23._8_4_ = 0;
          auVar23._0_8_ = uVar2;
          auVar23._12_2_ = (short)(uVar2 >> 0x30);
          auVar41._8_2_ = (short)(uVar2 >> 0x20);
          auVar41._0_8_ = uVar2;
          auVar41._10_4_ = auVar23._10_4_;
          auVar60._6_8_ = 0;
          auVar60._0_6_ = auVar41._8_6_;
          auVar96._6_8_ = SUB148(auVar60 << 0x40,6);
          auVar96._4_2_ = (short)(uVar2 >> 0x10);
          auVar96._0_2_ = (ushort)uVar2;
          auVar96._2_2_ = 0;
          auVar96._14_2_ = 0;
          pauVar11[0xb] = auVar96;
          uVar2 = puVar10[0xc];
          auVar24._8_4_ = 0;
          auVar24._0_8_ = uVar2;
          auVar24._12_2_ = (short)(uVar2 >> 0x30);
          auVar42._8_2_ = (short)(uVar2 >> 0x20);
          auVar42._0_8_ = uVar2;
          auVar42._10_4_ = auVar24._10_4_;
          auVar61._6_8_ = 0;
          auVar61._0_6_ = auVar42._8_6_;
          auVar97._6_8_ = SUB148(auVar61 << 0x40,6);
          auVar97._4_2_ = (short)(uVar2 >> 0x10);
          auVar97._0_2_ = (ushort)uVar2;
          auVar97._2_2_ = 0;
          auVar97._14_2_ = 0;
          pauVar11[0xc] = auVar97;
          uVar2 = puVar10[0xd];
          auVar25._8_4_ = 0;
          auVar25._0_8_ = uVar2;
          auVar25._12_2_ = (short)(uVar2 >> 0x30);
          auVar43._8_2_ = (short)(uVar2 >> 0x20);
          auVar43._0_8_ = uVar2;
          auVar43._10_4_ = auVar25._10_4_;
          auVar62._6_8_ = 0;
          auVar62._0_6_ = auVar43._8_6_;
          auVar98._6_8_ = SUB148(auVar62 << 0x40,6);
          auVar98._4_2_ = (short)(uVar2 >> 0x10);
          auVar98._0_2_ = (ushort)uVar2;
          auVar98._2_2_ = 0;
          auVar98._14_2_ = 0;
          pauVar11[0xd] = auVar98;
          uVar2 = puVar10[0xe];
          auVar26._8_4_ = 0;
          auVar26._0_8_ = uVar2;
          auVar26._12_2_ = (short)(uVar2 >> 0x30);
          auVar44._8_2_ = (short)(uVar2 >> 0x20);
          auVar44._0_8_ = uVar2;
          auVar44._10_4_ = auVar26._10_4_;
          auVar63._6_8_ = 0;
          auVar63._0_6_ = auVar44._8_6_;
          auVar99._6_8_ = SUB148(auVar63 << 0x40,6);
          auVar99._4_2_ = (short)(uVar2 >> 0x10);
          auVar99._0_2_ = (ushort)uVar2;
          auVar99._2_2_ = 0;
          auVar99._14_2_ = 0;
          pauVar11[0xe] = auVar99;
          uVar2 = puVar10[0xf];
          auVar27._8_4_ = 0;
          auVar27._0_8_ = uVar2;
          auVar27._12_2_ = (short)(uVar2 >> 0x30);
          auVar45._8_2_ = (short)(uVar2 >> 0x20);
          auVar45._0_8_ = uVar2;
          auVar45._10_4_ = auVar27._10_4_;
          auVar64._6_8_ = 0;
          auVar64._0_6_ = auVar45._8_6_;
          auVar100._6_8_ = SUB148(auVar64 << 0x40,6);
          auVar100._4_2_ = (short)(uVar2 >> 0x10);
          auVar100._0_2_ = (ushort)uVar2;
          auVar100._2_2_ = 0;
          auVar100._14_2_ = 0;
          pauVar11[0xf] = auVar100;
        }
        else {
          puVar78 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar78 + 5) = 0x30;
          (*(code *)*puVar78)(param_1);
        }
      }
      lVar82 = lVar82 + 1;
      lVar80 = lVar80 + 0x60;
      pcVar83 = pcVar84;
    } while (lVar82 < (int)param_1[7]);
  }
  return;
}

