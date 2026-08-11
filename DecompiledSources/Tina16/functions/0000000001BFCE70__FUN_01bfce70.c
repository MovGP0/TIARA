/* Ghidra address: 01bfce70 */
/* Ghidra symbol: FUN_01bfce70 */


void FUN_01bfce70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  lVar1 = FUN_01bfc680(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_01bfc680(param_1);
    (**(code **)(*plVar2 + 0x180))(plVar2);
  }
  return;
}

