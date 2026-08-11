/* Ghidra address: 0064f920 */
/* Ghidra symbol: FUN_0064f920 */


void FUN_0064f920(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x48) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x340);
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
  }
  return;
}

