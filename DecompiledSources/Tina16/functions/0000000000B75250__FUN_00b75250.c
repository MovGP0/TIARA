/* Ghidra address: 00b75250 */
/* Ghidra symbol: FUN_00b75250 */


void FUN_00b75250(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (undefined4 *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar14 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar14);
  }
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar1 = FUN_00b74ad0(*param_2);
  uVar2 = FUN_00b74ad0(uVar10);
  uVar3 = FUN_00b74ad0(uVar11);
  uVar4 = FUN_00b74ad0(uVar12);
  uVar5 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x168));
  uVar6 = FUN_00b74b90(uVar3 ^ uVar5,*(undefined4 *)(param_1 + 0xac),
                       *(undefined4 *)(param_1 + 0x16c));
  uVar7 = FUN_00b74c10(uVar2 ^ uVar6,*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x170));
  uVar8 = FUN_00b74b10(uVar1 ^ uVar7,*(undefined4 *)(param_1 + 0xb4),
                       *(undefined4 *)(param_1 + 0x174));
  uVar9 = FUN_00b74b10(uVar4 ^ uVar8,*(undefined4 *)(param_1 + 0xb8),
                       *(undefined4 *)(param_1 + 0x178));
  uVar9 = uVar3 ^ uVar5 ^ uVar9;
  uVar3 = FUN_00b74b90(uVar9,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0x17c));
  uVar3 = uVar2 ^ uVar6 ^ uVar3;
  uVar2 = FUN_00b74c10(uVar3,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x180));
  uVar2 = uVar1 ^ uVar7 ^ uVar2;
  uVar1 = FUN_00b74b10(uVar2,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0x184));
  uVar1 = uVar4 ^ uVar8 ^ uVar1;
  uVar4 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x188));
  uVar9 = uVar9 ^ uVar4;
  uVar4 = FUN_00b74b90(uVar9,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0x18c));
  uVar3 = uVar3 ^ uVar4;
  uVar4 = FUN_00b74c10(uVar3,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 400));
  uVar2 = uVar2 ^ uVar4;
  uVar4 = FUN_00b74b10(uVar2,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0x194));
  uVar1 = uVar1 ^ uVar4;
  uVar4 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x198));
  uVar9 = uVar9 ^ uVar4;
  uVar4 = FUN_00b74b90(uVar9,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0x19c));
  uVar3 = uVar3 ^ uVar4;
  uVar4 = FUN_00b74c10(uVar3,*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0x1a0));
  uVar2 = uVar2 ^ uVar4;
  uVar4 = FUN_00b74b10(uVar2,*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x1a4));
  uVar1 = uVar1 ^ uVar4;
  uVar4 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x1a8));
  uVar9 = uVar9 ^ uVar4;
  uVar4 = FUN_00b74b90(uVar9,*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0x1ac));
  uVar3 = uVar3 ^ uVar4;
  uVar4 = FUN_00b74c10(uVar3,*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0x1b0));
  uVar2 = uVar2 ^ uVar4;
  uVar4 = FUN_00b74b10(uVar2,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0x1b4));
  uVar1 = uVar1 ^ uVar4;
  uVar4 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x1b8));
  uVar9 = uVar9 ^ uVar4;
  uVar4 = FUN_00b74b90(uVar9,*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x1bc));
  uVar3 = uVar3 ^ uVar4;
  uVar4 = FUN_00b74c10(uVar3,*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x1c0));
  uVar2 = uVar2 ^ uVar4;
  uVar5 = FUN_00b74b10(uVar2,*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x1c4));
  uVar4 = FUN_00b74b10(uVar2,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x1d4));
  uVar4 = uVar1 ^ uVar5 ^ uVar4;
  uVar5 = FUN_00b74c10(uVar3,*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x1d0));
  uVar6 = FUN_00b74b90(uVar9,*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x1cc));
  uVar7 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x1c8));
  uVar1 = FUN_00b74b10(uVar2 ^ uVar5,*(undefined4 *)(param_1 + 0x124),
                       *(undefined4 *)(param_1 + 0x1e4));
  uVar4 = uVar4 ^ uVar1;
  uVar1 = FUN_00b74c10(uVar3 ^ uVar6,*(undefined4 *)(param_1 + 0x120),
                       *(undefined4 *)(param_1 + 0x1e0));
  uVar1 = uVar2 ^ uVar5 ^ uVar1;
  uVar2 = FUN_00b74b90(uVar9 ^ uVar7,*(undefined4 *)(param_1 + 0x11c),
                       *(undefined4 *)(param_1 + 0x1dc));
  uVar2 = uVar3 ^ uVar6 ^ uVar2;
  uVar3 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x1d8));
  uVar3 = uVar9 ^ uVar7 ^ uVar3;
  uVar9 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 500));
  uVar4 = uVar4 ^ uVar9;
  uVar9 = FUN_00b74c10(uVar2,*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x1f0));
  uVar1 = uVar1 ^ uVar9;
  uVar9 = FUN_00b74b90(uVar3,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x1ec));
  uVar2 = uVar2 ^ uVar9;
  uVar9 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x1e8));
  uVar3 = uVar3 ^ uVar9;
  uVar9 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x204));
  uVar4 = uVar4 ^ uVar9;
  uVar9 = FUN_00b74c10(uVar2,*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x200));
  uVar1 = uVar1 ^ uVar9;
  uVar9 = FUN_00b74b90(uVar3,*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x1fc));
  uVar2 = uVar2 ^ uVar9;
  uVar9 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x1f8));
  uVar3 = uVar3 ^ uVar9;
  uVar9 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x214));
  uVar4 = uVar4 ^ uVar9;
  uVar9 = FUN_00b74c10(uVar2,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x210));
  uVar1 = uVar1 ^ uVar9;
  uVar9 = FUN_00b74b90(uVar3,*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x20c));
  uVar2 = uVar2 ^ uVar9;
  uVar9 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x208));
  uVar3 = uVar3 ^ uVar9;
  uVar9 = FUN_00b74b10(uVar1,*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x224));
  uVar4 = uVar4 ^ uVar9;
  uVar9 = FUN_00b74c10(uVar2,*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x220));
  uVar5 = FUN_00b74b90(uVar3,*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x21c));
  uVar6 = FUN_00b74b10(uVar4,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x218));
  uVar10 = FUN_00b74ad0(uVar1 ^ uVar9);
  uVar11 = FUN_00b74ad0(uVar2 ^ uVar5);
  uVar12 = FUN_00b74ad0(uVar3 ^ uVar6);
  uVar13 = FUN_00b74ad0(uVar4);
  *param_3 = uVar10;
  param_3[1] = uVar11;
  param_3[2] = uVar12;
  param_3[3] = uVar13;
  return;
}

