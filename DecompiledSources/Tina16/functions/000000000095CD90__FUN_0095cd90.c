/* Ghidra address: 0095cd90 */
/* Ghidra symbol: FUN_0095cd90 */


void FUN_0095cd90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 200) + 0x118))(*(undefined8 *)(param_2 + 200));
  (**(code **)(*plVar1 + 800))(plVar1,param_2 + 0x98);
  return;
}

