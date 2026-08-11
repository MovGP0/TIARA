/* Ghidra address: 006987d0 */
/* Ghidra symbol: FUN_006987d0 */


void FUN_006987d0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_0064c470(param_1[2]);
  if (cVar1 != '\x01') {
    thunk_FUN_039ed528();
  }
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    (**(code **)(*param_1 + 0x58))(param_1);
    FUN_00698320(param_1);
  }
  return;
}

