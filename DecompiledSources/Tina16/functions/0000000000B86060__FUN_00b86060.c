/* Ghidra address: 00b86060 */
/* Ghidra symbol: FUN_00b86060 */


void FUN_00b86060(longlong param_1,uint *param_2,wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b86394;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  local_20 = *param_2 ^ *(uint *)(param_1 + 0xb8);
  local_1c = param_2[1] ^ *(uint *)(param_1 + 0xbc);
  local_28 = param_2[2] ^ *(uint *)(param_1 + 0xc0);
  local_24 = param_2[3] ^ *(uint *)(param_1 + 0xc4);
  iVar2 = 0xe;
  do {
    uVar3 = *(uint *)(param_1 + 0x148 + (ulonglong)(local_20 * 2 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((local_20 >> 7 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(local_20 >> 0xf & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((local_20 >> 0x17 & 0x1fe) + 1) * 4);
    uVar4 = *(uint *)(param_1 + 0x148 + (ulonglong)(local_1c >> 0x17 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((local_1c * 2 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(local_1c >> 7 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((local_1c >> 0xf & 0x1fe) + 1) * 4);
    iVar1 = (iVar2 + 1) * 2;
    local_28 = (local_28 * 2 | local_28 >> 0x1f) ^
               uVar3 + uVar4 + *(int *)(param_1 + 0xa8 + (longlong)(iVar1 + 8) * 4);
    local_24 = local_24 ^ uVar3 + uVar4 * 2 + *(int *)(param_1 + 0xa8 + (longlong)(iVar1 + 9) * 4);
    uVar4 = local_24 >> 1;
    uVar3 = local_24 << 0x1f;
    local_24 = uVar4 | uVar3;
    uVar5 = *(uint *)(param_1 + 0x148 + (ulonglong)(local_28 * 2 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((local_28 >> 7 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(local_28 >> 0xf & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((local_28 >> 0x17 & 0x1fe) + 1) * 4);
    uVar3 = *(uint *)(param_1 + 0x148 + (ulonglong)((uVar4 & 0xff000000 | uVar3) >> 0x17) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((uVar4 * 2 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((uVar4 & 0xff00) >> 7) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(((uVar4 & 0xff0000) >> 0xf) + 1) * 4);
    local_20 = (local_20 * 2 | local_20 >> 0x1f) ^
               uVar5 + uVar3 + *(int *)(param_1 + 0xa8 + (longlong)(iVar2 * 2 + 8) * 4);
    local_1c = local_1c ^
               uVar5 + uVar3 * 2 + *(int *)(param_1 + 0xa8 + (longlong)(iVar2 * 2 + 9) * 4);
    local_1c = local_1c >> 1 | local_1c << 0x1f;
    iVar2 = iVar2 + -2;
  } while (-1 < iVar2);
  *(uint *)param_3 = local_28 ^ *(uint *)(param_1 + 0xa8);
  *(uint *)(param_3 + 2) = local_24 ^ *(uint *)(param_1 + 0xac);
  *(uint *)(param_3 + 4) = local_20 ^ *(uint *)(param_1 + 0xb0);
  *(uint *)(param_3 + 6) = local_1c ^ *(uint *)(param_1 + 0xb4);
  return;
}

