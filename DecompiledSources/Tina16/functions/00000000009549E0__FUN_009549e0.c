/* Ghidra address: 009549e0 */
/* Ghidra symbol: FUN_009549e0 */


void FUN_009549e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))
              (plVar1,*(undefined8 *)(param_2 + 0x78),*(undefined1 *)(param_2 + 0x80),
               *(undefined8 *)(param_2 + 0x88));
  }
  return;
}

