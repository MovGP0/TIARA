/* Ghidra address: 00c55c20 */
/* Ghidra symbol: FUN_00c55c20 */


void FUN_00c55c20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  FUN_00655080(param_1);
  uVar1 = FUN_0065b870(param_1);
  uVar2 = FUN_0065b870(param_1);
  uVar3 = thunk_FUN_04118143(uVar2,0xfffffff0);
  thunk_FUN_03c9d277(uVar1,0xfffffff0,uVar3 | 0x4000000);
  return;
}

