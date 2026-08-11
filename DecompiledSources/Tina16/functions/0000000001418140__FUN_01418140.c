/* Ghidra address: 01418140 */
/* Ghidra symbol: FUN_01418140 */


void FUN_01418140(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x10))
            (*(longlong **)(param_1 + 0x740),*(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 0xd8))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x10))
            (*(longlong **)(param_1 + 0x748),*(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 0xd0))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x10))
            (*(longlong **)(param_1 + 0x750),*(undefined8 *)(*(longlong *)(param_1 + 0xfb0) + 200));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfb0) + 0xf8);
  (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x760));
  return;
}

