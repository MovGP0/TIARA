/* Ghidra address: 005de8a0 */
/* Ghidra symbol: FUN_005de8a0 */


void FUN_005de8a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00416740(param_2);
  uVar2 = FUN_00416740(param_3);
  uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 8));
  thunk_FUN_03a9a12c(uVar1,uVar2,0,uVar3);
  return;
}

