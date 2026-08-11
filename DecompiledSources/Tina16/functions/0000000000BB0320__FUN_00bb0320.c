/* Ghidra address: 00bb0320 */
/* Ghidra symbol: FUN_00bb0320 */


undefined8 FUN_00bb0320(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  
  lVar1 = FUN_00badb60(&DAT_00ba1a00,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x38;
  }
  FUN_0041b840(param_2,lVar1);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x50;
  }
  FUN_00bb0130(auStack_38,param_1);
  return param_2;
}

