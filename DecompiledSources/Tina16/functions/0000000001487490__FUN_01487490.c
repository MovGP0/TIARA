/* Ghidra address: 01487490 */
/* Ghidra symbol: FUN_01487490 */


void FUN_01487490(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
    FUN_014868c0(param_1);
  }
  uVar1 = FUN_014869a0(param_1,param_2);
  uVar2 = FUN_014868f0(param_1,param_2,uVar1);
  if (-1 < (int)uVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_020015f8);
    uVar2 = FUN_004134c0(uVar3);
  }
  FUN_01486b30(param_1,uVar1,~uVar2,param_2,param_3);
  return;
}

