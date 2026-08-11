/* Ghidra address: 0080c920 */
/* Ghidra symbol: FUN_0080c920 */


undefined8 FUN_0080c920(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
    if (cVar2 != '\0') {
      FUN_0080e820(param_1);
    }
  }
  return 0;
}

