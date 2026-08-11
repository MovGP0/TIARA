/* Ghidra address: 00b85cf0 */
/* Ghidra symbol: FUN_00b85cf0 */


void FUN_00b85cf0(longlong param_1,uint *param_2,wchar_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b86024;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  local_28 = *param_2 ^ *(uint *)(param_1 + 0xa8);
  local_24 = param_2[1] ^ *(uint *)(param_1 + 0xac);
  local_20 = param_2[2] ^ *(uint *)(param_1 + 0xb0);
  local_1c = param_2[3] ^ *(uint *)(param_1 + 0xb4);
  uVar2 = 0;
  do {
    uVar3 = *(uint *)(param_1 + 0x148 + (ulonglong)(local_28 * 2 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((local_28 >> 7 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(local_28 >> 0xf & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((local_28 >> 0x17 & 0x1fe) + 1) * 4);
    uVar4 = *(uint *)(param_1 + 0x148 + (ulonglong)(local_24 >> 0x17 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((local_24 * 2 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(local_24 >> 7 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((local_24 >> 0xf & 0x1fe) + 1) * 4);
    local_20 = local_20 ^ uVar3 + uVar4 + *(int *)(param_1 + 0xa8 + (ulonglong)(uVar2 * 2 + 8) * 4);
    local_1c = (local_1c * 2 | local_1c >> 0x1f) ^
               uVar3 + uVar4 * 2 + *(int *)(param_1 + 0xa8 + (ulonglong)(uVar2 * 2 + 9) * 4);
    uVar4 = local_20 >> 1;
    uVar3 = local_20 << 0x1f;
    local_20 = uVar4 | uVar3;
    uVar3 = *(uint *)(param_1 + 0x148 + (ulonglong)(uVar4 * 2 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)(((uVar4 & 0xff00) >> 7) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((uVar4 & 0xff0000) >> 0xf) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(((uVar4 & 0xff000000 | uVar3) >> 0x17) + 1) * 4)
    ;
    uVar4 = *(uint *)(param_1 + 0x148 + (ulonglong)(local_1c >> 0x17 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x148 + (ulonglong)((local_1c * 2 & 0x1fe) + 1) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)(local_1c >> 7 & 0x1fe) * 4) ^
            *(uint *)(param_1 + 0x948 + (ulonglong)((local_1c >> 0xf & 0x1fe) + 1) * 4);
    iVar1 = (uVar2 + 1) * 2;
    local_28 = local_28 ^ uVar3 + uVar4 + *(int *)(param_1 + 0xa8 + (ulonglong)(iVar1 + 8) * 4);
    local_24 = (local_24 * 2 | local_24 >> 0x1f) ^
               uVar3 + uVar4 * 2 + *(int *)(param_1 + 0xa8 + (ulonglong)(iVar1 + 9) * 4);
    local_28 = local_28 >> 1 | local_28 << 0x1f;
    uVar2 = uVar2 + 2;
  } while (uVar2 < 0xf);
  *(uint *)param_3 = local_20 ^ *(uint *)(param_1 + 0xb8);
  *(uint *)(param_3 + 2) = local_1c ^ *(uint *)(param_1 + 0xbc);
  *(uint *)(param_3 + 4) = local_28 ^ *(uint *)(param_1 + 0xc0);
  *(uint *)(param_3 + 6) = local_24 ^ *(uint *)(param_1 + 0xc4);
  return;
}

