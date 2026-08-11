/* Ghidra address: 01be2260 */
/* Ghidra symbol: FUN_01be2260 */


void FUN_01be2260(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar1 == '\0') {
      thunk_FUN_041af582(0,2);
      thunk_FUN_041af582(L"MenuCommand",0x13);
      (**(code **)(**(longlong **)(param_1[0xcb] + 0x70) + 0x30))
                (*(longlong **)(param_1[0xcb] + 0x70),0);
    }
  }
  return;
}

