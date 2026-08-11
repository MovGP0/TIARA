/* Ghidra address: 00daeb30 */
/* Ghidra symbol: FUN_00daeb30 */


void FUN_00daeb30(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_00dae940(param_1,param_2);
  uVar3 = FUN_00dae940(param_1,param_3);
  lVar1 = FUN_01d347d0(param_1,param_2);
  *(undefined4 *)(lVar1 + 8) = uVar3;
  lVar1 = FUN_01d347d0(param_1,param_3);
  *(undefined4 *)(lVar1 + 8) = uVar2;
  return;
}

