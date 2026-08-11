/* Ghidra address: 00b7d1c0 */
/* Ghidra symbol: FUN_00b7d1c0 */


void FUN_00b7d1c0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar6 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar6);
  }
  uVar1 = FUN_00b7cb80(*param_2);
  uVar2 = FUN_00b7cb80(param_2[1]);
  uVar7 = 0;
  do {
    if (uVar7 % 2 == 0) {
      uVar1 = FUN_00b7cee0(param_1,uVar1,uVar7);
      uVar2 = FUN_00b7cee0(param_1,uVar2,uVar7 + 1);
      uVar3 = FUN_00b7cdd0(param_1,uVar1,uVar7);
      uVar2 = uVar2 ^ uVar3;
    }
    else {
      uVar3 = FUN_00b7cdd0(param_1,uVar2,uVar7);
      uVar1 = uVar1 ^ uVar3;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 8);
  uVar4 = FUN_00b7cee0(param_1,uVar1,8);
  uVar5 = FUN_00b7cee0(param_1,uVar2,9);
  uVar5 = FUN_00b7cb80(uVar5);
  *param_3 = uVar5;
  uVar4 = FUN_00b7cb80(uVar4);
  param_3[1] = uVar4;
  return;
}

