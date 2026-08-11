/* Ghidra address: 006606d0 */
/* Ghidra symbol: FUN_006606d0 */


void FUN_006606d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) != param_1) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  if (*(char *)(lVar1 + 0x20) == '\x01') {
    FUN_006607d0(param_1,1);
  }
  else if (*(char *)(lVar1 + 0x20) == '\x02') {
    FUN_006607d0(param_1,2);
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    FUN_004134c0(uVar2);
  }
  return;
}

