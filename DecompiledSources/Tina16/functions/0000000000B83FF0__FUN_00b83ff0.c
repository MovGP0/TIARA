/* Ghidra address: 00b83ff0 */
/* Ghidra symbol: FUN_00b83ff0 */


void FUN_00b83ff0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar4);
  }
  uVar1 = FUN_00b83da0(*param_2);
  uVar2 = FUN_00b83da0(param_2[1]);
  uVar6 = (ulonglong)uVar2;
  uVar2 = 0;
  iVar7 = 0x20;
  do {
    uVar2 = uVar2 + DAT_01e93944;
    uVar5 = (uint)uVar6;
    uVar1 = uVar1 + uVar5 * 0x10 + (*(uint *)(param_1 + 0x98) ^ uVar5) +
                    (uVar2 ^ (uint)(uVar6 >> 5)) + *(int *)(param_1 + 0x9c);
    uVar6 = (ulonglong)
            (uVar5 + uVar1 * 0x10 + (*(uint *)(param_1 + 0xa0) ^ uVar1) + (uVar2 ^ uVar1 >> 5) +
                     *(int *)(param_1 + 0xa4));
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar3 = FUN_00b83da0(uVar1);
  *param_3 = uVar3;
  uVar3 = FUN_00b83da0(uVar6);
  param_3[1] = uVar3;
  return;
}

