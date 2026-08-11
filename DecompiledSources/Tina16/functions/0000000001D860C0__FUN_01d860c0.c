/* Ghidra address: 01d860c0 */
/* Ghidra symbol: FUN_01d860c0 */


void FUN_01d860c0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    (**(code **)(*plVar1 + 0x3d8))(plVar1,param_1);
    *(undefined1 *)((longlong)plVar1 + 0xafc) = 0;
    *(undefined1 *)((longlong)plVar1 + 0xafd) = 0;
  }
  return;
}

