/* Ghidra address: 00d277b0 */
/* Ghidra symbol: FUN_00d277b0 */


void FUN_00d277b0(longlong param_1,uint *param_2)

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
  uVar7 = param_2[1];
  iVar10 = 5;
  puVar5 = (uint *)(*(longlong *)(param_1 + 0x68) + 0x38);
  do {
    puVar11 = puVar5;
    uVar8 = uVar6 ^ *puVar11;
    uVar7 = uVar7 ^ puVar11[1];
    uVar12 = uVar7 >> 0x17 & 0x1fe;
    uVar13 = uVar7 >> 0xf & 0x1fe;
    uVar14 = uVar7 >> 7 & 0x1fe;
    uVar7 = uVar7 * 2 & 0x1fe;
    uVar9 = uVar8 >> 0x17 & 0x1fe;
    uVar6 = *(uint *)(&DAT_01ec4250 + (ulonglong)uVar12 * 4) ^
            *(uint *)(&DAT_01ec4a50 + (ulonglong)uVar13 * 4) ^
            *(uint *)(&DAT_01ec5250 + (ulonglong)uVar14 * 4) ^
            *(uint *)(&DAT_01ec5a50 + (ulonglong)uVar7 * 4) ^
            *(uint *)(&DAT_01ec6250 + (ulonglong)uVar9 * 4) ^
            *(uint *)(&DAT_01ec6a50 + (ulonglong)(uVar8 >> 0xf & 0x1fe) * 4) ^
            *(uint *)(&DAT_01ec7250 + (ulonglong)(uVar8 >> 7 & 0x1fe) * 4) ^
            *(uint *)(&DAT_01ec7a50 + (ulonglong)(uVar8 * 2 & 0x1fe) * 4);
    uVar7 = *(uint *)(&DAT_01ec4250 + (ulonglong)(uVar12 | 1) * 4) ^
            *(uint *)(&DAT_01ec4a50 + (ulonglong)(uVar13 | 1) * 4) ^
            *(uint *)(&DAT_01ec5250 + (ulonglong)(uVar14 | 1) * 4) ^
            *(uint *)(&DAT_01ec5a50 + (ulonglong)(uVar7 | 1) * 4) ^
            *(uint *)(&DAT_01ec6250 + (ulonglong)(uVar9 | 1) * 4) ^
            *(uint *)(&DAT_01ec6a50 + (ulonglong)(uVar8 >> 0xf & 0x1fe | 1) * 4) ^
            *(uint *)(&DAT_01ec7250 + (ulonglong)(uVar8 >> 7 & 0x1fe | 1) * 4) ^
            *(uint *)(&DAT_01ec7a50 + (ulonglong)(uVar8 * 2 & 0x1fe | 1) * 4);
    iVar10 = iVar10 + -1;
    puVar5 = puVar11 + 2;
  } while (iVar10 != 0);
  uVar6 = uVar6 ^ puVar11[2];
  uVar7 = uVar7 ^ puVar11[3];
  bVar1 = (&DAT_01ec0110)[uVar7 >> 0x18];
  bVar2 = (&DAT_01ec0110)[uVar7 >> 0x10 & 0xff];
  bVar3 = (&DAT_01ec0110)[uVar7 >> 8 & 0xff];
  bVar4 = (&DAT_01ec0110)[uVar7 & 0xff];
  *param_2 = (uint)(byte)(&DAT_01ec0110)[uVar6 >> 0x18] << 0x18 ^
             (uint)(byte)(&DAT_01ec0110)[uVar6 >> 0x10 & 0xff] << 0x10 ^
             (uint)(byte)(&DAT_01ec0110)[uVar6 >> 8 & 0xff] << 8 ^
             (uint)(byte)(&DAT_01ec0110)[uVar6 & 0xff] ^ puVar11[4];
  param_2[1] = (uint)bVar1 << 0x18 ^ (uint)bVar2 << 0x10 ^ (uint)bVar3 << 8 ^ (uint)bVar4 ^
               puVar11[5];
  return;
}

