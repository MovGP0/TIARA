/* Ghidra address: 00d274d0 */
/* Ghidra symbol: FUN_00d274d0 */


void FUN_00d274d0(longlong param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar6 = *param_2;
  uVar8 = param_2[1];
  iVar10 = 5;
  puVar5 = *(uint **)(param_1 + 0x68);
  do {
    puVar11 = puVar5;
    uVar7 = uVar6 ^ *puVar11;
    uVar8 = uVar8 ^ puVar11[1];
    uVar12 = uVar8 >> 0x17 & 0x1fe;
    uVar13 = uVar8 >> 0xf & 0x1fe;
    uVar14 = uVar8 >> 7 & 0x1fe;
    uVar8 = uVar8 * 2 & 0x1fe;
    uVar9 = uVar7 >> 0x17 & 0x1fe;
    uVar6 = *(uint *)(&DAT_01ec0250 + (ulonglong)uVar12 * 4) ^
            *(uint *)(&DAT_01ec0a50 + (ulonglong)uVar13 * 4) ^
            *(uint *)(&DAT_01ec1250 + (ulonglong)uVar14 * 4) ^
            *(uint *)(&DAT_01ec1a50 + (ulonglong)uVar8 * 4) ^
            *(uint *)(&DAT_01ec2250 + (ulonglong)uVar9 * 4) ^
            *(uint *)(&DAT_01ec2a50 + (ulonglong)(uVar7 >> 0xf & 0x1fe) * 4) ^
            *(uint *)(&DAT_01ec3250 + (ulonglong)(uVar7 >> 7 & 0x1fe) * 4) ^
            *(uint *)(&DAT_01ec3a50 + (ulonglong)(uVar7 * 2 & 0x1fe) * 4);
    uVar8 = *(uint *)(&DAT_01ec0250 + (ulonglong)(uVar12 | 1) * 4) ^
            *(uint *)(&DAT_01ec0a50 + (ulonglong)(uVar13 | 1) * 4) ^
            *(uint *)(&DAT_01ec1250 + (ulonglong)(uVar14 | 1) * 4) ^
            *(uint *)(&DAT_01ec1a50 + (ulonglong)(uVar8 | 1) * 4) ^
            *(uint *)(&DAT_01ec2250 + (ulonglong)(uVar9 | 1) * 4) ^
            *(uint *)(&DAT_01ec2a50 + (ulonglong)(uVar7 >> 0xf & 0x1fe | 1) * 4) ^
            *(uint *)(&DAT_01ec3250 + (ulonglong)(uVar7 >> 7 & 0x1fe | 1) * 4) ^
            *(uint *)(&DAT_01ec3a50 + (ulonglong)(uVar7 * 2 & 0x1fe | 1) * 4);
    iVar10 = iVar10 + -1;
    puVar5 = puVar11 + 2;
  } while (iVar10 != 0);
  uVar6 = uVar6 ^ puVar11[2];
  uVar8 = uVar8 ^ puVar11[3];
  bVar1 = (&DAT_01ec0010)[uVar8 >> 0x18];
  bVar2 = (&DAT_01ec0010)[uVar8 >> 0x10 & 0xff];
  bVar3 = (&DAT_01ec0010)[uVar8 >> 8 & 0xff];
  bVar4 = (&DAT_01ec0010)[uVar8 & 0xff];
  *param_2 = (uint)(byte)(&DAT_01ec0010)[uVar6 >> 0x18] << 0x18 ^
             (uint)(byte)(&DAT_01ec0010)[uVar6 >> 0x10 & 0xff] << 0x10 ^
             (uint)(byte)(&DAT_01ec0010)[uVar6 >> 8 & 0xff] << 8 ^
             (uint)(byte)(&DAT_01ec0010)[uVar6 & 0xff] ^ puVar11[4];
  param_2[1] = (uint)bVar1 << 0x18 ^ (uint)bVar2 << 0x10 ^ (uint)bVar3 << 8 ^ (uint)bVar4 ^
               puVar11[5];
  return;
}

