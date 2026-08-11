/* Ghidra address: 00b76890 */
/* Ghidra symbol: FUN_00b76890 */


void FUN_00b76890(longlong param_1,uint *param_2,wchar_t *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b76f74;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  iVar7 = 3;
  do {
    uVar5 = uVar3 + *(int *)(param_1 + 0x98);
    uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar4 + *(int *)(param_1 + 0x9c);
    uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar3 + *(int *)(param_1 + 0xa0);
    uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar4 + *(int *)(param_1 + 0xa4);
    uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar3 + *(int *)(param_1 + 0xa8);
    uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar4 + *(int *)(param_1 + 0xac);
    uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar3 + *(int *)(param_1 + 0xb0);
    uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar5 = uVar4 + *(int *)(param_1 + 0xb4);
    uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                    *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar5 = uVar3 + *(int *)(param_1 + 0xb4);
  uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = uVar4 + *(int *)(param_1 + 0xb0);
  uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = uVar3 + *(int *)(param_1 + 0xac);
  uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = uVar4 + *(int *)(param_1 + 0xa8);
  uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = uVar3 + *(int *)(param_1 + 0xa4);
  uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = uVar4 + *(int *)(param_1 + 0xa0);
  uVar3 = uVar3 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = uVar3 + *(int *)(param_1 + 0x9c);
  uVar4 = uVar4 ^ *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar6 = uVar4 + *(int *)(param_1 + 0x98);
  uVar5 = *(uint *)(&DAT_01e8e6a4 + (ulonglong)(uVar6 >> 0x18) * 4);
  uVar1 = *(uint *)(&DAT_01e8e2a4 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar2 = *(uint *)(&DAT_01e8dea4 + (ulonglong)(uVar6 >> 8 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_01e8daa4 + (ulonglong)(uVar6 & 0xff) * 4);
  *(uint *)param_3 = uVar4;
  *(uint *)(param_3 + 2) = uVar3 ^ uVar5 ^ uVar1 ^ uVar2 ^ uVar6;
  return;
}

