/* Ghidra address: 00c89420 */
/* Ghidra symbol: FUN_00c89420 */


void FUN_00c89420(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = 1;
    uVar2 = FUN_0044d490(&PTR_FUN_00b69b48,1,L"Hash not initialized");
    FUN_004134c0(uVar2);
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + (param_3 >> 0x1d);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + param_3 * 8;
  if (*(uint *)(param_1 + 0x84) < param_3 * 8) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  while (param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x88);
    if (param_3 < 0x40 - uVar1) {
      FUN_00409a70(param_2,param_1 + 0x9c + (ulonglong)uVar1,param_3);
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + param_3;
      param_3 = 0;
    }
    else {
      FUN_00409a70(param_2,param_1 + 0x9c + (ulonglong)uVar1,0x40 - uVar1);
      uVar1 = 0x40 - *(int *)(param_1 + 0x88);
      param_3 = param_3 - uVar1;
      param_2 = param_2 + (ulonglong)uVar1;
      FUN_00c88710(param_1);
    }
  }
  return;
}

