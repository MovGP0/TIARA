/* Ghidra address: 00a1d570 */
/* Ghidra symbol: FUN_00a1d570 */


void FUN_00a1d570(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [15];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  uint uVar6;
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined8 uVar16;
  undefined1 auVar17 [15];
  unkuint9 Var18;
  undefined1 auVar19 [11];
  undefined1 auVar20 [14];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  uint6 uVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  
  puVar25 = (undefined8 *)*param_2;
  if (puVar25 == (undefined8 *)0x0) {
    puVar25 = (undefined8 *)FUN_00a1bde0(param_1);
    *param_2 = (longlong)puVar25;
  }
  *(undefined1 *)(puVar25 + 2) = *(undefined1 *)(param_3 + 2);
  uVar16 = param_3[1];
  *puVar25 = *param_3;
  puVar25[1] = uVar16;
  auVar1 = *(undefined1 (*) [16])((longlong)param_3 + 1);
  auVar2[0xd] = 0;
  auVar2._0_13_ = auVar1._0_13_;
  auVar2[0xe] = auVar1[7];
  auVar4[0xc] = auVar1[6];
  auVar4._0_12_ = auVar1._0_12_;
  auVar4._13_2_ = auVar2._13_2_;
  auVar5[0xb] = 0;
  auVar5._0_11_ = auVar1._0_11_;
  auVar5._12_3_ = auVar4._12_3_;
  uVar6 = auVar5._11_4_;
  auVar7[10] = auVar1[5];
  auVar7._0_10_ = auVar1._0_10_;
  auVar7._11_4_ = uVar6;
  auVar12[9] = 0;
  auVar12._0_9_ = auVar1._0_9_;
  auVar12._10_5_ = auVar7._10_5_;
  auVar13[8] = auVar1[4];
  auVar13._0_8_ = auVar1._0_8_;
  auVar13._9_6_ = auVar12._9_6_;
  auVar17._7_8_ = 0;
  auVar17._0_7_ = auVar13._8_7_;
  Var18 = CONCAT81(SUB158(auVar17 << 0x40,7),auVar1[3]);
  auVar22._9_6_ = 0;
  auVar22._0_9_ = Var18;
  auVar19._1_10_ = SUB1510(auVar22 << 0x30,5);
  auVar19[0] = auVar1[2];
  auVar23._11_4_ = 0;
  auVar23._0_11_ = auVar19;
  auVar14[2] = auVar1[1];
  auVar14._0_2_ = auVar1._0_2_;
  auVar14._3_12_ = SUB1512(auVar23 << 0x20,3);
  auVar15._2_13_ = auVar14._2_13_;
  auVar15._0_2_ = auVar1._0_2_ & 0xff;
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar15._0_10_;
  auVar3._12_2_ = (short)Var18;
  uVar24 = CONCAT42(auVar3._10_4_,auVar19._0_2_);
  auVar20._6_8_ = 0;
  auVar20._0_6_ = uVar24;
  auVar8._4_2_ = auVar14._2_2_;
  auVar8._0_4_ = auVar15._0_4_;
  auVar8._6_8_ = SUB148(auVar20 << 0x40,6);
  uVar26 = CONCAT13(0,CONCAT12(auVar1[9],(ushort)auVar1[8]));
  auVar9[0xc] = auVar1[0xb];
  auVar9._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
  auVar10._10_3_ = auVar9._10_3_;
  auVar10._0_10_ = (unkuint10)auVar1[10] << 0x40;
  auVar21._5_8_ = 0;
  auVar21._0_5_ = auVar10._8_5_;
  auVar11[4] = auVar1[9];
  auVar11._0_4_ = uVar26;
  auVar11[5] = 0;
  auVar11._6_7_ = SUB137(auVar21 << 0x40,6);
  iVar27 = (uint)auVar1[0xf] + (uVar6 >> 0x18) +
           (uint)(uint3)(auVar9._10_3_ >> 0x10) + (auVar3._10_4_ >> 0x10) +
           (uint)auVar1[0xd] + (uint)auVar7._10_2_ + auVar11._4_4_ + auVar8._4_4_ +
           (uint)auVar1[0xe] + (uVar6 >> 8 & 0xffff) + auVar10._8_4_ + (int)uVar24 +
           (uint)auVar1[0xc] + (uint)auVar13._8_2_ + (uVar26 & 0xffff) + (auVar15._0_4_ & 0xffff);
  if (0xff < iVar27 - 1U) {
    puVar25 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar25 + 5) = 8;
    (*(code *)*puVar25)(param_1);
  }
  FUN_00626670(*param_2 + 0x11,param_4,(longlong)iVar27);
  *(undefined4 *)(*param_2 + 0x114) = 0;
  return;
}

