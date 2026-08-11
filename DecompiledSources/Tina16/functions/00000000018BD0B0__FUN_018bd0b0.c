/* Ghidra address: 018bd0b0 */
/* Ghidra symbol: FUN_018bd0b0 */


void FUN_018bd0b0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  while( true ) {
    uVar1 = FUN_018b8410(param_1);
    iVar2 = FUN_01803a10(uVar1);
    if (iVar2 <= param_2) break;
    uVar1 = FUN_018b8410(param_1);
    uVar1 = FUN_018039f0(uVar1,param_2);
    FUN_00410f20(uVar1);
  }
  return;
}

