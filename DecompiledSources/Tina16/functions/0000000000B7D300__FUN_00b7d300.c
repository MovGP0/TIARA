/* Ghidra address: 00b7d300 */
/* Ghidra symbol: FUN_00b7d300 */


void FUN_00b7d300(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar6 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(uVar6);
  }
  uVar1 = FUN_00b7cb80(*param_2);
  uVar2 = FUN_00b7cb80(param_2[1]);
  uVar3 = FUN_00b7cfb0(param_1,uVar1,9);
  uVar4 = FUN_00b7cfb0(param_1,uVar2,8);
  uVar7 = 7;
  do {
    if (uVar7 % 2 == 0) {
      uVar5 = FUN_00b7cdd0(param_1,uVar4,uVar7);
      uVar4 = FUN_00b7cfb0(param_1,uVar4,uVar7);
      uVar3 = FUN_00b7cfb0(param_1,uVar3 ^ uVar5,uVar7 + 1);
    }
    else {
      uVar5 = FUN_00b7cdd0(param_1,uVar3,uVar7);
      uVar4 = uVar4 ^ uVar5;
    }
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0xffffffff);
  uVar1 = FUN_00b7cb80(uVar4);
  *param_3 = uVar1;
  uVar1 = FUN_00b7cb80(uVar3);
  param_3[1] = uVar1;
  return;
}

