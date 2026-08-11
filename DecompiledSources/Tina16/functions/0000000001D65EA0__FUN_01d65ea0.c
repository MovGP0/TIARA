/* Ghidra address: 01d65ea0 */
/* Ghidra symbol: FUN_01d65ea0 */


void FUN_01d65ea0(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,char *param_12)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auStack_d8 [32];
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_8c;
  
  param_12[1] = param_3;
  param_12[2] = param_4;
  param_12[3] = param_5;
  param_12[4] = param_6;
  cVar3 = FUN_016e9e80(param_1,1);
  *param_12 = cVar3;
  cVar3 = FUN_016e9d80(param_1,2);
  param_12[5] = cVar3 + '\x01';
  param_12[6] = cVar3 + '\x02';
  local_b8 = (double)((ulonglong)local_b8 & 0xffffffffffffff00);
  FUN_016ebe60(param_1,*param_12 + '\x01',param_12[1],param_12[2]);
  *(undefined8 *)(param_12 + 8) = param_7;
  *(undefined8 *)(param_12 + 0x10) = param_8;
  *(undefined8 *)(param_12 + 0x18) = param_9;
  *(undefined8 *)(param_12 + 0x20) = param_10;
  *(undefined8 *)(param_12 + 0x28) = param_11;
  param_12[0x30] = '\0';
  param_12[0x31] = '\0';
  param_12[0x32] = '\0';
  param_12[0x33] = '\0';
  param_12[0x34] = '\0';
  param_12[0x35] = '\0';
  param_12[0x36] = -0x30;
  param_12[0x37] = '?';
  param_12[0x38] = '\0';
  param_12[0x39] = '\0';
  param_12[0x3a] = '\0';
  param_12[0x3b] = '\0';
  param_12[0x3c] = 'e';
  param_12[0x3d] = -0x33;
  param_12[0x3e] = -0x33;
  param_12[0x3f] = 'A';
  param_12[0xa8] = '\0';
  param_12[0xa9] = '\0';
  param_12[0xaa] = '\0';
  param_12[0xab] = '\0';
  param_12[0xac] = '\0';
  param_12[0xad] = '\0';
  param_12[0xae] = -0x10;
  param_12[0xaf] = '?';
  param_12[0xb0] = '\0';
  param_12[0xb1] = '\0';
  param_12[0xb2] = '\0';
  param_12[0xb3] = '\0';
  param_12[0xb4] = '\0';
  param_12[0xb5] = '\0';
  param_12[0xb6] = -0x10;
  param_12[0xb7] = '?';
  *(undefined8 *)(param_12 + 0xb8) = *(undefined8 *)(param_2 + 0x6c0);
  uVar9 = *(undefined8 *)(param_2 + 0x6b0);
  *(undefined8 *)(param_12 + 0xc0) = uVar9;
  param_12[200] = '\0';
  param_12[0xc9] = '\0';
  param_12[0xca] = '\0';
  param_12[0xcb] = '\0';
  param_12[0xcc] = '\0';
  param_12[0xcd] = '\0';
  param_12[0xce] = '\0';
  param_12[0xcf] = '\0';
  param_12[0x128] = '\x03';
  param_12[0x12a] = '\x01';
  param_12[0x129] = '\x03';
  param_12[0x174] = '\0';
  param_12[0x175] = '\0';
  local_8c = 0x32;
  if ((((*(double *)(param_12 + 0x10) == 0.0) && (*(double *)(param_12 + 0x20) == 0.0)) &&
      (*(double *)(param_12 + 0x28) != 0.0)) && (*(double *)(param_12 + 0x18) != 0.0)) {
    param_12[299] = '\x04';
  }
  if (((*(double *)(param_12 + 0x10) != 0.0) && (*(double *)(param_12 + 0x20) == 0.0)) &&
     ((*(double *)(param_12 + 0x28) != 0.0 && (*(double *)(param_12 + 0x18) != 0.0)))) {
    param_12[299] = '\x01';
  }
  if (((*(double *)(param_12 + 0x10) != 0.0) && (*(double *)(param_12 + 0x20) == 0.0)) &&
     ((*(double *)(param_12 + 0x28) != 0.0 && (*(double *)(param_12 + 0x18) == 0.0)))) {
    param_12[299] = '\x02';
  }
  if ((((*(double *)(param_12 + 0x10) != 0.0) && (*(double *)(param_12 + 0x20) == 0.0)) &&
      (*(double *)(param_12 + 0x28) == 0.0)) && (*(double *)(param_12 + 0x18) != 0.0)) {
    param_12[299] = '\x05';
    FUN_01b04d70(CONCAT62((int6)((ulonglong)uVar9 >> 0x10),0x150),&LAB_01d66aa4,0);
  }
  if (((*(double *)(param_12 + 0x10) != 0.0) && (*(double *)(param_12 + 0x20) != 0.0)) &&
     ((*(double *)(param_12 + 0x28) == 0.0 && (*(double *)(param_12 + 0x18) == 0.0)))) {
    param_12[299] = '\x03';
  }
  if ((*(double *)(param_12 + 0x20) != 0.0) &&
     ((*(double *)(param_12 + 0x28) != 0.0 || (*(double *)(param_12 + 0x18) != 0.0)))) {
    param_12[299] = '\x06';
    FUN_01b04d70(0x150,&LAB_01d66aa4,0);
  }
  uVar4 = FUN_01d65e80(auStack_d8,*(undefined8 *)(param_12 + 0x10));
  uVar5 = FUN_01d65e80(auStack_d8,*(undefined8 *)(param_12 + 0x20));
  uVar6 = FUN_01d65e80(auStack_d8,*(undefined8 *)(param_12 + 0x18));
  uVar7 = FUN_01d65e80(auStack_d8,*(undefined8 *)(param_12 + 0x28));
  if ((uVar4 & 0xff) + (uVar5 & 0xff) + (uVar6 & 0xff) + (uVar7 & 0xff) < 2) {
    FUN_01b04d70(0x150,&LAB_01d66aa4,0);
  }
  param_12[0x168] = '\0';
  param_12[0x169] = '\0';
  param_12[0x16a] = '\0';
  param_12[0x16b] = '\0';
  param_12[0x16c] = '\0';
  param_12[0x16d] = '\0';
  param_12[0x16e] = '\0';
  param_12[0x16f] = '\0';
  param_12[0x130] = '\0';
  param_12[0x131] = '\0';
  param_12[0x132] = '\0';
  param_12[0x133] = '\0';
  param_12[0x134] = '\0';
  param_12[0x135] = '\0';
  param_12[0x136] = '\0';
  param_12[0x137] = '\0';
  param_12[0x138] = '\0';
  param_12[0x139] = '\0';
  param_12[0x13a] = '\0';
  param_12[0x13b] = '\0';
  param_12[0x13c] = '\0';
  param_12[0x13d] = '\0';
  param_12[0x13e] = '\0';
  param_12[0x13f] = '\0';
  param_12[0x140] = '\0';
  param_12[0x141] = '\0';
  param_12[0x142] = '\0';
  param_12[0x143] = '\0';
  param_12[0x144] = '\0';
  param_12[0x145] = '\0';
  param_12[0x146] = '\0';
  param_12[0x147] = '\0';
  param_12[0x148] = '\0';
  param_12[0x149] = '\0';
  param_12[0x14a] = '\0';
  param_12[0x14b] = '\0';
  param_12[0x14c] = '\0';
  param_12[0x14d] = '\0';
  param_12[0x14e] = '\0';
  param_12[0x14f] = '\0';
  param_12[0x150] = '\0';
  param_12[0x151] = '\0';
  param_12[0x152] = '\0';
  param_12[0x153] = '\0';
  param_12[0x154] = '\0';
  param_12[0x155] = '\0';
  param_12[0x156] = '\0';
  param_12[0x157] = '\0';
  param_12[0x158] = '\0';
  param_12[0x159] = '\0';
  param_12[0x15a] = '\0';
  param_12[0x15b] = '\0';
  param_12[0x15c] = '\0';
  param_12[0x15d] = '\0';
  param_12[0x15e] = '\0';
  param_12[0x15f] = '\0';
  param_12[0x160] = '\0';
  param_12[0x161] = '\0';
  param_12[0x162] = '\0';
  param_12[0x163] = '\0';
  param_12[0x164] = '\0';
  param_12[0x165] = '\0';
  param_12[0x166] = '\0';
  param_12[0x167] = '\0';
  cVar3 = param_12[299];
  if (cVar3 == '\x01') {
    uVar9 = FUN_0040c760(*(double *)(param_12 + 0x18) / *(double *)(param_12 + 0x28));
    *(undefined8 *)(param_12 + 0x48) = uVar9;
    *(double *)(param_12 + 0x50) = 1.0 / *(double *)(param_12 + 0x48);
    dVar10 = (double)FUN_0040c760(*(double *)(param_12 + 0x18) * *(double *)(param_12 + 0x28));
    *(double *)(param_12 + 0x40) = dVar10 * *(double *)(param_12 + 8);
    *(double *)(param_12 + 0x58) =
         (*(double *)(param_12 + 0x10) / *(double *)(param_12 + 0x18)) * 0.5;
    *(undefined8 *)(param_12 + 0x60) = *(undefined8 *)(param_12 + 0x58);
    uVar9 = FUN_0040af80(-*(double *)(param_12 + 0x60) * *(double *)(param_12 + 0x40));
    *(undefined8 *)(param_12 + 0x68) = uVar9;
    if (*(double *)(param_12 + 0x58) <= 0.0) {
      if (*(double *)(param_12 + 0x58) == 0.0) {
        param_12[0x80] = '\0';
        param_12[0x81] = '\0';
        param_12[0x82] = '\0';
        param_12[0x83] = '\0';
        param_12[0x84] = '\0';
        param_12[0x85] = '\0';
        param_12[0x86] = '\0';
        param_12[0x87] = '\0';
        param_12[0x88] = '\0';
        param_12[0x89] = '\0';
        param_12[0x8a] = '\0';
        param_12[0x8b] = '\0';
        param_12[0x8c] = '\0';
        param_12[0x8d] = '\0';
        param_12[0x8e] = '\0';
        param_12[0x8f] = '\0';
        param_12[0x90] = '\0';
        param_12[0x91] = '\0';
        param_12[0x92] = '\0';
        param_12[0x93] = '\0';
        param_12[0x94] = '\0';
        param_12[0x95] = '\0';
        param_12[0x96] = '\0';
        param_12[0x97] = '\0';
      }
    }
    else {
      param_12[0x80] = '\0';
      param_12[0x81] = '\0';
      param_12[0x82] = '\0';
      param_12[0x83] = '\0';
      param_12[0x84] = '\0';
      param_12[0x85] = '\0';
      param_12[0x86] = -0x10;
      param_12[0x87] = -0x41;
      *(double *)(param_12 + 0x88) = 1.0 - *(double *)(param_12 + 0x68);
      *(ulonglong *)(param_12 + 0x90) = *(ulonglong *)(param_12 + 0x68) ^ 0x8000000000000000;
    }
    if (param_12[0x174] == '\0') {
      dVar10 = *(double *)(param_12 + 0x40);
      dVar13 = *(double *)(param_12 + 0x40);
      dVar1 = *(double *)(param_12 + 0x40);
      uVar9 = FUN_01d5ee20(dVar1,*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x58),
                           *(undefined8 *)(param_12 + 0x60));
      FUN_01d5ef40(dVar1,*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x60),
                   *(undefined8 *)(param_12 + 0x60));
      iVar8 = 0;
      dVar10 = dVar13 + dVar10 * 9.0;
      do {
        dVar13 = dVar10;
        dVar10 = (dVar13 + dVar1) * 0.5;
        iVar8 = iVar8 + 1;
        uVar11 = FUN_01d5ee20(dVar13,*(undefined8 *)(param_12 + 0x40),
                              *(undefined8 *)(param_12 + 0x58),*(undefined8 *)(param_12 + 0x60));
        uVar12 = FUN_01d5ee20(dVar10,*(undefined8 *)(param_12 + 0x40),
                              *(undefined8 *)(param_12 + 0x58),*(undefined8 *)(param_12 + 0x60));
        FUN_01d5ef40(dVar13,*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x60),
                     *(undefined8 *)(param_12 + 0x60));
        FUN_01d5ef40(dVar10,*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x60),
                     *(undefined8 *)(param_12 + 0x60));
        local_a8 = *(undefined8 *)(param_12 + 0xb8);
        local_a0 = *(undefined8 *)(param_12 + 0xc0);
        local_b8 = dVar1;
        local_b0 = uVar9;
        cVar3 = FUN_01d60770(dVar13,uVar11,dVar10,uVar12);
        if (cVar3 == '\0') {
LAB_01d66933:
          bVar2 = false;
        }
        else {
          local_a8 = *(undefined8 *)(param_12 + 0xb8);
          local_a0 = *(undefined8 *)(param_12 + 0xc0);
          local_b8 = dVar1;
          local_b0 = uVar9;
          cVar3 = FUN_01d60770(dVar13,uVar11,dVar10,uVar12);
          if (cVar3 == '\0') goto LAB_01d66933;
          bVar2 = true;
        }
      } while ((!bVar2) && (iVar8 <= local_8c));
      *(double *)(param_12 + 0xd0) = dVar13 - *(double *)(param_12 + 0x40);
    }
  }
  else if (cVar3 == '\x02') {
    *(double *)(param_12 + 0x70) = *(double *)(param_12 + 0x28) / *(double *)(param_12 + 0x10);
    *(double *)(param_12 + 0x78) =
         *(double *)(param_12 + 0x10) * *(double *)(param_12 + 0x28) * *(double *)(param_12 + 8) *
         *(double *)(param_12 + 8);
    param_12[0x80] = '\0';
    param_12[0x81] = '\0';
    param_12[0x82] = '\0';
    param_12[0x83] = '\0';
    param_12[0x84] = '\0';
    param_12[0x85] = '\0';
    param_12[0x86] = '\0';
    param_12[0x87] = '\0';
    param_12[0x88] = '\0';
    param_12[0x89] = '\0';
    param_12[0x8a] = '\0';
    param_12[0x8b] = '\0';
    param_12[0x8c] = '\0';
    param_12[0x8d] = '\0';
    param_12[0x8e] = -0x10;
    param_12[0x8f] = '?';
    param_12[0x90] = '\0';
    param_12[0x91] = '\0';
    param_12[0x92] = '\0';
    param_12[0x93] = '\0';
    param_12[0x94] = '\0';
    param_12[0x95] = '\0';
    param_12[0x96] = '\0';
    param_12[0x97] = '\0';
  }
  else if (cVar3 == '\x04') {
    uVar9 = FUN_0040c760(*(double *)(param_12 + 0x18) / *(double *)(param_12 + 0x28));
    *(undefined8 *)(param_12 + 0x48) = uVar9;
    *(double *)(param_12 + 0x50) = 1.0 / *(double *)(param_12 + 0x48);
    dVar10 = (double)FUN_0040c760(*(double *)(param_12 + 0x18) * *(double *)(param_12 + 0x28));
    *(double *)(param_12 + 0x40) = dVar10 * *(double *)(param_12 + 8);
    param_12[0x68] = '\0';
    param_12[0x69] = '\0';
    param_12[0x6a] = '\0';
    param_12[0x6b] = '\0';
    param_12[0x6c] = '\0';
    param_12[0x6d] = '\0';
    param_12[0x6e] = -0x10;
    param_12[0x6f] = '?';
  }
  return;
}

