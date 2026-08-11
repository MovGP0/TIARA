/* Ghidra address: 00b76fb0 */
/* Ghidra symbol: FUN_00b76fb0 */


void FUN_00b76fb0(longlong param_1,uint *param_2,wchar_t *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b776c4;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  uVar2 = *param_2 + *(int *)(param_1 + 0x98);
  uVar1 = param_2[1] ^
          *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar2 = uVar1 + *(int *)(param_1 + 0x9c);
  uVar2 = *param_2 ^
          *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = uVar2 + *(int *)(param_1 + 0xa0);
  uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
  iVar4 = *(int *)(param_1 + 0xa4);
  uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar1 + iVar4 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar1 + iVar4 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar1 + iVar4 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar1 + iVar4 & 0xff) * 4);
  uVar3 = uVar2 + *(int *)(param_1 + 0xa8);
  uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 +
                           (ulonglong)(uVar1 + *(int *)(param_1 + 0xac) >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 +
                           (ulonglong)(uVar1 + *(int *)(param_1 + 0xac) >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 +
                           (ulonglong)(uVar1 + *(int *)(param_1 + 0xac) >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar1 + *(int *)(param_1 + 0xac) & 0xff) * 4
                           );
  uVar3 = uVar2 + *(int *)(param_1 + 0xb0);
  uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 +
                           (ulonglong)(uVar1 + *(int *)(param_1 + 0xb4) >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 +
                           (ulonglong)(uVar1 + *(int *)(param_1 + 0xb4) >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 +
                           (ulonglong)(uVar1 + *(int *)(param_1 + 0xb4) >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar1 + *(int *)(param_1 + 0xb4) & 0xff) * 4
                           );
  iVar4 = 3;
  do {
    uVar3 = uVar2 + *(int *)(param_1 + 0xb4);
    uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar1 + *(int *)(param_1 + 0xb0);
    uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar2 + *(int *)(param_1 + 0xac);
    uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar1 + *(int *)(param_1 + 0xa8);
    uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar2 + *(int *)(param_1 + 0xa4);
    uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar1 + *(int *)(param_1 + 0xa0);
    uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar2 + *(int *)(param_1 + 0x9c);
    uVar1 = uVar1 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    uVar3 = uVar1 + *(int *)(param_1 + 0x98);
    uVar2 = uVar2 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar3 & 0xff) * 4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(uint *)param_3 = uVar1;
  *(uint *)(param_3 + 2) = uVar2;
  return;
}

