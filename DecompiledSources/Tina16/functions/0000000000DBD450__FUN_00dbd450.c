/* Ghidra address: 00dbd450 */
/* Ghidra symbol: FUN_00dbd450 */


void FUN_00dbd450(longlong param_1,undefined8 param_2,longlong param_3,char param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int local_ac [39];
  
  uVar24 = FUN_01b05600(param_2,*(undefined1 *)(param_3 + 0x13c));
  local_ac[0] = 0;
  if ((byte)(param_4 - 8U) < 8) {
    bVar25 = ((int)CONCAT71((int7)((ulonglong)uVar24 >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0
    ;
  }
  else {
    bVar25 = false;
  }
  if (bVar25) {
    if (*(int *)(param_3 + 4) < 0) {
      dVar26 = *(double *)(param_3 + 0x208);
      dVar1 = *(double *)(param_3 + 0x200);
      dVar27 = *(double *)(param_3 + 0x238);
      dVar28 = *(double *)(param_3 + 0x230);
      dVar31 = -(*(double *)(param_3 + 0x210) + *(double *)(param_3 + 0x1f8) +
                *(double *)(param_3 + 0x228));
      dVar29 = -(*(double *)(param_3 + 0x220) + dVar26 + dVar27);
      dVar30 = -(*(double *)(param_3 + 0x218) + dVar1 + dVar28);
      dVar2 = *(double *)(param_3 + 0x248);
      dVar3 = *(double *)(param_3 + 0x240);
    }
    else {
      dVar26 = *(double *)(param_3 + 0x200);
      dVar1 = *(double *)(param_3 + 0x208);
      dVar27 = *(double *)(param_3 + 0x230);
      dVar28 = *(double *)(param_3 + 0x238);
      dVar31 = *(double *)(param_3 + 0x210);
      dVar29 = *(double *)(param_3 + 0x218);
      dVar30 = *(double *)(param_3 + 0x220);
      dVar2 = *(double *)(param_3 + 0x240);
      dVar3 = *(double *)(param_3 + 0x248);
    }
    dVar4 = *(double *)(param_3 + 0x170);
    dVar5 = *(double *)(param_3 + 0x268);
    dVar6 = *(double *)(param_3 + 0x170);
    dVar7 = *(double *)(param_3 + 0x1f8);
    dVar8 = *(double *)(param_3 + 0x228);
    dVar9 = *(double *)(param_3 + 0x168);
    dVar10 = *(double *)(param_3 + 0x260);
    dVar11 = *(double *)(param_3 + 0x168);
    dVar12 = *(double *)(param_3 + 0x1f8);
    dVar13 = *(double *)(param_3 + 0x170);
    dVar14 = *(double *)(param_3 + 0x168);
    dVar15 = *(double *)(param_3 + 0x178);
    dVar16 = *(double *)(param_3 + 0x170);
    dVar17 = *(double *)(param_3 + 0x168);
    dVar18 = *(double *)(param_3 + 0x228);
    dVar19 = *(double *)(param_3 + 0x178);
    dVar20 = *(double *)(param_3 + 0x268);
    dVar21 = *(double *)(param_3 + 0x260);
    dVar22 = *(double *)(param_3 + 0x250);
    dVar23 = *(double *)(param_3 + 600);
    FUN_017de110(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x78) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de110(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x68) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de110(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x90) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6a8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6b0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6b8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1d8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1e0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1c8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1d0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1e8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1c8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1c8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1d0) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1d0) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1d8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1d8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1e0) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1e0) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1e8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1e8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    local_ac[0] = local_ac[0] + 4;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar12 + dVar13 + dVar14 + dVar15) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar1 - dVar16) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar26 - dVar17) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar18 - dVar19) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar28 - dVar20) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar27 - dVar21) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar31 - dVar4) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 (dVar30 + dVar5 + dVar6) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),dVar29 * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 -(dVar7 + dVar8 + dVar31 + dVar9) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 -(dVar1 + dVar28 + dVar30) * param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de700(*(undefined8 *)(param_1 + 0xd8),
                 ((dVar10 + dVar11) - (dVar26 + dVar27 + dVar29)) * param_5 *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 2;
    FUN_017de420(*(undefined8 *)(param_1 + 0xd8),param_5 * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 1;
    FUN_017de420(*(undefined8 *)(param_1 + 0xd8),-(dVar2 * param_5) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 1;
    FUN_017de420(*(undefined8 *)(param_1 + 0xd8),-(dVar3 * param_5) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 1;
    FUN_017de420(*(undefined8 *)(param_1 + 0xd8),-(dVar22 * param_5) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
    local_ac[0] = local_ac[0] + 1;
    FUN_017de420(*(undefined8 *)(param_1 + 0xd8),-(dVar23 * param_5) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac[0]);
  }
  else {
    FUN_017de110(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x78) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de110(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x68) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de110(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x90) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6a8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6b0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6b8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1d8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1e0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1c8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1d0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x1e8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x640) +
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1c8)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x650) +
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1c8)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x648) +
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1d0)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x658) +
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1d0)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x668) +
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1d8)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x660) +
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1d8)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x670) +
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1e0)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x678) +
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1e0)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6c8) * *(double *)(param_3 + 0x1e8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6d0) * *(double *)(param_3 + 0x1e8) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x630) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x638) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 -*(double *)(param_3 + 0x1b0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 -*(double *)(param_3 + 0x1b8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5d0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5d8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5e0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5e8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5f0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5f8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x600) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x608) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x610) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x618) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x620) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de670(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x628) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x6a0) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 -*(double *)(param_3 + 0x680) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 -*(double *)(param_3 + 0x688) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 -*(double *)(param_3 + 0x690) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 -*(double *)(param_3 + 0x698) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),1,local_ac);
    dVar26 = *(double *)(param_3 + 0x5b0);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x590) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),0,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x598) + *(double *)(param_3 + 0x5a0)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),0,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x5a8) + dVar26) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),0,local_ac);
    FUN_017de540(*(undefined8 *)(param_1 + 0xd8),
                 *(double *)(param_3 + 0x5b8) * *(double *)(param_3 + 0x588),
                 *(undefined8 *)(param_3 + 0x6f8),0,local_ac);
    FUN_017de390(*(undefined8 *)(param_1 + 0xd8),
                 (*(double *)(param_3 + 0x5c0) - *(double *)(param_3 + 0x5c8)) *
                 *(double *)(param_3 + 0x588),*(undefined8 *)(param_3 + 0x6f8),0,local_ac);
  }
  return;
}

