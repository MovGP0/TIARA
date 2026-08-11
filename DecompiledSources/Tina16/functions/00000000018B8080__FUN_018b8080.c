/* Ghidra address: 018b8080 */
/* Ghidra symbol: FUN_018b8080 */


void FUN_018b8080(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x20) + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,0);
  }
  return;
}

