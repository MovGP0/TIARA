/* Ghidra address: 00658da0 */
/* Ghidra symbol: FUN_00658da0 */


void FUN_00658da0(longlong param_1,HWND param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    if (*(longlong *)(param_1 + 0x350) != 0) {
      FUN_008087b0(*(undefined8 *)PTR_DAT_02005950,&local_10);
      iVar1 = FUN_0043e6d0(*(undefined8 *)(param_1 + 0x350));
      if (iVar1 != 0) {
        thunk_FUN_03ad4659(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x90));
      }
    }
    if (*(char *)(param_1 + 0x348) == '\0') {
      ImmAssociateContextEx(param_2,(HIMC)0x0,0x10);
    }
  }
  FUN_00414480(&local_10);
  return;
}

