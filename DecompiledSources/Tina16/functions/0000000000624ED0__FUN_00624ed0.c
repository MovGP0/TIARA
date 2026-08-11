/* Ghidra address: 00624ed0 */
/* Ghidra symbol: FUN_00624ed0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00624ed0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00427be0(L"ole32.dll");
  if (lVar1 != 0) {
    DAT_01df0b78 = FUN_00427c10(lVar1,L"CoCreateInstanceEx");
    DAT_01df0b80 = FUN_00427c10(lVar1,L"CoInitializeEx");
    DAT_01df0b88 = FUN_00427c10(lVar1,L"CoAddRefServerProcess");
    DAT_01df0b90 = FUN_00427c10(lVar1,L"CoReleaseServerProcess");
    DAT_01df0b98 = FUN_00427c10(lVar1,L"CoResumeClassObjects");
    _DAT_01df0ba0 = FUN_00427c10(lVar1,L"CoSuspendClassObjects");
  }
  return;
}

