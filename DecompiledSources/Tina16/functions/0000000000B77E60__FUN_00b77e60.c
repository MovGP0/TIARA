/* Ghidra address: 00b77e60 */
/* Ghidra symbol: FUN_00b77e60 */


void FUN_00b77e60(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar1);
  }
  uVar2 = FUN_00b77b50(*param_2);
  uVar3 = FUN_00b77b50(param_2[1]);
  for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x98); uVar6 = uVar6 + 2) {
    uVar4 = FUN_00b77d40(param_1,uVar3,uVar6);
    uVar2 = uVar2 ^ uVar4;
    uVar4 = FUN_00b77d40(param_1,uVar2,uVar6 + 1);
    uVar3 = uVar3 ^ uVar4;
  }
  uVar5 = FUN_00b77b50(uVar3);
  *param_3 = uVar5;
  uVar5 = FUN_00b77b50(uVar2);
  param_3[1] = uVar5;
  return;
}

