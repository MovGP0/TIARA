/* Ghidra address: 00821e20 */
/* Ghidra symbol: FUN_00821e20 */


undefined8 FUN_00821e20(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_00821f80(param_1,param_2);
  if (cVar1 != '\0') {
    lVar2 = FUN_00821e60(param_1,param_2);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar3;
}

