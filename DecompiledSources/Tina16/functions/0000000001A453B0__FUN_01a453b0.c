/* Ghidra address: 01a453b0 */
/* Ghidra symbol: FUN_01a453b0 */


void FUN_01a453b0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 *local_20 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x2b00);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,local_20);
    *local_20[0] = param_2;
  }
  return;
}

