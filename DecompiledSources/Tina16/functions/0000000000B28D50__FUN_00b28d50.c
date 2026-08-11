/* Ghidra address: 00b28d50 */
/* Ghidra symbol: FUN_00b28d50 */


void FUN_00b28d50(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  
  uVar2 = FUN_00b28cf0(param_1);
  sVar1 = FUN_00b286f0();
  sVar3 = 0;
  do {
    FUN_00b29a30(param_1,uVar2,sVar3,sVar3,1);
    sVar3 = sVar3 + 1;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  return;
}

