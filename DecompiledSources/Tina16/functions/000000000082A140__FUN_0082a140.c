/* Ghidra address: 0082a140 */
/* Ghidra symbol: FUN_0082a140 */


void FUN_0082a140(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_20 [16];
  
  if ((char)param_1[0x67] != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      thunk_FUN_03cc0d62(local_20);
      plVar2 = (longlong *)FUN_0064acf0(local_20,1);
      *(bool *)((longlong)param_1 + 0x339) = plVar2 != param_1;
      if (plVar2 != param_1) {
        FUN_0064fca0(param_1,0xb014,0,0);
      }
      else {
        FUN_0064fca0(param_1,0xb013,0,0);
      }
    }
  }
  return;
}

