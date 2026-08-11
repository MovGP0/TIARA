/* Ghidra address: 00705500 */
/* Ghidra symbol: FUN_00705500 */


void FUN_00705500(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xf0) + 0x588);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  *(undefined1 *)(*(longlong *)(param_2 + 0xf0) + 0x578) = 0;
  return;
}

