/* Ghidra address: 0109dfb0 */
/* Ghidra symbol: FUN_0109dfb0 */


void FUN_0109dfb0(longlong *param_1,char param_2,uint param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if (cVar1 != '\0') {
    if (param_2 == '\0') {
      *(uint *)((longlong)param_1 + 0xa0c) = *(uint *)((longlong)param_1 + 0xa0c) & ~param_3;
    }
    else {
      *(uint *)((longlong)param_1 + 0xa0c) = *(uint *)((longlong)param_1 + 0xa0c) | param_3;
    }
    _Dbg_SetDebugLocals(param_1[0x138],*(undefined4 *)((longlong)param_1 + 0xa0c));
    _Dbg_SetFirstTime(param_1[0x138],1);
    FUN_0109ddd0(param_1);
  }
  return;
}

