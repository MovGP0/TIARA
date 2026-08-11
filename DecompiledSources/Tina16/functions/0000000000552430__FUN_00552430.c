/* Ghidra address: 00552430 */
/* Ghidra symbol: FUN_00552430 */


undefined8 FUN_00552430(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_005521f0(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_00552420(param_1);
    uVar3 = FUN_00542970(DAT_020116a8,*(undefined8 *)(lVar2 + 2));
  }
  return uVar3;
}

