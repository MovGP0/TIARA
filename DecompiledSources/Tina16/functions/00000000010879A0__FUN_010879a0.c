/* Ghidra address: 010879a0 */
/* Ghidra symbol: FUN_010879a0 */


void FUN_010879a0(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x4c35) = 0;
  if (*(char *)((longlong)param_1 + 0x4c34) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xb55) = 1;
  }
  do {
    FUN_010878b0(param_1);
    cVar1 = FUN_010874a0(param_1);
  } while (cVar1 == '\0');
  *(undefined1 *)((longlong)param_1 + 0x4c35) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c9c) = 1;
  FUN_01085cd0(param_1);
  (**(code **)(*param_1 + 0x348))(param_1,0);
  FUN_01087460(param_1);
  return;
}

