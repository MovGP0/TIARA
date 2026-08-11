/* Ghidra address: 0177a520 */
/* Ghidra symbol: FUN_0177a520 */


void FUN_0177a520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
    FUN_01779910(param_1);
  }
  uVar1 = FUN_017799f0(param_1,param_2);
  uVar2 = FUN_01779940(param_1,param_2,uVar1);
  if (-1 < (int)uVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_020015f8);
    uVar2 = FUN_004134c0(uVar3);
  }
  FUN_01779ba0(param_1,uVar1,~uVar2,param_2,param_3);
  return;
}

