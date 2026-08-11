/* Ghidra address: 00b71100 */
/* Ghidra symbol: FUN_00b71100 */


void FUN_00b71100(longlong param_1,uint *param_2,wchar_t *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    param_3 = u_Cipher_not_initialized_00b718d4;
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8);
    FUN_004134c0();
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar1 = (uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18) ^
          *(uint *)(param_1 + 0x1098);
  uVar2 = (uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 >> 0x18) ^
          (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
           *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
          *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^ *(uint *)(param_1 + 0x109c);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10a0);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10a4);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10a8);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10ac);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10b0);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10b4);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10b8);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10bc);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10c0);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10c4);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10c8);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10cc);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10d0);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar1 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar1 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10d4);
  uVar1 = uVar1 ^ (*(int *)(param_1 + 0x98 + (ulonglong)(uVar2 >> 0x18) * 4) +
                   *(int *)(param_1 + 0x498 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(param_1 + 0x898 + (ulonglong)(uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc98 + (ulonglong)(uVar2 & 0xff) * 4) ^
          *(uint *)(param_1 + 0x10d8);
  uVar2 = uVar2 ^ *(uint *)(param_1 + 0x10dc);
  *(uint *)param_3 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 >> 0x18
  ;
  *(uint *)(param_3 + 2) =
       uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
  return;
}

