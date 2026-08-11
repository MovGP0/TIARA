/* Ghidra address: 0064d530 */
/* Ghidra symbol: FUN_0064d530 */


ulonglong FUN_0064d530(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x2cc);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  return uVar2;
}

