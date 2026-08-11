/* Ghidra address: 0084c730 */
/* Ghidra symbol: FUN_0084c730 */


void FUN_0084c730(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_0084bd30(*(undefined8 *)(param_1 + 0x38),param_2);
  if (plVar1 == (longlong *)0x0) {
    if (param_3 != 0) {
      uVar2 = FUN_0084a240(0,param_3);
      FUN_0084bf40(*(undefined8 *)(param_1 + 0x38),param_2,uVar2);
    }
  }
  else {
    *plVar1 = param_3;
  }
  FUN_0084c790(param_1);
  return;
}

