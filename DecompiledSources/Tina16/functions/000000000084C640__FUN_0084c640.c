/* Ghidra address: 0084c640 */
/* Ghidra symbol: FUN_0084c640 */


undefined8 FUN_0084c640(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_0084bd30(*(undefined8 *)(param_1 + 0x38),param_3);
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 8));
  }
  return param_2;
}

