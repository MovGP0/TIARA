/* Ghidra address: 00790170 */
/* Ghidra symbol: FUN_00790170 */


void FUN_00790170(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
    FUN_0078f5a0(param_1);
  }
  uVar1 = FUN_0078f680(param_1,param_2);
  uVar2 = FUN_0078f5d0(param_1,param_2,uVar1);
  if (-1 < (int)uVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_020015f8);
    uVar2 = FUN_004134c0(uVar3);
  }
  FUN_0078f810(param_1,uVar1,~uVar2,param_2,param_3);
  return;
}

