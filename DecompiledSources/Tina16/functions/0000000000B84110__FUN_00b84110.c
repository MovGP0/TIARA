/* Ghidra address: 00b84110 */
/* Ghidra symbol: FUN_00b84110 */


void FUN_00b84110(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar3);
  }
  uVar1 = FUN_00b83da0(*param_2);
  uVar7 = (ulonglong)uVar1;
  uVar1 = FUN_00b83da0(param_2[1]);
  uVar4 = DAT_01e93944 << 5;
  iVar5 = 0x20;
  do {
    uVar6 = (uint)uVar7;
    uVar1 = uVar1 - (uVar6 * 0x10 + (*(uint *)(param_1 + 0xa0) ^ uVar6) +
                     (uVar4 ^ (uint)(uVar7 >> 5)) + *(int *)(param_1 + 0xa4));
    uVar7 = (ulonglong)
            (uVar6 - (uVar1 * 0x10 + (*(uint *)(param_1 + 0x98) ^ uVar1) + (uVar4 ^ uVar1 >> 5) +
                     *(int *)(param_1 + 0x9c)));
    uVar4 = uVar4 - DAT_01e93944;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = FUN_00b83da0(uVar7);
  *param_3 = uVar2;
  uVar2 = FUN_00b83da0(uVar1);
  param_3[1] = uVar2;
  return;
}

