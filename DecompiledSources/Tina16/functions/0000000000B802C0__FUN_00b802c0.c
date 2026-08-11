/* Ghidra address: 00b802c0 */
/* Ghidra symbol: FUN_00b802c0 */


void FUN_00b802c0(longlong param_1,uint *param_2,wchar_t *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  byte local_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte local_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte local_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b806ec;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  local_5c = *param_2;
  local_58 = param_2[1];
  local_54 = param_2[2];
  local_50 = param_2[3];
  uVar1 = 0;
  iVar3 = *(int *)(param_1 + 0xa8) + -1;
  do {
    uVar2 = (ulonglong)uVar1;
    uVar4 = local_5c ^ *(uint *)(param_1 + 0xac + uVar2 * 0x20);
    uVar5 = local_58 ^ *(uint *)(param_1 + 0xb0 + uVar2 * 0x20);
    uVar6 = local_54 ^ *(uint *)(param_1 + 0xb4 + uVar2 * 0x20);
    local_50 = local_50 ^ *(uint *)(param_1 + 0xb8 + uVar2 * 0x20);
    local_38 = (byte)uVar4;
    bStack_33 = (byte)(uVar5 >> 8);
    bStack_2e = (byte)(uVar6 >> 0x10);
    bStack_29 = (byte)(local_50 >> 0x18);
    local_5c = *(uint *)(&DAT_01e905b0 + (ulonglong)local_38 * 4) ^
               *(uint *)(&DAT_01e909b0 + (ulonglong)bStack_33 * 4) ^
               *(uint *)(&DAT_01e90db0 + (ulonglong)bStack_2e * 4) ^
               *(uint *)(&DAT_01e911b0 + (ulonglong)bStack_29 * 4);
    local_34 = (byte)uVar5;
    bStack_2f = (byte)(uVar6 >> 8);
    bStack_2a = (byte)(local_50 >> 0x10);
    bStack_35 = (byte)(uVar4 >> 0x18);
    local_58 = *(uint *)(&DAT_01e905b0 + (ulonglong)local_34 * 4) ^
               *(uint *)(&DAT_01e909b0 + (ulonglong)bStack_2f * 4) ^
               *(uint *)(&DAT_01e90db0 + (ulonglong)bStack_2a * 4) ^
               *(uint *)(&DAT_01e911b0 + (ulonglong)bStack_35 * 4);
    local_30 = (byte)uVar6;
    bStack_2b = (byte)(local_50 >> 8);
    bStack_36 = (byte)(uVar4 >> 0x10);
    bStack_31 = (byte)(uVar5 >> 0x18);
    local_54 = *(uint *)(&DAT_01e905b0 + (ulonglong)local_30 * 4) ^
               *(uint *)(&DAT_01e909b0 + (ulonglong)bStack_2b * 4) ^
               *(uint *)(&DAT_01e90db0 + (ulonglong)bStack_36 * 4) ^
               *(uint *)(&DAT_01e911b0 + (ulonglong)bStack_31 * 4);
    local_2c = (byte)local_50;
    bStack_37 = (byte)(uVar4 >> 8);
    bStack_32 = (byte)(uVar5 >> 0x10);
    bStack_2d = (byte)(uVar6 >> 0x18);
    local_50 = *(uint *)(&DAT_01e905b0 + (ulonglong)local_2c * 4) ^
               *(uint *)(&DAT_01e909b0 + (ulonglong)bStack_37 * 4) ^
               *(uint *)(&DAT_01e90db0 + (ulonglong)bStack_32 * 4) ^
               *(uint *)(&DAT_01e911b0 + (ulonglong)bStack_2d * 4);
    uVar1 = uVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = local_5c ^ *(uint *)(param_1 + 0xac + (ulonglong)(*(int *)(param_1 + 0xa8) - 1) * 0x20);
  uVar4 = local_58 ^ *(uint *)(param_1 + 0xb0 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1) * 0x20);
  uVar5 = local_54 ^ *(uint *)(param_1 + 0xb4 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1) * 0x20);
  local_50 = local_50 ^ *(uint *)(param_1 + 0xb8 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1) * 0x20)
  ;
  local_38 = (byte)uVar1;
  bStack_33 = (byte)(uVar4 >> 8);
  bStack_2e = (byte)(uVar5 >> 0x10);
  bStack_29 = (byte)(local_50 >> 0x18);
  local_5c = CONCAT13((&DAT_01e905b1)[(ulonglong)bStack_29 * 4],
                      CONCAT12((&DAT_01e905b1)[(ulonglong)bStack_2e * 4],
                               CONCAT11((&DAT_01e905b1)[(ulonglong)bStack_33 * 4],
                                        (&DAT_01e905b1)[(ulonglong)local_38 * 4])));
  local_34 = (byte)uVar4;
  bStack_2f = (byte)(uVar5 >> 8);
  bStack_2a = (byte)(local_50 >> 0x10);
  bStack_35 = (byte)(uVar1 >> 0x18);
  local_58 = CONCAT13((&DAT_01e905b1)[(ulonglong)bStack_35 * 4],
                      CONCAT12((&DAT_01e905b1)[(ulonglong)bStack_2a * 4],
                               CONCAT11((&DAT_01e905b1)[(ulonglong)bStack_2f * 4],
                                        (&DAT_01e905b1)[(ulonglong)local_34 * 4])));
  local_30 = (byte)uVar5;
  bStack_2b = (byte)(local_50 >> 8);
  bStack_36 = (byte)(uVar1 >> 0x10);
  bStack_31 = (byte)(uVar4 >> 0x18);
  local_54 = CONCAT13((&DAT_01e905b1)[(ulonglong)bStack_31 * 4],
                      CONCAT12((&DAT_01e905b1)[(ulonglong)bStack_36 * 4],
                               CONCAT11((&DAT_01e905b1)[(ulonglong)bStack_2b * 4],
                                        (&DAT_01e905b1)[(ulonglong)local_30 * 4])));
  local_2c = (byte)local_50;
  bStack_37 = (byte)(uVar1 >> 8);
  bStack_32 = (byte)(uVar4 >> 0x10);
  bStack_2d = (byte)(uVar5 >> 0x18);
  local_50 = CONCAT13((&DAT_01e905b1)[(ulonglong)bStack_2d * 4],
                      CONCAT12((&DAT_01e905b1)[(ulonglong)bStack_32 * 4],
                               CONCAT11((&DAT_01e905b1)[(ulonglong)bStack_37 * 4],
                                        (&DAT_01e905b1)[(ulonglong)local_2c * 4])));
  uVar1 = *(uint *)(param_1 + 0xb0 + (ulonglong)*(uint *)(param_1 + 0xa8) * 0x20);
  uVar4 = *(uint *)(param_1 + 0xb4 + (ulonglong)*(uint *)(param_1 + 0xa8) * 0x20);
  uVar5 = *(uint *)(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 0xa8) * 0x20);
  *(uint *)param_3 =
       local_5c ^ *(uint *)(param_1 + 0xac + (ulonglong)*(uint *)(param_1 + 0xa8) * 0x20);
  *(uint *)(param_3 + 2) = local_58 ^ uVar1;
  *(uint *)(param_3 + 4) = local_54 ^ uVar4;
  *(uint *)(param_3 + 6) = local_50 ^ uVar5;
  return;
}

