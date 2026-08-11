/* Ghidra address: 01bea9a0 */
/* Ghidra symbol: FUN_01bea9a0 */


void FUN_01bea9a0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_01c06090(param_1);
  if (*(longlong *)(param_1 + 800) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 800) + 0x78) = 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x368);
  if (*(char *)((longlong)plVar1 + 0x591) == '\0') {
    (**(code **)(*plVar1 + 0x3d8))(plVar1,1);
  }
  return;
}

