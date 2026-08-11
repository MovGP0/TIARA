/* Ghidra address: 018c1740 */
/* Ghidra symbol: FUN_018c1740 */


void FUN_018c1740(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0xa8);
  (**(code **)(*plVar1 + 0xd0))
            (plVar1,*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x98));
  FUN_018b9080(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xa0));
  return;
}

