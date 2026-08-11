/* Ghidra address: 0084e320 */
/* Ghidra symbol: FUN_0084e320 */


undefined8 FUN_0084e320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0084bd30(*(undefined8 *)(param_1 + 0x600),param_4);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
  }
  return param_2;
}

