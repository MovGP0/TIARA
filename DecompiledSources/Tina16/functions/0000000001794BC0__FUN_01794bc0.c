/* Ghidra address: 01794bc0 */
/* Ghidra symbol: FUN_01794bc0 */


void FUN_01794bc0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xd20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0xd20) = 0;
  }
  FUN_01794d60(param_1,*(undefined8 *)(param_1 + 0x6e8));
  return;
}

