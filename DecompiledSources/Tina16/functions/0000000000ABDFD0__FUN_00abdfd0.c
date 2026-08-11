/* Ghidra address: 00abdfd0 */
/* Ghidra symbol: FUN_00abdfd0 */


void FUN_00abdfd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x80) + 0x1a8);
  (**(code **)(*plVar1 + 400))
            (plVar1,(int)plVar1[0x12],*(undefined4 *)((longlong)plVar1 + 0x94),
             *(undefined4 *)(param_2 + 0x54),*(undefined4 *)(param_2 + 0x50));
  return;
}

