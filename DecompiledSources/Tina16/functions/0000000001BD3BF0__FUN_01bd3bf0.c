/* Ghidra address: 01bd3bf0 */
/* Ghidra symbol: FUN_01bd3bf0 */


void FUN_01bd3bf0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_20 [16];
  
  if (((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0) &&
     (*(char *)((longlong)param_1 + 0x365) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      thunk_FUN_03cc0d62(local_20);
      plVar2 = (longlong *)FUN_0064acf0(local_20,1);
      *(bool *)((longlong)param_1 + 0x363) = plVar2 != param_1;
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

