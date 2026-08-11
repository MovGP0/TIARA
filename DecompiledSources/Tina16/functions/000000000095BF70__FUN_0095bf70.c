/* Ghidra address: 0095bf70 */
/* Ghidra symbol: FUN_0095bf70 */


void FUN_0095bf70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x6f) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x10);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x18);
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  return;
}

