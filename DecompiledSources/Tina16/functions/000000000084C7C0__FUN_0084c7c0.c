/* Ghidra address: 0084c7c0 */
/* Ghidra symbol: FUN_0084c7c0 */


void FUN_0084c7c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0084bd30(*(undefined8 *)(param_1 + 0x38),param_2);
  if (lVar1 != 0) {
    FUN_0084a280(lVar1);
  }
  FUN_0084bbf0(*(undefined8 *)(param_1 + 0x38),param_2);
  FUN_0084c790(param_1);
  return;
}

