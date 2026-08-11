/* Ghidra address: 012bee60 */
/* Ghidra symbol: FUN_012bee60 */


void FUN_012bee60(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_012bedf0(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_004aeba0(param_1,lVar1);
    FUN_004ae870(param_1,uVar2);
    FUN_00410f20(lVar1);
    FUN_004aee80(param_1);
  }
  return;
}

