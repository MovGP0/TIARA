/* Ghidra address: 013cfeb0 */
/* Ghidra symbol: FUN_013cfeb0 */


void FUN_013cfeb0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_007fd7d0(param_1);
  uVar1 = FUN_007ffaf0(param_1);
  iVar3 = FUN_00807790(uVar1);
  uVar1 = FUN_007ffaf0(param_1);
  iVar4 = FUN_008077f0(uVar1);
  uVar2 = FUN_00b905f0(uVar2,(iVar3 + iVar4) - *(int *)(param_1 + 0x98));
  uVar2 = FUN_00b905e0(0,uVar2);
  FUN_00806af0(param_1,uVar2);
  uVar2 = FUN_007fd800(param_1);
  uVar1 = FUN_007ffaf0(param_1);
  iVar3 = FUN_008077d0(uVar1);
  uVar1 = FUN_007ffaf0(param_1);
  iVar4 = FUN_008077b0(uVar1);
  uVar2 = FUN_00b905f0(uVar2,((iVar3 + iVar4) - *(int *)(param_1 + 0x9c)) + -0x1e);
  uVar2 = FUN_00b905e0(0,uVar2);
  FUN_00806b40(param_1,uVar2);
  return;
}

