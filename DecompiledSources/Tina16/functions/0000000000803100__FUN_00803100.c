/* Ghidra address: 00803100 */
/* Ghidra symbol: FUN_00803100 */


void FUN_00803100(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  code *local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  FUN_00800030(param_1,param_1[0xa0]);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    FUN_00802fd0(auStack_68);
    cVar1 = FUN_008005a0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0044f0c0(10,0);
      if (cVar1 != '\0') {
        iVar2 = GetProcessDpiAwareness(0,&local_24);
        if ((iVar2 == 0) && (local_24 != 0)) {
          local_20 = FUN_00452dc0(L"user32.dll",0x8000);
          if (local_20 != 0) {
            local_30 = (code *)FUN_00427c10(local_20,L"EnableNonClientDpiScaling");
            if (local_30 != (code *)0x0) {
              (*local_30)(param_1[0x8d]);
            }
            thunk_FUN_041c8c2f(local_20);
          }
        }
      }
    }
  }
  return;
}

