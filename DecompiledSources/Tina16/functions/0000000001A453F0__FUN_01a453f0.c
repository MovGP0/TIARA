/* Ghidra address: 01a453f0 */
/* Ghidra symbol: FUN_01a453f0 */


undefined1 FUN_01a453f0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 *local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x2b00);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_10);
    uVar2 = *local_10;
  }
  return uVar2;
}

