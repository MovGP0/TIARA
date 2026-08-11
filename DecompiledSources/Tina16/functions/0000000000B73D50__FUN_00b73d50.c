/* Ghidra address: 00b73d50 */
/* Ghidra symbol: FUN_00b73d50 */


void FUN_00b73d50(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar4 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar4);
  }
  uVar2 = *param_2;
  uVar1 = param_2[1];
  uVar1 = uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (0xc < *(uint *)(param_1 + 0x118)) {
    uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xd4) + uVar1,*(undefined4 *)(param_1 + 0x114));
    uVar2 = uVar2 ^ ((*(uint *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) ^
                     *(uint *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) -
                    *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
                    *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xd0) - uVar2,*(undefined4 *)(param_1 + 0x110));
    uVar1 = uVar1 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) +
                     *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) -
                    *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = FUN_00b725f0(*(uint *)(param_1 + 0xcc) ^ uVar1,*(undefined4 *)(param_1 + 0x10c));
    uVar2 = uVar2 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) -
                    *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) +
                    *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = FUN_00b725f0(*(int *)(param_1 + 200) + uVar2,*(undefined4 *)(param_1 + 0x108));
    uVar1 = uVar1 ^ ((*(uint *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) ^
                     *(uint *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) -
                    *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
                    *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  }
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xc4) - uVar1,*(undefined4 *)(param_1 + 0x104));
  uVar2 = uVar2 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) +
                   *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(uint *)(param_1 + 0xc0) ^ uVar2,*(undefined4 *)(param_1 + 0x100));
  uVar1 = uVar1 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) -
                  *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xbc) + uVar1,*(undefined4 *)(param_1 + 0xfc));
  uVar2 = uVar2 ^ ((*(uint *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) ^
                   *(uint *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xb8) - uVar2,*(undefined4 *)(param_1 + 0xf8));
  uVar1 = uVar1 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) +
                   *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(uint *)(param_1 + 0xb4) ^ uVar1,*(undefined4 *)(param_1 + 0xf4));
  uVar2 = uVar2 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) -
                  *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xb0) + uVar2,*(undefined4 *)(param_1 + 0xf0));
  uVar1 = uVar1 ^ ((*(uint *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) ^
                   *(uint *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xac) - uVar1,*(undefined4 *)(param_1 + 0xec));
  uVar2 = uVar2 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) +
                   *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(uint *)(param_1 + 0xa8) ^ uVar2,*(undefined4 *)(param_1 + 0xe8));
  uVar1 = uVar1 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) -
                  *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xa4) + uVar1,*(undefined4 *)(param_1 + 0xe4));
  uVar2 = uVar2 ^ ((*(uint *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) ^
                   *(uint *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0xa0) - uVar2,*(undefined4 *)(param_1 + 0xe0));
  uVar1 = uVar1 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) +
                   *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(uint *)(param_1 + 0x9c) ^ uVar1,*(undefined4 *)(param_1 + 0xdc));
  uVar2 = uVar2 ^ (*(int *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) -
                  *(int *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  uVar3 = FUN_00b725f0(*(int *)(param_1 + 0x98) + uVar2,*(undefined4 *)(param_1 + 0xd8));
  uVar1 = uVar1 ^ ((*(uint *)(&DAT_01e8a8dc + (ulonglong)(uVar3 >> 0x18) * 4) ^
                   *(uint *)(&DAT_01e8acdc + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4)) -
                  *(int *)(&DAT_01e8b0dc + (ulonglong)(uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_01e8b4dc + (ulonglong)(uVar3 & 0xff) * 4);
  *param_3 = uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_3[1] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}

