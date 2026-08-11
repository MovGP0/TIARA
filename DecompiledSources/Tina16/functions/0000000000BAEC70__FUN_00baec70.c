/* Ghidra address: 00baec70 */
/* Ghidra symbol: FUN_00baec70 */


undefined8 FUN_00baec70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = FUN_00badb60(&DAT_00ba1a00,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x38;
    }
    FUN_0041b840(param_1 + 0x30,lVar1);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x30));
  return param_2;
}

