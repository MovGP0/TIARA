/* Ghidra address: 01d06f10 */
/* Ghidra symbol: FUN_01d06f10 */


undefined8 FUN_01d06f10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01d06e20();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c41090(lVar1,param_2,param_3,param_4);
  }
  return uVar2;
}

