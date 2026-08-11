/* Ghidra address: 00baec20 */
/* Ghidra symbol: FUN_00baec20 */


undefined8 FUN_00baec20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = FUN_00badb60(&LAB_00ba1d60,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x30;
    }
    FUN_0041b840(param_1 + 0x28,lVar1);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x28));
  return param_2;
}

