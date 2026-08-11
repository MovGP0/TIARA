/* Ghidra address: 0094d890 */
/* Ghidra symbol: FUN_0094d890 */


ulonglong FUN_0094d890(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_0094f240();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (-1 < (int)uVar2) {
      uVar2 = (ulonglong)((int)uVar2 + 1);
    }
  }
  return uVar2;
}

