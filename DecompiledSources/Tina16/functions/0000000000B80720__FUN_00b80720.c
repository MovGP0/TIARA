/* Ghidra address: 00b80720 */
/* Ghidra symbol: FUN_00b80720 */


void FUN_00b80720(longlong param_1,uint *param_2,wchar_t *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte local_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte local_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte local_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  byte local_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b80ab8;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  local_40 = param_2[3];
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (1 < uVar1) {
    do {
      uVar2 = (ulonglong)uVar1;
      uVar3 = local_4c ^ *(uint *)(param_1 + 0x28c + uVar2 * 0x20);
      uVar4 = local_48 ^ *(uint *)(param_1 + 0x290 + uVar2 * 0x20);
      uVar5 = local_44 ^ *(uint *)(param_1 + 0x294 + uVar2 * 0x20);
      local_40 = local_40 ^ *(uint *)(param_1 + 0x298 + uVar2 * 0x20);
      local_28 = (byte)uVar3;
      bStack_1b = (byte)(local_40 >> 8);
      bStack_1e = (byte)(uVar5 >> 0x10);
      bStack_21 = (byte)(uVar4 >> 0x18);
      local_4c = *(uint *)(&DAT_01e915b0 + (ulonglong)local_28 * 4) ^
                 *(uint *)(&DAT_01e919b0 + (ulonglong)bStack_1b * 4) ^
                 *(uint *)(&DAT_01e91db0 + (ulonglong)bStack_1e * 4) ^
                 *(uint *)(&DAT_01e921b0 + (ulonglong)bStack_21 * 4);
      local_24 = (byte)uVar4;
      bStack_27 = (byte)(uVar3 >> 8);
      bStack_1a = (byte)(local_40 >> 0x10);
      bStack_1d = (byte)(uVar5 >> 0x18);
      local_48 = *(uint *)(&DAT_01e915b0 + (ulonglong)local_24 * 4) ^
                 *(uint *)(&DAT_01e919b0 + (ulonglong)bStack_27 * 4) ^
                 *(uint *)(&DAT_01e91db0 + (ulonglong)bStack_1a * 4) ^
                 *(uint *)(&DAT_01e921b0 + (ulonglong)bStack_1d * 4);
      local_20 = (byte)uVar5;
      bStack_23 = (byte)(uVar4 >> 8);
      bStack_26 = (byte)(uVar3 >> 0x10);
      bStack_19 = (byte)(local_40 >> 0x18);
      local_44 = *(uint *)(&DAT_01e915b0 + (ulonglong)local_20 * 4) ^
                 *(uint *)(&DAT_01e919b0 + (ulonglong)bStack_23 * 4) ^
                 *(uint *)(&DAT_01e91db0 + (ulonglong)bStack_26 * 4) ^
                 *(uint *)(&DAT_01e921b0 + (ulonglong)bStack_19 * 4);
      local_1c = (byte)local_40;
      bStack_1f = (byte)(uVar5 >> 8);
      bStack_22 = (byte)(uVar4 >> 0x10);
      bStack_25 = (byte)(uVar3 >> 0x18);
      local_40 = *(uint *)(&DAT_01e915b0 + (ulonglong)local_1c * 4) ^
                 *(uint *)(&DAT_01e919b0 + (ulonglong)bStack_1f * 4) ^
                 *(uint *)(&DAT_01e91db0 + (ulonglong)bStack_22 * 4) ^
                 *(uint *)(&DAT_01e921b0 + (ulonglong)bStack_25 * 4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 1);
  }
  uVar1 = local_4c ^ *(uint *)(param_1 + 0x2ac);
  uVar3 = local_48 ^ *(uint *)(param_1 + 0x2b0);
  uVar4 = local_44 ^ *(uint *)(param_1 + 0x2b4);
  local_40 = local_40 ^ *(uint *)(param_1 + 0x2b8);
  local_28 = (byte)uVar1;
  bStack_1b = (byte)(local_40 >> 8);
  bStack_1e = (byte)(uVar4 >> 0x10);
  bStack_21 = (byte)(uVar3 >> 0x18);
  local_4c = CONCAT13((&DAT_01e925b0)[bStack_21],
                      CONCAT12((&DAT_01e925b0)[bStack_1e],
                               CONCAT11((&DAT_01e925b0)[bStack_1b],(&DAT_01e925b0)[local_28])));
  local_24 = (byte)uVar3;
  bStack_27 = (byte)(uVar1 >> 8);
  bStack_1a = (byte)(local_40 >> 0x10);
  bStack_1d = (byte)(uVar4 >> 0x18);
  local_48 = CONCAT13((&DAT_01e925b0)[bStack_1d],
                      CONCAT12((&DAT_01e925b0)[bStack_1a],
                               CONCAT11((&DAT_01e925b0)[bStack_27],(&DAT_01e925b0)[local_24])));
  local_20 = (byte)uVar4;
  bStack_23 = (byte)(uVar3 >> 8);
  bStack_26 = (byte)(uVar1 >> 0x10);
  bStack_19 = (byte)(local_40 >> 0x18);
  local_44 = CONCAT13((&DAT_01e925b0)[bStack_19],
                      CONCAT12((&DAT_01e925b0)[bStack_26],
                               CONCAT11((&DAT_01e925b0)[bStack_23],(&DAT_01e925b0)[local_20])));
  local_1c = (byte)local_40;
  bStack_1f = (byte)(uVar4 >> 8);
  bStack_22 = (byte)(uVar3 >> 0x10);
  bStack_25 = (byte)(uVar1 >> 0x18);
  local_40 = CONCAT13((&DAT_01e925b0)[bStack_25],
                      CONCAT12((&DAT_01e925b0)[bStack_22],
                               CONCAT11((&DAT_01e925b0)[bStack_1f],(&DAT_01e925b0)[local_1c])));
  uVar1 = *(uint *)(param_1 + 0x290);
  uVar3 = *(uint *)(param_1 + 0x294);
  uVar4 = *(uint *)(param_1 + 0x298);
  *(uint *)param_3 = local_4c ^ *(uint *)(param_1 + 0x28c);
  *(uint *)(param_3 + 2) = local_48 ^ uVar1;
  *(uint *)(param_3 + 4) = local_44 ^ uVar3;
  *(uint *)(param_3 + 6) = local_40 ^ uVar4;
  return;
}

