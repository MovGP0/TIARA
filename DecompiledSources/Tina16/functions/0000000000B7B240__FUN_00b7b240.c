/* Ghidra address: 00b7b240 */
/* Ghidra symbol: FUN_00b7b240 */


void FUN_00b7b240(longlong param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (int *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar20 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar20);
  }
  iVar11 = *param_2;
  iVar12 = param_2[1];
  iVar8 = param_2[2];
  iVar9 = *(int *)(param_1 + 0x138);
  iVar14 = *(int *)(param_1 + 0x13c);
  iVar15 = *(int *)(param_1 + 0x140);
  uVar2 = FUN_00b797f0(param_2[3] + *(int *)(param_1 + 0x144),0x18);
  iVar16 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar1 = iVar11 + iVar9 ^ *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar2 & 0xff) + 0x100) * 4);
  uVar3 = FUN_00b797f0((iVar8 + iVar15 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                       *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar2 >> 0x10 & 0xff) + 0x100) * 4),
                       0x18);
  iVar11 = (iVar12 + iVar14 + iVar16 ^ *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4)
           ) + *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar3 >> 0x10 & 0xff) + 0x100) * 4);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar7 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar3 & 0xff) + 0x100) * 4);
  uVar4 = FUN_00b797f0(iVar11,0x18);
  iVar8 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar4 >> 0x18) * 4);
  uVar10 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar4 & 0xff) + 0x100) * 4);
  uVar5 = FUN_00b797f0((uVar1 + iVar12 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar4 >> 8 & 0xff) * 4)) +
                       *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar4 >> 0x10 & 0xff) + 0x100) * 4),
                       0x18);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar5 >> 0x18) * 4);
  uVar13 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar5 & 0xff) + 0x100) * 4);
  uVar2 = FUN_00b797f0(((uVar2 + uVar1 ^ uVar7) + iVar8 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4)) +
                       *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar5 >> 0x10 & 0xff) + 0x100) * 4),
                       0x18);
  iVar8 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar2 & 0xff) + 0x100) * 4);
  uVar3 = FUN_00b797f0(((uVar3 + iVar11 ^ uVar10) + iVar12 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                       *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar2 >> 0x10 & 0xff) + 0x100) * 4),
                       0x18);
  iVar11 = ((uVar4 ^ uVar13) + iVar8 ^ *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4)
           ) + *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar3 >> 0x10 & 0xff) + 0x100) * 4);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar7 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar3 & 0xff) + 0x100) * 4);
  uVar4 = FUN_00b797f0(iVar11,0x18);
  iVar8 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar4 >> 0x18) * 4);
  uVar10 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar4 & 0xff) + 0x100) * 4);
  uVar6 = FUN_00b797f0(((uVar5 ^ uVar1) + iVar12 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar4 >> 8 & 0xff) * 4)) +
                       *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar4 >> 0x10 & 0xff) + 0x100) * 4),
                       0x18);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar6 >> 0x18) * 4);
  uVar13 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar6 & 0xff) + 0x100) * 4);
  uVar7 = FUN_00b797f0(((uVar2 + (uVar5 ^ uVar1) ^ uVar7) + iVar8 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar6 >> 8 & 0xff) * 4)) +
                       *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4),0xd
                      );
  uVar5 = uVar7 + *(int *)(param_1 + 0x130);
  iVar8 = FUN_00b797d0(uVar7,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar5 & 0x1ff) * 4);
  uVar2 = FUN_00b797d0(iVar8 * *(int *)(param_1 + 0x134),5);
  iVar8 = FUN_00b797d0(uVar5,uVar2 & 0x1f);
  uVar5 = FUN_00b797d0(uVar2,5);
  iVar9 = FUN_00b797d0(uVar1 ^ uVar2 ^ uVar5,uVar5 & 0x1f);
  uVar10 = FUN_00b797f0(((uVar3 + iVar11 ^ uVar10) + iVar12) - iVar9,0xd);
  uVar3 = uVar10 + *(int *)(param_1 + 0x128);
  iVar11 = FUN_00b797d0(uVar10,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar3 & 0x1ff) * 4);
  uVar2 = FUN_00b797d0(iVar11 * *(int *)(param_1 + 300),5);
  iVar11 = FUN_00b797d0(uVar3,uVar2 & 0x1f);
  uVar3 = FUN_00b797d0(uVar2,5);
  iVar12 = FUN_00b797d0(uVar1 ^ uVar2 ^ uVar3,uVar3 & 0x1f);
  uVar13 = FUN_00b797f0(((uVar4 ^ uVar13) - iVar8) - iVar12,0xd);
  uVar4 = uVar13 + *(int *)(param_1 + 0x120);
  iVar12 = FUN_00b797d0(uVar13,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar4 & 0x1ff) * 4);
  uVar2 = FUN_00b797d0(iVar12 * *(int *)(param_1 + 0x124),5);
  iVar12 = FUN_00b797d0(uVar4,uVar2 & 0x1f);
  uVar4 = FUN_00b797d0(uVar2,5);
  iVar8 = FUN_00b797d0(uVar1 ^ uVar2 ^ uVar4,uVar4 & 0x1f);
  uVar2 = FUN_00b797f0(((uVar6 ^ uVar5) - iVar11) - iVar8,0xd);
  uVar6 = uVar2 + *(int *)(param_1 + 0x118);
  iVar11 = FUN_00b797d0(uVar2,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar6 & 0x1ff) * 4);
  uVar5 = FUN_00b797d0(iVar11 * *(int *)(param_1 + 0x11c),5);
  iVar11 = FUN_00b797d0(uVar6,uVar5 & 0x1f);
  uVar6 = FUN_00b797d0(uVar5,5);
  iVar8 = FUN_00b797d0(uVar1 ^ uVar5 ^ uVar6,uVar6 & 0x1f);
  uVar7 = FUN_00b797f0(((uVar7 ^ uVar3) - iVar12) - iVar8,0xd);
  uVar5 = uVar7 + *(int *)(param_1 + 0x110);
  iVar12 = FUN_00b797d0(uVar7,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar5 & 0x1ff) * 4);
  uVar3 = FUN_00b797d0(iVar12 * *(int *)(param_1 + 0x114),5);
  iVar12 = FUN_00b797d0(uVar5,uVar3 & 0x1f);
  uVar5 = FUN_00b797d0(uVar3,5);
  iVar8 = FUN_00b797d0(uVar1 ^ uVar3 ^ uVar5,uVar5 & 0x1f);
  uVar10 = FUN_00b797f0(((uVar10 ^ uVar4) - iVar11) - iVar8,0xd);
  uVar4 = uVar10 + *(int *)(param_1 + 0x108);
  iVar11 = FUN_00b797d0(uVar10,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar4 & 0x1ff) * 4);
  uVar3 = FUN_00b797d0(iVar11 * *(int *)(param_1 + 0x10c),5);
  iVar11 = FUN_00b797d0(uVar4,uVar3 & 0x1f);
  uVar4 = FUN_00b797d0(uVar3,5);
  iVar8 = FUN_00b797d0(uVar1 ^ uVar3 ^ uVar4,uVar4 & 0x1f);
  uVar13 = FUN_00b797f0(((uVar13 ^ uVar6) - iVar12) - iVar8,0xd);
  uVar6 = uVar13 + *(int *)(param_1 + 0x100);
  iVar12 = FUN_00b797d0(uVar13,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar6 & 0x1ff) * 4);
  uVar3 = FUN_00b797d0(iVar12 * *(int *)(param_1 + 0x104),5);
  iVar12 = FUN_00b797d0(uVar6,uVar3 & 0x1f);
  uVar6 = FUN_00b797d0(uVar3,5);
  iVar8 = FUN_00b797d0(uVar1 ^ uVar3 ^ uVar6,uVar6 & 0x1f);
  iVar11 = FUN_00b797f0(((uVar2 ^ uVar5) - iVar11) - iVar8,0xd);
  uVar3 = iVar11 + *(int *)(param_1 + 0xf8);
  iVar8 = FUN_00b797d0(iVar11,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar3 & 0x1ff) * 4);
  uVar2 = FUN_00b797d0(iVar8 * *(int *)(param_1 + 0xfc),5);
  iVar8 = FUN_00b797d0(uVar3,uVar2 & 0x1f);
  uVar3 = FUN_00b797d0(uVar2,5);
  iVar9 = FUN_00b797d0(uVar1 ^ uVar2 ^ uVar3,uVar3 & 0x1f);
  iVar12 = FUN_00b797f0(((uVar7 ^ uVar4) - iVar12) - iVar9,0xd);
  uVar2 = iVar12 + *(int *)(param_1 + 0xf0);
  iVar9 = FUN_00b797d0(iVar12,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar2 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar9 * *(int *)(param_1 + 0xf4),5);
  iVar9 = FUN_00b797d0(uVar2,uVar7 & 0x1f);
  uVar2 = FUN_00b797d0(uVar7,5);
  iVar14 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar2,uVar2 & 0x1f);
  iVar8 = FUN_00b797f0((uVar10 ^ uVar6) - iVar8 ^ uVar2,0xd);
  uVar10 = iVar8 + *(int *)(param_1 + 0xe8);
  iVar15 = FUN_00b797d0(iVar8,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar15 * *(int *)(param_1 + 0xec),5);
  iVar15 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar16 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  iVar9 = FUN_00b797f0((uVar13 ^ uVar3) - iVar9 ^ uVar10,0xd);
  uVar10 = iVar9 + *(int *)(param_1 + 0xe0);
  iVar17 = FUN_00b797d0(iVar9,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar17 * *(int *)(param_1 + 0xe4),5);
  iVar17 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar18 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  iVar11 = FUN_00b797f0((iVar11 - iVar14) - iVar15 ^ uVar10,0xd);
  uVar10 = iVar11 + *(int *)(param_1 + 0xd8);
  iVar14 = FUN_00b797d0(iVar11,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar14 * *(int *)(param_1 + 0xdc),5);
  iVar14 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar15 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  iVar12 = FUN_00b797f0((iVar12 - iVar16) - iVar17 ^ uVar10,0xd);
  uVar10 = iVar12 + *(int *)(param_1 + 0xd0);
  iVar16 = FUN_00b797d0(iVar12,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar16 * *(int *)(param_1 + 0xd4),5);
  iVar16 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar17 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  iVar8 = FUN_00b797f0((iVar8 - iVar18) - iVar14 ^ uVar10,0xd);
  uVar10 = iVar8 + *(int *)(param_1 + 200);
  iVar14 = FUN_00b797d0(iVar8,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar14 * *(int *)(param_1 + 0xcc),5);
  iVar14 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar18 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  iVar15 = FUN_00b797f0((iVar9 - iVar15) - iVar16 ^ uVar10,0xd);
  uVar10 = iVar15 + *(int *)(param_1 + 0xc0);
  iVar9 = FUN_00b797d0(iVar15,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar9 * *(int *)(param_1 + 0xc4),5);
  iVar9 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar16 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  iVar14 = FUN_00b797f0((iVar11 - iVar17) - iVar14 ^ uVar10,0xd);
  uVar10 = iVar14 + *(int *)(param_1 + 0xb8);
  iVar11 = FUN_00b797d0(iVar14,0xd);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = FUN_00b797d0(iVar11 * *(int *)(param_1 + 0xbc),5);
  iVar17 = FUN_00b797d0(uVar10,uVar7 & 0x1f);
  uVar10 = FUN_00b797d0(uVar7,5);
  iVar19 = FUN_00b797d0(uVar1 ^ uVar7 ^ uVar10,uVar10 & 0x1f);
  uVar10 = FUN_00b797d0((iVar12 - iVar18) - iVar9 ^ uVar10,0x18);
  iVar11 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar7 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar10 & 0xff) * 4);
  uVar2 = FUN_00b797d0((iVar8 - iVar16) - iVar17 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar10 >> 0x18) + 0x100) * 4),0x18);
  iVar8 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4);
  iVar9 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar2 >> 8 & 0xff) + 0x100) * 4);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = FUN_00b797d0(((iVar15 - iVar19) - iVar11 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar2 >> 0x18) + 0x100) * 4)) - uVar2,
                       0x18);
  uVar1 = (uVar10 - iVar9 ^ uVar1) - *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)
  ;
  iVar11 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar3 >> 8 & 0xff) + 0x100) * 4);
  uVar10 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar4 = FUN_00b797d0(((iVar14 - iVar12 ^ uVar7) - iVar8 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar3 >> 0x18) + 0x100) * 4)) - uVar1,
                       0x18);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4);
  iVar8 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar7 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = FUN_00b797d0(uVar1 ^ *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar4 >> 0x18) + 0x100) * 4),
                       0x18);
  iVar9 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4);
  iVar14 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar5 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = FUN_00b797d0((uVar2 - iVar11 ^ uVar10) - iVar12 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar5 >> 0x18) + 0x100) * 4),0x18);
  iVar11 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4);
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar2 >> 8 & 0xff) + 0x100) * 4);
  uVar1 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = FUN_00b797d0(((uVar3 - iVar8 ^ uVar7) - iVar9 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar2 >> 0x18) + 0x100) * 4)) - uVar2,
                       0x18);
  uVar1 = (uVar5 - iVar12 ^ uVar1) - *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)
  ;
  iVar12 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar3 >> 8 & 0xff) + 0x100) * 4);
  uVar7 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar4 = FUN_00b797d0(((uVar4 - iVar14 ^ uVar13) - iVar11 ^
                       *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar3 >> 0x18) + 0x100) * 4)) - uVar1,
                       0x18);
  uVar10 = *(uint *)(&DAT_01e8eda4 + (ulonglong)((uVar4 >> 0x18) + 0x100) * 4);
  iVar11 = *(int *)(&DAT_01e8eda4 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4);
  iVar8 = *(int *)(&DAT_01e8eda4 + (ulonglong)((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = *(uint *)(&DAT_01e8eda4 + (ulonglong)(uVar4 & 0xff) * 4);
  iVar9 = *(int *)(param_1 + 0xac);
  iVar14 = *(int *)(param_1 + 0xb0);
  iVar15 = *(int *)(param_1 + 0xb4);
  *param_3 = uVar4 - *(int *)(param_1 + 0xa8);
  param_3[1] = (uVar3 - iVar8 ^ uVar13) - iVar9;
  param_3[2] = ((uVar2 - iVar12 ^ uVar7) - iVar11) - iVar14;
  param_3[3] = (uVar1 ^ uVar10) - iVar15;
  return;
}

