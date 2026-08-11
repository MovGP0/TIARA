/* Ghidra address: 01bea1b0 */
/* Ghidra symbol: FUN_01bea1b0 */


ulonglong FUN_01bea1b0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x368);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = (ulonglong)*(uint *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x418))(plVar1);
  }
  return uVar2;
}

