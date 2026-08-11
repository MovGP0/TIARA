/* Ghidra address: 0084e390 */
/* Ghidra symbol: FUN_0084e390 */


undefined8 FUN_0084e390(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_0084bd30(*(undefined8 *)(param_1 + 0x600),param_3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  return uVar2;
}

