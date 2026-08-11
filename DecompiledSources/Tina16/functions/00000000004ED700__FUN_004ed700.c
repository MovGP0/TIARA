/* Ghidra address: 004ed700 */
/* Ghidra symbol: FUN_004ed700 */


void FUN_004ed700(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
    FUN_004ecb40(param_1);
  }
  uVar1 = FUN_004ecc20(param_1,param_2);
  uVar2 = FUN_004ecb70(param_1,param_2,uVar1);
  if (-1 < (int)uVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_020015f8);
    uVar2 = FUN_004134c0(uVar3);
  }
  FUN_004ecdb0(param_1,uVar1,~uVar2,param_2,param_3);
  return;
}

