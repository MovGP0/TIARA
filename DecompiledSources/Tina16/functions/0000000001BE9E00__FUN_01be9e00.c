/* Ghidra address: 01be9e00 */
/* Ghidra symbol: FUN_01be9e00 */


void FUN_01be9e00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x368) + 0x5d0) + 0x5a0);
  if ((plVar1 != (longlong *)0x0) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x368) + 0x5d0) + 0x619) != '\0')) {
    (**(code **)(*plVar1 + 600))(plVar1);
  }
  return;
}

