/* Ghidra address: 00f30180 */
/* Ghidra symbol: FUN_00f30180 */


void FUN_00f30180(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    FUN_00453560(param_2,0x3a);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(*(longlong **)(param_1 + 0x18),param_2);
  }
  return;
}

