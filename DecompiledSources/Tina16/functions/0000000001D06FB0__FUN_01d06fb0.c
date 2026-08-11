/* Ghidra address: 01d06fb0 */
/* Ghidra symbol: FUN_01d06fb0 */


undefined8 FUN_01d06fb0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01d06e20();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c41170(lVar1,param_2,0);
  }
  return uVar2;
}

