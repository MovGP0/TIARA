/* Ghidra address: 01b231e0 */
/* Ghidra symbol: FUN_01b231e0 */


undefined4 FUN_01b231e0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38 [2];
  longlong local_30;
  undefined4 local_24;
  
  local_30 = thunk_FUN_0413ebab(L"Shell_TrayWnd",0);
  uVar2 = 3;
  if (local_30 != 0) {
    local_38[0] = 0x30;
    iVar1 = thunk_FUN_041c1b4e(5,local_38);
    if (iVar1 != 0) {
      uVar2 = local_24;
    }
  }
  return uVar2;
}

