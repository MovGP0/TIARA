/* Ghidra address: 019ce1a0 */
/* Ghidra symbol: FUN_019ce1a0 */


bool FUN_019ce1a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_019cd9a0(param_1,&local_10,*(int *)(param_1 + 0x10) + -1,L"expected");
  if (local_10 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"TAIAutoTest.ExpectStreamResult: %s");
    FUN_004134c0(uVar2);
  }
  iVar1 = FUN_0043fc00(local_10);
  FUN_00414560(&local_18,2);
  return iVar1 == 0;
}

