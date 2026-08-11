/* Ghidra address: 01850b40 */
/* Ghidra symbol: FUN_01850b40 */


void FUN_01850b40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x10);
  *(undefined1 *)(param_2 + 0x6f) = *(undefined1 *)(lVar1 + 0x82);
  *(undefined1 *)(lVar1 + 0x82) = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x30);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x10) + 0x82) =
       *(undefined1 *)(param_2 + 0x6f);
  return;
}

